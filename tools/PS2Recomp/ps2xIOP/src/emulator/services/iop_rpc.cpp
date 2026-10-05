#include "iop_rpc.h"

#include "../core/iop_cpu.h"
#include "../core/iop_kernel.h"
#include "../core/iop_memory.h"
#include "ps2x/iop/iop_host.h"

#include <algorithm>
#include <array>
#include <cstring>
#include <limits>
#include <iostream>
#include <vector>

namespace ps2x::iop::detail
{
    IopRpcBridge::IopRpcBridge(IopHost &host, IopMemory &memory, IopKernel &kernel) noexcept
        : m_host(host), m_memory(memory), m_kernel(kernel)
    {
    }

    void IopRpcBridge::reset(bool discardExecution)
    {
        if (!discardExecution && !m_pendingRpcCompletions.empty())
            throw std::logic_error("Cannot reset RPC while a request owns execution or completion");
        m_servers.clear();
        for(const auto &[server,pending]:m_pendingRpcCompletions) {
            (void)server;(void)m_memory.freeAllocation(pending.packet);
        }
        m_pendingRpcCompletions.clear();
        m_rpcLoopRequests.clear();
        m_nextDmaId = 1u;
        m_sifInitialized = false;
        if (m_rpcStorage != 0u) (void)m_memory.freeAllocation(m_rpcStorage);
        if (m_rpcEventFlag > 0) {
            IopCpuState event{};event.gpr[4]=static_cast<uint32_t>(m_rpcEventFlag);
            (void)m_kernel.dispatchEventImport(5u,event);
        }
        m_rpcStorage=0u;m_rpcEventFlag=0;m_rpcActiveQueue=0u;
        m_builtinRpcHandlers.fill(false);
        m_rpcInitializationSent=false;m_rpcInitializationComplete=false;
        m_commandSoftRegisters.fill(0u);
        m_userCommandTable = m_systemCommandTable = 0u;
        m_userCommandCount = m_systemCommandCount = 0u;
        m_commandHandlerGp.clear();
        if (m_commandStorage != 0u)
            (void)m_memory.freeAllocation(m_commandStorage);
        m_commandStorage = m_commandReceiver = m_builtinCommandTable = m_commandEeDestination = 0u;
        m_commandEventFlag = 0;
        m_commandReceiverEnabled = false;
        m_builtinCommandHandlers.fill(false);
        m_sif1Callback = m_sif1CallbackArgument = m_sif1CallbackGp = 0u;
    }

    bool IopRpcBridge::prepareRpcStorage()
    {
        if (m_rpcStorage != 0u) return true;
        if (!m_commandReceiverEnabled || m_commandEventFlag == 0) return false;
        IopCpuState wait{};wait.gpr[4]=static_cast<uint32_t>(m_commandEventFlag);wait.gpr[5]=0x100u;
        if (!m_kernel.dispatchEventImport(11u,wait) || wait.gpr[2]!=0u) return false;
        // Original IOP RPC data descriptor (aligned16) followed by the three
        // distinct tables of32 packets, each64 bytes. No EE pointer aliases.
        constexpr uint32_t bytes=64u+3u*32u*64u;
        const uint32_t storage=m_memory.allocate(bytes,16u);
        if (storage==0u) return false;
        if (!m_memory.zeroRam(storage,bytes)) { (void)m_memory.freeAllocation(storage);return false; }
        const int event=m_kernel.createInternalEventFlag(2u,0u,0u); // EA_MULTI
        if (event<=0) { (void)m_memory.freeAllocation(storage);return false; }
        m_memory.write32(storage,1u);
        m_memory.write32(storage+4u,storage+64u);m_memory.write32(storage+8u,32u);
        m_memory.write32(storage+20u,storage+64u+2048u);m_memory.write32(storage+24u,32u);
        m_memory.write32(storage+28u,storage+64u+4096u);m_memory.write32(storage+32u,32u);
        m_memory.write32(storage+44u,static_cast<uint32_t>(event));
        m_memory.write32(storage+40u,m_rpcActiveQueue);
        m_rpcStorage=storage;m_rpcEventFlag=event;
        return true;
    }

    uint32_t IopRpcBridge::allocateRpcPacket()
    {
        if (m_rpcStorage==0u) return 0u;
        const uint32_t table=m_rpcStorage+64u;
        for(uint32_t index=0u;index<32u;++index) {
            const uint32_t packet=table+index*64u;
            if ((m_memory.read32(packet+16u)&2u)!=0u) continue;
            m_memory.write32(packet+16u,(index<<16u)|6u);
            const uint32_t pid=m_memory.read32(m_rpcStorage)+1u;
            m_memory.write32(packet+24u,pid);
            m_memory.write32(m_rpcStorage,pid+(pid==1u?1u:0u));
            m_memory.write32(packet+20u,packet);
            return packet;
        }
        return 0u;
    }

    bool IopRpcBridge::releaseRpcPacket(uint32_t packet)
    {
        if(m_rpcStorage==0u || packet<m_rpcStorage+64u ||
           packet>=m_rpcStorage+64u+2048u || (packet-m_rpcStorage-64u)%64u!=0u) return false;
        m_memory.write32(packet+24u,0u);
        m_memory.write32(packet+16u,m_memory.read32(packet+16u)&~2u);
        return true;
    }

    uint32_t IopRpcBridge::nextRpcReplyPacket(int clientIndex)
    {
        if(m_rpcStorage==0u) return 0u;
        if(clientIndex>=0 && clientIndex<32)
            return m_rpcStorage+64u+4096u+static_cast<uint32_t>(clientIndex)*64u;
        const uint32_t index=m_memory.read32(m_rpcStorage+36u)%32u;
        m_memory.write32(m_rpcStorage+36u,index+1u);
        return m_rpcStorage+64u+2048u+index*64u;
    }

    bool IopRpcBridge::rpcListLink(uint32_t headWord,uint32_t nextOffset,uint32_t target,
                                   bool append,uint32_t &linkWord) const
    {
        // Native HLE validates linked guest structures before modifying them.
        // A malformed cycle must not hang the host or partially append nodes.
        uint32_t link=headWord;
        for(uint32_t visited=0u;visited<IopMemory::RamSize/4u;++visited) {
            if(!m_memory.ownsRamRange(link,4u)) return false;
            const uint32_t current=m_memory.read32(link);
            if((append && current==0u) || (!append && current==target)) {linkWord=link;return true;}
            if(current==0u || !m_memory.ownsRamRange(current,nextOffset+4u)) return false;
            if(append && current==target) return false;
            link=current+nextOffset;
        }
        return false;
    }

    bool IopRpcBridge::queueRpcCall(const void *bytes,size_t packetSize)
    {
        if(!bytes || packetSize<56u) return false;
        std::array<uint32_t,14> packet{};std::memcpy(packet.data(),bytes,sizeof(packet));
        const uint32_t sd=packet[13];
        // One descriptor cannot own a new RPC while its prior call/transport
        // is unfinished. Reject before changing guest queue links or metadata.
        if(m_pendingRpcCompletions.contains(sd))return false;
        for(const auto &[ownerQueue,activeServer]:m_rpcLoopRequests) {
            (void)ownerQueue;if(activeServer==sd)return false;
        }
        if(!m_memory.ownsRamRange(sd,68u)) return false;
        const uint32_t queue=m_memory.read32(sd+64u);
        if(!m_memory.ownsRamRange(queue,24u)) return false;
        const uint32_t start=m_memory.read32(queue+12u),end=m_memory.read32(queue+16u);
        uint32_t ignored=0u;
        if(!rpcListLink(queue+8u,56u,sd,false,ignored)) return false;
        uint32_t destination=queue+12u;
        if(start!=0u) {
            if(!m_memory.ownsRamRange(end,68u) || !rpcListLink(queue+12u,60u,sd,true,destination) || destination!=end+60u)
                return false;
        }
        m_memory.write32(destination,sd);m_memory.write32(queue+16u,sd);
        m_memory.write32(sd+32u,packet[5]);m_memory.write32(sd+28u,packet[7]);
        m_memory.write32(sd+36u,packet[8]);m_memory.write32(sd+12u,packet[9]);
        m_memory.write32(sd+40u,packet[10]);m_memory.write32(sd+44u,packet[11]);
        m_memory.write32(sd+48u,packet[12]);m_memory.write32(sd+52u,packet[4]);
        const int32_t thread=static_cast<int32_t>(m_memory.read32(queue));
        if(thread>=0 && m_memory.read32(queue+4u)==0u) {
            IopCpuState wake{};wake.gpr[4]=static_cast<uint32_t>(thread);
            (void)m_kernel.dispatchThreadImport(26u,wake,0u); // iWakeupThread
        }
        return true;
    }

    bool IopRpcBridge::installRpcHandlers()
    {
        if(m_rpcStorage==0u || !m_commandReceiverEnabled || m_systemCommandTable!=m_builtinCommandTable ||
           m_systemCommandCount<=12u) return false;
        for(const uint32_t id : {8u,9u,10u,12u})m_builtinRpcHandlers[id]=true;
        return true;
    }

    bool IopRpcBridge::advanceRpcInitialization()
    {
        if(m_rpcInitializationComplete)return true;
        if(!m_commandReceiverEnabled || !prepareRpcStorage())return false;
        if(!m_rpcInitializationSent) {
            if(!installRpcHandlers() || m_commandEeDestination==0u)return false;
            // SDK prepares SET_SREG in the first owned outgoing packet after
            // InitCmd event100 and table/handler/event initialization.
            const uint32_t packet=m_rpcStorage+64u;
            m_memory.write32(packet,24u);m_memory.write32(packet+4u,0u);
            m_memory.write32(packet+8u,0x80000001u);m_memory.write32(packet+16u,0u);
            m_memory.write32(packet+20u,1u);
            if(!m_host.writeGuest(m_commandEeDestination,
                m_memory.ram().data()+IopMemory::physicalAddress(packet),24u))return false;
            (void)m_host.sendSifCommand(0x80000001u,
                m_memory.ram().data()+IopMemory::physicalAddress(packet),24u);
            m_rpcInitializationSent=true;
        }
        IopCpuState wait{};wait.gpr[4]=static_cast<uint32_t>(m_commandEventFlag);wait.gpr[5]=0x800u;
        if(!m_kernel.dispatchEventImport(11u,wait) || wait.gpr[2]!=0u)return false;
        m_rpcInitializationComplete=true;return true;
    }

    uint32_t IopRpcBridge::findRpcServer(uint32_t sid) const
    {
        uint32_t queue=m_rpcActiveQueue;
        for(uint32_t n=0u;queue!=0u && n<IopMemory::RamSize/24u;++n) {
            if(!m_memory.ownsRamRange(queue,24u))return 0u;
            uint32_t server=m_memory.read32(queue+8u);
            for(uint32_t j=0u;server!=0u && j<IopMemory::RamSize/68u;++j) {
                if(!m_memory.ownsRamRange(server,68u))return 0u;
                if(m_memory.read32(server)==sid)return server;
                server=m_memory.read32(server+56u);
            }
            queue=m_memory.read32(queue+20u);
        }
        return 0u;
    }

    bool IopRpcBridge::sendRpcReply(uint32_t packet,uint32_t source,uint32_t destination,int32_t size)
    {
        const uint32_t payloadSize=size>0?static_cast<uint32_t>(size):0u;
        if(!m_memory.ownsRamRange(packet,64u) || m_commandEeDestination==0u ||
           (payloadSize!=0u && (!m_memory.ownsRamRange(source,payloadSize) || payloadSize>0xFFFFFFu))) return false;
        m_memory.write32(packet,64u|(payloadSize<<8u));
        m_memory.write32(packet+4u,payloadSize!=0u?destination:0u);
        m_memory.write32(packet+8u,0x80000008u);
        if(payloadSize!=0u && !m_host.writeGuest(destination,m_memory.ram().data()+IopMemory::physicalAddress(source),payloadSize))return false;
        if(!m_host.writeGuest(m_commandEeDestination,m_memory.ram().data()+IopMemory::physicalAddress(packet),64u))return false;
        (void)m_host.sendSifCommand(0x80000008u,m_memory.ram().data()+IopMemory::physicalAddress(packet),64u);
        if(++m_nextDmaId==0u || m_nextDmaId>static_cast<uint32_t>(std::numeric_limits<int32_t>::max()))m_nextDmaId=1u;
        return true;
    }

    bool IopRpcBridge::receiveRpcPacket(uint32_t id,const void *bytes,size_t size,IopGuestExecutor &executor)
    {
        if(m_rpcStorage==0u || !bytes || size<64u)return false;
        std::array<uint32_t,16> packet{};std::memcpy(packet.data(),bytes,sizeof(packet));
        if(id==10u)return queueRpcCall(bytes,size);
        if(id==8u) {
            const uint32_t client=packet[7];
            if(!m_memory.ownsRamRange(client,40u))return false;
            const uint32_t original=m_memory.read32(client);
            if(original<m_rpcStorage+64u || original>=m_rpcStorage+2112u || (original-m_rpcStorage-64u)%64u!=0u)return false;
            const int32_t semaphore=static_cast<int32_t>(m_memory.read32(client+8u));
            if(semaphore>=32)return false;
            if(packet[8]==0x8000000au) {
                const uint32_t callback=m_memory.read32(client+28u);
                if(callback==0u)return false;
                (void)executor.executeGuestFunctionWithBudget(callback,m_memory.read32(client+32u),0u,0u,0u,0u,100000u);
            } else if(packet[8]==0x80000009u) {
                m_memory.write32(client+36u,packet[9]);m_memory.write32(client+20u,packet[10]);
            }
            if(semaphore>=0 && !m_kernel.setInternalEventFlag(m_rpcEventFlag,1u<<static_cast<uint32_t>(semaphore)))return false;
            if(!releaseRpcPacket(original))return false;
            m_memory.write32(client,0u);return true;
        }
        const uint32_t reply=nextRpcReplyPacket(id==12u && (packet[4]&4u)!=0u?static_cast<int>((packet[4]>>16u)&0xFFFFu):-1);
        if(reply==0u)return false;
        m_memory.write32(reply+20u,packet[5]);m_memory.write32(reply+32u,0x80000000u|id);
        m_memory.write32(reply+28u,packet[7]);
        if(id==9u) {
            const uint32_t server=findRpcServer(packet[8]);
            static unsigned bindObservations=0u;
            if(bindObservations++<8u)
                std::cerr << "[IOP:BIND:receive] sid=0x" << std::hex << packet[8]
                          << " client=0x" << packet[7] << " packet=0x" << packet[5]
                          << " server=0x" << server << " reply=0x" << reply << std::dec << std::endl;
            m_memory.write32(reply+36u,server);
            m_memory.write32(reply+40u,server!=0u?m_memory.read32(server+8u):0u);
            const bool sent=sendRpcReply(reply);
            if(bindObservations<=8u)std::cerr << "[IOP:BIND:reply] sent=" << sent << std::endl;
            return sent;
        }
        if(id==12u) {
            m_memory.write32(reply+36u,packet[8]);m_memory.write32(reply+40u,packet[9]);m_memory.write32(reply+44u,packet[10]);
            return sendRpcReply(reply,packet[8],packet[9],static_cast<int32_t>(packet[10]));
        }
        return false;
    }

    IopRpcBridge::Execution IopRpcBridge::executeRpcRequest(uint32_t server,IopGuestExecutor &executor,
        const IopCpuState *caller)
    {
        auto pending=m_pendingRpcCompletions.find(server);
        if(pending==m_pendingRpcCompletions.end()) {
            if(m_rpcStorage==0u || !m_memory.ownsRamRange(server,68u))return Execution::Invalid;
            const uint32_t function=m_memory.read32(server+4u);
            if(function==0u || !m_memory.ownsRamRange(function,4u))return Execution::Invalid;
            uint32_t gp=0u;
            for(const auto &[sid,registered]:m_servers) {
                (void)sid;if(registered.serverData==server){gp=registered.gp;break;}
            }
            // Reserve completion snapshot before invoking potentially stateful
            // server code. Retrying transport must not invoke that code twice.
            const uint32_t owned=m_memory.allocate(64u,16u);
            if(owned==0u)return Execution::Pending;
            PendingRpcCompletion completion{};
            completion.packet=owned;completion.function=function;completion.gp=gp;
            completion.caller=caller;completion.executor=&executor;completion.ownerThread=m_kernel.currentThreadId();
            completion.arguments={m_memory.read32(server+36u),m_memory.read32(server+8u),m_memory.read32(server+12u)};
            completion.rid=m_memory.read32(server+52u);completion.client=m_memory.read32(server+28u);
            completion.destination=m_memory.read32(server+40u);completion.directTarget=m_memory.read32(server+32u);
            completion.size=static_cast<int32_t>(m_memory.read32(server+44u));
            completion.command=m_memory.read32(server+48u)!=0u;completion.queue=m_memory.read32(server+64u);
            pending=m_pendingRpcCompletions.emplace(server,completion).first;
        }
        auto &completion=pending->second;
        // Refuse a competing requester before touching the original token or
        // its transport. Keep ownership even after the guest frame is consumed.
        if(completion.caller!=caller || completion.executor!=&executor ||
           completion.ownerThread!=m_kernel.currentThreadId())return Execution::Invalid;
        if(completion.failed)return Execution::Invalid;
        if(!completion.returned) {
            try {
                const auto result=executor.resumeGuestFunction(completion.callToken,completion.function,
                    completion.arguments[0],completion.arguments[1],completion.arguments[2],0u,completion.gp,100000u);
                if(!result)return Execution::Pending;
                completion.source=*result;completion.returned=true;
                if(*result==0u)completion.size=0;
            } catch(...) { completion.failed=true;throw; }
        }
        if(!completion.replyReady) {
            const uint32_t reply=nextRpcReplyPacket((completion.rid&4u)!=0u?static_cast<int>((completion.rid>>16u)&0xFFFFu):-1);
            if(reply==0u)return Execution::Pending;
            m_memory.write32(reply+32u,0x8000000au);
            m_memory.write32(reply+28u,completion.client);
            if(!completion.command){m_memory.write32(reply+24u,0u);m_memory.write32(reply+16u,0u);}
            std::array<uint8_t,64> snapshot{};
            if(!m_memory.readRam(reply,snapshot.data(),snapshot.size()) || !m_memory.writeRam(completion.packet,snapshot.data(),snapshot.size())) {
                completion.failed=true;return Execution::Invalid;
            }
            completion.replyReady=true;
        }
        bool transferred=false;
        if(completion.command)transferred=sendRpcReply(completion.packet,completion.source,completion.destination,completion.size);
        else {
            const uint32_t size=completion.size>0?static_cast<uint32_t>(completion.size):0u;
            if(size!=0u && (!m_memory.ownsRamRange(completion.source,size) ||
               !m_host.writeGuest(completion.destination,m_memory.ram().data()+IopMemory::physicalAddress(completion.source),size)))return Execution::Pending;
            transferred=m_host.writeGuest(completion.directTarget,
                m_memory.ram().data()+IopMemory::physicalAddress(completion.packet),64u);
        }
        if(!transferred)return Execution::Pending;
        (void)m_memory.freeAllocation(completion.packet);m_pendingRpcCompletions.erase(server);
        return Execution::Complete;
    }

    bool IopRpcBridge::installCommandService()
    {
        if (m_commandStorage != 0u)
            return m_commandReceiverEnabled;
        uint32_t previousReceiver = 0u;
        if (!m_host.readSifRegister(2u, previousReceiver))
            return false;
        // SDK-owned packet80, sys40 and system-handler32*12 storage. Host
        // builtin handlers are represented separately, never fake guest PCs.
        constexpr uint32_t bytes = 0x80u + 0x40u + 32u * 12u;
        const uint32_t storage = m_memory.allocate(bytes, 16u);
        if (storage == 0u)
            return false;
        if (!m_memory.zeroRam(storage, bytes)) {
            (void)m_memory.freeAllocation(storage);
            return false;
        }
        m_commandStorage = m_commandReceiver = storage;
        m_builtinCommandTable = storage + 0xC0u;
        m_systemCommandTable = m_builtinCommandTable;
        m_systemCommandCount = 32u;
        m_userCommandTable = m_userCommandCount = 0u;
        m_commandSoftRegisters.fill(0u);
        m_commandEeDestination = 0u;
        m_commandEventFlag = m_kernel.systemStatusEventFlag();
        m_builtinCommandHandlers.fill(true);
        m_commandReceiverEnabled = true;
        // Publish only after all owned handler/event state is ready to receive.
        if (!m_host.writeSifRegister(2u, storage)) {
            reset();
            return false;
        }
        return true;
    }

    bool IopRpcBridge::dispatchSifManImport(uint16_t ordinal, IopCpuState &cpu)
    {
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };
        switch (ordinal)
        {
        case 4: // sceSifDma2Init
        case 5: // sceSifInit
            m_sifInitialized = true;
            setV0(0u);
            return true;
        case 7: // sceSifSetDma
        {
            constexpr uint32_t kDescriptorSize = 16u;
            constexpr uint32_t kMaxDescriptors = 32u;
            const uint32_t descriptorAddress = cpu.gpr[4];
            const uint32_t descriptorCount = cpu.gpr[5];
            if (descriptorAddress == 0u || descriptorCount == 0u || descriptorCount > kMaxDescriptors)
            {
                setV0(0u);
                return true;
            }

            struct PendingTransfer
            {
                uint32_t source = 0u;
                uint32_t destination = 0u;
                uint32_t size = 0u;
            };

            std::array<uint32_t, kMaxDescriptors * 4u> descriptorWords{};
            const size_t descriptorBytes = static_cast<size_t>(descriptorCount) * kDescriptorSize;
            if (!m_memory.readRam(descriptorAddress, descriptorWords.data(), descriptorBytes))
            {
                setV0(0u);
                return true;
            }

            std::array<PendingTransfer, kMaxDescriptors> pending{};
            uint32_t pendingCount = 0u;
            uint32_t largestTransfer = 0u;
            for (uint32_t i = 0u; i < descriptorCount; ++i)
            {
                const uint32_t source = descriptorWords[i * 4u + 0u];
                const uint32_t destination = descriptorWords[i * 4u + 1u];
                const int32_t signedSize = static_cast<int32_t>(descriptorWords[i * 4u + 2u]);
                if (signedSize <= 0)
                    continue;

                const uint32_t size = static_cast<uint32_t>(signedSize);
                if (!m_memory.ownsRamRange(source, size))
                {
                    setV0(0u);
                    return true;
                }
                pending[pendingCount++] = {source, destination, size};
                largestTransfer = std::max(largestTransfer, size);
            }

            // IOP-side sceSifSetDma sends IOP RAM to the EE. Validate all EE
            // destinations before committing any write so a bad chain cannot
            // partially update guest memory, but maybe we could skip this check if we trust the EE-side SIF driver to validate the chain ?!
            // TODO check later
            std::vector<uint8_t> scratch(largestTransfer);
            for (uint32_t i = 0u; i < pendingCount; ++i)
            {
                const PendingTransfer &transfer = pending[i];
                if (!m_host.readGuest(transfer.destination, scratch.data(), transfer.size))
                {
                    setV0(0u);
                    return true;
                }
            }

            for (uint32_t i = 0u; i < pendingCount; ++i)
            {
                const PendingTransfer &transfer = pending[i];
                if (!m_memory.readRam(transfer.source, scratch.data(), transfer.size) || !m_host.writeGuest(transfer.destination, scratch.data(), transfer.size))
                {
                    setV0(0u);
                    return true;
                }
            }

            const uint32_t dmaId = m_nextDmaId++;
            if (m_nextDmaId == 0u || m_nextDmaId > static_cast<uint32_t>(std::numeric_limits<int32_t>::max()))
            {
                m_nextDmaId = 1u;
            }
            setV0(dmaId);
            return true;
        }
        case 8: // sceSifDmaStat
            setV0(0xFFFFFFFFu);
            return true;
        case 21: // sceSifGetMSFlag
        case 23: // sceSifGetSMFlag
        case 25: // sceSifGetMainAddr
        case 26: // sceSifGetSubAddr
        {
            const uint32_t index=ordinal==21 ? 3u : ordinal==23 ? 4u : ordinal==25 ? 1u : 2u;
            uint32_t value=0u;
            if(!m_host.readSifRegister(index,value)) return false;
            setV0(value); return true;
        }
        case 22: // sceSifSetMSFlag (IOP acknowledges/clears)
        case 24: // sceSifSetSMFlag (IOP publishes/sets)
        case 27: // sceSifSetSubAddr
        {
            const uint32_t index=ordinal==22 ? 3u : ordinal==24 ? 4u : 2u;
            uint32_t value=0u;
            if(!m_host.writeSifRegister(index,cpu.gpr[4]) || !m_host.readSifRegister(index,value)) return false;
            setV0(value); return true;
        }
        case 29: // sceSifCheckInit
            setV0(m_sifInitialized ? 1u : 0u);
            return true;
        default:
            return false;
        }
    }

    bool IopRpcBridge::dispatchSifCmdImport(uint16_t ordinal, IopCpuState &cpu,IopGuestExecutor *executor)
    {
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };
        switch (ordinal)
        {
        case 4: // InitCmd: publish only an installed receiver, then wait for EE.
        {
            if (!m_commandReceiverEnabled || m_commandEventFlag == 0 ||
                !m_host.writeSifRegister(4u, 0x20000u))
                return false;
            const std::array<uint32_t,4> args{cpu.gpr[4],cpu.gpr[5],cpu.gpr[6],cpu.gpr[7]};
            cpu.gpr[4] = static_cast<uint32_t>(m_commandEventFlag);
            cpu.gpr[5] = 0x100u; cpu.gpr[6] = 0u; cpu.gpr[7] = 0u;
            const bool handled = m_kernel.dispatchEventImport(10u, cpu);
            for (size_t i=0u;i<args.size();++i) cpu.gpr[4u+i]=args[i];
            return handled;
        }
        case 5: // ExitCmd disables owned receiver, preserving registered state.
            m_commandReceiverEnabled = false;
            return true;
        case 14: // InitRpc out-of-thread continuation retains unsatisfied wait.
            setV0(advanceRpcInitialization()?0u:static_cast<uint32_t>(-418));return true;
        case 15:
        case 16:
            setV0(0);
            return true;
        case 6: // sceSifGetSreg
            if (cpu.gpr[4] >= m_commandSoftRegisters.size())
                return false;
            setV0(m_commandSoftRegisters[cpu.gpr[4]]);
            return true;
        case 7: // sceSifSetSreg (void: preserve v0)
            if (cpu.gpr[4] >= m_commandSoftRegisters.size())
                return false;
            m_commandSoftRegisters[cpu.gpr[4]] = cpu.gpr[5];
            return true;
        case 8: // sceSifSetCmdBuffer
        case 9: // sceSifSetSysCmdBuffer
        {
            const uint32_t address = cpu.gpr[4];
            const uint32_t count = cpu.gpr[5];
            const uint32_t stride = ordinal == 9 ? 12u : 8u;
            // Refuse malformed tables before changing the active registration.
            // A null/empty table is valid and disables that handler namespace.
            if (static_cast<int32_t>(count) < 0 ||
                (count && (address == 0u || count > IopMemory::RamSize / stride ||
                           !m_memory.ownsRamRange(address, count * stride))))
                return false;
            if (ordinal == 9) {
                m_systemCommandTable = address;
                m_systemCommandCount = count;
            } else {
                m_userCommandTable = address;
                m_userCommandCount = count;
            }
            return true;
        }
        case 10: // sceSifAddCmdHandler
        case 11: // sceSifRemoveCmdHandler
        {
            const bool system = (cpu.gpr[4] & 0x80000000u) != 0u;
            const uint32_t index = cpu.gpr[4] & 0x7FFFFFFFu;
            const uint32_t table = system ? m_systemCommandTable : m_userCommandTable;
            const uint32_t count = system ? m_systemCommandCount : m_userCommandCount;
            const uint32_t stride = system ? 12u : 8u;
            if (table == 0u || index >= count)
                return false;
            const uint32_t address = table + index * stride;
            if (!m_memory.ownsRamRange(address, 8u))
                return false;
            m_memory.write32(address, ordinal == 11 ? 0u : cpu.gpr[5]);
            m_memory.write32(address + 4u, ordinal == 11 ? 0u : cpu.gpr[6]);
            if (ordinal == 11)
                m_commandHandlerGp.erase(address);
            else
                m_commandHandlerGp[address] = cpu.gpr[28];
            if (system && table == m_builtinCommandTable && index < m_builtinCommandHandlers.size())
                m_builtinCommandHandlers[index] = false;
            if(system && table==m_builtinCommandTable && index<m_builtinRpcHandlers.size())m_builtinRpcHandlers[index]=false;
            return true;
        }
        case 12: // sceSifSendCmd
        case 13: // isceSifSendCmd
        {
            constexpr uint32_t kHeaderSize = 16u;
            constexpr uint32_t kMaxPacketSize = 112u;
            const uint32_t commandId = cpu.gpr[4];
            const uint32_t packetAddress = cpu.gpr[5];
            const uint32_t packetSize = cpu.gpr[6];
            const uint32_t extraSource = cpu.gpr[7];
            const uint32_t stackPointer = cpu.gpr[29];
            const uint32_t extraDestination = m_memory.read32(stackPointer + 16u);
            const int32_t signedExtraSize = static_cast<int32_t>(m_memory.read32(stackPointer + 20u));

            if (packetAddress == 0u || packetSize < kHeaderSize || packetSize > kMaxPacketSize ||
                !m_memory.ownsRamRange(packetAddress, packetSize))
            {
                setV0(0u);
                return true;
            }

            std::array<uint8_t, kMaxPacketSize> packet{};
            if (!m_memory.readRam(packetAddress, packet.data(), packetSize))
            {
                setV0(0u);
                return true;
            }

            uint32_t extraSize = 0u;
            if (signedExtraSize > 0)
            {
                extraSize = static_cast<uint32_t>(signedExtraSize);
                if (extraSource == 0u || extraDestination == 0u ||
                    !m_memory.ownsRamRange(extraSource, extraSize))
                {
                    setV0(0u);
                    return true;
                }
            }

            const uint32_t sizeWord = packetSize | (extraSize << 8u);
            const uint32_t payloadDestination = extraSize > 0u ? extraDestination : 0u;
            std::memcpy(packet.data() + 0u, &sizeWord, sizeof(sizeWord));
            std::memcpy(packet.data() + 4u, &payloadDestination, sizeof(payloadDestination));
            std::memcpy(packet.data() + 8u, &commandId, sizeof(commandId));
            // The SDK prepares the caller's IOP packet before submitting DMA.
            // Mutate only the three header words; opt and payload stay intact.
            if (!m_memory.writeRam(packetAddress, packet.data(), 12u)) {
                setV0(0u);
                return true;
            }
            if (extraSize > 0u &&
                !m_host.writeGuest(extraDestination, m_memory.ram().data() + IopMemory::physicalAddress(extraSource), extraSize)) {
                setV0(0u);
                return true;
            }

            // IOP command DMA targets the EE buffer learned via INIT_CMD or
            // CHANGE_SADDR. Dispatching a host callback does not replace that
            // memory transfer. Keep older import-only hosts without an installed
            // command service on their existing send path.
            if (m_commandStorage != 0u) {
                if (m_commandEeDestination == 0u ||
                    !m_host.writeGuest(m_commandEeDestination, packet.data(), packetSize)) {
                    setV0(0u);
                    return true;
                }
            }

            if (!m_host.sendSifCommand(commandId, packet.data(), packetSize))
            {
                // A command without an EE handler is still a completed DMA on  real hardware. Only malformed packets fail above.
            }

            const uint32_t dmaId = m_nextDmaId++;
            if (m_nextDmaId == 0u || m_nextDmaId > static_cast<uint32_t>(std::numeric_limits<int32_t>::max()))
                m_nextDmaId = 1u;
            setV0(dmaId);
            return true;
        }
        case 17: // sceSifRegisterRpc
        {
            RpcServer server;
            server.serverData = cpu.gpr[4];
            server.sid = cpu.gpr[5];
            if(m_pendingRpcCompletions.contains(server.serverData))return false;
            if(const auto existing=m_servers.find(server.sid);existing!=m_servers.end() &&
               m_pendingRpcCompletions.contains(existing->second.serverData))return false;
            server.function = cpu.gpr[6];
            server.gp = cpu.gpr[28];
            server.buffer = cpu.gpr[7];
            const uint32_t stackPointer = cpu.gpr[29];
            server.callback = m_memory.read32(stackPointer + 16u);
            server.callbackBuffer = m_memory.read32(stackPointer + 20u);
            server.queue = m_memory.read32(stackPointer + 24u);
            if(!m_memory.ownsRamRange(stackPointer+16u,12u) ||
               !m_memory.ownsRamRange(server.serverData,68u) || !m_memory.ownsRamRange(server.queue,24u)) return false;
            uint32_t link=0u;
            if(!rpcListLink(server.queue+8u,56u,server.serverData,true,link)) return false;
            m_memory.write32(server.serverData,server.sid);
            m_memory.write32(server.serverData+4u,server.function);m_memory.write32(server.serverData+8u,server.buffer);
            m_memory.write32(server.serverData+16u,server.callback);m_memory.write32(server.serverData+20u,server.callbackBuffer);
            m_memory.write32(server.serverData+56u,0u);m_memory.write32(server.serverData+60u,0u);
            m_memory.write32(server.serverData+64u,server.queue);m_memory.write32(link,server.serverData);
            m_servers[server.sid] = server;
            // SDK void export preserves the caller's v0.
            return true;
        }
        case 18: // sceSifCheckStatRpc
        {
            const uint32_t cd=cpu.gpr[4];
            if(!m_memory.ownsRamRange(cd,8u)) return false;
            const uint32_t packet=m_memory.read32(cd);
            if(packet!=0u && !m_memory.ownsRamRange(packet,28u)) return false;
            setV0(packet!=0u && m_memory.read32(cd+4u)==m_memory.read32(packet+24u) &&
                  (m_memory.read32(packet+16u)&2u)!=0u ? 1u:0u);
            return true;
        }
        case 19: // SetRpcQueue
        {
            const uint32_t queue=cpu.gpr[4];
            if(!m_memory.ownsRamRange(queue,24u)) return false;
            uint32_t link=0u;
            if(m_rpcActiveQueue!=0u) {
                // Use an owned descriptor as the list head when available.
                uint32_t cursor=m_rpcActiveQueue;
                for(uint32_t n=0u;;++n) {
                    if(n>=IopMemory::RamSize/24u || cursor==queue || !m_memory.ownsRamRange(cursor,24u)) return false;
                    const uint32_t next=m_memory.read32(cursor+20u);
                    if(next==0u) {link=cursor+20u;break;}
                    cursor=next;
                }
            }
            m_memory.write32(queue,cpu.gpr[5]);
            for(uint32_t offset=4u;offset<24u;offset+=4u)m_memory.write32(queue+offset,0u);
            if(link!=0u)m_memory.write32(link,queue);else m_rpcActiveQueue=queue;
            if(m_rpcStorage!=0u)m_memory.write32(m_rpcStorage+40u,m_rpcActiveQueue);
            return true;
        }
        case 20: // GetNextRequest
        {
            const uint32_t queue=cpu.gpr[4];
            if(!m_memory.ownsRamRange(queue,24u)) return false;
            const uint32_t server=m_memory.read32(queue+12u);
            if(server!=0u && !m_memory.ownsRamRange(server,68u)) return false;
            m_memory.write32(queue+4u,server!=0u?1u:0u);
            m_memory.write32(queue+12u,server!=0u?m_memory.read32(server+60u):0u);
            setV0(server);return true;
        }
        case 21: // ExecRequest is void; transport failure remains pending.
        {
            if(!executor)return false;
            const auto state=executeRpcRequest(cpu.gpr[4],*executor,&cpu);
            if(state==Execution::Invalid)return false;
            if(state==Execution::Pending)cpu.yielded=true;
            return true;
        }
        case 22: // Original nonreturning GetNextRequest/ExecRequest/Sleep loop.
        {
            const uint32_t queue=cpu.gpr[4];
            if(!executor || !m_memory.ownsRamRange(queue,24u))return false;
            auto active=m_rpcLoopRequests.find(queue);
            if(active==m_rpcLoopRequests.end()) {
                const uint32_t server=m_memory.read32(queue+12u);
                if(server!=0u && !m_memory.ownsRamRange(server,68u))return false;
                m_memory.write32(queue+4u,server!=0u?1u:0u);
                m_memory.write32(queue+12u,server!=0u?m_memory.read32(server+60u):0u);
                if(server==0u) {
                    // Use SleepThread's accumulated wakeups, preserving the
                    // original race between the empty check and sleeping.
                    const uint32_t result=cpu.gpr[2];
                    (void)m_kernel.dispatchThreadImport(24u,cpu,0u);
                    cpu.gpr[2]=result;
                    return true;
                }
                active=m_rpcLoopRequests.emplace(queue,server).first;
            }
            const auto state=executeRpcRequest(active->second,*executor,&cpu);
            if(state==Execution::Invalid)return false;
            if(state==Execution::Complete)m_rpcLoopRequests.erase(queue);
            // Bound each scheduler slice to one request or transport retry.
            // The import PC is retained by IopEmulator; RpcLoop never returns.
            cpu.yielded=true;
            return true;
        }
        case 23:
            setV0(0);
            return true;
        case 24: // RemoveRpc
        {
            const uint32_t serverData = cpu.gpr[4];
            const uint32_t queue=cpu.gpr[5];
            if(m_pendingRpcCompletions.contains(serverData))return false;
            if(!m_memory.ownsRamRange(queue,24u)|| !m_memory.ownsRamRange(serverData,68u))return false;
            uint32_t link=0u;
            if(!rpcListLink(queue+8u,56u,serverData,false,link)){setV0(0u);return true;}
            m_memory.write32(link,m_memory.read32(serverData+56u));
            if(const auto pending=m_pendingRpcCompletions.find(serverData);pending!=m_pendingRpcCompletions.end()) {
                (void)m_memory.freeAllocation(pending->second.packet);m_pendingRpcCompletions.erase(pending);
            }
            if(const auto active=m_rpcLoopRequests.find(queue);active!=m_rpcLoopRequests.end() && active->second==serverData)
                m_rpcLoopRequests.erase(active);
            for(auto server=m_servers.begin();server!=m_servers.end();++server)
                if(server->second.serverData==serverData){m_servers.erase(server);break;}
            setV0(serverData);
            return true;
        }
        case 25: // RemoveRpcQueue
        {
            const uint32_t target=cpu.gpr[4];
            for(const auto &[server,pending]:m_pendingRpcCompletions) {
                (void)server;if(pending.queue==target)return false;
            }
            uint32_t current=m_rpcActiveQueue,previous=0u;
            for(uint32_t n=0u;current!=0u && n<IopMemory::RamSize/24u;++n) {
                if(!m_memory.ownsRamRange(current,24u))return false;
                if(current==target) {
                    const uint32_t next=m_memory.read32(current+20u);
                    if(previous!=0u)m_memory.write32(previous+20u,next);else m_rpcActiveQueue=next;
                    if(m_rpcStorage!=0u)m_memory.write32(m_rpcStorage+40u,m_rpcActiveQueue);
                    if(const auto active=m_rpcLoopRequests.find(target);active!=m_rpcLoopRequests.end()) {
                        if(const auto pending=m_pendingRpcCompletions.find(active->second);pending!=m_pendingRpcCompletions.end()) {
                            (void)m_memory.freeAllocation(pending->second.packet);m_pendingRpcCompletions.erase(pending);
                        }
                        m_rpcLoopRequests.erase(active);
                    }
                    setV0(target);return true;
                }
                previous=current;current=m_memory.read32(current+20u);
            }
            setV0(0u);return true;
        }
        case 28:
        case 29:
            setV0(0);
            return true;
        case 26: // sceSifSetSif1CB (void)
            m_sif1Callback = cpu.gpr[4];
            m_sif1CallbackArgument = cpu.gpr[5];
            m_sif1CallbackGp = cpu.gpr[28];
            return true;
        case 27: // sceSifClearSif1CB (native no-op when unset)
            m_sif1Callback = m_sif1CallbackArgument = m_sif1CallbackGp = 0u;
            return true;
        default:
            return false;
        }
    }

    RpcResult IopRpcBridge::handleRpc(const RpcRequest &request, IopGuestExecutor &executor)
    {
        RpcResult result{};
        const auto serverIt = m_servers.find(request.sid);
        if (serverIt == m_servers.end() || serverIt->second.function == 0u)
            return result;

        RpcServer &server = serverIt->second;
        if (request.send.size != 0u && server.buffer != 0u)
        {
            const uint32_t copySize = std::min<uint32_t>(request.send.size, IopMemory::RamSize - std::min(server.buffer, IopMemory::RamSize));
            if (copySize != 0u)
            {
                std::vector<uint8_t> payload(copySize);
                if (m_host.readGuest(request.send.address, payload.data(), payload.size()))
                    (void)m_memory.writeRam(server.buffer, payload.data(), payload.size());
            }
        }

        uint32_t returnPointer = executor.executeGuestFunction(server.function,
                                                               request.function,
                                                               server.buffer,
                                                               request.send.size,
                                                               0u,
                                                               server.gp);
        if (returnPointer == 0u)
            returnPointer = server.buffer;
        if (request.receive.address != 0u && request.receive.size != 0u && returnPointer != 0u)
        {
            const uint32_t physical = IopMemory::physicalAddress(returnPointer);
            if (physical < IopMemory::RamSize)
            {
                const uint32_t copySize = std::min<uint32_t>(request.receive.size, IopMemory::RamSize - physical);
                (void)m_host.writeGuest(request.receive.address, m_memory.ram().data() + physical, copySize);
                if (copySize < request.receive.size)
                    (void)m_host.zeroGuest(request.receive.address + copySize, request.receive.size - copySize);
            }
        }

        result.handled = true;
        result.resultAddress = request.receive.address;
        result.serverDispatchPolicy = ServerDispatchPolicy::Suppress;
        result.signalNowaitCompletion = true;
        result.signalCompletion = true;
        return result;
    }

    bool IopRpcBridge::receiveCommandPacket(uint32_t packetAddress, uint32_t availableBytes,
                                            IopGuestExecutor &executor)
    {
        constexpr uint32_t kHeaderBytes = 16u;
        constexpr uint32_t kMaxPacketBytes = 112u;
        if (availableBytes < kHeaderBytes || !m_memory.ownsRamRange(packetAddress, kHeaderBytes))
            return false;
        const uint32_t sizeWord = m_memory.read32(packetAddress);
        const uint32_t size = sizeWord & 0xFFu;
        if (size == 0u)
            return true; // Already consumed or empty; no handler call.
        const uint32_t copyBytes = (size + 3u) & ~3u;
        if (size < kHeaderBytes || size > kMaxPacketBytes || copyBytes > availableBytes ||
            !m_memory.ownsRamRange(packetAddress, copyBytes))
            return false;

        // The SDK clears psize before copying to its local IOP stack buffer.
        // Keep the upper24 payload length and never pass an EE address to IOP.
        std::array<uint8_t, kMaxPacketBytes> packet{};
        if (!m_memory.readRam(packetAddress, packet.data(), copyBytes))
            return false;
        const uint32_t consumedSizeWord = sizeWord & 0xFFFFFF00u;
        std::memcpy(packet.data(), &consumedSizeWord, sizeof(consumedSizeWord));
        m_memory.write32(packetAddress, consumedSizeWord);
        uint32_t commandId = 0u;
        std::memcpy(&commandId, packet.data() + 8u, sizeof(commandId));
        const bool system = (commandId & 0x80000000u) != 0u;
        const uint32_t index = commandId & 0x7FFFFFFFu;
        const uint32_t table = system ? m_systemCommandTable : m_userCommandTable;
        const uint32_t count = system ? m_systemCommandCount : m_userCommandCount;
        const uint32_t stride = system ? 12u : 8u;
        if (table == 0u || index >= count)
            return true; // Real DMA consumed; no registered command handler.
        if(system && table==m_builtinCommandTable && index<m_builtinRpcHandlers.size() && m_builtinRpcHandlers[index])
            return receiveRpcPacket(index,packet.data(),size,executor);
        if (system && table == m_builtinCommandTable && index < m_builtinCommandHandlers.size() &&
            m_builtinCommandHandlers[index]) {
            if (index == 0u || index == 2u) {
                if (index == 2u) {
                    uint32_t option = 0u;
                    std::memcpy(&option, packet.data()+12u, sizeof(option));
                    // SDK opt1 returns before reading m_newaddr: this RPC
                    // handshake carries only the sixteen-byte command header.
                    if (option != 0u)
                        return m_kernel.setInternalEventFlag(m_commandEventFlag, 0x800u);
                }
                if (size < 20u) return false;
                uint32_t address = 0u;
                std::memcpy(&address, packet.data()+16u, sizeof(address));
                if (index == 2u) {
                    if (!m_kernel.setInternalEventFlag(m_commandEventFlag, 0x100u)) return false;
                    if (!m_host.writeSifRegister(3u, 0x20000u)) return false;
                }
                m_commandEeDestination = address;
            } else {
                if (size < 24u) return false;
                uint32_t reg = 0u,value = 0u;
                std::memcpy(&reg,packet.data()+16u,sizeof(reg));
                std::memcpy(&value,packet.data()+20u,sizeof(value));
                if (reg >= m_commandSoftRegisters.size()) return false;
                m_commandSoftRegisters[reg] = value;
            }
            return true;
        }
        const uint32_t entry = table + index * stride;
        if (!m_memory.ownsRamRange(entry, 8u))
            return false;
        const uint32_t function = m_memory.read32(entry);
        if (function == 0u)
            return true;
        const uint32_t argument = m_memory.read32(entry + 4u);
        const auto gp = m_commandHandlerGp.find(entry);
        const uint32_t handlerGp = gp == m_commandHandlerGp.end() ? 0u : gp->second;
        // Use a fixed temporary allocation so packet delivery does not advance
        // the monotonic module heap cursor on every callback.
        const uint32_t allocationBytes = (copyBytes + 15u) & ~15u;
        uint32_t snapshotAddress = 0u;
        for (uint32_t candidate = IopMemory::HeapLimit - allocationBytes;
             candidate >= IopMemory::HeapBase; candidate -= 16u) {
            // Module images and explicit RAM writes also mark bytes owned,
            // even when they are absent from the heap allocation registry.
            bool occupied = false;
            for (uint32_t offset = 0u; offset < allocationBytes; ++offset) {
                if (m_memory.ownsRamRange(candidate + offset, 1u)) {
                    occupied = true;
                    break;
                }
            }
            if (occupied)
                continue;
            snapshotAddress = m_memory.allocate(copyBytes, 16u, candidate);
            if (snapshotAddress != 0u)
                break;
        }
        if (snapshotAddress == 0u)
            return false;
        // Guest callbacks may read this snapshot while overwriting the DMA
        // receiver. Reclaim only this owned allocation even if execution throws.
        struct SnapshotOwner {
            IopMemory &memory;
            uint32_t address;
            ~SnapshotOwner() { (void)memory.freeAllocation(address); }
        } owner{m_memory, snapshotAddress};
        if (!m_memory.writeRam(snapshotAddress, packet.data(), copyBytes))
            return false;
        (void)executor.executeGuestFunctionWithBudget(function, snapshotAddress, argument,
                                                      0u, 0u, handlerGp, 100000u);
        return true;
    }

    void IopRpcBridge::onSifTransfer(const SifTransfer &transfer, IopGuestExecutor &executor)
    {
        // The EE SIF transport owns the actual directional memory movement.
        // Services still receive both phases through IopSubsystem, but mirroring
        // IOP bytes through an equal-numbered EE address would alias two distinct
        // PS2 address spaces and can overwrite live game data.
        if (transfer.kind != SifTransferKind::SetDma ||
            transfer.phase != SifTransferPhase::AfterCopy)
            return;
        if (m_commandStorage != 0u && !m_commandReceiverEnabled)
            return;
        uint32_t receiver = 0u;
        if (!m_host.readSifRegister(2u, receiver) || receiver == 0u ||
            IopMemory::physicalAddress(transfer.destinationAddress) != IopMemory::physicalAddress(receiver))
            return;
        // SDK invokes the SIF1 callback before inspecting even an empty packet.
        if (m_sif1Callback != 0u)
            (void)executor.executeGuestFunctionWithBudget(m_sif1Callback, m_sif1CallbackArgument,
                                                          0u, 0u, 0u, m_sif1CallbackGp, 100000u);
        // The transport has already copied into IOP RAM. This path consumes
        // only the explicitly posted SIFCMD receiver; other DMA is data.
        if (!receiveCommandPacket(receiver, transfer.size, executor))
            m_host.log(LogLevel::Warning, "[IOP:SIFCMD] posted receiver packet rejected");
    }

    bool IopRpcBridge::removeServersInRange(uint32_t base, uint32_t size)
    {
        for(const auto &[server,pending]:m_pendingRpcCompletions) {
            (void)server;
            const uint32_t function=IopMemory::physicalAddress(pending.function);
            if(function>=base && function-base<size)return false;
        }
        for (auto server = m_servers.begin(); server != m_servers.end();)
        {
            const uint32_t function = IopMemory::physicalAddress(server->second.function);
            if (function >= base && function - base < size)
                server = m_servers.erase(server);
            else
                ++server;
        }
        return true;
    }

    bool IopRpcBridge::hasServer(uint32_t sid) const noexcept
    {
        const auto server = m_servers.find(sid);
        return server != m_servers.end() && server->second.function != 0u;
    }
}
