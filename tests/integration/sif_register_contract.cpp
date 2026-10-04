#include "MiniTest.h"
#include "ps2_runtime.h"
#include "ps2_iop_host.h"
#include "ps2_iop_transport.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "Kernel/Stubs/SIF.h"
#include "runtime/ee_scheduler.h"
#include "emulator/services/iop_rpc.h"
#include "emulator/core/iop_kernel.h"
#include "emulator/core/iop_memory.h"
#include "emulator/iop_emulator.h"

#include <array>
#include <cstdint>
#include <cstring>
#include <vector>
#include <fstream>
#include <iterator>

namespace ps2_stubs
{
    void resetSifState();
}

namespace
{
    constexpr int KE_OK = 0;
    uint32_t observedSifArgument=0u, observedSifValue=0u;
    void observeSifCommand(uint8_t* ram,R5900Context* ctx,PS2Runtime* runtime) {
        observedSifArgument=::getRegU32(ctx,5);
        std::memcpy(&observedSifValue,ram+::getRegU32(ctx,4)+20u,4u);
        ctx->pc=0u;
        runtime->eeScheduler().requestStop();
    }

    struct TestEnv
    {
        std::vector<uint8_t> rdram;
        R5900Context ctx{};
        PS2Runtime runtime;

        TestEnv() : rdram(PS2_RAM_SIZE, 0u)
        {
            ps2_stubs::resetSifState();
            std::memset(&ctx, 0, sizeof(ctx));
        }
    };

    void setRegU32(R5900Context &ctx, int reg, uint32_t value)
    {
        ctx.r[reg] = _mm_set_epi64x(0, static_cast<int64_t>(value));
    }

    int32_t getRegS32(const R5900Context &ctx, int reg)
    {
        return static_cast<int32_t>(::getRegU32(&ctx, reg));
    }

}

void register_sif_register_contract()
{
 MiniTest::Case("SifRegisterContract", [](TestCase &tc)
 {
        tc.Run("original game EESYNC reads original SECRMAN through actual runtime ROM adapter", [](TestCase &t)
        {
            TestEnv env;
            constexpr const char* probeRoot="C:/Fate Soldiers 3/artifacts/lockstep_20261004/reboot_module_probe_001/";
            std::ifstream secrman(std::string(probeRoot)+"SECRMAN.IRX",std::ios::binary);
            std::ifstream module(std::string(probeRoot)+"ioprp253/EESYNC.IRX",std::ios::binary);
            t.IsTrue(static_cast<bool>(secrman)&&static_cast<bool>(module),"identified original artifacts available");
            std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(secrman),{}};
            std::vector<uint8_t> image{std::istreambuf_iterator<char>(module),{}};
            t.Equals(bytes.size(),size_t{17633},"actual BIOS SECRMAN size");
            t.Equals(image.size(),size_t{1545},"actual IOPRP253 EESYNC size");
            PS2RomProfile profile;
            profile.id="original-eesync-secrman-contract";
            profile.matcher.elfName="ORIGINAL_EESYNC_CONTRACT";
            profile.files["SECRMAN"]=std::move(bytes);
            profile.files["EESYNC"]=std::move(image);
            PS2RomDevice::registerProfile(std::move(profile));
            ps2x::iop::GameIdentity identity;identity.elfName="ORIGINAL_EESYNC_CONTRACT";
            t.IsTrue(env.runtime.romDevice().configure(identity),"original ROM artifacts mounted");
            PS2IopHostAdapter host(env.runtime);
            auto scope=host.enterCall(&env.ctx,env.rdram.data());
            ps2x::iop::detail::IopEmulator iop(host);
            const auto result=iop.loadModule("rom0:EESYNC",nullptr,0u);
            t.IsTrue(result.moduleId>0&&result.startResult==0,"actual original EESYNC executes via ROM file adapter");
            uint32_t ready=0u;
            t.IsTrue(host.readSifRegister(4u,ready)&&ready==0x40000u,"actual original callback publishes bootend");
            t.IsTrue(!iop.freeMemory(0x120100u),"callback scratch released");
            t.Equals(iop.allocateMemory(16u),0x120110u,"actual original ROM size selects256byte reservation");
        });
        tc.Run("IOP native ROM handles retain owned bytes and reject missing files", [](TestCase &t)
        {
            TestEnv env;
            PS2RomProfile profile;
            profile.id="rom-handle-contract";
            profile.matcher.elfName="ROM_HANDLE_CONTRACT";
            profile.files["EMPTY"]={};
            profile.files["PAYLOAD"]={1u,2u,3u,4u};
            PS2RomDevice::registerProfile(std::move(profile));
            ps2x::iop::GameIdentity identity;
            identity.elfName="ROM_HANDLE_CONTRACT";
            t.IsTrue(env.runtime.romDevice().configure(identity),"test ROM profile selected");
            PS2IopHostAdapter host(env.runtime);
            t.Equals(host.translateGuestPath("rom0:PAYLOAD"),std::string("rom0:PAYLOAD"),"ROM path retains device identity");
            const auto handle=host.openHostFile("rom0:payload");
            t.IsTrue(handle!=0u,"mounted ROM file opens");
            uint64_t size=0u;
            t.IsTrue(host.hostFileSize(handle,size)&&size==4u,"exact ROM size");
            std::array<uint8_t,4> bytes{};
            size_t read=0u;
            t.IsTrue(host.readHostFile(handle,1u,bytes.data(),4u,read)&&read==3u&&bytes[0]==2u&&bytes[2]==4u,"bounded partial ROM read");
            t.IsTrue(host.readHostFile(handle,99u,bytes.data(),1u,read)&&read==0u,"ROM EOF behaves as host file EOF");
            t.IsTrue(!host.readHostFile(handle,0u,nullptr,1u,read),"null nonempty read rejected");
            t.IsTrue(env.runtime.romDevice().configure({}),"mounts can change");
            t.IsTrue(host.readHostFile(handle,0u,bytes.data(),4u,read)&&read==4u&&bytes[3]==4u,"open handle retains original snapshot across remount");
            host.closeHostFile(handle);host.closeHostFile(handle);
            t.IsTrue(!host.hostFileSize(handle,size),"closed handle invalid");
            t.Equals(host.openHostFile("rom0:missing"),uint64_t{0},"unmounted ROM file fails");
            t.IsTrue(env.runtime.romDevice().configure(identity),"remount original profile");
            const auto empty=host.openHostFile("rom0:EMPTY");
            t.IsTrue(empty!=0u&&host.hostFileSize(empty,size)&&size==0u,"empty mounted ROM file is valid");
            host.closeHostFile(empty);
        });
        tc.Run("incoming SIF command resolves live original EE guest handler tables", [](TestCase &t)
        {
            TestEnv env;
            env.runtime.eeScheduler().reset(env.rdram.data(),env.ctx);
            constexpr uint32_t data=0x16000u,systemTable=0x17000u,userTable=0x18000u,handler=0x19000u;
            auto word=[&](uint32_t address,uint32_t value){std::memcpy(env.rdram.data()+address,&value,4u);};
            t.IsTrue(env.runtime.registerFunction(handler,observeSifCommand),"diagnostic handler registered");
            word(data+12u,systemTable|0x20000000u);word(data+16u,32u);
            word(data+20u,userTable);word(data+24u,2u);
            word(systemTable+8u,handler);word(systemTable+12u,data);
            word(userTable+8u,handler);word(userTable+12u,0x2468u);
            setRegU32(env.ctx,4,0x80000001u);setRegU32(env.ctx,5,data|0x80000000u);
            ps2_stubs::sceSifSetReg(env.rdram.data(),&env.ctx,&env.runtime);
            const std::array<uint32_t,6> packet{24u,0u,0x80000001u,0u,0u,1u};
            t.IsTrue(ps2_stubs::dispatchSifCommand(env.rdram.data(),&env.runtime,0x80000001u,packet.data(),sizeof(packet)),"system command resolves original descriptor and RAM alias");
            t.IsTrue(ps2_stubs::dispatchSifCommand(env.rdram.data(),&env.runtime,1u,packet.data(),sizeof(packet)),"user command resolves separate table");
            word(systemTable+8u,0u);
            t.IsTrue(!ps2_stubs::dispatchSifCommand(env.rdram.data(),&env.runtime,0x80000001u,packet.data(),sizeof(packet)),"removed original handler not cached");
            t.IsTrue(!ps2_stubs::dispatchSifCommand(env.rdram.data(),&env.runtime,2u,packet.data(),sizeof(packet)),"original user count bounds checked");
            word(data+12u,PS2_RAM_SIZE-4u);word(data+16u,32u);
            t.IsTrue(!ps2_stubs::dispatchSifCommand(env.rdram.data(),&env.runtime,0x80000001u,packet.data(),sizeof(packet)),"truncated guest handler table rejected");
            observedSifArgument=observedSifValue=0u;
            env.runtime.eeScheduler().run();
            t.Equals(observedSifArgument,data,"scheduler invokes resolved original handler argument");
            t.Equals(observedSifValue,1u,"scheduler receives copied original SET_SREG payload");
        });
        tc.Run("native EE SetDma reaches installed ROM SIFCMD receiver and INIT_CMD handler", [](TestCase &t)
        {
            TestEnv env;
            t.IsTrue(env.runtime.memory().initialize(),"native EE memory initializes");
            env.runtime.eeScheduler().reset(env.rdram.data(),env.ctx);
            const auto loaded=env.runtime.loadIopModule("rom0:SIFCMD");
            t.IsTrue(loaded.moduleId>0,"ROM module installs actual command service");
            const uint32_t rx=env.runtime.memory().read32(0x1000F210u);
            t.IsTrue(rx!=0u&&env.runtime.isIopMemoryRange(rx,0x240u),"published receiver owns actual IOP buffers and tables");
            t.Equals(env.runtime.memory().read32(0x1000F230u),0u,"ROM installation alone does not seed CMDINIT");
            env.runtime.eeScheduler().accountCycles(8u);
            t.Equals(env.runtime.memory().read32(0x1000F230u),0x20000u,"scheduled InitCmd publishes readiness of owned receiver");
            env.runtime.memory().write32(0x1000F230u,0x20000u);
            env.runtime.eeScheduler().accountCycles(8u);
            t.Equals(env.runtime.memory().read32(0x1000F230u),0u,"pending handshake does not republish acknowledged readiness");
            constexpr uint32_t packetAddress=0x14000u,descriptorAddress=0x15000u;
            const std::array<uint32_t,5> packet{20u,0u,0x80000002u,0u,0x20371740u};
            const std::array<uint32_t,4> descriptor{packetAddress,rx,20u,0u};
            std::memcpy(env.rdram.data()+packetAddress,packet.data(),sizeof(packet));
            std::memcpy(env.rdram.data()+descriptorAddress,descriptor.data(),sizeof(descriptor));
            env.runtime.memory().write32(0x1000F220u,0x20000u);
            setRegU32(env.ctx,4,descriptorAddress);setRegU32(env.ctx,5,1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(),&env.ctx,&env.runtime);
            t.IsTrue(getRegS32(env.ctx,2)>0,"actual EE DMA returns completion id");
            std::array<uint32_t,5> received{};
            t.IsTrue(env.runtime.readIopMemory(rx,received.data(),sizeof(received)),"read actual IOP receiver after transfer");
            t.Equals(received[0],0u,"handler consumed psize after actual DMA");
            t.Equals(received[2],0x80000002u,"actual IOP receiver keeps command id");
            t.Equals(received[4],0x20371740u,"actual IOP receiver keeps EE destination");
            t.Equals(env.runtime.memory().read32(0x1000F220u),0u,"INIT_CMD handler clears actual EE MSFLAG");
            const auto again=env.runtime.loadIopModule("rom0:SIFCMD");
            t.Equals(again.moduleId,loaded.moduleId,"repeat load reuses same module");
            t.Equals(env.runtime.memory().read32(0x1000F210u),rx,"repeat load preserves receiver");
            env.runtime.eeScheduler().accountCycles(8u);
            t.Equals(env.runtime.memory().read32(0x1000F230u),0u,"completed handshake does not restart on repeat module load");
        });

        tc.Run("IOP SIFCMD soft registers and guest handler tables preserve SDK layout", [](TestCase &t)
        {
            TestEnv env;
            PS2IopHostAdapter host(env.runtime);
            ps2x::iop::detail::IopMemory memory(&host);
            ps2x::iop::detail::IopKernel kernel(memory);
            ps2x::iop::detail::IopRpcBridge bridge(host,memory,kernel);
            ps2x::iop::detail::IopCpuState cpu{};
            auto call=[&](uint16_t ordinal,uint32_t a0,uint32_t a1=0u,uint32_t a2=0u) {
                cpu.gpr[4]=a0;cpu.gpr[5]=a1;cpu.gpr[6]=a2;cpu.gpr[2]=0xDEADBEEFu;
                return bridge.dispatchSifCmdImport(ordinal,cpu);
            };
            t.IsTrue(call(7,31u,0x89ABCDEFu),"SetSreg handles last register");
            t.Equals(cpu.gpr[2],0xDEADBEEFu,"void SetSreg preserves v0");
            t.IsTrue(call(6,31u),"GetSreg handles last register");
            t.Equals(cpu.gpr[2],0x89ABCDEFu,"GetSreg returns full32 value");
            t.IsTrue(!call(7,32u,1u),"out of range soft register rejected");
            const uint32_t user=memory.allocate(24u),system=memory.allocate(36u);
            t.IsTrue(user!=0u && system!=0u,"real IOP table allocations");
            memory.write32(system+32u,0xA5A5A5A5u);
            t.IsTrue(call(8,user,3u),"register user stride8 table");
            t.IsTrue(call(9,system,3u),"register system stride12 table");
            t.IsTrue(call(10,2u,0x123400u,0x4321u),"add user handler");
            t.Equals(memory.read32(user+16u),0x123400u,"user handler pointer at index2 stride8");
            t.Equals(memory.read32(user+20u),0x4321u,"user handler argument");
            t.IsTrue(call(10,0x80000002u,0x567800u,0x8765u),"add system handler");
            t.Equals(memory.read32(system+24u),0x567800u,"system handler pointer at index2 stride12");
            t.Equals(memory.read32(system+28u),0x8765u,"system handler argument");
            t.Equals(memory.read32(system+32u),0xA5A5A5A5u,"system unknown08 remains intact");
            t.IsTrue(!call(9,0x1FFFFCu,3u),"invalid replacement rejected atomically");
            t.IsTrue(!call(10,0x80000003u,1u,2u),"out of range handler rejected");
            t.IsTrue(call(11,0x80000002u),"remove still uses original valid table");
            t.Equals(memory.read32(system+24u),0u,"remove clears function");
            t.Equals(memory.read32(system+28u),0u,"remove clears argument");
            t.Equals(memory.read32(system+32u),0xA5A5A5A5u,"remove preserves unknown08");
            t.IsTrue(call(8,0u,0u),"null zero user table disables dispatch");
            t.IsTrue(!call(10,0u,1u,2u),"disabled user table rejects registration");
            bridge.reset();
            t.IsTrue(call(6,31u),"get after actual reset");
            t.Equals(cpu.gpr[2],0u,"actual reset clears soft registers");
            t.IsTrue(!call(10,0x80000002u,1u,2u),"actual reset drops system table registration");
        });

        tc.Run("IOP guest SW and LW share SIF physical registers with EE", [](TestCase &t)
        {
            TestEnv env;t.IsTrue(env.runtime.memory().initialize(),"EE memory initializes");
            PS2IopHostAdapter host(env.runtime);
            ps2x::iop::detail::IopMemory memory(&host);
            ps2x::iop::detail::IopCpuCore core(memory);
            ps2x::iop::detail::IopCpuState cpu{};
            // sw a1,0(a0); lw v0,0(a0); nop (R3000 load delay).
            memory.write32(0x1000u,0xAC850000u);memory.write32(0x1004u,0x8C820000u);memory.write32(0x1008u,0u);
            auto execute=[&](uint32_t address,uint32_t value) {
                cpu={};cpu.pc=0x1000u;cpu.gpr[4]=address;cpu.gpr[5]=value;
                for(int i=0;i<3;++i)t.IsTrue(core.executeInstruction(cpu),"IOP guest instruction executes");
                return cpu.gpr[2];
            };
            t.Equals(execute(0xBD000010u,0x00123400u),0x00123400u,"IOP uncached SW posts and LW reads receive address");
            t.Equals(env.runtime.memory().read32(0x1000F210u),0x00123400u,"EE sees IOP guest address write");
            t.Equals(execute(0x1D000030u,0x20000u),0x20000u,"IOP guest SW publishes flag via real memory path");
            t.Equals(env.runtime.memory().read32(0x1000F230u),0x20000u,"EE sees explicit guest publication");
            env.runtime.memory().write32(0x1000F230u,0x20000u);
            t.Equals(memory.read32(0xBD000030u),0u,"IOP observes EE acknowledgement");
            env.runtime.memory().write32(0x1000F220u,0x10003u);
            t.Equals(execute(0xBD000020u,1u),0x10002u,"IOP guest clears selected EE flags");
            env.runtime.memory().write32(0x1000F200u,0x1234u);
            t.Equals(execute(0xBD000000u,0xBADu),0x1234u,"IOP guest MAINADDR remains read-only");
        });

        tc.Run("IOP sifman imports publish the same physical registers read by EE", [](TestCase &t)
        {
            TestEnv env;
            t.IsTrue(env.runtime.memory().initialize(),"EE backing initializes");
            PS2IopHostAdapter host(env.runtime);
            ps2x::iop::detail::IopMemory memory;
            ps2x::iop::detail::IopKernel kernel(memory);
            ps2x::iop::detail::IopRpcBridge bridge(host,memory,kernel);
            ps2x::iop::detail::IopCpuState cpu{};
            auto call=[&](uint16_t ordinal,uint32_t value) {
                cpu.gpr[4]=value;cpu.gpr[2]=0xDEADBEEFu;
                t.IsTrue(bridge.dispatchSifManImport(ordinal,cpu),"real import dispatcher handles sifman register ordinal");
                return cpu.gpr[2];
            };
            auto ee=[&](uint32_t index) {
                setRegU32(env.ctx,4,index);
                ps2_stubs::sceSifGetReg(env.rdram.data(),&env.ctx,&env.runtime);
                return ::getRegU32(&env.ctx,2);
            };
            t.Equals(call(23,0),0u,"IOP reset observes no readiness");
            t.Equals(call(27,0x00123400u),0x00123400u,"IOP SetSubAddr returns posted receive address");
            t.Equals(call(26,0),0x00123400u,"IOP GetSubAddr sees same address");
            t.Equals(ee(2),0x00123400u,"EE physical SUBADDR sees IOP publication");
            env.runtime.memory().write32(0x1000F200u,0x20371740u);
            t.Equals(call(25,0),0x20371740u,"IOP sees EE receive address");
            t.IsTrue(host.writeSifRegister(1,0xBADu),"IOP MAINADDR write acknowledged as read-only");
            t.Equals(ee(1),0x20371740u,"IOP cannot overwrite EE MAINADDR");
            env.runtime.memory().write32(0x1000F220u,0x10003u);
            t.Equals(call(21,0),0x10003u,"IOP reads EE flags");
            t.Equals(call(22,1),0x10002u,"IOP acknowledges only selected MSFLAG bits");
            t.Equals(ee(3),0x10002u,"EE sees IOP acknowledgement");
            t.Equals(call(24,0x20000u),0x20000u,"explicit synthetic producer sets CMDINIT");
            t.Equals(call(24,0x40000u),0x60000u,"IOP flag writes accumulate");
            for(int i=0;i<4;++i)t.Equals(ee(4),0x60000u,"EE polling preserves published flags");
            env.runtime.memory().write32(0x1000F230u,0x20000u);
            t.Equals(call(23,0),0x40000u,"EE acknowledges CMDINIT without clearing BOOTEND");
            uint32_t value=0xFFFFu;
            t.IsTrue(!host.readSifRegister(5,value)&&value==0,"invalid read rejects without invented value");
            t.IsTrue(!host.writeSifRegister(0,1),"invalid write rejects");
        });

        tc.Run("SIF hardware queries use passive MMIO backing", [](TestCase &t)
        {
            TestEnv env;
            t.IsTrue(env.runtime.memory().initialize(), "memory backend initializes");
            auto query = [&](uint32_t reg)
            {
                setRegU32(env.ctx, 3, 0x7Au); setRegU32(env.ctx, 4, reg);
                env.runtime.handleSyscall(env.rdram.data(), &env.ctx, 0u);
                return ::getRegU32(&env.ctx, 2);
            };
            t.Equals(query(4u), 0u, "reset MMIO does not invent CMDINIT or BOOTEND");
            env.runtime.memory().write32(0x1000F200u, 0x12345678u);
            env.runtime.memory().write32(0x1000F210u, 0x00123400u);
            t.Equals(query(1u), 0x12345678u, "MAINADDR reads MSCOM backing");
            t.Equals(query(2u), 0x00123400u, "SUBADDR reads SMCOM backing");
            t.Equals(query(0x80000000u), 0u, "software SUBADDR is distinct from physical SUBADDR");
            env.runtime.memory().write32(0x1000F220u, 1u);
            env.runtime.memory().write32(0x1000F220u, 4u);
            t.Equals(query(3u), 5u, "EE MSFLAG writes accumulate set bits");
            env.runtime.memory().write32(0x1000F230u, 0x60000u);
            for(int i=0;i<4;++i) {
                t.Equals(query(4u), 0u, "EE SMFLAG clear cannot create readiness");
                t.Equals(env.runtime.Load32(env.rdram.data(), &env.ctx, 0xB000F230u), 0u, "guest uncached read matches syscall");
                t.Equals(query(2u), 0x00123400u, "repeated reads preserve posted address");
            }
        });

        tc.Run("numeric SIF register syscalls route through handleSyscall", [](TestCase &t)
        {
            TestEnv env;
            constexpr uint32_t reg = 0x80000002u;
            auto invoke = [&](uint32_t id, uint32_t key, uint32_t value, bool encoded)
            {
                setRegU32(env.ctx, 3, id);
                setRegU32(env.ctx, 4, key);
                setRegU32(env.ctx, 5, value);
                env.ctx.r[2] = _mm_set_epi64x(0x12345678, 0x76543210);
                env.runtime.handleSyscall(env.rdram.data(), &env.ctx, encoded ? id : 0u);
                return ::getRegU32(&env.ctx, 2);
            };
            t.Equals(invoke(0x7Au, 0x76543210u, 0u, false), 0u,
                     "unknown register read must be handled and return zero");
            t.Equals(invoke(0x79u, reg, 0x89ABCDEFu, false), 0u,
                     "BIOS software SetReg returns zero");
            t.Equals(invoke(0x7Au, reg, 0u, false), 0x89ABCDEFu,
                     "v1 GetReg returns the stored low32 value");
            t.Equals(static_cast<uint64_t>(_mm_extract_epi64(env.ctx.r[2], 0)),
                     UINT64_C(0xFFFFFFFF89ABCDEF), "existing syscall ABI sign extends low32");
            t.Equals(static_cast<uint64_t>(_mm_extract_epi64(env.ctx.r[2], 1)),
                     UINT64_C(0x12345678), "BIOS LW preserves upper64");
            t.Equals(invoke(0x79u, reg, 0x12345678u, true), 0u,
                     "encoded software SetReg returns zero");
            t.Equals(invoke(0x7Au, reg, 0u, true), 0x12345678u,
                     "encoded GetReg uses the same implementation");
            for (int i = 0; i < 4; ++i)
                t.Equals(invoke(0x7Au, 4u, 0u, false), 0u,
                         "polling cannot create a readiness transition");
        });

        tc.Run("BIOS SetReg physical effects and bounded software bank", [](TestCase &t)
        {
            TestEnv env;
            auto invoke=[&](uint32_t id,uint32_t key,uint32_t value) {
                setRegU32(env.ctx,3,id);setRegU32(env.ctx,4,key);setRegU32(env.ctx,5,value);
                env.ctx.r[2]=_mm_set_epi64x(0x13579bdf,0x2468ace0);
                env.runtime.handleSyscall(env.rdram.data(),&env.ctx,0u);
                t.Equals(static_cast<uint64_t>(_mm_extract_epi64(env.ctx.r[2],1)),UINT64_C(0x13579bdf),"physical/software SIF calls preserve high64");
                return ::getRegU32(&env.ctx,2);
            };
            t.Equals(invoke(0x79,1,0x81234567),0x81234567u,"MAIN setter returns signed readback");
            t.Equals(env.runtime.memory().readIORegister(0x1000f200),0x81234567u,"MAIN setter writes physical register");
            env.runtime.memory().writeIopSifRegister(2,0x11223344);
            t.Equals(invoke(0x79,2,0x99999999),0u,"SUBADDR has no EE setter");
            t.Equals(invoke(0x7a,2,0),0x11223344u,"SUBADDR read retains IOP owned address");
            t.Equals(invoke(0x79,3,1),1u,"MSFLAG first set readback");
            t.Equals(invoke(0x79,3,4),5u,"MSFLAG accumulates bits through syscall");
            env.runtime.memory().writeIopSifRegister(4,0x60000);
            t.Equals(invoke(0x79,4,0x10000),0x60000u,"SMFLAG acknowledge does not create absent bits");
            t.Equals(invoke(0x79,4,0x20000),0x40000u,"SMFLAG selective clear returns remaining bits");
            t.Equals(invoke(0x7a,4,0),0x40000u,"physical GetReg observes cleared SMFLAG");
            t.Equals(invoke(0x79,0x8000001f,0x89abcdef),0u,"last software bank slot stores and returns zero");
            t.Equals(invoke(0x7a,0x8000001f,0),0x89abcdefu,"last software bank slot readable");
            for(const uint32_t invalid : {0u,5u,0x7fffffffu,0x80000020u,0xffffffffu}) {
                t.Equals(invoke(0x79,invalid,0xabcdef01),0u,"invalid setter returns zero");
                t.Equals(invoke(0x7a,invalid,0),0u,"invalid register does not persist arbitrary state");
            }
        });

        tc.Run("resetSifState does not invent SIF readiness", [](TestCase &t)
        {
            TestEnv env;

            auto getReg = [&](uint32_t reg) -> uint32_t
            {
                setRegU32(env.ctx, 4, reg);
                ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
                return ::getRegU32(&env.ctx, 2);
            };

            t.Equals(getReg(0x4u), 0u, "SIF reset alone must not publish readiness");
            t.Equals(getReg(0x80000000u), 0u, "SIF main-address register should default to zero");
            t.Equals(getReg(0x80000001u), 0u, "SIF sub-address register should default to zero");
            t.Equals(getReg(0x80000002u), 0u, "SIF mscom register should default to zero");
        });

        tc.Run("ExitCmd preserves software registers, soft registers and command buffers", [](TestCase &t)
        {
            TestEnv env;
            for(uint32_t id=0x80000000u;id<=0x80000002u;++id) {
                setRegU32(env.ctx,4,id);setRegU32(env.ctx,5,0x12345000u+(id&3u));
                ps2_stubs::sceSifSetReg(env.rdram.data(),&env.ctx,&env.runtime);
            }
            setRegU32(env.ctx,4,7u);setRegU32(env.ctx,5,0x87654321u);
            ps2_stubs::sceSifSetSreg(env.rdram.data(),&env.ctx,&env.runtime);
            setRegU32(env.ctx,4,0x13000u);
            ps2_stubs::sceSifSetCmdBuffer(env.rdram.data(),&env.ctx,&env.runtime);
            ps2_stubs::sceSifExitCmd(env.rdram.data(),&env.ctx,&env.runtime);
            ps2_stubs::sceSifExitCmd(env.rdram.data(),&env.ctx,&env.runtime);
            for(uint32_t id=0x80000000u;id<=0x80000002u;++id) {
                setRegU32(env.ctx,4,id);
                ps2_stubs::sceSifGetReg(env.rdram.data(),&env.ctx,&env.runtime);
                t.Equals(::getRegU32(&env.ctx,2),0x12345000u+(id&3u),"close does not clear kernel software registers");
            }
            setRegU32(env.ctx,4,7u);ps2_stubs::sceSifGetSreg(env.rdram.data(),&env.ctx,&env.runtime);
            t.Equals(::getRegU32(&env.ctx,2),0x87654321u,"close preserves software command registers");
            setRegU32(env.ctx,4,0x14000u);ps2_stubs::sceSifSetCmdBuffer(env.rdram.data(),&env.ctx,&env.runtime);
            t.Equals(::getRegU32(&env.ctx,2),0x13000u,"close preserves command buffer registration");
            ps2_stubs::resetSifState();setRegU32(env.ctx,4,0x80000002u);
            ps2_stubs::sceSifGetReg(env.rdram.data(),&env.ctx,&env.runtime);
            t.Equals(::getRegU32(&env.ctx,2),0u,"actual reset still clears software state");
        });

        tc.Run("sceSifExitCmd preserves kernel software state", [](TestCase &t)
        {
            TestEnv env;

            setRegU32(env.ctx, 4, 0x4u);
            setRegU32(env.ctx, 5, 0x12340000u);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, 0x80000002u);
            setRegU32(env.ctx, 5, 0x89ABCDEFu);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);

            ps2_stubs::sceSifExitCmd(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "sceSifExitCmd should succeed");

            auto getReg = [&](uint32_t reg) -> uint32_t
            {
                setRegU32(env.ctx, 4, reg);
                ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
                return ::getRegU32(&env.ctx, 2);
            };

            t.Equals(getReg(0x4u), 0u, "sceSifExitCmd must not invent a boot-ready service");
            t.Equals(getReg(0x80000002u), 0x89ABCDEFu, "sceSifExitCmd preserves kernel RPCINIT software state");
        });

 });
}
