#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"
#include "emulator/iop_emulator_const.h"
#include "emulator/core/iop_kernel.h"
#include "emulator/core/iop_memory.h"
#include "emulator/services/iop_rpc.h"

namespace {
using namespace iop_test;
using namespace ps2x::iop::detail;
constexpr uint32_t base=0x10000u, server=base+0x500u, queue=base+0x600u;
constexpr uint32_t jal(uint32_t address) { return 0x0C000000u|(address>>2u); }

class SifHost final : public Host {
public:
    std::array<uint32_t,8> registers{};
    bool rejectWrites=false;
    bool readSifRegister(uint32_t index,uint32_t &value) const override {
        if(index>=registers.size())return false;value=registers[index];return true;
    }
    bool writeSifRegister(uint32_t index,uint32_t value) override {
        if(index>=registers.size())return false;registers[index]=value;return true;
    }
    bool writeGuest(uint32_t address,const void *data,size_t size) override {
        return !rejectWrites && Host::writeGuest(address,data,size);
    }
};

uint32_t word(const IopEmulator &iop,uint32_t address) {
    uint32_t result=0;require(iop.readMemory(address,&result,4u),"unreadable RAM");return result;
}

void handshake(IopEmulator &iop,SifHost &host) {
    require(iop.installCommandService(),"command service install");
    std::array<uint32_t,5> init{20u,0u,0x80000002u,0u,0x1000u};
    require(iop.writeMemory(host.registers[2],init.data(),20u),"write INIT_CMD");
    SifTransfer transfer{};transfer.destinationAddress=host.registers[2];transfer.size=20u;
    iop.onSifTransfer(transfer);iop.runEeCycles(32u);
    init={16u,0u,0x80000002u,1u,0u};
    require(iop.writeMemory(host.registers[2],init.data(),16u),"write RPC ack");
    transfer.size=16u;iop.onSifTransfer(transfer);iop.runEeCycles(32u);
    require(iop.rpcInitializationComplete(),"RPC handshake did not complete");
}

enum class Pause { Yield, Delay, Event, Budget, OutsideRam, MissingImport };
Irx image(Pause pause,bool rpcLoop=false) {
    Irx irx(base,0x1000u);
    // Init creates an event and a worker using real interpreted imports.
    irx.words(0u,{0x27BDFFE0u,0xAFBF001Cu,0x3C040001u,0x34840650u,jal(base+0x354u),0u,
        0x3C080001u,0xAD020724u,0x3C040001u,0x34840620u,jal(base+0x294u),0u,
        0x3C080001u,0xAD020704u,0x00402021u,0x00002821u,jal(base+0x29Cu),0u,
        0x8FBF001Cu,0x27BD0020u,0x03E00008u,0x00001021u});
    // Worker preserves a real stack frame and a caller return register.
    irx.words(0x100u,{0x27BDFFE0u,0xAFBF001Cu,0xAFB00018u,0x24101357u,
        0x3C080001u,0xAD1D0700u,0xAD1C0708u,0x3C040001u,
        rpcLoop?0x34840600u:0x34840500u,0x24022468u,
        jal(base+(rpcLoop?0x31Cu:0x314u)),0u,
        0x3C080001u,0xAD02070Cu,0xAD100710u,
        0x8FB00018u,0x8FBF001Cu,0x27BD0020u,0x03E00008u,0u});
    irx.words(0x280u,{0x41E00000u,0u,0x0101u,0x61626874u,0x00006573u,
        0x03E00008u,0x24000004u,0x03E00008u,0x24000006u,
        0x03E00008u,0x24000021u,0x03E00008u,0x24000010u,
        0x03E00008u,0x24000014u});
    irx.words(0x300u,{0x41E00000u,0u,0x0101u,0x63666973u,0x0000646Du,
        0x03E00008u,0x24000015u,0x03E00008u,0x24000016u});
    irx.words(0x340u,{0x41E00000u,0u,0x0101u,0x76656874u,0x00746E65u,
        0x03E00008u,0x24000004u,0x03E00008u,0x2400000Au});
    // The callback records ownership then waits/yields before producing a result.
    irx.words(0x400u,{0x27BDFFE0u,0xAFBF001Cu,0x3C080001u,
        0x8D090714u,0x25290001u,0xAD090714u,0xAD1D0718u,0xAD1C071Cu,
        jal(base+0x2B4u),0u,0x3C080001u,0xAD020720u});
    if(pause==Pause::Yield)irx.words(0x430u,{jal(base+0x2ACu),0u,0u,0u,0u,0u,0u,0u});
    if(pause==Pause::Delay)irx.words(0x430u,{0x240403E8u,jal(base+0x2A4u),0u,0u,0u,0u,0u,0u});
    if(pause==Pause::Event)irx.words(0x430u,{0x3C080001u,0x8D040724u,0x24050001u,
        0x24060011u,0x00003821u,jal(base+0x35Cu),0u,0u});
    if(pause==Pause::Budget)irx.words(0x430u,{0x3C090002u,0x352986A0u, // 165536 loops
        0x2529FFFFu,0x1520FFFEu,0u,0u,0u,0u});
    if(pause==Pause::OutsideRam)irx.words(0x430u,{0x3C090020u,0x01200008u,0u});
    if(pause==Pause::MissingImport) {
        irx.words(0x430u,{jal(base+0x394u),0u});
        irx.words(0x380u,{0x41E00000u,0u,0x0101u,0x73696D78u,0x676E6973u,
            0x03E00008u,0x24000063u});
    }
    irx.words(0x450u,{0x3C080001u,0xAD020728u,0x2409ABCDu,0xAD090740u,
        0x3C020001u,0x34420740u,0x8FBF001Cu,0x27BD0020u,0x03E00008u,0u});
    irx.words(0x500u,{0x77889900u,base+0x400u,base+0x740u,0u,
        0u,0u,0u,0u,0x800u,0x55u,0x900u,4u,0u,0u,0u,0u,queue});
    irx.words(0x600u,{0u,0u,server,rpcLoop?server:0u,0u,0u});
    irx.words(0x620u,{0u,0u,base+0x100u,0x800u,10u});
    irx.words(0x650u,{2u,0u,0u});
    return irx;
}

void eventOperation(IopEmulator &iop,uint16_t ordinal) {
    Irx irx(0x12000u,0x100u);
    irx.words(0u,{0x27BDFFF0u,0xAFBF000Cu,0x3C080001u,0x8D040724u,
        0x24050001u,jal(0x12054u),0u,0x8FBF000Cu,0x27BD0010u,0x03E00008u,0x00001021u});
    irx.words(0x40u,{0x41E00000u,0u,0x0101u,0x76656874u,0x00746E65u,
        0x03E00008u,0x24000000u|ordinal});
    require(iop.loadOwnedModule("test:event-operation",irx.bytes).startResult==0,"event operation");
}

void interpreted(Pause pause,bool deleteEvent=false,bool rpcLoop=false,bool transportFailure=false) {
    SifHost host;IopEmulator iop(host);handshake(iop,host);
    const auto loaded=iop.loadOwnedModule("test:owned-rpc",image(pause,rpcLoop).bytes);
    require(loaded.startResult==0,"worker setup failed");
    for(unsigned n=0;n<2000u && word(iop,base+0x714u)==0u;++n)iop.runEeCycles(8u);
    require(word(iop,base+0x714u)==1u,"callback never ran on the scheduler");
    require(word(iop,base+0x710u)==0u && host.word(0x900u)==0xCCCCCCCCu,"early caller/reply");
    if(transportFailure)host.rejectWrites=true;
    if(pause==Pause::Event || pause==Pause::Delay || pause==Pause::Budget) {
        iop.runEeCycles(4000u);
        require(host.word(0x900u)==0xCCCCCCCCu && word(iop,base+0x710u)==0u,"pause published completion");
        int32_t stopResult=123;
        require(!iop.stopModule(loaded.moduleId,&stopResult) && stopResult==123,"active unload altered owner");
        if(pause==Pause::Event)eventOperation(iop,deleteEvent?5u:6u);
    }
    iop.runEeCycles(4000000u);
    if(pause==Pause::OutsideRam || pause==Pause::MissingImport) {
        require(host.word(0x900u)==0xCCCCCCCCu && word(iop,base+0x710u)==0u,"fault completed callback");
        const auto instructions=iop.instructions();iop.runEeCycles(8000u);
        require(iop.instructions()==instructions && word(iop,base+0x714u)==1u,"fault automatically retried");
        iop.reset();require(iop.threadCount()==0,"reset retained dead frames");return;
    }
    if(transportFailure) {
        require(host.word(0x900u)==0xCCCCCCCCu && word(iop,base+0x714u)==1u,"transport retried callback");
        host.rejectWrites=false;iop.runEeCycles(8000u);
    }
    require(host.word(0x900u)==0xFFFFABCDu && word(iop,base+0x714u)==1u,"missing/duplicate callback payload");
    require(word(iop,base+0x718u)==word(iop,base+0x700u)-32u,"callback used a different stack");
    require(word(iop,base+0x720u)==word(iop,base+0x704u),"callback lost thread identity");
    require(word(iop,base+0x71Cu)==0u,"unregistered callback GP changed");
    if(pause==Pause::Event)require(word(iop,base+0x728u)==(deleteEvent?0xFFFFFFFFu:0u),"event result not written to child");
    require(word(iop,base+0x710u)==(rpcLoop?0u:0x1357u),"parent continuation/loop semantics");
    if(!rpcLoop)require(word(iop,base+0x70Cu)==0x2468u,"void ExecRequest clobbered caller v0");
}

void tokenOwnership() {
    IopMemory memory;IopKernel kernel(memory);
    const uint32_t storage=memory.allocate(0x100u,16u);
    memory.write32(storage+8u,storage+0x80u);memory.write32(storage+12u,0x800u);memory.write32(storage+16u,10u);
    IopCpuState setup{};setup.gpr[4]=storage;
    require(kernel.dispatchThreadImport(4u,setup,0u),"CreateThread");
    setup.gpr[4]=setup.gpr[2];require(kernel.dispatchThreadImport(6u,setup,0u),"StartThread");
    auto *thread=kernel.beginNextReady(0u);require(thread!=nullptr,"Ready thread");
    auto &parent=thread->cpu;parent.gpr[16]=0x12345678u;
    parent.importEntered=true;parent.importPc=storage+0x90u;parent.importReturnPc=storage+0x94u;
    auto foreign=parent;
    require(kernel.beginGuestCall(foreign,storage+0x80u,0,0,0,0,0)==0,"foreign CPU accepted");
    const auto outer=kernel.beginGuestCall(parent,storage+0x80u,1,2,3,4,0xCAFEu);
    require(outer!=0,"owned frame rejected");
    auto &child=thread->executionCpu();
    require(!child.importEntered && child.importPc==0u && child.importReturnPc==0u,
            "child inherited parent's suspended import boundary");
    require(child.gpr[28]==0xCAFEu && child.gpr[29]==parent.gpr[29],"frame GP/stack");
    const auto nested=kernel.beginGuestCall(child,storage+0x80u,0,0,0,0,0);
    require(nested!=0 && nested!=outer,"nested token");
    thread->executionCpu().pc=kCallReturnSentinel;thread->executionCpu().gpr[2]=0xFFFFFFFFu;
    kernel.endTimeslice(*thread,kThreadReturnSentinel);thread=kernel.beginNextReady(1u);
    uint32_t result=0;
    require(!kernel.takeGuestCallReturn(outer,child,result),"wrong token consumed child");
    require(kernel.takeGuestCallReturn(nested,child,result) && result==0xFFFFFFFFu,"negative nested return lost");
    require(!kernel.takeGuestCallReturn(nested,child,result),"token consumed twice");
    child.pc=kCallReturnSentinel;child.gpr[2]=42;child.yielded=false;
    kernel.endTimeslice(*thread,kThreadReturnSentinel);thread=kernel.beginNextReady(2u);
    require(kernel.takeGuestCallReturn(outer,parent,result) && result==42 && parent.gpr[16]==0x12345678u,"parent restore");
    require(parent.importEntered && parent.importPc==storage+0x90u && parent.importReturnPc==storage+0x94u,
            "child return changed parent's suspended import boundary");
    kernel.endTimeslice(*thread,kThreadReturnSentinel);kernel.reset();
    require(!kernel.takeGuestCallReturn(outer,setup,result),"stale token accepted after reset");
    setup.gpr[4]=storage;
    require(kernel.dispatchThreadImport(4u,setup,0u),"recreated thread");
    setup.gpr[4]=setup.gpr[2];require(kernel.dispatchThreadImport(6u,setup,0u),"restarted new thread");
    thread=kernel.beginNextReady(0u);require(thread!=nullptr,"new owner missing");
    const auto fresh=kernel.beginGuestCall(thread->cpu,storage+0x80u,0,0,0,0,0);
    require(fresh!=0 && fresh!=outer && fresh!=nested,"reset reused stale token");
}

struct PausingExecutor final : IopGuestExecutor {
    unsigned resumes=0,starts=0;
    uint32_t result=0;
    bool fail=false;
    uint32_t executeGuestFunction(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t) override {
        throw std::logic_error("Unexpected synchronous callback");
    }
    std::optional<uint32_t> resumeGuestFunction(uint64_t &token,uint32_t,uint32_t,uint32_t,
        uint32_t,uint32_t,uint32_t,uint32_t) override {
        ++resumes;
        if(fail)throw std::runtime_error("recorded callback failure");
        if(token==0u){++starts;token=42u;return std::nullopt;}
        require(token==42u,"changed request token");token=0;return result;
    }
};

void completionOwnership(bool fail) {
    SifHost host;IopMemory memory;IopKernel kernel(memory);IopRpcBridge rpc(host,memory,kernel);
    require(rpc.installCommandService(),"owned command storage");
    require(kernel.setInternalEventFlag(rpc.commandEventFlag(),0x100u),"test command ack");
    require(rpc.prepareRpcStorage(),"owned RPC storage");
    const uint32_t sd=memory.allocate(256u,16u),function=sd+112u,data=sd+128u,q=sd+80u;
    memory.write32(sd+4u,function);memory.write32(sd+8u,data);memory.write32(sd+12u,4u);
    memory.write32(sd+32u,0x800u);memory.write32(sd+40u,0x900u);memory.write32(sd+44u,4u);
    memory.write32(sd+64u,q);memory.write32(data,0xBAADF00Du);
    PausingExecutor executor;executor.result=data;executor.fail=fail;
    if(fail) {
        bool threw=false;
        try{(void)rpc.executeRpcRequest(sd,executor);}catch(const std::runtime_error &){threw=true;}
        require(threw,"callback failure swallowed");
        require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Invalid && executor.resumes==1u,
                "failed callback automatically reexecuted");
        require(host.word(0x900u)==0xCCCCCCCCu,"failed callback published data");
        rpc.reset(true);return;
    }
    require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Pending,"yield reported complete");
    require(!rpc.removeServersInRange(function,4u),"active module removal allowed");
    IopCpuState remove{};remove.gpr[4]=sd;remove.gpr[5]=q;remove.gpr[2]=123u;
    require(!rpc.dispatchSifCmdImport(24u,remove) && remove.gpr[2]==123u,"active server removed");
    remove.gpr[4]=q;
    require(!rpc.dispatchSifCmdImport(25u,remove),"active queue removed");
    bool rejected=false;try{rpc.reset();}catch(const std::logic_error &){rejected=true;}
    require(rejected,"live continuation reset without cancellation");
    // Mutating the guest descriptor cannot change an already owned request.
    memory.write32(sd+40u,0xA00u);memory.write32(sd+44u,8u);
    host.rejectWrites=true;
    require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Pending,"failed transfer completed");
    require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Pending && executor.resumes==2u,
            "transport retry reentered callback");
    host.rejectWrites=false;
    require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Complete && executor.starts==1u,
            "owned completion did not finish once");
    require(host.word(0x900u)==0xBAADF00Du && host.word(0x904u)==0xCCCCCCCCu &&
            host.word(0xA00u)==0xCCCCCCCCu,"request descriptor was not snapshotted");
    require(rpc.removeServersInRange(function,4u),"completed request retained module ownership");
    rpc.reset();
}
void competingRequestOwner() {
    SifHost host;IopMemory memory;IopKernel kernel(memory);IopRpcBridge rpc(host,memory,kernel);
    require(rpc.installCommandService(),"command storage");
    require(kernel.setInternalEventFlag(rpc.commandEventFlag(),0x100u),"command ack");
    require(rpc.prepareRpcStorage(),"RPC storage");
    const uint32_t sd=memory.allocate(256u,16u),data=sd+128u;
    memory.write32(sd+4u,sd+112u);memory.write32(sd+32u,0x800u);
    memory.write32(sd+40u,0x900u);memory.write32(sd+44u,4u);memory.write32(data,0xBAADF00Du);
    PausingExecutor executor;executor.result=data;
    IopCpuState owner{},other{};owner.gpr[4]=other.gpr[4]=sd;
    require(rpc.dispatchSifCmdImport(21u,owner,&executor) && owner.yielded,"owner not suspended");
    require(!rpc.dispatchSifCmdImport(21u,other,&executor) && executor.resumes==1u,
            "foreign caller resumed or poisoned pending callback");
    host.rejectWrites=true;owner.yielded=false;
    require(rpc.dispatchSifCmdImport(21u,owner,&executor) && owner.yielded && executor.resumes==2u,
            "owner could not collect actual return");
    host.rejectWrites=false;
    require(!rpc.dispatchSifCmdImport(21u,other,&executor) && host.word(0x900u)==0xCCCCCCCCu,
            "foreign caller stole completed transport");
    owner.yielded=false;
    require(rpc.dispatchSifCmdImport(21u,owner,&executor) && !owner.yielded && executor.starts==1u &&
            host.word(0x900u)==0xBAADF00Du,"owner failed to finish exactly once");
}

void pendingServerRequeue() {
    SifHost host;IopMemory memory;IopKernel kernel(memory);IopRpcBridge rpc(host,memory,kernel);
    require(rpc.installCommandService(),"command storage");
    require(kernel.setInternalEventFlag(rpc.commandEventFlag(),0x100u),"command ack");
    require(rpc.prepareRpcStorage(),"RPC storage");
    const uint32_t sd=memory.allocate(256u,16u),q=sd+80u;
    memory.write32(sd+4u,sd+112u);memory.write32(sd+64u,q);memory.write32(q+8u,sd);
    memory.write32(sd+36u,0x1234u);memory.write32(sd+32u,0x800u);
    PausingExecutor executor;
    require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Pending,"callback not pending");
    std::array<uint32_t,14> packet{};packet[13]=sd;packet[8]=0x5678u;
    require(!rpc.queueRpcCall(packet.data(),sizeof(packet)),"second request overwrote active server");
    require(memory.read32(sd+36u)==0x1234u && memory.read32(q+12u)==0u,"rejected request mutated queue");
    require(rpc.executeRpcRequest(sd,executor)==IopRpcBridge::Execution::Complete && executor.starts==1u,
            "original request did not complete once");
    require(rpc.queueRpcCall(packet.data(),sizeof(packet)),"completed server remained locked");
}

}

int main() {
    const Test tests[]{
        {"Interpreted RPC yield resumes once",[]{interpreted(Pause::Yield);}},
        {"Interpreted RPC delay preserves stack and caller",[]{interpreted(Pause::Delay);}},
        {"Interpreted RPC event wait resumes owned child",[]{interpreted(Pause::Event);}},
        {"Event deletion returns error into owned child",[]{interpreted(Pause::Event,true);}},
        {"Instruction slice is pending, not return",[]{interpreted(Pause::Budget);}},
        {"Out-of-RAM callback cannot complete",[]{interpreted(Pause::OutsideRam);}},
        {"Missing import callback cannot complete",[]{interpreted(Pause::MissingImport);}},
        {"RpcLoop retains request across event wait",[]{interpreted(Pause::Event,false,true);}},
        {"Reply retry does not execute callback twice",[]{interpreted(Pause::Yield,false,false,true);}},
        {"Competing RPC caller cannot resume or steal completion",competingRequestOwner},
        {"Pending server rejects a second queued request",pendingServerRequeue},
        {"Owned nested tokens and actual negative returns",tokenOwnership},
        {"Pending request owns removal, snapshot and retry",[]{completionOwnership(false);}},
        {"Failed callback cannot be reentered or completed",[]{completionOwnership(true);}},
    };
    return run(tests);
}
