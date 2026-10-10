// SPDX-License-Identifier: GPL-3.0-or-later
// All calls belong to one owner thread. GIF input must already be arbitrated.
#include "bridge.h"
#include <filesystem>
#include <stdexcept>
#include <limits>
#include "common/FPControl.h"
#include <array>
#include <objbase.h>
#include "pcsx2/LayeredSettingsInterface.h"

namespace {
alignas(64) std::array<u8, 8192> bridge_regs{};
std::thread::id bridge_owner;
thread_local std::array<char,512> bridge_error{};
struct output_not_ready {};
std::mutex bridge_mutex;
bool bridge_open = false;
bool bridge_poisoned = false;
bool bridge_com = false;
bool bridge_registers_dirty = false;
void release_settings() {
    auto lock = Host::GetSettingsLock();
    auto* layers = static_cast<LayeredSettingsInterface*>(Host::GetSettingsInterface());
    layers->SetLayer(LayeredSettingsInterface::LAYER_BASE, nullptr);
}

void require_owner(bool require_open = true) {
    if (bridge_owner != std::this_thread::get_id()) throw std::runtime_error("Wrong GS owner thread");
    if (require_open && (!bridge_open || bridge_poisoned)) throw std::runtime_error("GS closed or invalid; reset required");
    if (VMManager::HasValidVM()) throw std::runtime_error("A PCSX2 VM must not be running in the direct GS bridge");
}
template<class F> int guarded(F action) {
    try {
        std::lock_guard<std::mutex> lock(bridge_mutex);
        FPControlRegisterBackup fpu(FPControlRegister::GetDefault());
        action(); bridge_error[0]=0; return 0;
    }
    catch (const output_not_ready&) { std::snprintf(bridge_error.data(),bridge_error.size(),"GS output not ready"); return 1; }
    catch (const std::exception& error) { std::snprintf(bridge_error.data(),bridge_error.size(),"%s",error.what()); return -1; }
    catch (...) { std::snprintf(bridge_error.data(),bridge_error.size(),"GS operation failed"); return -1; }
}
}

int dw3_gs_open(const char* resources, const char* writable_data, int renderer) {
    std::fprintf(stderr,"[GSbridge] phase=enter_open\n"); std::fflush(stderr);
    return guarded([&] {
        if (bridge_open || bridge_com) throw std::runtime_error("GS already initialized");
        if (!resources || !writable_data || (renderer != 0 && renderer != 11 && renderer != 12))
            throw std::runtime_error("Invalid GS configuration");
        const auto source = std::filesystem::canonical(resources);
        const auto output = std::filesystem::canonical(writable_data);
        if (!std::filesystem::is_directory(source) || !std::filesystem::is_directory(output))
            throw std::runtime_error("GS directories required");
        bridge_owner = std::this_thread::get_id();
        const HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
        if (FAILED(hr)) throw std::runtime_error("COM MTA initialization failed");
        bridge_com = true;
        std::fprintf(stderr,"[GSbridge] phase=com_initialized\n"); std::fflush(stderr);
        try {
            EmuFolders::AppRoot = source.parent_path().string();
            EmuFolders::Resources = source.string();
            EmuFolders::DataRoot = output.string();
            EmuFolders::Settings = (output/"inis").string();
            EmuConfig = Pcsx2Config{};
            std::fprintf(stderr,"[GSbridge] phase=configuration\n"); std::fflush(stderr);
            if (!GSRunner::InitializeConfig()) throw std::runtime_error("GS font initialization failed");
            std::fprintf(stderr,"[GSbridge] phase=font_loaded\n"); std::fflush(stderr);
            EmuConfig.GS.Renderer = renderer == 0 ? GSRendererType::VK :
                (renderer == 11 ? GSRendererType::DX11 : GSRendererType::DX12);
            EmuConfig.GS.UpscaleMultiplier = 1;
            // Preserve GS blend arithmetic rather than PCSX2's Basic default.
            EmuConfig.GS.AccurateBlendingUnit = AccBlendLevel::Maximum;
            EmuConfig.GS.SkipDuplicateFrames = false;
            EmuConfig.GS.LoadTextureReplacements = false;
            EmuConfig.GS.DumpReplaceableTextures = false;
            EmuConfig.GS.OsdMessagesPos = OsdOverlayPos::None;
            EmuConfig.GS.OsdPerformancePos = OsdOverlayPos::None;
            EmuConfig.GS.HWDownloadMode = GSHardwareDownloadMode::Enabled;
            std::filesystem::create_directories(EmuFolders::Cache);
            EmuConfig.Speedhacks.vuThread = false;
            if (!GSRunner::CreatePlatformWindow()) throw std::runtime_error("GS window initialization failed");
            std::fprintf(stderr,"[GSbridge] phase=window_created\n"); std::fflush(stderr);
            bridge_regs.fill(0);
            bridge_registers_dirty=false;
            dw3_shutdown_requested.store(false);
            if (!GSopen(EmuConfig.GS, EmuConfig.GS.Renderer, bridge_regs.data(), GSVSyncMode::Disabled, false))
                throw std::runtime_error("Modern GS renderer initialization failed");
            if (!GSIsHardwareRenderer()) throw std::runtime_error("Hardware renderer required");
            std::fprintf(stderr,"[GSbridge] phase=hardware_renderer_open\n"); std::fflush(stderr);
            bridge_open = true;
            bridge_poisoned = false;
        } catch (...) {
            if (g_gs_device) GSclose();
            release_settings();
            GSRunner::DestroyPlatformWindow();
            CoUninitialize(); bridge_com = false;
            throw;
        }
    });
}
int dw3_gs_close() {
    return guarded([&] {
        require_owner(false);
        std::fprintf(stderr,"[GSbridge] phase=close_join\n"); std::fflush(stderr);
        if (bridge_open) { GSJoinSnapshotThreads(); GSclose(); bridge_open = false; }
        std::fprintf(stderr,"[GSbridge] phase=renderer_closed\n"); std::fflush(stderr);
        GSRunner::DestroyPlatformWindow();
        std::fprintf(stderr,"[GSbridge] phase=window_closed\n"); std::fflush(stderr);
        release_settings();
        std::fprintf(stderr,"[GSbridge] phase=settings_released\n"); std::fflush(stderr);
        ImGuiManager::SetFonts({}); bridge_font.clear();
        if (bridge_com) { CoUninitialize(); bridge_com = false; }
        bridge_poisoned = false;
        std::fprintf(stderr,"[GSbridge] phase=close_complete\n"); std::fflush(stderr);
    });
}
int dw3_gs_reset() {
    return guarded([&] {
        require_owner(false);
        if (!bridge_open) throw std::runtime_error("GS closed");
        GSreset(true); bridge_poisoned = false;
    });
}
int dw3_gs_registers(const void* registers, uint32_t bytes) {
    return guarded([&] {
        require_owner();
        if (!registers || bytes != bridge_regs.size()) throw std::runtime_error("GS register image must be 8192 bytes");
        std::memcpy(bridge_regs.data(), registers, bytes);
        bridge_registers_dirty = true;
    });
}
int dw3_gs_freeze(int action, void* data, uint32_t* bytes) {
    return guarded([&] {
        require_owner();
        if (!bytes || action < 0 || action > 2 || *bytes > 16*1024*1024)
            throw std::runtime_error("Invalid GS freeze request");
        if (action != 2 && (!data || *bytes == 0)) throw std::runtime_error("GS freeze storage required");
        std::vector<u8> staged;
        uint32_t exact_size = *bytes;
        if (action != 2) {
            freezeData required{};
            if (GSfreeze(FreezeAction::Size, &required) != 0 || required.size <= 0)
                throw std::runtime_error("GS freeze size query failed");
            if (*bytes < uint32_t(required.size) || (action == 0 && *bytes != uint32_t(required.size)))
                throw std::runtime_error("GS freeze storage size mismatch");
            exact_size = uint32_t(required.size);
            if (action == 0) {
                uint32_t version{}; std::memcpy(&version, data, 4);
                if (version != 9) throw std::runtime_error("Unsupported GS freeze version");
            } else staged.resize(exact_size);
        }
        freezeData fd{static_cast<int>(exact_size), action == 1 ? staged.data() : static_cast<u8*>(data)};
        const auto mode = action == 0 ? FreezeAction::Load : action == 1 ? FreezeAction::Save : FreezeAction::Size;
        if (GSfreeze(mode, &fd) != 0) {
            if (action == 0) bridge_poisoned = true;
            throw std::runtime_error("GS freeze rejected");
        }
        if (fd.size < 0) throw std::runtime_error("Invalid GS freeze size");
        if (action == 1) std::memcpy(data, staged.data(), exact_size);
        *bytes = static_cast<uint32_t>(fd.size);
    });
}
int dw3_gs_gif_ordered(const void* data, uint32_t bytes) {
    return guarded([&] {
        require_owner();
        if (!data || !bytes || bytes % 16 || bytes > 64*1024*1024) throw std::runtime_error("GIF qword input required");
        std::vector<GSVector4i> aligned(bytes/16);
        std::memcpy(aligned.data(), data, bytes);
        GSgifTransfer(reinterpret_cast<const u8*>(aligned.data()), bytes/16);
    });
}
int dw3_gs_vsync(uint32_t field) {
    return guarded([&] {
        require_owner();
        if (field > 1) throw std::runtime_error("Invalid GS field");
        if (dw3_shutdown_requested.load()) throw std::runtime_error("GS window close requested");
        GSvsync(field, bridge_registers_dirty);
        bridge_registers_dirty = false;
        GSRunner::PumpPlatformMessages(false);
    });
}
int dw3_gs_fifo(void* data, uint32_t bytes) {
    return guarded([&] {
        require_owner();
        if (!data || !bytes || bytes % 16 || bytes > 16*1024*1024) throw std::runtime_error("FIFO qword storage required");
        std::vector<GSVector4i> aligned(bytes/16 + 1);
        GSInitAndReadFIFO(reinterpret_cast<u8*>(aligned.data()), bytes/16);
        std::memcpy(data, aligned.data(), bytes);
    });
}
int dw3_gs_poll() {
    return guarded([&] {
        require_owner();GSRunner::PumpPlatformMessages(false);
        if(dw3_shutdown_requested.load())throw std::runtime_error("GS window close requested");
    });
}
int dw3_gs_snapshot(void* pixels, uint32_t capacity, uint32_t* width, uint32_t* height) {
    return guarded([&] {
        require_owner();
        if (!width || !height) throw std::runtime_error("Snapshot dimensions required");
        *width=0;*height=0;
        if (!g_gs_device->GetCurrent()) throw output_not_ready{};
        u32 w = 0, h = 0; std::vector<u32> result;
        if (!GSSaveSnapshotToMemory(0, 0, true, true, &w, &h, &result))
            throw std::runtime_error("GS snapshot failed");
        if (result.size() > std::numeric_limits<uint32_t>::max()/4 || result.size() != size_t(w)*h)
            throw std::runtime_error("GS snapshot shape invalid");
        *width = w; *height = h;
        if (!pixels || capacity < result.size()*4) throw std::runtime_error("Snapshot capacity insufficient");
        std::memcpy(pixels, result.data(), result.size()*4);
    });
}
const char* dw3_gs_error() { return bridge_error.data(); }
uint32_t dw3_gs_abi_version() { return 2; }
