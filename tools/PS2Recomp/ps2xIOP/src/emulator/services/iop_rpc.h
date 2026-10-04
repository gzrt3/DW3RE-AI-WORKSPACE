#pragma once

#include "ps2x/iop/iop_types.h"

#include <cstddef>
#include <array>
#include <cstdint>
#include <unordered_map>

namespace ps2x::iop
{
    class IopHost;
}

namespace ps2x::iop::detail
{
    struct IopCpuState;
    class IopKernel;
    class IopMemory;

    class IopGuestExecutor
    {
    public:
        virtual ~IopGuestExecutor() = default;

        [[nodiscard]] virtual uint32_t executeGuestFunction(uint32_t address,
                                                            uint32_t a0,
                                                            uint32_t a1,
                                                            uint32_t a2,
                                                            uint32_t a3,
                                                            uint32_t gp) = 0;
        [[nodiscard]] virtual uint32_t executeGuestFunctionWithBudget(uint32_t address,
                                                                      uint32_t a0,
                                                                      uint32_t a1,
                                                                      uint32_t a2,
                                                                      uint32_t a3,
                                                                      uint32_t gp,
                                                                      uint32_t instructionBudget)
        {
            return executeGuestFunction(address, a0, a1, a2, a3, gp);
        }
    };

    class IopRpcBridge
    {
    public:
        IopRpcBridge(IopHost &host, IopMemory &memory, IopKernel &kernel) noexcept;

        void reset();
        [[nodiscard]] bool installCommandService();
        [[nodiscard]] uint32_t commandReceiverAddress() const noexcept { return m_commandReceiver; }
        [[nodiscard]] uint32_t commandEeDestination() const noexcept { return m_commandEeDestination; }
        [[nodiscard]] int commandEventFlag() const noexcept { return m_commandEventFlag; }
        [[nodiscard]] bool prepareRpcStorage();
        [[nodiscard]] uint32_t rpcDataAddress() const noexcept { return m_rpcStorage; }
        [[nodiscard]] uint32_t allocateRpcPacket();
        [[nodiscard]] bool releaseRpcPacket(uint32_t packet);
        [[nodiscard]] uint32_t nextRpcReplyPacket(int clientIndex = -1);
        [[nodiscard]] bool queueRpcCall(const void *packet, size_t packetSize);
        [[nodiscard]] bool installRpcHandlers();
        [[nodiscard]] bool advanceRpcInitialization();
        [[nodiscard]] bool rpcInitializationComplete() const noexcept { return m_rpcInitializationComplete; }
        [[nodiscard]] bool executeRpcRequest(uint32_t server,IopGuestExecutor &executor);
        [[nodiscard]] bool dispatchSifManImport(uint16_t ordinal, IopCpuState &cpu);
        [[nodiscard]] bool dispatchSifCmdImport(uint16_t ordinal, IopCpuState &cpu,IopGuestExecutor *executor=nullptr);
        [[nodiscard]] RpcResult handleRpc(const RpcRequest &request, IopGuestExecutor &executor);
        void onSifTransfer(const SifTransfer &transfer, IopGuestExecutor &executor);
        [[nodiscard]] bool receiveCommandPacket(uint32_t packetAddress, uint32_t availableBytes,
                                                 IopGuestExecutor &executor);
        void removeServersInRange(uint32_t base, uint32_t size);

        [[nodiscard]] bool hasServer(uint32_t sid) const noexcept;
        [[nodiscard]] size_t serverCount() const noexcept { return m_servers.size(); }

    private:
        struct RpcServer
        {
            uint32_t sid = 0;
            uint32_t serverData = 0;
            uint32_t function = 0;
            uint32_t gp = 0;
            uint32_t buffer = 0;
            uint32_t callback = 0;
            uint32_t callbackBuffer = 0;
            uint32_t queue = 0;
        };

        IopHost &m_host;
        IopMemory &m_memory;
        IopKernel &m_kernel;
        std::unordered_map<uint32_t, RpcServer> m_servers;
        uint32_t m_nextDmaId = 1u;
        bool m_sifInitialized = false;
        uint32_t m_rpcStorage = 0u;
        int m_rpcEventFlag = 0;
        uint32_t m_rpcActiveQueue = 0u;
        std::array<bool, 32> m_builtinRpcHandlers{};
        bool m_rpcInitializationSent=false,m_rpcInitializationComplete=false;
        struct PendingRpcCompletion {
            uint32_t packet=0u,source=0u,destination=0u,directTarget=0u;
            int32_t size=0;
            bool command=false;
        };
        std::unordered_map<uint32_t,PendingRpcCompletion> m_pendingRpcCompletions;
        // RpcLoop retains a dequeued request while its transport is pending.
        std::unordered_map<uint32_t,uint32_t> m_rpcLoopRequests;
        [[nodiscard]] bool receiveRpcPacket(uint32_t id,const void *packet,size_t size,IopGuestExecutor &executor);
        [[nodiscard]] bool sendRpcReply(uint32_t packet,uint32_t source=0u,uint32_t destination=0u,int32_t size=0);
        [[nodiscard]] uint32_t findRpcServer(uint32_t sid) const;
        [[nodiscard]] bool rpcListLink(uint32_t headWord, uint32_t nextOffset, uint32_t target,
                                       bool append, uint32_t &linkWord) const;
        std::array<uint32_t, 32> m_commandSoftRegisters{};
        uint32_t m_userCommandTable = 0u;
        uint32_t m_systemCommandTable = 0u;
        uint32_t m_userCommandCount = 0u;
        uint32_t m_systemCommandCount = 0u;
        std::unordered_map<uint32_t, uint32_t> m_commandHandlerGp;
        uint32_t m_commandStorage = 0u;
        uint32_t m_commandReceiver = 0u;
        uint32_t m_builtinCommandTable = 0u;
        uint32_t m_commandEeDestination = 0u;
        int m_commandEventFlag = 0;
        bool m_commandReceiverEnabled = false;
        std::array<bool, 3> m_builtinCommandHandlers{};
        uint32_t m_sif1Callback = 0u;
        uint32_t m_sif1CallbackArgument = 0u;
        uint32_t m_sif1CallbackGp = 0u;
    };
}
