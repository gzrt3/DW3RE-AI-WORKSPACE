#include "ps2x/iop/iop_subsystem.h"

#include "iop_service.h"
#include "iop_module_manager.h"
#include "emulator/iop_emulator.h"
#include "module_factories.h"
#include "ps2x/iop/ps2_path.h"

#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <optional>
#include <cstring>
#include <stdexcept>

namespace ps2x::iop
{
    class IopSubsystem::Impl
    {
    public:
        explicit Impl(IopHost &hostRef)
            : host(hostRef),
              emulator(hostRef)
        {
            coreServices.emplace_back(detail::createMcservService(host));
            coreServices.emplace_back(detail::createDbcmanService(host));
            coreServices.emplace_back(detail::createLibSdService(host));
            refreshServiceModuleKeys();
            rebuildRoutes();
        }

        bool serviceActive(const detail::IopService &service) const
        {
            return moduleManager.isLoaded(service.moduleAliases());
        }

        void refreshServiceModuleKeys()
        {
            std::vector<std::string> keys;
            for (const auto &service : coreServices)
            {
                for (std::string_view alias : service->moduleAliases())
                    keys.emplace_back(alias);
            }
            moduleManager.setServiceModuleKeys(std::move(keys));
        }

        void rebuildRoutes()
        {
            routes.clear();
            lastError.clear();
            for (const auto &service : coreServices)
            {
                if (!serviceActive(*service))
                    continue;
                for (const uint32_t sid : service->sids())
                {
                    if (!routes.emplace(sid, service.get()).second)
                    {
                        std::ostringstream out;
                        out << "duplicate IOP SID 0x" << std::hex << sid << " in core services";
                        lastError = out.str();
                        routes.clear();
                        return;
                    }
                }
            }
        }

        void recordLoadOutcome(std::string_view path, bool hle)
        {
            constexpr size_t maxOutcomes = 32u;
            if (loadOutcomes.size() >= maxOutcomes || !loggedLoadPaths.emplace(path).second)
                return;
            std::string message = hle ? "[IOP:HLE] fallback module='" : "[IOP:load-failed] module='";
            message.append(path);
            message += hle ? "' physical IRX unavailable; using registered HLE provider"
                           : "' no HLE provider accepted the module; physical IRX was not loaded";
            loadOutcomes.push_back(message);
            host.log(hle ? LogLevel::Info : LogLevel::Warning, message);
        }

        IopHost &host;
        detail::ServiceList coreServices;
        std::unordered_map<uint32_t, detail::IopService *> routes;
        std::vector<std::string> loadOutcomes;
        std::unordered_set<std::string> loggedLoadPaths;
        std::string lastError;
        detail::IopModuleManager moduleManager;
        detail::IopEmulator emulator;
        std::vector<std::string> startupModules;
        size_t startupModuleIndex = 0u;
        std::optional<NativeIopRebootProfile> rebootProfile;
        bool rebootStarting = false;
        bool rebootFailed = false;
        size_t rebootModuleIndex = 0u;
    };

    IopSubsystem::IopSubsystem(IopHost &host)
        : m_impl(std::make_unique<Impl>(host))
    {
    }

    IopSubsystem::~IopSubsystem() = default;
    IopSubsystem::IopSubsystem(IopSubsystem &&) noexcept = default;
    IopSubsystem &IopSubsystem::operator=(IopSubsystem &&) noexcept = default;

    void IopSubsystem::reset()
    {
        m_impl->moduleManager.reset();
        m_impl->loadOutcomes.clear();
        m_impl->loggedLoadPaths.clear();
        m_impl->startupModules.clear();
        m_impl->startupModuleIndex = 0u;
        m_impl->rebootStarting = false;
        m_impl->rebootFailed = false;
        m_impl->rebootModuleIndex = 0u;
        for (auto &service : m_impl->coreServices)
        {
            if (service)
            {
                service->reset();
            }
        }
        m_impl->emulator.reset();
        m_impl->refreshServiceModuleKeys();
        m_impl->rebuildRoutes();
    }

    bool IopSubsystem::configureRebootProfile(NativeIopRebootProfile profile)
    {
        if (m_impl->rebootStarting || profile.command.size() >= 80u ||
            profile.command.find('\0') != std::string::npos ||
            profile.modules.empty() || profile.modules.size() > 128u)
            return false;
        std::unordered_set<std::string> paths;
        for (const auto &module : profile.modules)
        {
            const auto path = parsePs2Path(module.path);
            if (!path || !paths.emplace(module.path).second) return false;
            if (module.image.empty())
            {
                // Only named ROM HLE services can be requested explicitly.
                if (path.device != Ps2PathDevice::Rom0 || !m_impl->moduleManager.recognizes(module.path)) return false;
            }
            else
            {
                constexpr uint8_t magic[]{0x7f,'E','L','F',1,1,1};
                if (module.image.size() < 52u || module.image.size() > 2u*1024u*1024u ||
                    std::memcmp(module.image.data(),magic,sizeof(magic)) != 0 ||
                    module.image[18] != 8u || module.image[19] != 0u)
                    return false;
            }
        }
        m_impl->rebootProfile = std::move(profile);
        return true;
    }

    ModuleLoadResult IopSubsystem::loadModule(std::string_view path, const void *arguments, uint32_t argumentSize)
    {
        const ParsedPs2Path parsed = parsePs2Path(path);
        if (!parsed)
            return {true, -1, -1};

        if (parsed.device != Ps2PathDevice::Rom0)
        {
            ModuleLoadResult physical = m_impl->emulator.loadModule(path, arguments, argumentSize);
            if (physical.moduleId > 0)
            {
                m_impl->moduleManager.observePhysicalLoad(physical.moduleId, path);
                m_impl->rebuildRoutes();
                return physical;
            }
        }

        // A named ROM SIFCMD module must actually install its receiver before
        // the module manager reports it loaded. No CMDINIT is seeded here.
        if (parsed.device == Ps2PathDevice::Rom0 && ps2PathLeafKey(path) == "sifcmd" &&
            !m_impl->emulator.installCommandService())
            return {true, -1, -1};
        ModuleLoadResult hle = m_impl->moduleManager.loadHle(path);
        if (hle.moduleId > 0)
        {
            m_impl->rebuildRoutes();
            if (parsed.device != Ps2PathDevice::Rom0)
                m_impl->recordLoadOutcome(path, true);
        }
        else
        {
            m_impl->recordLoadOutcome(path, false);
        }
        return hle;
    }

    ModuleLoadResult IopSubsystem::loadModuleBuffer(uint32_t guestAddress, const void *arguments, uint32_t argumentSize)
    {
        return m_impl->emulator.loadModuleBuffer(guestAddress, arguments, argumentSize);
    }

    bool IopSubsystem::stopModule(int32_t moduleId, int32_t *result)
    {
        if (m_impl->moduleManager.stopHle(moduleId, result))
        {
            m_impl->rebuildRoutes();
            return true;
        }
        if (!m_impl->emulator.stopModule(moduleId, result))
            return false;
        m_impl->moduleManager.observePhysicalStop(moduleId);
        m_impl->rebuildRoutes();
        return true;
    }

    bool IopSubsystem::queueModuleAfterRpcInit(std::string_view path)
    {
        const auto parsed = parsePs2Path(path);
        if (!parsed || parsed.device == Ps2PathDevice::Rom0 ||
            m_impl->startupModules.size() >= 32u)
            return false;
        for (const auto &queued : m_impl->startupModules)
            if (queued == path)
                return false;
        m_impl->startupModules.emplace_back(path);
        return true;
    }

    void IopSubsystem::runEeCycles(uint64_t eeCycles) noexcept
    {
        if (m_impl->rebootFailed) return;
        m_impl->emulator.runEeCycles(eeCycles);
        if (eeCycles == 0u) return;
        try
        {
            if (const auto request = m_impl->emulator.takeRebootRequest())
            {
                if (!m_impl->rebootProfile || request->command != m_impl->rebootProfile->command ||
                    request->flags != m_impl->rebootProfile->flags || m_impl->rebootStarting)
                {
                    m_impl->rebootFailed = true;
                    m_impl->host.log(LogLevel::Error,"[IOP:reboot] request has no matching native startup profile");
                    return;
                }
                // The emulator has returned: no active CPU, guest callback or
                // thread pointer survives reset. EE RAM is owned by the host.
                reset();
                m_impl->rebootStarting = true;
                if (!m_impl->emulator.beginBootCallbacks(static_cast<uint32_t>(m_impl->rebootProfile->modules.size())))
                    throw std::runtime_error("IOP boot callback collection unavailable");
                m_impl->host.log(LogLevel::Info,"[IOP:reboot] consumed owned request; old IOP services and memory reset");
            }
            if (m_impl->rebootFailed) return;
            if (m_impl->rebootStarting)
            {
                const auto &modules = m_impl->rebootProfile->modules;
                if (m_impl->rebootModuleIndex < modules.size())
                {
                    const auto &module = modules[m_impl->rebootModuleIndex];
                    ModuleLoadResult result;
                    if (!module.image.empty())
                    {
                        result = m_impl->emulator.loadOwnedModule(module.path,module.image);
                        if (result.moduleId > 0 && result.startResult >= 0 && (result.startResult & 3) != 1)
                            m_impl->moduleManager.observePhysicalLoad(result.moduleId,module.path);
                        else if (result.moduleId > 0 && result.startResult == 1)
                            (void)m_impl->emulator.stopModule(result.moduleId,nullptr);
                    }
                    else
                    {
                        if (ps2PathLeafKey(module.path) == "ioman") m_impl->emulator.installConsoleService();
                        if (ps2PathLeafKey(module.path) == "sifcmd" && !m_impl->emulator.installCommandService())
                            throw std::runtime_error("IOP SIFCMD receiver installation failed");
                        result = m_impl->moduleManager.loadHle(module.path);
                    }
                    if (result.moduleId <= 0 || result.startResult < 0 || result.startResult > 2)
                        throw std::runtime_error("IOP selected boot module failed: " + module.path);
                    ++m_impl->rebootModuleIndex;
                    m_impl->rebuildRoutes();
                    m_impl->host.log(LogLevel::Info,"[IOP:reboot] started selected module '" + module.path + "'");
                    return; // Preserve explicit module order across scheduling slices.
                }
                if (!m_impl->emulator.finishBootCallbacks())
                    throw std::runtime_error("IOP boot callback completion failed");
                m_impl->rebootStarting = false;
                m_impl->host.log(LogLevel::Info,"[IOP:reboot] selected startup modules and original boot callbacks completed");
                return;
            }
        }
        catch (const std::exception &error)
        {
            m_impl->rebootFailed = true;
            m_impl->host.log(LogLevel::Error,error.what());
            return;
        }
        catch (...)
        {
            m_impl->rebootFailed = true;
            m_impl->host.log(LogLevel::Error,"[IOP:reboot] startup failed; no readiness fabricated");
            return;
        }
        if (eeCycles == 0u || !m_impl->emulator.rpcInitializationComplete() ||
            m_impl->startupModuleIndex >= m_impl->startupModules.size())
            return;
        // Consume before starting so a failed or throwing image is not retried
        // every scheduling slice. Do not substitute a named HLE module.
        const auto index = m_impl->startupModuleIndex++;
        try
        {
            const auto path = m_impl->startupModules[index];
            const auto result = m_impl->emulator.loadModule(path, nullptr, 0u);
            if (result.moduleId > 0)
            {
                m_impl->moduleManager.observePhysicalLoad(result.moduleId, path);
                m_impl->rebuildRoutes();
            }
            std::ostringstream message;
            message << "[IOP:startup] module='" << path << "' id="
                    << result.moduleId << " start=" << result.startResult;
            m_impl->host.log(result.moduleId > 0 ? LogLevel::Info : LogLevel::Error, message.str());
        }
        catch (...)
        {
            m_impl->host.log(LogLevel::Error, "[IOP:startup] physical module start threw; no automatic retry");
        }
    }

    RpcAbi IopSubsystem::selectRpcAbi(const RpcAbiRequest &request) const
    {
        for (const auto &service : m_impl->coreServices)
        {
            if (service && m_impl->serviceActive(*service))
            {
                const RpcAbi selected = service->selectRpcAbi(request);
                if (selected != RpcAbi::RuntimeDefault)
                {
                    return selected;
                }
            }
        }
        return RpcAbi::RuntimeDefault;
    }

    bool IopSubsystem::canBindRpc(uint32_t sid) const noexcept
    {
        if (m_impl->routes.find(sid) != m_impl->routes.end())
        {
            return true;
        }
        return m_impl->emulator.hasRpcServer(sid);
    }

    RpcResult IopSubsystem::handleRpc(const RpcRequest &request)
    {
        const auto route = m_impl->routes.find(request.sid);
        detail::IopService *hle = route != m_impl->routes.end() ? route->second : nullptr;

        RpcResult emulated = m_impl->emulator.handleRpc(request);
        if (emulated.handled || !hle)
        {
            return emulated;
        }
        return hle->handleRpc(request);
    }

    void IopSubsystem::onSifTransfer(const SifTransfer &transfer)
    {
        for (auto &service : m_impl->coreServices)
        {
            if (service && m_impl->serviceActive(*service))
            {
                service->onSifTransfer(transfer);
            }
        }
        m_impl->emulator.onSifTransfer(transfer);
    }

    uint32_t IopSubsystem::allocateMemory(uint32_t size, uint32_t alignment)
    {
        return m_impl->emulator.allocateMemory(size, alignment);
    }

    bool IopSubsystem::freeMemory(uint32_t address)
    {
        return m_impl->emulator.freeMemory(address);
    }

    bool IopSubsystem::readMemory(uint32_t address, void *destination, size_t size) const
    {
        return m_impl->emulator.readMemory(address, destination, size);
    }

    bool IopSubsystem::writeMemory(uint32_t address, const void *source, size_t size)
    {
        return m_impl->emulator.writeMemory(address, source, size);
    }

    bool IopSubsystem::zeroMemory(uint32_t address, size_t size)
    {
        return m_impl->emulator.zeroMemory(address, size);
    }

    bool IopSubsystem::isMemoryRange(uint32_t address, size_t size) const
    {
        return m_impl->emulator.isMemoryRange(address, size);
    }

    DebugSnapshot IopSubsystem::debugSnapshot() const
    {
        DebugSnapshot snapshot;
        snapshot.emulatorCycles = m_impl->emulator.cycles();
        snapshot.emulatorInstructions = m_impl->emulator.instructions();
        snapshot.emulatorLoadedModules = m_impl->emulator.loadedModuleCount();
        snapshot.emulatorThreads = m_impl->emulator.threadCount();
        snapshot.emulatorRpcServers = m_impl->emulator.rpcServerCount();
        snapshot.diagnostics = m_impl->loadOutcomes;
        if (!m_impl->lastError.empty())
        {
            snapshot.diagnostics.push_back(m_impl->lastError);
        }

        for (const auto &service : m_impl->coreServices)
        {
            DebugService row;
            row.name = service->name();
            row.sids.assign(service->sids().begin(), service->sids().end());
            row.active = m_impl->serviceActive(*service);
            service->appendDebugMetrics(row.metrics);
            snapshot.services.push_back(std::move(row));
        }
        return snapshot;
    }
}
