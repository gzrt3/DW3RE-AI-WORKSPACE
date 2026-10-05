#include "fate/boot_continuations.hpp"
#include "fate/syscall_return_words.hpp"
#include "fate/verified_return_tail.hpp"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"

#include <array>
#include <cstring>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace ps2_stubs {
void sceSifSetReg(uint8_t*,R5900Context*,PS2Runtime*);
bool dispatchSifCommand(uint8_t*,PS2Runtime*,uint32_t,const void*,size_t) noexcept;
}

void FUN_001966a0_0x1966a0(uint8_t*,R5900Context*,PS2Runtime*);
void FUN_0023a7f0_0x23a7f0(uint8_t*,R5900Context*,PS2Runtime*);
void entry_00238bb0_0x238bb0(uint8_t*,R5900Context*,PS2Runtime*);
void entry_00239bbc_0x239bbc(uint8_t*,R5900Context*,PS2Runtime*);
void entry_00239bf0_0x239bf0(uint8_t*,R5900Context*,PS2Runtime*);

// Isolated diagnostic owns the real runtime's dispatch table. Original source
// functions are linked for the resume alias; no substitute guest code is used.
extern const uint32_t g_ps2RecompiledFunctionTableBase = 0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = PS2_RAM_SIZE / 4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE / 4]{};

namespace {
void require(bool ok, const char* reason) { if (!ok) throw std::runtime_error(reason); }
void word(uint8_t* ram, uint32_t pc, uint32_t value) { std::memcpy(ram+pc,&value,4); }
uint32_t word(const uint8_t* ram, uint32_t pc) { uint32_t value; std::memcpy(&value,ram+pc,4); return value; }
void reg(R5900Context& ctx, unsigned index, uint64_t low, uint64_t high) {
    const uint64_t parts[]{low,high}; std::memcpy(&ctx.r[index],parts,16);
}
uint64_t reg(const R5900Context& ctx, unsigned index, unsigned half=0) {
    uint64_t parts[2]; std::memcpy(parts,&ctx.r[index],16); return parts[half];
}
void fill_opcodes(uint8_t* ram) {
    const std::array<uint32_t,20> cacheTail{
        0x254affffu,0xfu,0xbd180000u,0xfu,0xbd180040u,0xfu,0xbd180080u,0xfu,
        0xbd1800c0u,0xfu,0xbd180100u,0xfu,0xbd180140u,0xfu,0xbd180180u,0xfu,
        0xbd1801c0u,0xfu,0x1d40ffedu,0x25080200u};
    for(size_t i=0;i<cacheTail.size();++i) word(ram,0x1a700cu+static_cast<uint32_t>(i)*4u,cacheTail[i]);
    const std::array<uint32_t,9> stringTail{
        0x5440fffau,0x24840001u,0x0c08f390u,0u,0x0200102du,
        0x7bbf0010u,0x7bb00000u,0x03e00008u,0x27bd0020u};
    for(size_t i=0;i<stringTail.size();++i) word(ram,0x23cb40u+static_cast<uint32_t>(i)*4u,stringTail[i]);
    word(ram,0x001b0308u,0x54400003u);
    word(ram,0x001b030cu,0xae3088c0u);
    word(ram,0x001b0310u,0x1000001eu);
    word(ram,0x001b0314u,0x0000102du);
    word(ram,0x001b0318u,0x0240202du);
    word(ram,0x001b031cu,0x0c069beeu);
    word(ram,0x001b0320u,0x24050004u);
    word(ram,0x001b0324u,0x3c020029u);
    word(ram,0x001b0328u,0x3c040029u);
    word(ram,0x001b032cu,0x24508480u);
    word(ram,0x001b0330u,0x24848cc8u);
    word(ram,0x001b0334u,0x0240382du);
    word(ram,0x001b0338u,0xafa00000u);
    word(ram,0x001b033cu,0x24050022u);
    word(ram,0x001b0340u,0x0000302du);
    word(ram,0x001b0344u,0x24080004u);
    word(ram,0x001b0348u,0x0200482du);
    word(ram,0x001b034cu,0x240a0004u);
    word(ram,0x001b0350u,0x0c069e2au);
    word(ram,0x001b0354u,0x0000582du);
    word(ram,0x001b0358u,0x04410006u);
    word(ram,0x001b035cu,0x3c030028u);
    word(ram,0x001b0360u,0x3c020028u);
    word(ram,0x001b0364u,0x0c069210u);
    word(ram,0x001b0368u,0x8c4472acu);
    word(ram,0x001b036cu,0x10000007u);
    word(ram,0x001b0370u,0x0000102du);
    word(ram,0x001b0374u,0x3c022000u);
    word(ram,0x001b0378u,0x02021025u);
    word(ram,0x001b037cu,0x8c6472acu);
    word(ram,0x001b0380u,0x0c069210u);
    word(ram,0x001b0384u,0x8c500000u);
    word(ram,0x001b0388u,0x0200102du);
    word(ram,0x001b038cu,0xdfbf0040u);
    word(ram,0x001b0390u,0xdfb20030u);
    word(ram,0x001b0394u,0xdfb10020u);
    word(ram,0x001b0398u,0xdfb00010u);
    word(ram,0x001b039cu,0x03e00008u);
    word(ram,0x001b03a0u,0x27bd0050u);
    word(ram,0x1a88bcu,0xdfbf0000u);
    word(ram,0x1a88c0u,0x0000102du);
    word(ram,0x1a88c4u,0x03e00008u);
    word(ram,0x1a88c8u,0x27bd0010u);
    word(ram,0x1abd78u,0xdfbf0000u);
    word(ram,0x1abd7cu,0x0000102du);
    word(ram,0x1abd80u,0x03e00008u);
    word(ram,0x1abd84u,0x27bd0010u);
    word(ram,0x1a4ca0u,0x3c020028u);
    word(ram,0x1a4ca4u,0x03e00008u);
    word(ram,0x1a4ca8u,0xac405b50u);
    word(ram,0x17ff00u,0x0u);
    word(ram,0x17ff04u,0x0u);
    word(ram,0x17ff08u,0x0u);
    word(ram,0x17ff0cu,0x0u);
    word(ram,0x17ff10u,0x1040fff8u);
    word(ram,0x17ff14u,0x0u);
    word(ram,0x17ff18u,0xc069c1au);
    word(ram,0x17ff1cu,0x202du);

    word(ram,0x1aca88u,0x27bdfff0u);
    word(ram,0x1aca8cu,0xffbf0000u);
    word(ram,0x1aca90u,0xc06930cu);
    word(ram,0x1aca94u,0x24040004u);
    word(ram,0x1aca98u,0x3c030004u);
    word(ram,0x1aca9cu,0x431024u);
    word(ram,0x1acaa0u,0x10400004u);
    word(ram,0x1acaa4u,0x102du);
    word(ram,0x1acaa8u,0xc069328u);
    word(ram,0x1acaacu,0x0u);
    word(ram,0x1acab0u,0x24020001u);
    word(ram,0x1acab4u,0xdfbf0000u);
    word(ram,0x1acab8u,0x3e00008u);
    word(ram,0x1acabcu,0x27bd0010u);

    word(ram,0x17fee4u,0x0u);
    word(ram,0x17fee8u,0x0u);
    word(ram,0x17feecu,0x1040fffau);
    word(ram,0x17fef0u,0x0u);
    word(ram,0x17fef4u,0x0u);
    word(ram,0x17fef8u,0xc06b2a2u);
    word(ram,0x17fefcu,0x0u);

    word(ram,0x1ac920u,0x27bdffc0u);
    word(ram,0x1ac924u,0xffb10020u);
    word(ram,0x1ac928u,0xffb00010u);
    word(ram,0x1ac92cu,0x80882du);
    word(ram,0x1ac930u,0xffbf0030u);
    word(ram,0x1ac934u,0xc0692bcu);
    word(ram,0x1ac938u,0xa0802du);
    word(ram,0x1ac93cu,0x3c048000u);
    word(ram,0x1ac940u,0xc06930cu);
    word(ram,0x1ac944u,0x0u);
    word(ram,0x1ac948u,0x3c0a0037u);
    word(ram,0x1ac94cu,0x40582du);
    word(ram,0x1ac950u,0x254349c0u);
    word(ram,0x1ac954u,0xac700014u);
    word(ram,0x1ac958u,0x82220000u);
    word(ram,0x1ac95cu,0x1040000cu);
    word(ram,0x1ac960u,0x482du);
    word(ram,0x1ac964u,0x220102du);
    word(ram,0x1ac968u,0x90440000u);
    word(ram,0x1ac96cu,0x0u);
    word(ram,0x1ac970u,0x254349c0u);
    word(ram,0x1ac974u,0x691821u);
    word(ram,0x1ac978u,0x25290001u);
    word(ram,0x1ac97cu,0xa0640018u);
    word(ram,0x1ac980u,0x2291021u);
    word(ram,0x1ac984u,0x80430000u);
    word(ram,0x1ac988u,0x5460fff9u);
    word(ram,0x1ac98cu,0x90440000u);
    word(ram,0x1ac990u,0x254649c0u);
    word(ram,0x1ac994u,0x3c038000u);
    word(ram,0x1ac998u,0xacc00004u);
    word(ram,0x1ac99cu,0x2404ffffu);
    word(ram,0x1ac9a0u,0x4203cu);
    word(ram,0x1ac9a4u,0x348400ffu);
    word(ram,0x1ac9a8u,0x34630003u);
    word(ram,0x1ac9acu,0x24050068u);
    word(ram,0x1ac9b0u,0xdd4249c0u);
    word(ram,0x1ac9b4u,0x24070068u);
    word(ram,0x1ac9b8u,0xacc90010u);
    word(ram,0x1ac9bcu,0x24080044u);
    word(ram,0x1ac9c0u,0xacc30008u);
    word(ram,0x1ac9c4u,0x441024u);
    word(ram,0x1ac9c8u,0xfd4249c0u);
    word(ram,0x1ac9ccu,0xc0202du);
    word(ram,0x1ac9d0u,0xa14549c0u);
    word(ram,0x1ac9d4u,0x24050068u);
    word(ram,0x1ac9d8u,0xafab0004u);
    word(ram,0x1ac9dcu,0xafa70008u);
    word(ram,0x1ac9e0u,0xafa8000cu);
    word(ram,0x1ac9e4u,0xc069beeu);
    word(ram,0x1ac9e8u,0xafa60000u);
    word(ram,0x1ac9ecu,0x24040004u);
    word(ram,0x1ac9f0u,0xc069308u);
    word(ram,0x1ac9f4u,0x3c050004u);
    word(ram,0x1ac9f8u,0x3a0202du);
    word(ram,0x1ac9fcu,0xc0692f8u);
    word(ram,0x1aca00u,0x24050001u);
    word(ram,0x1aca04u,0x1040000fu);
    word(ram,0x1aca08u,0x24040004u);
    word(ram,0x1aca0cu,0xc069308u);
    word(ram,0x1aca10u,0x3c050001u);
    word(ram,0x1aca14u,0x24040004u);
    word(ram,0x1aca18u,0xc069308u);
    word(ram,0x1aca1cu,0x3c050002u);
    word(ram,0x1aca20u,0x3c048000u);
    word(ram,0x1aca24u,0x282du);
    word(ram,0x1aca28u,0xc069308u);
    word(ram,0x1aca2cu,0x34840002u);
    word(ram,0x1aca30u,0x3c048000u);
    word(ram,0x1aca34u,0xc069308u);
    word(ram,0x1aca38u,0x282du);
    word(ram,0x1aca3cu,0x10000002u);
    word(ram,0x1aca40u,0x24020001u);
    word(ram,0x1aca44u,0x102du);
    word(ram,0x1aca48u,0xdfbf0030u);
    word(ram,0x1aca4cu,0xdfb10020u);
    word(ram,0x1aca50u,0xdfb00010u);
    word(ram,0x1aca54u,0x3e00008u);
    word(ram,0x1aca58u,0x27bd0040u);

    word(ram,0x1a6ea4u,0x3c030037u);
    word(ram,0x1a6ea8u,0x8c671818u);
    word(ram,0x1a6eacu,0x24701818u);
    word(ram,0x1a6eb0u,0x90e20000u);
    word(ram,0x1a6eb4u,0x304500ffu);
    word(ram,0x1a6eb8u,0x10a0003bu);
    word(ram,0x1a6ebcu,0x102du);
    word(ram,0x1a6ec0u,0x24a2000fu);
    word(ram,0x1a6ec4u,0x2403ffffu);
    word(ram,0x1a6ec8u,0x24a4001eu);
    word(ram,0x1a6eccu,0x62182au);
    word(ram,0x1a6ed0u,0x43200bu);
    word(ram,0x1a6ed4u,0xe0302du);
    word(ram,0x1a6ed8u,0x42903u);
    word(ram,0x1a6edcu,0xa0e00000u);
    word(ram,0x1a6ee0u,0x18a0000au);
    word(ram,0x1a6ee4u,0xa0202du);
    word(ram,0x1a6ee8u,0x3a0182du);
    word(ram,0x1a6eecu,0x0u);
    word(ram,0x1a6ef0u,0x78c20000u);
    word(ram,0x1a6ef4u,0x2484ffffu);
    word(ram,0x1a6ef8u,0x24c60010u);
    word(ram,0x1a6efcu,0x7c620000u);
    word(ram,0x1a6f00u,0x24630010u);
    word(ram,0x1a6f04u,0x1480fffau);
    word(ram,0x1a6f08u,0x0u);
    word(ram,0x1a6f0cu,0xc069304u);
    word(ram,0x1a6f10u,0x0u);
    word(ram,0x1a6f14u,0x8fa30008u);
    word(ram,0x1a6f18u,0x4610013u);
    word(ram,0x1a6f1cu,0x0u);
    word(ram,0x1a6f20u,0x8fa20008u);
    word(ram,0x1a6f24u,0x3c037fffu);
    word(ram,0x1a6f28u,0x3463ffffu);
    word(ram,0x1a6f2cu,0x8e040010u);
    word(ram,0x1a6f30u,0x432824u);
    word(ram,0x1a6f34u,0xa4202au);
    word(ram,0x1a6f38u,0x10800018u);
    word(ram,0x1a6f3cu,0x510c0u);
    word(ram,0x1a6f40u,0x8e03000cu);
    word(ram,0x1a6f44u,0x431021u);
    word(ram,0x1a6f48u,0x8c460000u);
    word(ram,0x1a6f4cu,0x10c00013u);
    word(ram,0x1a6f50u,0x0u);
    word(ram,0x1a6f54u,0x8c450004u);
    word(ram,0x1a6f58u,0xc0f809u);
    word(ram,0x1a6f5cu,0x3a0202du);
    word(ram,0x1a6f60u,0x1000000eu);
    word(ram,0x1a6f64u,0x0u);
    word(ram,0x1a6f68u,0x8fa50008u);
    word(ram,0x1a6f6cu,0x8e020018u);
    word(ram,0x1a6f70u,0xa2102au);
    word(ram,0x1a6f74u,0x10400009u);
    word(ram,0x1a6f78u,0x510c0u);
    word(ram,0x1a6f7cu,0x8e030014u);
    word(ram,0x1a6f80u,0x431021u);
    word(ram,0x1a6f84u,0x8c460000u);
    word(ram,0x1a6f88u,0x10c00004u);
    word(ram,0x1a6f8cu,0x0u);
    word(ram,0x1a6f90u,0x8c450004u);
    word(ram,0x1a6f94u,0xc0f809u);
    word(ram,0x1a6f98u,0x3a0202du);
    word(ram,0x1a6f9cu,0xfu);
    word(ram,0x1a6fa0u,0x42000038u);
    word(ram,0x1a6fa4u,0x102du);
    word(ram,0x1a6fa8u,0xdfbf0080u);
    word(ram,0x1a6facu,0xdfb00070u);
    word(ram,0x1a6fb0u,0x3e00008u);
    word(ram,0x1a6fb4u,0x27bd0090u);

    word(ram,0x1a73d0u,0x8e30001cu);
    word(ram,0x1a73d4u,0xae020024u);
    word(ram,0x1a73d8u,0x8e230028u);
    word(ram,0x1a73dcu,0xae030014u);
    word(ram,0x1a73e0u,0x8e22002cu);
    word(ram,0x1a73e4u,0xae020018u);
    word(ram,0x1a73e8u,0x8e040008u);
    word(ram,0x1a73ecu,0x4800003u);
    word(ram,0x1a73f0u,0x0u);
    word(ram,0x1a73f4u,0xc069214u);
    word(ram,0x1a73f8u,0x0u);
    word(ram,0x1a73fcu,0xc069cb6u);
    word(ram,0x1a7400u,0x8e040000u);
    word(ram,0x1a7404u,0xae000000u);
    word(ram,0x1a7408u,0xdfbf0020u);
    word(ram,0x1a740cu,0xdfb10010u);
    word(ram,0x1a7410u,0xdfb00000u);
    word(ram,0x1a7414u,0x3e00008u);
    word(ram,0x1a7418u,0x27bd0030u);
    word(ram,0x1a72ecu,0x3e00008u);
    word(ram,0x1a72f0u,0xac830010u);

    word(ram,0x1a78a8u,0x27bdff40u);
    word(ram,0x1a78acu,0xffb10030u);
    word(ram,0x1a78b0u,0x80882du);
    word(ram,0x1a78b4u,0xffbe00a0u);
    word(ram,0x1a78b8u,0xffb70090u);
    word(ram,0x1a78bcu,0x3c040037u);
    word(ram,0x1a78c0u,0xffb60080u);
    word(ram,0x1a78c4u,0xc0f02du);
    word(ram,0x1a78c8u,0xffb50070u);
    word(ram,0x1a78ccu,0xa0b02du);
    word(ram,0x1a78d0u,0xffb40060u);
    word(ram,0x1a78d4u,0xe0a82du);
    word(ram,0x1a78d8u,0xffb30050u);
    word(ram,0x1a78dcu,0x120a02du);
    word(ram,0x1a78e0u,0xffb20040u);
    word(ram,0x1a78e4u,0x140982du);
    word(ram,0x1a78e8u,0xffb00020u);
    word(ram,0x1a78ecu,0x100902du);
    word(ram,0x1a78f0u,0xffbf00b0u);
    word(ram,0x1a78f4u,0x160b82du);
    word(ram,0x1a78f8u,0xc069c8cu);
    word(ram,0x1a78fcu,0x248431c0u);
    word(ram,0x1a7900u,0x40802du);
    word(ram,0x1a7904u,0x12000057u);
    word(ram,0x1a7908u,0x2402ffffu);
    word(ram,0x1a790cu,0x8fa200c0u);
    word(ram,0x1a7910u,0x33c40002u);
    word(ram,0x1a7914u,0x8e030018u);
    word(ram,0x1a7918u,0xae220020u);
    word(ram,0x1a791cu,0xae300000u);
    word(ram,0x1a7920u,0xae230004u);
    word(ram,0x1a7924u,0xae37001cu);
    word(ram,0x1a7928u,0xae160020u);
    word(ram,0x1a792cu,0xae120024u);
    word(ram,0x1a7930u,0xae140028u);
    word(ram,0x1a7934u,0xae13002cu);
    word(ram,0x1a7938u,0xae100014u);
    word(ram,0x1a793cu,0x8e220024u);
    word(ram,0x1a7940u,0xae11001cu);
    word(ram,0x1a7944u,0x14800011u);
    word(ram,0x1a7948u,0xae020034u);
    word(ram,0x1a794cu,0x16b40007u);
    word(ram,0x1a7950u,0x253102au);
    word(ram,0x1a7954u,0x260282du);
    word(ram,0x1a7958u,0x2a0202du);
    word(ram,0x1a795cu,0xc069beeu);
    word(ram,0x1a7960u,0x242280au);
    word(ram,0x1a7964u,0x1000000au);
    word(ram,0x1a7968u,0x33c20001u);
    word(ram,0x1a796cu,0x1a400003u);
    word(ram,0x1a7970u,0x2a0202du);
    word(ram,0x1a7974u,0xc069beeu);
    word(ram,0x1a7978u,0x240282du);
    word(ram,0x1a797cu,0x1a600003u);
    word(ram,0x1a7980u,0x280202du);
    word(ram,0x1a7984u,0xc069beeu);
    word(ram,0x1a7988u,0x260282du);
    word(ram,0x1a798cu,0x33c20001u);
    word(ram,0x1a7990u,0x50400014u);
    word(ram,0x1a7994u,0x24130001u);
    word(ram,0x1a7998u,0x16e00003u);
    word(ram,0x1a799cu,0x24020001u);
    word(ram,0x1a79a0u,0x10000002u);
    word(ram,0x1a79a4u,0xae000030u);
    word(ram,0x1a79a8u,0xae020030u);
    word(ram,0x1a79acu,0x2402ffffu);
    word(ram,0x1a79b0u,0x3c048000u);
    word(ram,0x1a79b4u,0x8e280014u);
    word(ram,0x1a79b8u,0x2a0382du);
    word(ram,0x1a79bcu,0xae220008u);
    word(ram,0x1a79c0u,0x240482du);
    word(ram,0x1a79c4u,0x3484000au);
    word(ram,0x1a79c8u,0x200282du);
    word(ram,0x1a79ccu,0xc069b84u);
    word(ram,0x1a79d0u,0x24060040u);
    word(ram,0x1a79d4u,0x14400023u);
    word(ram,0x1a79d8u,0x102du);
    word(ram,0x1a79dcu,0x10000018u);
    word(ram,0x1a79e0u,0x0u);
    word(ram,0x1a79e4u,0xafa00008u);
    word(ram,0x1a79e8u,0xafb30004u);
    word(ram,0x1a79ecu,0xc069208u);
    word(ram,0x1a79f0u,0x3a0202du);
    word(ram,0x1a79f4u,0x4410005u);
    word(ram,0x1a79f8u,0xae220008u);
    word(ram,0x1a79fcu,0xc069cb6u);
    word(ram,0x1a7a00u,0x200202du);
    word(ram,0x1a7a04u,0x10000017u);
    word(ram,0x1a7a08u,0x2402fffdu);
    word(ram,0x1a7a0cu,0xae130030u);
    word(ram,0x1a7a10u,0x3c048000u);
    word(ram,0x1a7a14u,0x2a0382du);
    word(ram,0x1a7a18u,0x240482du);
    word(ram,0x1a7a1cu,0x8e280014u);
    word(ram,0x1a7a20u,0x3484000au);
    word(ram,0x1a7a24u,0x200282du);
    word(ram,0x1a7a28u,0xc069b84u);
    word(ram,0x1a7a2cu,0x24060040u);
    word(ram,0x1a7a30u,0x14400007u);
    word(ram,0x1a7a34u,0x0u);
    word(ram,0x1a7a38u,0xc06920cu);
    word(ram,0x1a7a3cu,0x8e240008u);
    word(ram,0x1a7a40u,0xc069cb6u);
    word(ram,0x1a7a44u,0x200202du);
    word(ram,0x1a7a48u,0x10000006u);
    word(ram,0x1a7a4cu,0x2402fffeu);
    word(ram,0x1a7a50u,0xc069218u);
    word(ram,0x1a7a54u,0x8e240008u);
    word(ram,0x1a7a58u,0xc06920cu);
    word(ram,0x1a7a5cu,0x8e240008u);
    word(ram,0x1a7a60u,0x102du);
    word(ram,0x1a7a64u,0xdfbf00b0u);
    word(ram,0x1a7a68u,0xdfbe00a0u);
    word(ram,0x1a7a6cu,0xdfb70090u);
    word(ram,0x1a7a70u,0xdfb60080u);
    word(ram,0x1a7a74u,0xdfb50070u);
    word(ram,0x1a7a78u,0xdfb40060u);
    word(ram,0x1a7a7cu,0xdfb30050u);
    word(ram,0x1a7a80u,0xdfb20040u);
    word(ram,0x1a7a84u,0xdfb10030u);
    word(ram,0x1a7a88u,0xdfb00020u);
    word(ram,0x1a7a8cu,0x3e00008u);
    word(ram,0x1a7a90u,0x27bd00c0u);
    word(ram,0x1a73b8u,0x5040000cu);
    word(ram,0x1a73bcu,0x8e040008u);
    word(ram,0x1a73c0u,0x40f809u);
    word(ram,0x1a73c4u,0x8e040020u);
    word(ram,0x1a73c8u,0x10000007u);
    word(ram,0x1a73ccu,0x8e30001cu);
    word(ram,0x1af3e8u,0x27bdffb0u);
    word(ram,0x1af3ecu,0x2403ffffu);
    word(ram,0x1af3f0u,0xffb10030u);
    word(ram,0x1af3f4u,0x3c110028u);
    word(ram,0x1af3f8u,0xffbf0040u);
    word(ram,0x1af3fcu,0x8e2272a8u);
    word(ram,0x1af400u,0x10430007u);
    word(ram,0x1af404u,0xffb00020u);
    word(ram,0x1af408u,0x3c100028u);
    word(ram,0x1af40cu,0x8e0272acu);
    word(ram,0x1af410u,0x14430016u);
    word(ram,0x1af414u,0xdfbf0040u);
    word(ram,0x1af418u,0x10000003u);
    word(ram,0x1af41cu,0x24020001u);
    word(ram,0x1af420u,0x3c100028u);
    word(ram,0x1af424u,0x24020001u);
    word(ram,0x1af428u,0xafa00014u);
    word(ram,0x1af42cu,0xafa20004u);
    word(ram,0x1af430u,0x3a0202du);
    word(ram,0x1af434u,0xc069208u);
    word(ram,0x1af438u,0xafa20008u);
    word(ram,0x1af43cu,0x3a0202du);
    word(ram,0x1af440u,0xc069208u);
    word(ram,0x1af444u,0xae2272a8u);
    word(ram,0x1af448u,0xae0272acu);
    word(ram,0x1af44cu,0x3a0202du);
    word(ram,0x1af450u,0xc069208u);
    word(ram,0x1af454u,0xafa00008u);
    word(ram,0x1af458u,0x3c030028u);
    word(ram,0x1af45cu,0xac6272a0u);
    word(ram,0x1af460u,0x3c020028u);
    word(ram,0x1af464u,0xac4072b0u);
    word(ram,0x1af468u,0xdfbf0040u);
    word(ram,0x1af46cu,0xdfb10030u);
    word(ram,0x1af470u,0xdfb00020u);
    word(ram,0x1af474u,0x3e00008u);
    word(ram,0x1af478u,0x27bd0050u);
    word(ram,0x1af5f4u,0x3c05001bu);
    word(ram,0x1af5f8u,0x3c048000u);
    word(ram,0x1af5fcu,0x40802du);
    word(ram,0x1af600u,0x24a5f590u);
    word(ram,0x1af604u,0x34840012u);
    word(ram,0x1af608u,0xc069b20u);
    word(ram,0x1af60cu,0x302du);
    word(ram,0x1af610u,0x12000004u);
    word(ram,0x1af614u,0x3c020028u);
    word(ram,0x1af618u,0xc06b52au);
    word(ram,0x1af61cu,0x0u);
    word(ram,0x1af620u,0x3c020028u);
    word(ram,0x1af624u,0xae2072a4u);
    word(ram,0x1af628u,0xac5272bcu);
    word(ram,0x1af62cu,0xdfbf0030u);
    word(ram,0x1af630u,0x24020001u);
    word(ram,0x1af634u,0xdfb20020u);
    word(ram,0x1af638u,0xdfb10010u);
    word(ram,0x1af63cu,0xdfb00000u);
    word(ram,0x1af640u,0x3e00008u);
    word(ram,0x1af644u,0x27bd0040u);
    word(ram,0x17fec0u,0x0u);
    word(ram,0x17fec4u,0x0u);
    word(ram,0x17fec8u,0x0u);
    word(ram,0x17feccu,0x0u);
    word(ram,0x17fed0u,0x1040fff9u);
    word(ram,0x17fed4u,0x0u);
    word(ram,0x17fed8u,0x3c04002du);
    word(ram,0x17fedcu,0xc06b2b0u);
    word(ram,0x17fee0u,0x24849810u);
    word(ram,0x1acac0u,0x27bdff80u);
    word(ram,0x1acac4u,0x3c02002du);
    word(ram,0x1acac8u,0xffb10060u);
    word(ram,0x1acaccu,0xffb00050u);
    word(ram,0x1acad0u,0xffbf0070u);
    word(ram,0x1acad4u,0x80802du);
    word(ram,0x1acad8u,0x82030000u);
    word(ram,0x1acadcu,0x1060000bu);
    word(ram,0x1acae0u,0x2451a740u);
    word(ram,0x1acae4u,0x2603fff5u);
    word(ram,0x1acae8u,0x24840001u);
    word(ram,0x1acaecu,0x80820000u);
    word(ram,0x1acaf0u,0x0u);
    word(ram,0x1acaf4u,0x0u);
    word(ram,0x1acaf8u,0x0u);
    word(ram,0x1acafcu,0x1440fffau);
    word(ram,0x1acb00u,0x0u);
    word(ram,0x1acb04u,0x10000003u);
    word(ram,0x1acb08u,0x831023u);
    word(ram,0x1acb0cu,0x2603fff5u);
    word(ram,0x1acb10u,0x831023u);
    word(ram,0x1acb14u,0x2c420051u);
    word(ram,0x1acb18u,0x14400006u);
    word(ram,0x1acb1cu,0x3c04002du);
    word(ram,0x1acb20u,0x200282du);
    word(ram,0x1acb24u,0xc069a30u);
    word(ram,0x1acb28u,0x2484a750u);
    word(ram,0x1acb2cu,0x10000023u);
    word(ram,0x1acb30u,0x102du);
    word(ram,0x1acb34u,0xc069c1au);
    word(ram,0x1acb38u,0x202du);
    word(ram,0x1acb3cu,0xc069c82u);
    word(ram,0x1acb40u,0x0u);
    word(ram,0x1acb44u,0x82220000u);
    word(ram,0x1acb48u,0x3a0182du);
    word(ram,0x1acb4cu,0x1040000bu);
    word(ram,0x1acb50u,0x92240000u);
    word(ram,0x1acb54u,0x92050000u);
    word(ram,0x1acb58u,0xa0640000u);
    word(ram,0x1acb5cu,0x26310001u);
    word(ram,0x1acb60u,0x24630001u);
    word(ram,0x1acb64u,0x92240000u);
    word(ram,0x1acb68u,0x82220000u);
    word(ram,0x1acb6cu,0x1440fffau);
    word(ram,0x1acb70u,0x0u);
    word(ram,0x1acb74u,0x10000003u);
    word(ram,0x1acb78u,0xa0202du);
    word(ram,0x1acb7cu,0x92050000u);
    word(ram,0x1acb80u,0xa0202du);
    word(ram,0x1acb84u,0x5080000au);
    word(ram,0x1acb88u,0xa0600000u);
    word(ram,0x1acb8cu,0x0u);
    word(ram,0x1acb90u,0xa0640000u);
    word(ram,0x1acb94u,0x26100001u);
    word(ram,0x1acb98u,0x24630001u);
    word(ram,0x1acb9cu,0x82020000u);
    word(ram,0x1acba0u,0x40202du);
    word(ram,0x1acba4u,0x1440fffau);
    word(ram,0x1acba8u,0x0u);
    word(ram,0x1acbacu,0xa0600000u);
    word(ram,0x1acbb0u,0x3a0202du);
    word(ram,0x1acbb4u,0xc06b248u);
    word(ram,0x1acbb8u,0x282du);
    word(ram,0x1acbbcu,0xdfbf0070u);
    word(ram,0x1acbc0u,0xdfb10060u);
    word(ram,0x1acbc4u,0xdfb00050u);
    word(ram,0x1acbc8u,0x3e00008u);
    word(ram,0x1acbccu,0x27bd0080u);
    word(ram,0x1a53d0u,0x27bdffd0u);
    word(ram,0x1a53d4u,0xffb10010u);
    word(ram,0x1a53d8u,0xffbf0020u);
    word(ram,0x1a53dcu,0x80882du);
    word(ram,0x1a53e0u,0xffb00000u);
    word(ram,0x1a53e4u,0x40106000u);
    word(ram,0x1a53e8u,0x3c020001u);
    word(ram,0x1a53ecu,0x2028024u);
    word(ram,0x1a53f0u,0x12000003u);
    word(ram,0x1a53f4u,0x0u);
    word(ram,0x1a53f8u,0xc06b518u);
    word(ram,0x1a53fcu,0x0u);
    word(ram,0x1a5400u,0xc069164u);
    word(ram,0x1a5404u,0x220202du);
    word(ram,0x1a5408u,0x40882du);
    word(ram,0x1a540cu,0xfu);
    word(ram,0x1a5410u,0x12000004u);
    word(ram,0x1a5414u,0x220102du);
    word(ram,0x1a5418u,0xc06b52au);
    word(ram,0x1a541cu,0x0u);
    word(ram,0x1a5420u,0x220102du);
    word(ram,0x1a5424u,0xdfbf0020u);
    word(ram,0x1a5428u,0xdfb10010u);
    word(ram,0x1a542cu,0xdfb00000u);
    word(ram,0x1a5430u,0x3e00008u);
    word(ram,0x1a5434u,0x27bd0030u);
    word(ram,0x1a6c18u,0x27bdfff0u);
    word(ram,0x1a6c1cu,0xffbf0000u);
    word(ram,0x1a6c20u,0xc0694f4u);
    word(ram,0x1a6c24u,0x24040005u);
    word(ram,0x1a6c28u,0x3c030037u);
    word(ram,0x1a6c2cu,0x24040005u);
    word(ram,0x1a6c30u,0xc069154u);
    word(ram,0x1a6c34u,0x8c651814u);
    word(ram,0x1a6c38u,0x3c030028u);
    word(ram,0x1a6c3cu,0xdfbf0000u);
    word(ram,0x1a6c40u,0xac605b68u);
    word(ram,0x1a6c44u,0x3e00008u);
    word(ram,0x1a6c48u,0x27bd0010u);
    word(ram,0x1a7208u,0x27bdfff0u);
    word(ram,0x1a720cu,0xffbf0000u);
    word(ram,0x1a7210u,0xc069b06u);
    word(ram,0x1a7214u,0x0u);
    word(ram,0x1a7218u,0x3c020028u);
    word(ram,0x1a721cu,0xdfbf0000u);
    word(ram,0x1a7220u,0xac405b70u);
    word(ram,0x1a7224u,0x3e00008u);
    word(ram,0x1a7228u,0x27bd0010u);
    word(ram,0x1a7810u,0x03e00008u);
    word(ram,0x1a7814u,0x27bd0070u);
    word(ram,0x1a7248u,0x8e240008u);
    word(ram,0x1a724cu,0x182du);
    word(ram,0x1a7250u,0x18800019u);
    word(ram,0x1a7254u,0x8e300004u);
    word(ram,0x1a7258u,0x24050001u);
    word(ram,0x1a725cu,0x0u);
    word(ram,0x1a7260u,0x8e020010u);
    word(ram,0x1a7264u,0x30420001u);
    word(ram,0x1a7268u,0x54400010u);
    word(ram,0x1a726cu,0x24630001u);
    word(ram,0x1a7270u,0x31400u);
    word(ram,0x1a7274u,0x34420005u);
    word(ram,0x1a7278u,0xae020010u);
    word(ram,0x1a727cu,0x8e220000u);
    word(ram,0x1a7280u,0x24430001u);
    word(ram,0x1a7284u,0x14650004u);
    word(ram,0x1a7288u,0xae230000u);
    word(ram,0x1a728cu,0x24420002u);
    word(ram,0x1a7290u,0x24030001u);
    word(ram,0x1a7294u,0xae220000u);
    word(ram,0x1a7298u,0xae100014u);
    word(ram,0x1a729cu,0xc06b52au);
    word(ram,0x1a72a0u,0xae030018u);
    word(ram,0x1a72a4u,0x10000007u);
    word(ram,0x1a72a8u,0x200102du);
    word(ram,0x1a72acu,0x64102au);
    word(ram,0x1a72b0u,0x1440ffebu);
    word(ram,0x1a72b4u,0x26100040u);
    word(ram,0x1a72b8u,0xc06b52au);
    word(ram,0x1a72bcu,0x0u);
    word(ram,0x1a72c0u,0x102du);
    word(ram,0x1a72c4u,0xdfbf0020u);
    word(ram,0x1a72c8u,0xdfb10010u);
    word(ram,0x1a72ccu,0xdfb00000u);
    word(ram,0x1a72d0u,0x3e00008u);
    word(ram,0x1a72d4u,0x27bd0030u);

    word(ram,0x1b00e0u,0x03e00008u);
    word(ram,0x1b00e4u,0x27bd00b0u);
    word(ram,0x1afc84u,0xdfbf0010u);
    word(ram,0x1afc88u,0xdfb00000u);
    word(ram,0x1afc8cu,0x03e00008u);
    word(ram,0x1afc90u,0x27bd0020u);
    word(ram,0x1a7ac4u,0x3e00008u);
    word(ram,0x1a7ac8u,0x102du);
    word(ram,0x1a7accu,0x3e00008u);
    word(ram,0x1a7ad0u,0x24020001u);

    word(ram,0x1a6920u,0x8c820010u);
    word(ram,0x1a6924u,0x8ca6001cu);
    word(ram,0x1a6928u,0x8c830014u);
    word(ram,0x1a692cu,0x21080u);
    word(ram,0x1a6930u,0x461021u);
    word(ram,0x1a6934u,0x3e00008u);
    word(ram,0x1a6938u,0xac430000u);
    word(ram,0x1a693cu,0x0u);
    word(ram,0x1a6940u,0x8c820010u);
    word(ram,0x1a6944u,0x3e00008u);
    word(ram,0x1a6948u,0xaca20008u);
    word(ram,0x1a694cu,0x0u);

    word(ram,0x1a7190u,0x14400017u);
    word(ram,0x1a7194u,0xdfbf0030u);
    word(ram,0x1a7198u,0x26450040u);
    word(ram,0x1a719cu,0x3c048000u);
    word(ram,0x1a71a0u,0xacb1000cu);
    word(ram,0x1a71a4u,0x34840002u);
    word(ram,0x1a71a8u,0x24060010u);
    word(ram,0x1a71acu,0x382du);
    word(ram,0x1a71b0u,0x402du);
    word(ram,0x1a71b4u,0xc069b84u);
    word(ram,0x1a71b8u,0x482du);
    word(ram,0x1a71bcu,0x0u);
    word(ram,0x1a71c0u,0xc069a54u);
    word(ram,0x1a71c4u,0x202du);
    word(ram,0x1a71c8u,0x1040fffdu);
    word(ram,0x1a71ccu,0xdfbf0030u);
    word(ram,0x1a71d0u,0x3c048000u);
    word(ram,0x1a71d4u,0xdfb20020u);
    word(ram,0x1a71d8u,0x24050001u);
    word(ram,0x1a71dcu,0xdfb10010u);
    word(ram,0x1a71e0u,0x34840002u);
    word(ram,0x1a71e4u,0xdfb00000u);
    word(ram,0x1a71e8u,0x8069308u);
    word(ram,0x1a71ecu,0x27bd0040u);
    word(ram,0x1a6960u,0x3e00008u);
    word(ram,0x1a6964u,0x8c820000u);

    word(ram,0x1a7134u,0x3c05001au);
    word(ram,0x1a7138u,0x3c048000u);
    word(ram,0x1a713cu,0x24a57628u);
    word(ram,0x1a7140u,0x34840009u);
    word(ram,0x1a7144u,0xc069b20u);
    word(ram,0x1a7148u,0x200302du);
    word(ram,0x1a714cu,0x3c05001au);
    word(ram,0x1a7150u,0x3c048000u);
    word(ram,0x1a7154u,0x24a57818u);
    word(ram,0x1a7158u,0x3484000au);
    word(ram,0x1a715cu,0xc069b20u);
    word(ram,0x1a7160u,0x200302du);
    word(ram,0x1a7164u,0x3c05001au);
    word(ram,0x1a7168u,0x3c048000u);
    word(ram,0x1a716cu,0x24a57420u);
    word(ram,0x1a7170u,0x200302du);
    word(ram,0x1a7174u,0xc069b20u);
    word(ram,0x1a7178u,0x3484000cu);
    word(ram,0x1a717cu,0xc06b52au);
    word(ram,0x1a7180u,0x0u);
    word(ram,0x1a7184u,0x3c048000u);
    word(ram,0x1a7188u,0xc06930cu);
    word(ram,0x1a718cu,0x34840002u);

    const std::array<uint32_t,11> add_handler_words{0x04810004u,0x000418c0u,0x3c020037u,0x10000003u,0x8c441824u,0x3c020037u,0x8c44182cu,0x00641821u,0xac660004u,0x03e00008u,0xac650000u};
    for(unsigned i=0;i<add_handler_words.size();++i)word(ram,0x1a6c80+i*4,add_handler_words[i]);
    word(ram,0x1a70b8u,0xc06b518u);
    word(ram,0x1a70bcu,0x0u);
    word(ram,0x1a70c0u,0x3c030037u);
    word(ram,0x1a70c4u,0x3c080037u);
    word(ram,0x1a70c8u,0x247219c0u);
    word(ram,0x1a70ccu,0x3c060037u);
    word(ram,0x1a70d0u,0x3c070037u);
    word(ram,0x1a70d4u,0x251031c0u);
    word(ram,0x1a70d8u,0x24030020u);
    word(ram,0x1a70dcu,0x3c022000u);
    word(ram,0x1a70e0u,0x24c621c0u);
    word(ram,0x1a70e4u,0x24e729c0u);
    word(ram,0x1a70e8u,0xc23025u);
    word(ram,0x1a70ecu,0xe23825u);
    word(ram,0x1a70f0u,0xae030020u);
    word(ram,0x1a70f4u,0x2421025u);
    word(ram,0x1a70f8u,0xad1131c0u);
    word(ram,0x1a70fcu,0x3c05001au);
    word(ram,0x1a7100u,0xae060014u);
    word(ram,0x1a7104u,0x3c048000u);
    word(ram,0x1a7108u,0xae020004u);
    word(ram,0x1a710cu,0x24a57368u);
    word(ram,0x1a7110u,0xae07001cu);
    word(ram,0x1a7114u,0x34840008u);
    word(ram,0x1a7118u,0x200302du);
    word(ram,0x1a711cu,0xae030008u);
    word(ram,0x1a7120u,0xae00000cu);
    word(ram,0x1a7124u,0xae000010u);
    word(ram,0x1a7128u,0xae030018u);
    word(ram,0x1a712cu,0xc069b20u);
    word(ram,0x1a7130u,0xae000024u);

    for(const uint32_t start : {0x1a6e40u,0x1a6e80u}) {
        word(ram,start,0xdfbf0000u);word(ram,start+4u,0x03e00008u);word(ram,start+8u,0x27bd0010u);
    }
    const std::array<uint32_t,17> sif_tail{0x32620001u,0x10400005u,0x0240282du,0x0c0692fcu,0x03a0202du,0x10000004u,0xdfbf0070u,0x0c0692f8u,0x03a0202du,0xdfbf0070u,0xdfb40060u,0xdfb30050u,0xdfb20040u,0xdfb10030u,0xdfb00020u,0x03e00008u,0x27bd0080u};
    for(unsigned i=0;i<sif_tail.size();++i)word(ram,0x1a6dc8+i*4,sif_tail[i]);
    word(ram,0x1a705c,0x03e00008);word(ram,0x1a7060,0);
    word(ram,0x1a7064,0x03e00008);word(ram,0x1a7068,0x27bdffc0);
    word(ram,0x1a6b98,0x501024);
    word(ram,0x1a6b9c,0x1040fffc);
    word(ram,0x1a6ba0,0x24040002);
    word(ram,0x1a6ba4,0xc06930c);
    word(ram,0x1a6ba8,0x26501818);
    word(ram,0x1a6bac,0xae020008);
    word(ram,0x1a6bb0,0x3c048000);
    word(ram,0x1a6bb4,0xc069308);
    word(ram,0x1a6bb8,0x40282d);
    word(ram,0x1a6bbc,0x3c048000);
    word(ram,0x1a6bc0,0x200282d);
    word(ram,0x1a6bc4,0xc069308);
    word(ram,0x1a6bc8,0x34840001);
    word(ram,0x1a6bcc,0x26831800);
    word(ram,0x1a6bd0,0x26621740);
    word(ram,0x1a6bd4,0x3c048000);
    word(ram,0x1a6bd8,0xdfbf0050);
    word(ram,0x1a6bdc,0xdfb40040);
    word(ram,0x1a6be0,0x60282d);
    word(ram,0x1a6be4,0xdfb30030);
    word(ram,0x1a6be8,0x34840002);
    word(ram,0x1a6bec,0xdfb20020);
    word(ram,0x1a6bf0,0x24060014);
    word(ram,0x1a6bf4,0xdfb10010);
    word(ram,0x1a6bf8,0x382d);
    word(ram,0x1a6bfc,0xdfb00000);
    word(ram,0x1a6c00,0x402d);
    word(ram,0x1a6c04,0xac620010);
    word(ram,0x1a6c08,0x482d);
    word(ram,0x1a6c0c,0xac60000c);
    word(ram,0x1a6c10,0x8069b84);
    word(ram,0x1a6c14,0x27bd0060);
    word(ram,0x1a5470,0x40882d);
    word(ram,0x1a5474,0xf);
    word(ram,0x1a5478,0x12000004);
    word(ram,0x1a547c,0x220102d);
    word(ram,0x1a5480,0xc06b52a);
    word(ram,0x1a5484,0x0);
    word(ram,0x1a5488,0x220102d);
    word(ram,0x1a548c,0xdfbf0020);
    word(ram,0x1a5490,0xdfb10010);
    word(ram,0x1a5494,0xdfb00000);
    word(ram,0x1a5498,0x3e00008);
    word(ram,0x1a549c,0x27bd0030);

    word(ram,0x1a6b28,0x3c030037);
    word(ram,0x1a6b2c,0x24040005);
    word(ram,0x1a6b30,0xc06950e);
    word(ram,0x1a6b34,0xac621814);
    word(ram,0x1a6b38,0x3c048000);
    word(ram,0x1a6b3c,0xc06930c);
    word(ram,0x1a6b40,0x0);
    word(ram,0x1a6b44,0x10400011);
    word(ram,0x1a6b48,0xae220008);
    word(ram,0x1a6b4c,0x26851800);
    word(ram,0x1a6b50,0x26621740);
    word(ram,0x1a6b54,0xdfbf0050);
    word(ram,0x1a6b58,0x3c048000);
    word(ram,0x1a6b5c,0xdfb40040);
    word(ram,0x1a6b60,0x24060014);
    word(ram,0x1a6b64,0xdfb30030);
    word(ram,0x1a6b68,0x382d);
    word(ram,0x1a6b6c,0xdfb20020);
    word(ram,0x1a6b70,0x402d);
    word(ram,0x1a6b74,0xdfb10010);
    word(ram,0x1a6b78,0x482d);
    word(ram,0x1a6b7c,0xdfb00000);
    word(ram,0x1a6b80,0xaca20010);
    word(ram,0x1a6b84,0x8069b84);
    word(ram,0x1a6b88,0x27bd0060);

    word(ram,0x1a6acc,0xc0692a8);
    word(ram,0x1a6ad0,0x202d);
    word(ram,0x1a6ad4,0x3c021000);
    word(ram,0x1a6ad8,0x3442e010);
    word(ram,0x1a6adc,0x8c430000);
    word(ram,0x1a6ae0,0x30630020);
    word(ram,0x1a6ae4,0x10600004);
    word(ram,0x1a6ae8,0x3c021000);
    word(ram,0x1a6aec,0x3c011001);
    word(ram,0x1a6af0,0xac30e010);
    word(ram,0x1a6af4,0x3c021000);
    word(ram,0x1a6af8,0x3442c000);
    word(ram,0x1a6afc,0x8c430000);
    word(ram,0x1a6b00,0x30630100);
    word(ram,0x1a6b04,0x14600004);
    word(ram,0x1a6b08,0x3c05001a);
    word(ram,0x1a6b0c,0xc069300);
    word(ram,0x1a6b10,0x0);
    word(ram,0x1a6b14,0x3c05001a);
    word(ram,0x1a6b18,0x24040005);
    word(ram,0x1a6b1c,0x24a56e90);
    word(ram,0x1a6b20,0xc06914c);
    word(ram,0x1a6b24,0x302d);

    word(ram,0x1a69b8,0x3c0a0028);
    word(ram,0x1a69bc,0x8d425b68);
    word(ram,0x1a69c0,0x10400009);
    word(ram,0x1a69c4,0x3c130037);
    word(ram,0x1a69c8,0xdfbf0050);
    word(ram,0x1a69cc,0xdfb40040);
    word(ram,0x1a69d0,0xdfb30030);
    word(ram,0x1a69d4,0xdfb20020);
    word(ram,0x1a69d8,0xdfb10010);
    word(ram,0x1a69dc,0xdfb00000);
    word(ram,0x1a69e0,0x806b52a);
    word(ram,0x1a69e4,0x27bd0060);
    word(ram,0x1a69e8,0x3c050037);
    word(ram,0x1a69ec,0x3c022000);
    word(ram,0x1a69f0,0x24a517c0);
    word(ram,0x1a69f4,0x26661740);
    word(ram,0x1a69f8,0x3c120037);
    word(ram,0x1a69fc,0xa22825);
    word(ram,0x1a6a00,0xc23025);
    word(ram,0x1a6a04,0x24030001);
    word(ram,0x1a6a08,0x3c090037);
    word(ram,0x1a6a0c,0x3c040037);
    word(ram,0x1a6a10,0x26421818);
    word(ram,0x1a6a14,0xad435b68);
    word(ram,0x1a6a18,0x25281840);
    word(ram,0x1a6a1c,0xae461818);
    word(ram,0x1a6a20,0x24841940);
    word(ram,0x1a6a24,0x24070020);
    word(ram,0x1a6a28,0xac44001c);
    word(ram,0x1a6a2c,0xac450004);
    word(ram,0x1a6a30,0x100182d);
    word(ram,0x1a6a34,0xac470010);
    word(ram,0x1a6a38,0x3c140037);
    word(ram,0x1a6a3c,0xac400008);
    word(ram,0x1a6a40,0x2410001f);
    word(ram,0x1a6a44,0xac48000c);
    word(ram,0x1a6a48,0xac400014);
    word(ram,0x1a6a4c,0xac400018);
    word(ram,0x1a6a50,0xac600000);
    word(ram,0x1a6a54,0x2610ffff);
    word(ram,0x1a6a58,0xac600004);
    word(ram,0x1a6a5c,0x24630008);
    word(ram,0x1a6a60,0x0);
    word(ram,0x1a6a64,0x601fffa);
    word(ram,0x1a6a68,0x0);
    word(ram,0x1a6a6c,0x3c020037);
    word(ram,0x1a6a70,0x2410001f);
    word(ram,0x1a6a74,0x24421940);
    word(ram,0x1a6a78,0x2442007c);
    word(ram,0x1a6a7c,0x0);
    word(ram,0x1a6a80,0xac400000);
    word(ram,0x1a6a84,0x2610ffff);
    word(ram,0x1a6a88,0x2442fffc);
    word(ram,0x1a6a8c,0x0);
    word(ram,0x1a6a90,0x0);
    word(ram,0x1a6a94,0x601fffa);
    word(ram,0x1a6a98,0x0);
    word(ram,0x1a6a9c,0x3c02001a);
    word(ram,0x1a6aa0,0x3c03001a);
    word(ram,0x1a6aa4,0x24426940);
    word(ram,0x1a6aa8,0x25241840);
    word(ram,0x1a6aac,0x24636920);
    word(ram,0x1a6ab0,0x26511818);
    word(ram,0x1a6ab4,0xad221840);
    word(ram,0x1a6ab8,0x24100020);
    word(ram,0x1a6abc,0xac830008);
    word(ram,0x1a6ac0,0xac91000c);
    word(ram,0x1a6ac4,0xc06b52a);
    word(ram,0x1a6ac8,0xac910004);

    word(ram,0x1ad4b4,0x42000038);
    word(ram,0x1ad4b8,0x3e00008);
    word(ram,0x1ad4bc,0x2102b);
    word(ram,0x1a7080,0x3c030028);
    word(ram,0x1a7084,0x8c625b70);
    word(ram,0x1a7088,0x10400007);
    word(ram,0x1a708c,0x24110001);
    word(ram,0x1a7090,0xdfbf0030);
    word(ram,0x1a7094,0xdfb20020);
    word(ram,0x1a7098,0xdfb10010);
    word(ram,0x1a709c,0xdfb00000);
    word(ram,0x1a70a0,0x806b52a);
    word(ram,0x1a70a4,0x27bd0040);
    word(ram,0x1a70a8,0xc06b52a);
    word(ram,0x1a70ac,0xac715b70);
    word(ram,0x1a70b0,0xc069a66);
    word(ram,0x1a70b4,0x0);
    word(ram,0x17feb0,0x0c069c1a);word(ram,0x17feb4,0x0000202d);
    word(ram,0x1c0040,0x8f8388e4);
    word(ram,0x1c0044,0x3c010046);
    word(ram,0x1c0048,0x3c0201ff);
    word(ram,0x1c004c,0x34487000);
    word(ram,0x1c0050,0x2402fff0);
    word(ram,0x1c0054,0xac234a90);
    word(ram,0x1c0058,0x1033023);
    word(ram,0x1c005c,0x3c010046);
    word(ram,0x1c0060,0x24c4fff0);
    word(ram,0x1c0064,0x8c254a90);
    word(ram,0x1c0068,0x821824);
    word(ram,0x1c006c,0x30c7000f);
    word(ram,0x1c0070,0x871023);
    word(ram,0x1c0074,0xa32821);
    word(ram,0x1c0078,0x3c010046);
    word(ram,0x1c007c,0xaca00000);
    word(ram,0x1c0080,0xaca00004);
    word(ram,0x1c0084,0xaca00008);
    word(ram,0x1c0088,0xaca2000c);
    word(ram,0x1c008c,0xac264aa8);
    word(ram,0x1c0090,0x3c010046);
    word(ram,0x1c0094,0x8f8288e4);
    word(ram,0x1c0098,0xac254a98);
    word(ram,0x1c009c,0x3c010046);
    word(ram,0x1c00a0,0xac254a94);
    word(ram,0x1c00a4,0x3c010046);
    word(ram,0x1c00a8,0x8c244a98);
    word(ram,0x1c00ac,0x1021023);
    word(ram,0x1c00b0,0x3c010046);
    word(ram,0x1c00b4,0x8c234aa8);
    word(ram,0x1c00b8,0x3c010046);
    word(ram,0x1c00bc,0x2463fff0);
    word(ram,0x1c00c0,0xac244a9c);
    word(ram,0x1c00c4,0x671823);
    word(ram,0x1c00c8,0x3c010046);
    word(ram,0x1c00cc,0xac234aac);
    word(ram,0x1c00d0,0xdfbf0000);
    word(ram,0x1c00d4,0x3e00008);
    word(ram,0x1c00d8,0x27bd0010);
    word(ram,0x238ea0,0x0220202d);word(ram,0x238ec0,0x8e860008);
    word(ram,0x238e28,0x3c020029);
    word(ram,0x238e74,0x8e830008);
    word(ram,0x238f08,0x1000000e);
    word(ram,0x238f40,0x24020001);
    word(ram,0x238f44,0xdfb00000);
    word(ram,0x238f48,0xdfb10008);
    word(ram,0x238f4c,0xdfb20010);
    word(ram,0x238f50,0xdfb30018);
    word(ram,0x238f54,0xdfb40020);
    word(ram,0x238f58,0xdfbf0028);
    word(ram,0x238f5c,0x3e00008);
    word(ram,0x238f60,0x27bd0030);
    word(ram,0x238b24,0x2609fff8);
    word(ram,0x2399a4,0x8e040000);word(ram,0x2399b0,0x8e040000);
    word(ram,0x23a1d8,0x8e020008);word(ram,0x23a240,0x10000039);word(ram,0x23a244,0x0000102d);
    word(ram,0x239a6c,0x0040882d);word(ram,0x239b24,0x0040202d);word(ram,0x239bbc,0x3c030029);
    word(ram,0x239c18,0x03e00008);word(ram,0x239c1c,0x27bd0060);
    const std::array<uint32_t,12> sbrk_words{0x0040202d,0x2403ffff,0x54830005,0xdfb00000,0x8e230000,0x54600001,0xae030000,0xdfb00000,0xdfb10008,0xdfbf0010,0x03e00008,0x27bd0020};
    for(size_t i=0;i<sbrk_words.size();++i)word(ram,0x23c420+static_cast<uint32_t>(i)*4u,sbrk_words[i]);
    word(ram,0x1a4f48,0x42000039);word(ram,0x1a4f78,0x0050102b);
    word(ram,0x1a4f8c,0x2403000c);word(ram,0x1a4fc4,0x03e00008);word(ram,0x1a4fc8,0x27bd0040);
    word(ram,0x239c64,0x2e2201f8);
    const std::array<uint32_t,9> allocator_return_words{0x26020008,0xdfb00000,0xdfb10008,0xdfb20010,0xdfb30018,0xdfb40020,0xdfbf0028,0x03e00008,0x27bd0030};
    for(size_t i=0;i<allocator_return_words.size();++i)word(ram,0x23a324+static_cast<uint32_t>(i)*4u,allocator_return_words[i]);
    word(ram,0x23a834,0x03e00008);word(ram,0x23a838,0x27bd0010);
    word(ram,0x23994c,0x8e040000);word(ram,0x239958,0x8e040000);
    const std::array<uint32_t,6> allocation_return_words{0x0220102d,0xdfb00000,0xdfb10008,0xdfbf0010,0x03e00008,0x27bd0020};
    for(size_t i=0;i<allocation_return_words.size();++i)word(ram,0x239964+static_cast<uint32_t>(i)*4u,allocation_return_words[i]);
    word(ram,0x23a788,0x3c030029);word(ram,0x23a7c0,0x3c030029);
    word(ram,0x23a7e4,0x03e00008);word(ram,0x23a7e8,0x27bd0020);
    word(ram,0x23f580,0x03e00008);word(ram,0x23f584,0x8c420000);
    word(ram,0x1bfffc,0xaf8288e8);word(ram,0x1c0008,0x3c030001);
    word(ram,0x1c0038,0x0c08e660);
    word(ram,0x1966ec,0x7bb10010);word(ram,0x1966f0,0x7bb00000);
    word(ram,0x1966f4,0x03e00008);word(ram,0x1966f8,0x27bd0030);
    const std::array<uint32_t,5> call_words{0x0c0560b8,0x0c080808,0x0c080698,0x0c0805f0,0x0c07010c};
    for(size_t i=0;i<call_words.size();++i){word(ram,0x1574a0+static_cast<uint32_t>(i)*8u,call_words[i]);word(ram,0x1574a4+static_cast<uint32_t>(i)*8u,0);}
    const std::array<uint32_t,14> prologue_words{0x7fb60060,0x7fb50050,0x0000b02d,0x7fb40040,0x0000a82d,0x7fb30030,0x0000a02d,0x7fb20020,0x0000982d,0x7fb10010,0x0000902d,0x7fb00000,0x0c0660dc,0x0000802d};
    for(size_t i=0;i<prologue_words.size();++i)word(ram,0x157468+static_cast<uint32_t>(i)*4u,prologue_words[i]);
    const std::array<uint32_t,9> argument_words{0x3c04002d,0x3c05002d,0x3c06002d,0x3c07002d,0x2484ed80,0x24a5ed80,0x24c60140,0x080659a8,0x24e70140};
    for(size_t i=0;i<argument_words.size();++i)word(ram,0x198370+static_cast<uint32_t>(i)*4u,argument_words[i]);
    const std::array<uint32_t,10> startup_words{0x0c0692a8,0x00002025,0x42000038,0x3c02002d,0x24421900,0x8c440000,0x0c055d18,0x24450004,0x0806b6b4,0x00402025};
    for(size_t i=0;i<startup_words.size();++i)word(ram,0x10008c+static_cast<uint32_t>(i)*4u,startup_words[i]);
    const std::array<uint32_t,22> install_addresses{0x1acd50,0x1acd68,0x1acd70,0x1acd78,0x1acd84,0x1acd90,0x1acda0,0x1acdb0,0x1acd98,0x1acd9c,0x1acdb4,0x1acdb8,0x1acdbc,0x1acdc0,0x1acdc4,0x1acdc8,0x1acdcc,0x1acdd0,0x1acdd4,0x1acdd8,0x1acddc,0x1acde0};
    const std::array<uint32_t,22> install_words{0x3c050028,0x0c0692a8,0x0c0692a8,0x8e040008,0x8e040010,0x8e240000,0x8e240000,0x2e420008,0x0c06b340,0x26520001,0x5440fff8,0x8e240000,0x0c06b340,0x24040003,0x3c030028,0xdfbf0030,0xdfb20020,0xdfb10010,0xdfb00000,0xac625f98,0x03e00008,0x27bd0040};
    for(size_t i=0;i<install_words.size();++i)word(ram,install_addresses[i],install_words[i]);
    word(ram,0x1ad810,0x1040001e);word(ram,0x1ad830,0x3c050028);
    word(ram,0x1ad848,0x0c0692a8);word(ram,0x1ad850,0x0c0692a8);
    word(ram,0x1ad858,0x8e040008);word(ram,0x1ad864,0x8e240000);
    word(ram,0x1ad868,0x0c06b5e0);word(ram,0x1ad870,0x8e240000);
    word(ram,0x1ad880,0x2e420003);word(ram,0x1ad89c,0x03e00008);
    word(ram,0x1ad8a0,0x27bd0040);
    word(ram,0x1ad7a4,0x8fa30000);word(ram,0x1ad7c8,0x0c069234);
    word(ram,0x1ad7d0,0x0c069230);word(ram,0x1ad7d8,0x8fa20004);
    word(ram,0x1ad7f0,0x03e00008);word(ram,0x1ad7f4,0x27bd0030);
    for(const auto& wrapper : fate::recomp::syscall_return_words) {
        word(ram,wrapper.start,wrapper.first);word(ram,wrapper.start+4u,12u);
        word(ram,wrapper.start+8u,0x03e00008u);word(ram,wrapper.start+12u,0u);
    }
    word(ram,0x1a4828,0x03e00008); word(ram,0x1a482c,0);
    const std::array<uint32_t,9> values{0x3c030028,0x27a40020,0x0c069208,
        0xac626288,0x3c030028,0xdfbf0040,0xac62628c,0x03e00008,0x27bd0050};
    for (size_t i=0;i<values.size();i++) word(ram,0x1ad4e4+static_cast<uint32_t>(i)*4,values[i]);
    word(ram,0x1ad6f8,0x0c06b576);
    word(ram,0x1ad6e0,0x03e00008); word(ram,0x1ad6e4,0);
    word(ram,0x1ad598,0x03e00008); word(ram,0x1ad59c,0);
    word(ram,0x1ad6cc,0x03e00008); word(ram,0x1ad6d0,0x27bd0080);
    word(ram,0x1ad618,0x8e05000c); word(ram,0x1ad624,0x3c048000);
    word(ram,0x1ad634,0x0040982d); word(ram,0x1ad648,0x2671fdf4);
    word(ram,0x1ad674,0x0040982d); word(ram,0x1ad690,0x0040902d);
    word(ram,0x1ad700,0x0c06b6ec);
    word(ram,0x1ad708,0x0c06957e);word(ram,0x1ad710,0x0c06b5fe);word(ram,0x1ad718,0xdfbf0000);
    word(ram,0x1a5628,0x3c110037);word(ram,0x1a566c,0x0040202d);
    word(ram,0x1a56a0,0x0c0691c4);word(ram,0x1a56a8,0x0040202d);
    word(ram,0x1a56b4,0x8e025b58);word(ram,0x1a56c4,0x03e00008);word(ram,0x1a56c8,0x27bd0080);
    for(const auto& pair : std::array<std::array<uint32_t,2>,3>{{{0x1a4620,0x20},{0x1a4640,0x22},{0x1a46b0,0x29}}}) {
        word(ram,pair[0],0x24030000u|pair[1]);word(ram,pair[0]+4u,12u);
        word(ram,pair[0]+8u,0x03e00008u);word(ram,pair[0]+12u,0u);
    }
    word(ram,0x1adb50,0x03e00008); word(ram,0x1adb54,0);
    const std::array<uint32_t,9> resumes{0x1adbf8,0x1adc10,0x1adc28,0x1adc30,0x1adc38,0x1adc44,0x1adc48,0x1adc50,0x1adc60};
    const std::array<uint32_t,9> resume_words{0x3c050028,0x3c050028,0x0c0692a8,0x0c0692a8,0x8e040008,0x8e240000,0x0c06b6e8,0x8e240000,0x2e420008};
    for(size_t i=0;i<resumes.size();++i)word(ram,resumes[i],resume_words[i]);
    word(ram,0x1adb60,0x03e00008);word(ram,0x1adb64,0);
    word(ram,0x1adba8,0x03e00008);word(ram,0x1adbac,0);
    word(ram,0x1adc7c,0x03e00008);word(ram,0x1adc80,0x27bd0040);
    const std::array<uint32_t,30> handler_words{
        0x00063082,0x10c0000a,0x0000382d,0,0x8ca30000,0x24e70001,
        0x24a50004,0x00e6102b,0xac830000,0x24840004,0x1440fff9,0,
        0x03e00008,0x0000102d,0x8c820000,0x1046000b,0x0085102b,
        0x5040000a,0x0002200a,0x24840004,0x8c820000,0x10460005,
        0x0085102b,0x5440fffc,0x24840004,0x10000002,0x0002200a,
        0x0002200a,0x03e00008,0x0080102d};
    for(size_t i=0;i<handler_words.size();++i)
        word(ram,0x1ad518+static_cast<uint32_t>(i)*4,handler_words[i]);
}
}

int main() {
    try {
        auto runtime=std::make_unique<PS2Runtime>();
        require(runtime->memory().initialize(PS2_RAM_SIZE)&&runtime->syncCoreSubsystems(),"runtime init");
        auto* ram=runtime->memory().getRDRAM();
        auto& ctx=runtime->cpu();
        fill_opcodes(ram);
        word(ram,0x1ad504,0); // Changed delay instruction must reject the entire install.
        bool rejected=false;
        try {fate::recomp::register_boot_continuations(*runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!runtime->hasFunction(0x1a4828)&&!runtime->hasFunction(0x1ad4e4),"partial registration on opcode mismatch");
        fill_opcodes(ram);
        word(ram,fate::recomp::syscall_return_words.back().start+12u,1u);
        rejected=false;
        try {fate::recomp::register_boot_continuations(*runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!runtime->hasFunction(0x1a4828),"partial registration on recovered delay mismatch");
        fill_opcodes(ram);
        runtime->registerFunction(0x1a4aa8u,+[](uint8_t*,R5900Context*,PS2Runtime*){});
        rejected=false;
        try {fate::recomp::register_boot_continuations(*runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!runtime->hasFunction(0x1a4828),"partial registration on recovered entry conflict");
        g_ps2RecompiledFunctionTable[0x1a4aa8u/4u]=nullptr;
        const auto existingCallEntry=+[](uint8_t*,R5900Context*,PS2Runtime*){};
        runtime->registerFunction(0x1a797cu,existingCallEntry);
        runtime->registerFunction(0x1a798cu,existingCallEntry);
        runtime->registerFunction(0x1a5400u,existingCallEntry);
        runtime->registerFunction(0x17fef4u,existingCallEntry);
        fate::recomp::register_boot_continuations(*runtime);
        require(runtime->lookupFunction(0x17fef4u)==existingCallEntry,"Preserve existing original IOP wait retry entry");
        require(runtime->lookupFunction(0x1a5400u)==existingCallEntry,"Preserve original existing interrupt removal entry");
        require(runtime->lookupFunction(0x1a797cu)==existingCallEntry&&runtime->lookupFunction(0x1a798cu)==existingCallEntry,"CallRpc preserves existing production entry translations");
        const auto initial_context=ctx;
        for(const auto& wrapper : fate::recomp::syscall_return_words) {
            for(unsigned i=0;i<32;++i)reg(ctx,i,0xdead000000000000ull+i,0xabcd000000000000ull+i);
            reg(ctx,31,0xffffffff00123450ull,0xaabbccddeeff0011ull);
            const auto before=ctx;
            ctx.pc=wrapper.start+8u;
            require(runtime->hasFunction(ctx.pc),"missing recovered wrapper return");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x123450&&!ctx.in_delay_slot&&ctx.branch_pc==wrapper.start+8u,"recovered wrapper JR/delay");
            require(std::memcmp(ctx.r,before.r,sizeof(ctx.r))==0,"recovered wrapper changed GPR128");
        }
        ctx=initial_context;
        require(runtime->hasFunction(0x1a4828)&&runtime->hasFunction(0x1ad4e4)&&
                runtime->hasFunction(0x1ad4f4)&&runtime->hasFunction(0x1ad6f8),"missing continuation");
        require(!runtime->hasFunction(0x1a482c)&&!runtime->hasFunction(0x1ad4f0),"delay slot registered as entry");

        reg(ctx,31,0xffffffff00123450ull,0x1122334455667788ull);
        reg(ctx,2,0x8877665544332211ull,0x1020304050607080ull);
        const auto before_return=ctx;
        ctx.pc=0x1a4828;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x123450&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a4828,"JR target/delay state");
        require(std::memcmp(ctx.r,before_return.r,sizeof(ctx.r))==0,"JR changed GPR state");

        // Resume after the second real syscall: preserve the caller's 64-bit
        // saved RA, write the second ID, restore SP in JR's delay slot.
        reg(ctx,29,0x1000,0x1111222233334444ull);
        reg(ctx,2,0xffffffff87654321ull,0xabcdef0123456789ull);
        reg(ctx,31,0,0x5555666677778888ull);
        const uint64_t saved_ra=0xffffffff001ad6f8ull;
        std::memcpy(ram+0x1040,&saved_ra,8);
        word(ram,0x286288,0x13572468);
        ctx.pc=0x1ad4f4;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad6f8&&reg(ctx,31)==saved_ra,"saved return address");
        require(reg(ctx,29)==0x1050&&reg(ctx,29,1)==0x1111222233334444ull,"stack restore/GPR128");
        require(reg(ctx,31,1)==0x5555666677778888ull,"LD altered upper GPR lane");
        require(word(ram,0x28628c)==0x87654321&&word(ram,0x286288)==0x13572468,"semaphore result stores");
        require(ctx.branch_pc==0x1ad500&&!ctx.in_delay_slot,"epilogue delay state");

        // Delay-slot store must happen before an unresolved second call yields.
        reg(ctx,29,0x2000,0); reg(ctx,2,0x42,0);
        ctx.pc=0x1ad4e4;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(word(ram,0x286288)==0x42&&reg(ctx,4)==0x2020,"call delay effects missing");
        require(reg(ctx,31)==0x1ad4f4&&ctx.pc==0x1a4820,"call continuation target");
        for (const uint32_t address : {0x1ad6e0u, 0x1ad598u, 0x1adb50u,0x1adb60u,0x1adba8u}) {
            reg(ctx,31,0xffffffff001ad618ull,0x1122334455667788ull);
            const auto before=ctx;
            ctx.pc=address;
            runtime->lookupFunction(address)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1ad618&&ctx.branch_pc==address&&!ctx.in_delay_slot,"syscall wrapper return");
            require(std::memcmp(ctx.r,before.r,sizeof(ctx.r))==0,"syscall wrapper changed GPR");
        }
        reg(ctx,29,0x2000,0x1111222233334444ull);
        reg(ctx,31,0x1ad700,0x5555666677778888ull);
        ctx.pc=0x1ad6cc;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad700&&reg(ctx,29)==0x2080&&reg(ctx,29,1)==0x1111222233334444ull,"syscall setup epilogue");
        require(ctx.branch_pc==0x1ad6cc&&!ctx.in_delay_slot,"syscall setup delay");
        const auto before_table_return=ctx;
        ctx.pc=0x1adc7c;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad700&&reg(ctx,29)==0x20c0&&reg(ctx,29,1)==reg(before_table_return,29,1),"table return stack/delay");
        require(ctx.branch_pc==0x1adc7c&&!ctx.in_delay_slot,"table return delay state");
        const auto before_thread_return=ctx;
        ctx.pc=0x1a56c4;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad700&&reg(ctx,29)==0x2140&&reg(ctx,29,1)==reg(before_thread_return,29,1),"thread return SP/GPR128");
        require(ctx.branch_pc==0x1a56c4&&!ctx.in_delay_slot,"thread return delay state");
        const auto before_interrupt_return=ctx;
        ctx.pc=0x1ad7f0;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad700&&reg(ctx,29)==0x2170&&reg(ctx,29,1)==reg(before_interrupt_return,29,1),"interrupt return SP/GPR128");
        require(ctx.branch_pc==0x1ad7f0&&!ctx.in_delay_slot,"interrupt return delay state");
        // Exercise the original result/restore block: COP0 IE bits 0..7 map to
        // boolean v0, and LD restores only the low64 lanes of s0 and ra.
        for(unsigned ie=0;ie<8;++ie) {
            reg(ctx,29,0x4000,0x11223344);reg(ctx,16,0,0xaabbccdd);reg(ctx,31,0,0x55667788);
            word(ram,0x4004,ie<<13u);
            const uint64_t saved_s0=0xffffffff12345678ull,interrupt_saved_ra=0xffffffff00123450ull;
            std::memcpy(ram+0x4010,&saved_s0,8);std::memcpy(ram+0x4020,&interrupt_saved_ra,8);
            ctx.pc=0x1ad7d8;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1ad7f0&&reg(ctx,2)==(ie==0?1u:0u),"interrupt original IE result");
            require(reg(ctx,16)==saved_s0&&reg(ctx,16,1)==0xaabbccdd&&reg(ctx,31)==interrupt_saved_ra&&reg(ctx,31,1)==0x55667788,"interrupt saved registers");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x123450&&reg(ctx,29)==0x4030&&reg(ctx,29,1)==0x11223344,"interrupt resumed epilogue");
        }
        // Zero result skips patch calls, executes the LUI delay slot, restores
        // four saved low64 lanes, and reaches the original JR/SP epilogue.
        reg(ctx,29,0x5000,0x98765432);reg(ctx,2,0,0xabcdef);
        for(unsigned i=0;i<4;++i) {
            const unsigned index=i==3?31u:16u+i;
            reg(ctx,index,0,0x11220000u+i);
            const uint64_t value=i==3?0xffffffff00123450ull:0xabcdef0000000000ull+i;
            std::memcpy(ram+0x5000+i*16u,&value,8);
        }
        ctx.pc=0x1ad810;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad89c&&reg(ctx,2)==0x280000&&reg(ctx,2,1)==0xabcdef,"interrupt patch branch/delay result");
        for(unsigned i=0;i<3;++i)
            require(reg(ctx,16u+i)==0xabcdef0000000000ull+i&&reg(ctx,16u+i,1)==0x11220000u+i,"interrupt patch saved GPR128");
        require(reg(ctx,31)==0xffffffff00123450ull&&reg(ctx,31,1)==0x11220003,"interrupt patch saved RA");
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x123450&&reg(ctx,29)==0x5040&&reg(ctx,29,1)==0x98765432&&!ctx.in_delay_slot&&ctx.branch_pc==0x1ad89c,"interrupt patch JR/SP delay");
        // Nonzero result follows the original call; delay slot computes s1
        // before the absent diagnostic target yields, with no fabricated call.
        reg(ctx,29,0x5000,0);reg(ctx,2,1,0);word(ram,0x286a38,0x81234560);word(ram,0x286a3c,0x99887766);
        ctx.pc=0x1ad810;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad728&&reg(ctx,31)==0x1ad830&&reg(ctx,17)==0x286a48,"interrupt patch call continuation");
        require(reg(ctx,4)==0xffffffff81234560ull&&reg(ctx,5)==0xffffffff99887766ull,"interrupt patch call arguments");
        // Invoke the actual thread-create wrapper with null parameters: kernel
        // rejection must propagate through the original JR without invented ID.
        reg(ctx,4,0,0);reg(ctx,31,0x123450,0x1234);ctx.pc=0x1a4620;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(reg(ctx,2)==0xffffffffffffffffull&&reg(ctx,3)==0x20&&ctx.pc==0x123450,"CreateThread wrapper rejected parameter result");
        word(ram,0x3000,0xdeadbeef); word(ram,0x3004,0x1234);
        word(ram,0x3008,0x5678);
        reg(ctx,4,0x3000,0xabcdef); reg(ctx,5,0x3008,0); reg(ctx,6,0x1234,0);
        reg(ctx,31,0x123450,0); ctx.pc=0x1ad550;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x123450&&reg(ctx,2)==0x3004&&reg(ctx,4,1)==0xabcdef,"find handler interior match");
        reg(ctx,4,0x3000,0);reg(ctx,5,0x3008,0);reg(ctx,6,0x5678,0);ctx.pc=0x1ad550;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(reg(ctx,2)==0,"find handler match at end is rejected by movz delay slot");
        reg(ctx,4,0x3100,0);reg(ctx,5,0x3000,0);reg(ctx,6,7,0);ctx.pc=0x1ad518;
        word(ram,0x3104,0x9999);
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(word(ram,0x3100)==0xdeadbeef&&word(ram,0x3104)==0x9999,"copy handler truncates count to whole words");
        require(reg(ctx,2)==0&&reg(ctx,4)==0x3104&&reg(ctx,5)==0x3004&&reg(ctx,7)==1,"copy handler register effects");
        // Branch-likely loads only on the taken path; the false path must
        // annul its invalid memory operand before passing a0=3 to the call.
        reg(ctx,17,0x6000,0x11223344);word(ram,0x6000,0x81234567);
        reg(ctx,2,1,0);reg(ctx,4,0,0x9876);ctx.pc=0x1acdb4;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1acd98&&reg(ctx,4)==0xffffffff81234567ull&&reg(ctx,4,1)==0x9876&&ctx.branch_pc==0x1acdb4&&!ctx.in_delay_slot,"install taken branch/delay");
        reg(ctx,18,3,0xabcdef);ctx.pc=0x1acd98;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1acd00&&reg(ctx,31)==0x1acda0&&reg(ctx,18)==4&&reg(ctx,18,1)==0xabcdef,"install loop call/increment delay");
        reg(ctx,2,0,0);reg(ctx,17,0xffffffff,0);ctx.pc=0x1acdb4;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1acd00&&reg(ctx,31)==0x1acdc4&&reg(ctx,4)==3&&ctx.branch_pc==0x1acdbc&&!ctx.in_delay_slot,"install annul/call delay");
        reg(ctx,29,0x7000,0x99887766);reg(ctx,2,0xabcdef0181234567ull,0x1234);
        for(unsigned i=0;i<4;++i) {
            const unsigned index=i==3?31u:16u+i;reg(ctx,index,0,0x44550000u+i);
            const uint64_t value=i==3?0xffffffff00123450ull:0x1234560000000000ull+i;
            std::memcpy(ram+0x7000+i*16u,&value,8);
        }
        ctx.pc=0x1acdc4;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x123450&&reg(ctx,29)==0x7040&&reg(ctx,29,1)==0x99887766&&word(ram,0x285f98)==0x81234567,"install final store/stack return");
        for(unsigned i=0;i<3;++i)require(reg(ctx,16u+i)==0x1234560000000000ull+i&&reg(ctx,16u+i,1)==0x44550000u+i,"install restore GPR128");
        require(reg(ctx,31)==0xffffffff00123450ull&&reg(ctx,31,1)==0x44550003&&ctx.branch_pc==0x1acddc&&!ctx.in_delay_slot,"install restore RA/delay");
        reg(ctx,18,7,0);ctx.pc=0x1acdb0;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1acdb4&&reg(ctx,2)==1,"install loop continue bound");
        reg(ctx,18,8,0);ctx.pc=0x1acdb0;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1acdb4&&reg(ctx,2)==0,"install loop end bound");
        // Startup resumes must preserve argc sign extension and compute argv
        // in the call delay before yielding to an absent game entry.
        ctx.cop0_status=0x12340001;word(ram,0x2d1900,0x80000003);
        reg(ctx,4,0,0x1111);reg(ctx,5,0,0x2222);reg(ctx,31,0,0x3333);
        ctx.pc=0x100094;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x157460&&reg(ctx,4)==0xffffffff80000003ull&&reg(ctx,5)==0x2d1904&&reg(ctx,31)==0x1000ac,"startup argc/argv/call");
        require(ctx.cop0_status==0x12350001&&reg(ctx,4,1)==0x1111&&reg(ctx,5,1)==0x2222&&reg(ctx,31,1)==0x3333,"startup EI/GPR128");
        require(ctx.branch_pc==0x1000a4&&!ctx.in_delay_slot,"startup call delay state");
        reg(ctx,2,0xffffffff87654321ull,0xaaaa);ctx.pc=0x1000ac;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1adad0&&reg(ctx,4)==0xffffffff87654321ull&&reg(ctx,4,1)==0x1111&&reg(ctx,31)==0x1000ac,"startup exit tail argument/RA");
        require(ctx.branch_pc==0x1000ac&&!ctx.in_delay_slot,"startup exit delay state");
        reg(ctx,4,0xdeadbeef,0x9876);ctx.pc=0x10008c;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4aa0&&reg(ctx,4)==0&&reg(ctx,4,1)==0x9876&&reg(ctx,31)==0x100094,"startup flush call/delay argument");
        // Seven SQ stores retain both64bit lanes before the working low
        // lanes are cleared. The existing SD RA at frame+70 is untouched.
        reg(ctx,29,0x8000,0x7788);reg(ctx,31,0x1000ac,0x9911);
        for(unsigned i=0;i<7;++i)reg(ctx,16u+i,0x1234000000000000ull+i,0xabcd000000000000ull+i);
        for(unsigned i=0;i<4;++i)reg(ctx,4u+i,0,0x44550000u+i);
        word(ram,0x8070,0x1000ac);word(ram,0x8074,0);word(ram,0x8078,0xdeadbeef);
        const auto prologue_before=ctx;
        ctx.pc=0x157468;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        for(unsigned i=0;i<7;++i) {
            require(std::memcmp(ram+0x8000+i*16u,&prologue_before.r[16u+i],16)==0,"game SQ saved GPR128");
            require(reg(ctx,16u+i,1)==reg(prologue_before,16u+i,1),"game clear altered upper lane");
            require(reg(ctx,16u+i)==(i==1?reg(prologue_before,17):0u),"game working low lane clear");
        }
        require(word(ram,0x8070)==0x1000ac&&word(ram,0x8078)==0xdeadbeef&&reg(ctx,29)==0x8000&&reg(ctx,29,1)==0x7788,"game prologue frame bounds/SP");
        require(ctx.pc==0x1966a0&&reg(ctx,31)==0x1574a0&&reg(ctx,31,1)==0x9911,"game constructor tail target/RA");
        require(reg(ctx,4)==0x2ced80&&reg(ctx,5)==0x2ced80&&reg(ctx,6)==0x2d0140&&reg(ctx,7)==0x2d0140,"game constructor range arguments");
        for(unsigned i=0;i<4;++i)require(reg(ctx,4u+i,1)==0x44550000u+i,"game constructor argument upper lane");
        require(ctx.branch_pc==0x19838c&&!ctx.in_delay_slot,"game constructor tail delay state");
        // Invoke the original list routine: equal bounds must restore the
        // caller's complete128-bit registers without reading/calling entries.
        reg(ctx,29,0x9000,0x1122);reg(ctx,31,0x1574a0,0x3344);
        reg(ctx,16,0xaaaaaaaa55555555ull,0x123456789abcdef0ull);
        reg(ctx,17,0xbbbbbbbb66666666ull,0xfedcba9876543210ull);
        const auto constructor_before=ctx;
        reg(ctx,4,0x6100,0);reg(ctx,5,0x6100,0);ctx.pc=0x1966a0;
        FUN_001966a0_0x1966a0(ram,&ctx,runtime.get());
        require(ctx.pc==0x1966ec&&reg(ctx,29)==0x8fd0&&reg(ctx,31)==0x1574a0,"constructor original empty range");
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1574a0&&reg(ctx,29)==0x9000&&reg(ctx,29,1)==0x1122,"constructor JR/SP");
        require(std::memcmp(&ctx.r[16],&constructor_before.r[16],32)==0&&reg(ctx,31,1)==0x3344,"constructor LQ GPR128 restore");
        require(ctx.branch_pc==0x1966f4&&!ctx.in_delay_slot,"constructor return delay");
        // A nonempty list must load its actual target and yield when absent.
        reg(ctx,29,0x9000,0);reg(ctx,4,0x6100,0);reg(ctx,5,0x6104,0);
        word(ram,0x6100,0x123450);ctx.pc=0x1966a0;
        FUN_001966a0_0x1966a0(ram,&ctx,runtime.get());
        require(ctx.pc==0x123450&&reg(ctx,31)==0x1966cc&&reg(ctx,16)==0x6100,"constructor missing real indirect target");
        const std::array<uint32_t,5> call_targets{0x1582e0,0x202020,0x201a60,0x2017c0,0x1c0430};
        for(unsigned i=0;i<5;++i) {
            const uint32_t source=0x1574a0+i*8u;
            for(unsigned j=1;j<31;++j)reg(ctx,j,0x11110000u+j,0x22220000u+j);
            const auto before=ctx;ctx.pc=source;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==call_targets[i]&&reg(ctx,31)==source+8u&&ctx.branch_pc==source&&!ctx.in_delay_slot,"game sequential call/delay");
            for(unsigned j=1;j<31;++j)require(std::memcmp(&ctx.r[j],&before.r[j],16)==0,"game NOP delay changed GPR128");
        }
        for(const uint32_t value : {0u,0x12345678u,0x80000001u,0xffffffffu}) {
            reg(ctx,2,0x6200,0x9876543210ull);reg(ctx,31,0xffffffff001bfffcull,0x11223344);
            word(ram,0x6200,value);const auto before=ctx;ctx.pc=0x23f580;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1bfffc&&reg(ctx,2)==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(value))),"lookup signed LW/latched JR");
            require(reg(ctx,2,1)==0x9876543210ull&&std::memcmp(&ctx.r[31],&before.r[31],16)==0&&ctx.branch_pc==0x23f580&&!ctx.in_delay_slot,"lookup upper lane/RA/delay");
        }
        reg(ctx,28,0x2d8170,0);reg(ctx,2,0x81234567,0);ctx.pc=0x1bfffc;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(word(ram,0x2d0a58)==0x81234567&&ctx.pc==0x23f570&&reg(ctx,31)==0x1c0008&&reg(ctx,4)==1,"heap second lookup/store/call");
        reg(ctx,2,0xffffffff81234567ull,0);ctx.pc=0x1c0038;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x239980&&reg(ctx,31)==0x1c0040&&reg(ctx,4)==0xffffffff81234567ull,"heap final call full low64 delay");
        // Reentrant lock: compare low64 owner, increment the nesting counter,
        // restore low64 saved lanes, then execute the original JR/SP delay.
        for(const uint32_t count : {0u,7u,0xffffffffu}) {
            reg(ctx,29,0xa000,0x11223344);reg(ctx,2,5,0x55667788);
            reg(ctx,16,0,0xaabbccdd);reg(ctx,17,0,0x99887766);reg(ctx,31,0,0x12345678);
            const std::array<uint64_t,3> saved{0xffffffff12345678ull,0xabcdef0012345678ull,0xffffffff0023994cull};
            std::memcpy(ram+0xa000,saved.data(),sizeof(saved));
            word(ram,0x290c80,5);word(ram,0x290c84,count);ctx.pc=0x23a788;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x23a7e4&&word(ram,0x290c80)==5&&word(ram,0x290c84)==count+1u,"lock reentrant counter wrap/owner");
            require(reg(ctx,2)==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(count+1u)))&&reg(ctx,2,1)==0x55667788,"lock counter signed32/upper lane");
            require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==saved[2]&&reg(ctx,16,1)==0xaabbccdd&&reg(ctx,17,1)==0x99887766&&reg(ctx,31,1)==0x12345678,"lock LD preserves upper lanes");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x23994c&&reg(ctx,29)==0xa020&&reg(ctx,29,1)==0x11223344&&ctx.branch_pc==0x23a7e4&&!ctx.in_delay_slot,"lock JR/SP delay");
        }
        // Different owner follows the actual wait call. The absent target in
        // this diagnostic must yield after executing its LW argument delay.
        reg(ctx,29,0xa000,0);reg(ctx,2,6,0x5555);reg(ctx,4,0,0x6666);
        word(ram,0x290c80,5);word(ram,0x290c84,7);word(ram,0x286288,0x80000001);ctx.pc=0x23a788;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4860&&reg(ctx,31)==0x23a7c0&&reg(ctx,4)==0xffffffff80000001ull&&reg(ctx,4,1)==0x6666,"lock wait target/RA/LW delay");
        require(word(ram,0x290c80)==5&&word(ram,0x290c84)==7&&reg(ctx,16)==6&&reg(ctx,17)==0x290c80,"lock does not mutate ownership before wait returns");
        // Resume only after the real call boundary; no fake WaitSema success.
        ctx.pc=0x23a7c0;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a7e4&&word(ram,0x290c80)==6&&word(ram,0x290c84)==8,"lock wait resume ownership/counter");
        // The hard-coded original arithmetic requests -4112 bytes. Preserve
        // this unresolved behavior; table results do not enter the formula.
        reg(ctx,28,0x2d8170,0);reg(ctx,2,0x680000,0);ctx.pc=0x1c0008;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x239928&&reg(ctx,4)==0xffffffffffffeff0ull&&reg(ctx,31)==0x1c0038,"heap original negative allocation request");
        require(word(ram,0x2d0a54)==0x680000,"heap lookup value stored separately from request");
        // Invoke the original call resumes with their actual arguments. Missing
        // diagnostic callees must yield; never replace an allocator response.
        reg(ctx,16,0xb000,0x1111);reg(ctx,17,0xffffffffffffeff0ull,0x2222);
        reg(ctx,4,0,0x3333);reg(ctx,5,0,0x4444);word(ram,0xb000,0x81234567);ctx.pc=0x23994c;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x239c20&&reg(ctx,31)==0x239958&&reg(ctx,4)==0xffffffff81234567ull&&reg(ctx,5)==0xffffffffffffeff0ull,"allocation original call args/negative size");
        require(reg(ctx,4,1)==0x3333&&reg(ctx,5,1)==0x4444&&reg(ctx,17,1)==0x2222&&ctx.branch_pc==0x239950&&!ctx.in_delay_slot,"allocation args upper lanes/call delay");
        reg(ctx,2,0xabcdef0187654321ull,0x5555);ctx.pc=0x239958;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x239964&&reg(ctx,17)==0xabcdef0187654321ull&&reg(ctx,17,1)==0x2222,"allocation unlock target/result delay");
        require(reg(ctx,2)==0xabcdef0187654321ull&&reg(ctx,2,1)==0x5555&&reg(ctx,4)==0xffffffff81234567ull&&ctx.branch_pc==0x23995c&&!ctx.in_delay_slot,"allocation unlock preserves result");
        for(const uint64_t value : {0ull,0xffffffffffffffffull,0xabcdef0187654321ull}) {
            reg(ctx,29,0xc000,0x77889900);reg(ctx,17,value,0x11223344);reg(ctx,16,0,0x55667788);reg(ctx,31,0,0x99aabbcc);reg(ctx,2,0,0xddeeff00);
            const std::array<uint64_t,3> saved{0xabcdef1234567890ull,0x9876543210abcdefull,0xffffffff001c0038ull};
            std::memcpy(ram+0xc000,saved.data(),sizeof(saved));const auto before=ctx;ctx.pc=0x239964;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(reg(ctx,2)==value&&reg(ctx,2,1)==0xddeeff00,"allocation return exact low64 result before s1 restore");
            require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==saved[2]&&reg(ctx,16,1)==0x55667788&&reg(ctx,17,1)==0x11223344&&reg(ctx,31,1)==0x99aabbcc,"allocation LD upper lanes");
            require(ctx.pc==0x1c0038&&reg(ctx,29)==0xc020&&reg(ctx,29,1)==0x77889900&&ctx.branch_pc==0x239974&&!ctx.in_delay_slot,"allocation JR/SP delay");
            for(unsigned index=1;index<32;++index)if(index!=2&&index!=16&&index!=17&&index!=29&&index!=31)
                require(std::memcmp(&ctx.r[index],&before.r[index],16)==0,"allocation return unrelated GPR128 changed");
            require(std::memcmp(ram+0xc000,saved.data(),sizeof(saved))==0,"allocation return changed stack memory");
        }
        // A concrete small-bin fixture exercises the original list removal,
        // metadata writes and call boundary rather than a substitute allocator.
        reg(ctx,17,16,0x1111);reg(ctx,19,0x290528,0x2222);
        word(ram,0x290844,0xd000);word(ram,0xd004,0x21);
        word(ram,0xd008,0xd100);word(ram,0xd00c,0xd200);word(ram,0xd024,0x40);
        ctx.pc=0x239c64;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x23a324&&reg(ctx,16)==0xd000&&reg(ctx,4)==0x290528,"allocator small-bin real unlock call");
        require(word(ram,0xd10c)==0xd200&&word(ram,0xd208)==0xd100&&word(ram,0xd024)==0x41,"allocator real list removal and in-use metadata");
        for(const uint32_t chunk : {0u,0xd000u,0x7ffffffcu,0xfffffffcu}) {
            reg(ctx,29,0xe000,0x7788);reg(ctx,16,chunk,0x1122);reg(ctx,2,0,0x3344);
            for(unsigned i=1;i<5;++i)reg(ctx,16+i,0,0x1122+i);
            reg(ctx,31,0,0x5566);
            const std::array<uint64_t,6> saved{0x1234567800000001ull,0x1234567800000002ull,0x1234567800000003ull,0x1234567800000004ull,0x1234567800000005ull,0xffffffff00239958ull};
            std::memcpy(ram+0xe000,saved.data(),sizeof(saved));ctx.pc=0x23a324;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(reg(ctx,2)==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(chunk+8u)))&&reg(ctx,2,1)==0x3344,"allocator original payload pointer signed wrap");
            for(unsigned i=0;i<5;++i)require(reg(ctx,16+i)==saved[i]&&reg(ctx,16+i,1)==0x1122+i,"allocator saved registers low64/upper64");
            require(ctx.pc==0x239958&&reg(ctx,31)==saved[5]&&reg(ctx,31,1)==0x5566&&reg(ctx,29)==0xe030&&reg(ctx,29,1)==0x7788&&ctx.branch_pc==0x23a340&&!ctx.in_delay_slot,"allocator JR/RA/SP30 delay");
        }
        // Nested release decrements only its counter; owner stays locked and
        // the original LD RA leads into the recovered JR/SP16 tail.
        reg(ctx,29,0xf000,0x1111);reg(ctx,31,0x23a324,0x2222);
        word(ram,0x290c80,7);word(ram,0x290c84,2);ctx.pc=0x23a7f0;
        FUN_0023a7f0_0x23a7f0(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a834&&reg(ctx,29)==0xeff0&&reg(ctx,31)==0x23a324&&word(ram,0x290c80)==7&&word(ram,0x290c84)==1,"unlock nested counter/RA");
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a324&&reg(ctx,29)==0xf000&&reg(ctx,29,1)==0x1111&&reg(ctx,31,1)==0x2222&&ctx.branch_pc==0x23a834&&!ctx.in_delay_slot,"unlock nested JR/SP delay");
        // The observed second SetupHeap result is a limit, not allocation
        // success. The original unsigned comparison permits this shrink.
        for(const uint64_t interrupts : {0ull,0x10000ull}) {
            reg(ctx,29,0x11000,0x1122);reg(ctx,2,0x1ff8000,0x3344);
            reg(ctx,16,0x1ff6010,0x5566);reg(ctx,17,interrupts,0x7788);reg(ctx,18,0x280000,0x99aa);reg(ctx,31,0,0xbbcc);ctx.cop0_status=1;
            const std::array<uint64_t,4> saved{0xabcdef0000000001ull,0xabcdef0000000002ull,0xabcdef0000000003ull,0xffffffff0023c420ull};
            for(unsigned i=0;i<4;++i)std::memcpy(ram+0x11000+i*16u,&saved[i],8);
            word(ram,0x285b54,0x1ff7000);ctx.pc=0x1a4f78;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a4fc4&&word(ram,0x285b54)==0x1ff6010&&reg(ctx,2)==0x1ff7000&&reg(ctx,2,1)==0x3344,"growth shrink returns old break and stores new break");
            require(ctx.cop0_status==(interrupts?0x10001u:1u),"growth restores prior interrupt bit");
            for(unsigned i=0;i<3;++i)require(reg(ctx,16+i)==saved[i]&&reg(ctx,16+i,1)==0x5566+i*0x2222,"growth LD restores low64 preserves upper64");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x23c420&&reg(ctx,29)==0x11040&&reg(ctx,29,1)==0x1122&&reg(ctx,31,1)==0xbbcc&&ctx.branch_pc==0x1a4fc4&&!ctx.in_delay_slot,"growth JR/SP40 delay");
        }
        // Limit below desired break follows the real errno provider call.
        reg(ctx,2,0x10000,0);reg(ctx,16,0x11000,0);reg(ctx,18,0x280000,0);
        word(ram,0x285b54,0x10000);ctx.pc=0x1a4f78;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x238738&&reg(ctx,31)==0x1a4f8c&&word(ram,0x285b54)==0x10000,"growth limit failure calls real errno routine without storing break");
        reg(ctx,29,0x11000,0);reg(ctx,2,0x12000,0x4455);reg(ctx,17,0,0);ctx.pc=0x1a4f8c;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4fc4&&word(ram,0x12000)==12&&reg(ctx,2)==0xffffffffffffffffull&&reg(ctx,2,1)==0x4455&&word(ram,0x285b54)==0x10000,"growth errno12 and failure value");
        // Resume after an EE checkpoint in the original interrupt-disable loop.
        reg(ctx,29,0x11000,0);reg(ctx,18,0x280000,0);reg(ctx,4,0x20,0);ctx.cop0_status=0x10001;ctx.pc=0x1a4f48;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4800&&ctx.cop0_status==1&&reg(ctx,31)==0x1a4f78&&reg(ctx,16)==0x10020,"growth interrupt loop and original call delay");
        for(const uint64_t result : {0ull,0x1ff7000ull,0xabcdef0081234567ull}) {
            reg(ctx,2,result,0x1111);reg(ctx,4,0,0x2222);reg(ctx,3,0,0x3333);ctx.pc=0x23c420;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x23c428&&reg(ctx,4)==result&&reg(ctx,4,1)==0x2222&&reg(ctx,3)==0xffffffffffffffffull&&reg(ctx,3,1)==0x3333,"sbrk original resume result width");
            reg(ctx,29,0x13000,0x4444);reg(ctx,16,0xffffffff,0x5555);reg(ctx,17,0xffffffff,0x6666);reg(ctx,31,0,0x7777);
            const std::array<uint64_t,3> saved{0x1234567800000001ull,0x1234567800000002ull,0xffffffff00239a18ull};
            std::memcpy(ram+0x13000,saved.data(),sizeof(saved));
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x239a18&&reg(ctx,2)==result&&reg(ctx,2,1)==0x1111&&reg(ctx,4)==result,"sbrk success preserves exact result without errno read");
            require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==saved[2]&&reg(ctx,16,1)==0x5555&&reg(ctx,17,1)==0x6666&&reg(ctx,31,1)==0x7777,"sbrk saved low64 and upper lanes");
            require(reg(ctx,29)==0x13020&&reg(ctx,29,1)==0x4444&&ctx.branch_pc==0x23c448&&!ctx.in_delay_slot,"sbrk JR/SP20 delay");
        }
        for(const uint32_t error : {0u,12u,0x80000001u,0xffffffffu}) {
            reg(ctx,29,0x13000,0);reg(ctx,2,0xffffffffffffffffull,0x1111);reg(ctx,4,0xffffffffffffffffull,0);
            reg(ctx,3,0xffffffffffffffffull,0x2222);reg(ctx,16,error?0x14000u:0xffffffffu,0x3333);reg(ctx,17,0x14010,0x4444);reg(ctx,31,0,0x5555);
            word(ram,0x14010,error);word(ram,0x14000,0xdeadbeef);ctx.pc=0x23c428;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x239a18&&reg(ctx,2)==0xffffffffffffffffull&&reg(ctx,2,1)==0x1111,"sbrk failure preserves result");
            require(word(ram,0x14000)==(error?error:0xdeadbeef)&&reg(ctx,3)==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(error)))&&reg(ctx,3,1)==0x2222,"sbrk signed errno transfer and zero annulled invalid destination");
            require(reg(ctx,16)==0x1234567800000001ull&&reg(ctx,16,1)==0x3333&&reg(ctx,17,1)==0x4444&&reg(ctx,31,1)==0x5555,"sbrk failure restores caller not errno destination");
        }
        const auto growth_frame=[&]() {
            reg(ctx,29,0x15000,0x1111);
            for(unsigned i=0;i<10;++i) {
                const unsigned index=i<8?16u+i:i==8?30u:31u;
                reg(ctx,index,0,0x2222+i);
                const uint64_t value=i==9?0xffffffff00239d50ull:0xabcdef0000000000ull+i;
                std::memcpy(ram+0x15010+i*8u,&value,8);
            }
        };
        for(const uint32_t source : {0x239a6cu,0x239b24u}) {
            growth_frame();reg(ctx,2,0xffffffffffffffffull,0x3333);
            reg(ctx,16,0x4000,0x2222);reg(ctx,17,0x1000,0x2223);reg(ctx,21,0xffffffffffffffffull,0x2227);
            word(ram,0x290c58,0x1234);ctx.pc=source;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x239c18&&word(ram,0x290c58)==0x1234,"growth failed call restores without metadata writes");
            for(unsigned i=0;i<10;++i) {
                const unsigned index=i<8?16u+i:i==8?30u:31u;
                const uint64_t value=i==9?0xffffffff00239d50ull:0xabcdef0000000000ull+i;
                require(reg(ctx,index)==value&&reg(ctx,index,1)==0x2222+i,"growth restores ten low64 lanes");
            }
            if(source==0x239a6c)require(reg(ctx,2)==0&&reg(ctx,2,1)==0x3333,"growth failure BEQ comparison delay");
            else require(reg(ctx,4)==0xffffffffffffefffull&&reg(ctx,2)==0xffffffffffffffffull,"growth failure SUBU delay executes");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x239d50&&reg(ctx,29)==0x15060&&reg(ctx,29,1)==0x1111&&ctx.branch_pc==0x239c18&&!ctx.in_delay_slot,"growth JR/SP60 delay");
        }
        // Update maxima only when the signed LW value, compared as low64
        // unsigned, exceeds each original LD value. Test both annul paths.
        for(const uint32_t count : {16u,0x80000001u}) {
            growth_frame();reg(ctx,30,0x290000,0x222a);word(ram,0x290c58,count);
            const uint64_t low=0,high=0xffffffffffffffffull;
            std::memcpy(ram+0x290c48,&low,8);std::memcpy(ram+0x290c50,&high,8);ctx.pc=0x239bbc;
            entry_00239bbc_0x239bbc(ram,&ctx,runtime.get());
            require(ctx.pc==0x239bf0,"catalogued maxima entry reaches existing restore entry");
            entry_00239bf0_0x239bf0(ram,&ctx,runtime.get());
            uint64_t first,second;std::memcpy(&first,ram+0x290c48,8);std::memcpy(&second,ram+0x290c50,8);
            require(ctx.pc==0x239d50&&first==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(count)))&&second==high,"growth conditional SD maxima and signed count");
        }
        // Insufficient top chunk follows the original unlock call. No heap
        // metadata may change and the caller state pointer is its real arg.
        reg(ctx,16,0x290828,0x1111);reg(ctx,17,0x100,0x2222);reg(ctx,18,0xfffffffffffffffcull,0x3333);
        reg(ctx,19,0x290528,0x4444);reg(ctx,20,0x290000,0x5555);
        reg(ctx,4,0,0x2222);
        word(ram,0x290830,0x16000);word(ram,0x16004,0x81);ctx.pc=0x23a1d8;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x23a240&&reg(ctx,4)==0x290528&&reg(ctx,4,1)==0x2222,"allocator insufficient chunk real unlock call");
        require(word(ram,0x16004)==0x81&&word(ram,0x290830)==0x16000&&reg(ctx,8)==0xffffffffffffff80ull,"allocator insufficient chunk difference and unchanged metadata");
        reg(ctx,2,0xabcdef,0x6666);ctx.pc=0x23a240;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a328&&reg(ctx,2)==0&&reg(ctx,2,1)==0x6666&&ctx.branch_pc==0x23a240&&!ctx.in_delay_slot,"allocator failure branch zero delay");
        reg(ctx,29,0x17000,0x7777);
        const std::array<uint64_t,6> failure_saved{0x1234567800000001ull,0x1234567800000002ull,0x1234567800000003ull,0x1234567800000004ull,0x1234567800000005ull,0xffffffff00239958ull};
        std::memcpy(ram+0x17000,failure_saved.data(),sizeof(failure_saved));
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x239958&&reg(ctx,2)==0&&reg(ctx,2,1)==0x6666&&reg(ctx,29)==0x17030&&reg(ctx,29,1)==0x7777,"allocator failure restore does not manufacture pointer");
        for(unsigned i=0;i<5;++i)require(reg(ctx,16+i)==failure_saved[i]&&reg(ctx,16+i,1)==0x1111+i*0x1111,"allocator failure saved register lanes");
        // The original wrapper passes its pointer to the real free routine.
        reg(ctx,16,0x18000,0x1111);reg(ctx,17,0xabcdef0187654321ull,0x2222);
        reg(ctx,4,0,0x3333);reg(ctx,5,0,0x4444);word(ram,0x18000,0x81234567);ctx.pc=0x2399a4;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x238b00&&reg(ctx,31)==0x2399b0&&reg(ctx,4)==0xffffffff81234567ull&&reg(ctx,5)==0xabcdef0187654321ull,"free wrapper original pointer/state args");
        require(reg(ctx,4,1)==0x3333&&reg(ctx,5,1)==0x4444&&ctx.branch_pc==0x2399a8&&!ctx.in_delay_slot,"free wrapper call delay upper lanes");
        // The restore then tail-jumps to the actual unlock implementation;
        // its nested release returns through the previously saved caller RA.
        reg(ctx,29,0x19000,0x5555);reg(ctx,16,0x18000,0x1111);reg(ctx,17,0,0x2222);reg(ctx,31,0,0x6666);
        const std::array<uint64_t,3> saved_free{0xabcdef0000000001ull,0xabcdef0000000002ull,0xffffffff001c0040ull};
        std::memcpy(ram+0x19000,saved_free.data(),sizeof(saved_free));word(ram,0x290c80,9);word(ram,0x290c84,2);ctx.pc=0x2399b0;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a834&&reg(ctx,29)==0x19010&&reg(ctx,4)==0xffffffff81234567ull&&reg(ctx,31)==saved_free[2],"free wrapper tail unlock saved RA and SP");
        require(reg(ctx,16)==saved_free[0]&&reg(ctx,17)==saved_free[1]&&reg(ctx,16,1)==0x1111&&reg(ctx,17,1)==0x2222&&reg(ctx,31,1)==0x6666,"free wrapper LD restores upper lanes");
        require(word(ram,0x290c80)==9&&word(ram,0x290c84)==1,"free wrapper actual nested unlock effect");
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1c0040&&reg(ctx,29)==0x19020&&reg(ctx,29,1)==0x5555&&!ctx.in_delay_slot,"free wrapper unlock returns to original caller");
        // Original free merges with top chunk; threshold selects trim call.
        for(const uint64_t threshold : {0ull,0x1000ull}) {
            reg(ctx,16,0x1a008,0x1111);reg(ctx,17,0xabcdef0000290528ull,0x2222);
            reg(ctx,29,0x1b000,0x3333);reg(ctx,31,0,0x4444);
            const std::array<uint64_t,3> free_saved{0xabcdef0012345678ull,0xabcdef0087654321ull,0xffffffff002399b0ull};
            std::memcpy(ram+0x1b000,free_saved.data(),sizeof(free_saved));
            word(ram,0x1a004,0x21);word(ram,0x1a024,0x43);word(ram,0x290830,0x1a020);
            std::memcpy(ram+0x290c30,&threshold,8);word(ram,0x290c38,0x81234567);
            word(ram,0x290c80,7);word(ram,0x290c84,2);ctx.pc=0x238b24;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x290830)==0x1a000&&word(ram,0x1a004)==0x61,"free allocator top coalesce metadata and flag");
            require(reg(ctx,8)==0x60&&reg(ctx,4)==0xabcdef0000290528ull,"free allocator coalesce sum and full64 owner");
            if(threshold==0) {
                require(ctx.pc==0x238df8&&reg(ctx,31)==0x238bb0&&reg(ctx,5)==0xffffffff81234567ull,"free allocator trim target and signed delay argument");
                require(ctx.branch_pc==0x238ba8&&!ctx.in_delay_slot,"free allocator trim delay completion");
                ctx.pc=0x238bb0;
                entry_00238bb0_0x238bb0(ram,&ctx,runtime.get());
            }
            require(ctx.pc==0x23a834&&word(ram,0x290c84)==1&&word(ram,0x290c80)==7,"free allocator original tail nested unlock");
            require(reg(ctx,16)==free_saved[0]&&reg(ctx,17)==free_saved[1]&&reg(ctx,31)==free_saved[2],"free allocator restores saved low64");
            require(reg(ctx,16,1)==0x1111&&reg(ctx,17,1)==0x2222&&reg(ctx,31,1)==0x4444,"free allocator preserves upper lanes");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x2399b0&&reg(ctx,29)==0x1b020&&reg(ctx,29,1)==0x3333,"free allocator actual unlock return and SP delays");
        }
        // Original trim page rounding and query call; small chunks unlock.
        for(const uint32_t size : {0x60u,0x2010u,0xfffff000u}) {
            reg(ctx,16,0,0x1111);reg(ctx,17,0xabcdef0000290528ull,0x2222);
            word(ram,0x290830,0x1c000);word(ram,0x1c004,size|1u);
            word(ram,0x290c80,7);word(ram,0x290c84,3);reg(ctx,29,0x1d000,0x3333);ctx.pc=0x238e28;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            const uint64_t rounded=((static_cast<uint64_t>(size)+0xfef)>>12)-1;
            require(reg(ctx,16)==(rounded<<12)&&reg(ctx,18)==size,"trim original unsigned size and page rounding");
            require(word(ram,0x1c004)==(size|1u),"trim query leaves chunk metadata unchanged");
            if(size==0x60u) {
                require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x238f08,"small trim original unlock call");
                FUN_0023a7f0_0x23a7f0(ram,&ctx,runtime.get());
                require(ctx.pc==0x23a834&&word(ram,0x290c84)==2,"small trim actual nested unlock");
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                require(ctx.pc==0x238f08,"small trim resumes zero result branch");
            } else {
                require(ctx.pc==0x23c3f8&&reg(ctx,31)==0x238e74&&reg(ctx,5)==0&&reg(ctx,4)==0xabcdef0000290528ull,"trim query call arguments and delay");
            }
        }
        // Query mismatch unlocks; matching break requests the signed decrement.
        for(const bool matches : {false,true}) {
            reg(ctx,16,0x2000,0x1111);reg(ctx,17,0xabcdef0000290528ull,0x2222);
            reg(ctx,18,0x3010,0x3333);reg(ctx,20,0x290828,0x4444);
            word(ram,0x290830,0x1c000);reg(ctx,2,matches?0x1f010:0x1f014,0x5555);
            word(ram,0x290c80,7);word(ram,0x290c84,3);reg(ctx,29,0x1d000,0x6666);ctx.pc=0x238e74;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            if(matches) {
                require(ctx.pc==0x23c3f8&&reg(ctx,31)==0x238ea0&&reg(ctx,19)==0x2000&&reg(ctx,5)==0xffffffffffffe000ull,"trim matching break signed shrink call");
                require(ctx.branch_pc==0x238e98&&!ctx.in_delay_slot,"trim shrink delay completed");
            } else {
                require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x238f08,"trim mismatch original unlock call");
                FUN_0023a7f0_0x23a7f0(ram,&ctx,runtime.get());
                require(ctx.pc==0x23a834&&word(ram,0x290c84)==2,"trim mismatch actual unlock");
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());require(ctx.pc==0x238f08,"trim mismatch return point");
            }
        }
        reg(ctx,2,0xabcdef,0x7777);ctx.pc=0x238f08;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x238f44&&reg(ctx,2)==0&&reg(ctx,2,1)==0x7777&&ctx.branch_pc==0x238f08&&!ctx.in_delay_slot,"trim failure branch zero and delay lanes");
        for(const uint32_t entry : {0x238f40u,0x238f44u}) {
            reg(ctx,29,0x1d000,0x6666);reg(ctx,2,0,0x7777);reg(ctx,31,0,0x8888);
            const std::array<uint64_t,6> trim_saved{1,2,3,4,5,0xffffffff00238bb0ull};
            std::memcpy(ram+0x1d000,trim_saved.data(),sizeof(trim_saved));
            for(unsigned i=0;i<5;++i)reg(ctx,16+i,0,0x1111+i);
            ctx.pc=entry;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x238bb0&&reg(ctx,29)==0x1d030&&reg(ctx,29,1)==0x6666&&reg(ctx,31)==trim_saved[5]&&reg(ctx,31,1)==0x8888,"trim restore RA/JR/SP delay");
            require(reg(ctx,2)==(entry==0x238f40?1ull:0ull)&&reg(ctx,2,1)==0x7777,"trim success sets1 failure preserves0");
            for(unsigned i=0;i<5;++i)require(reg(ctx,16+i)==trim_saved[i]&&reg(ctx,16+i,1)==0x1111+i,"trim LD restores preserve upper lanes");
        }
        // Successful trim updates actual top flags and accounting before unlock.
        reg(ctx,16,0x2000,0x1111);reg(ctx,17,0xabcdef0000290528ull,0x2222);
        reg(ctx,18,0x5010,0x3333);reg(ctx,19,0x2000,0x4444);reg(ctx,20,0x290828,0x5555);
        word(ram,0x290830,0x1e000);word(ram,0x1e004,0x5011);word(ram,0x290c58,0x8000);
        reg(ctx,2,0x23010,0x6666);reg(ctx,29,0x1f000,0x7777);ctx.pc=0x238ea0;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x238f40&&reg(ctx,4)==0xabcdef0000290528ull,"trim success original unlock call");
        require(word(ram,0x1e004)==0x3011&&word(ram,0x290c58)==0x6000,"trim success metadata and accounting subtraction");
        require(ctx.branch_pc==0x238f38&&!ctx.in_delay_slot,"trim success accounting delay completed");
        word(ram,0x290c80,7);word(ram,0x290c84,3);
        FUN_0023a7f0_0x23a7f0(ram,&ctx,runtime.get());runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x238f40&&word(ram,0x290c84)==2,"trim success actual nested unlock");
        // Failure queries current break instead of pretending trim succeeded.
        reg(ctx,17,0xabcdef0000290528ull,0x2222);reg(ctx,2,0xffffffffffffffffull,0x6666);ctx.pc=0x238ea0;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x23c3f8&&reg(ctx,31)==0x238ec0&&reg(ctx,5)==0&&reg(ctx,4)==0xabcdef0000290528ull,"trim failed decrement original query call");
        require(word(ram,0x1e004)==0x3011&&word(ram,0x290c58)==0x6000,"trim failed decrement leaves metadata before query");
        for(const uint32_t delta : {8u,0x40u}) {
            reg(ctx,20,0x290828,0x5555);reg(ctx,17,0xabcdef0000290528ull,0x2222);
            reg(ctx,29,0x1f000,0x7777);reg(ctx,2,0x1e000+delta,0x6666);
            word(ram,0x290830,0x1e000);word(ram,0x1e004,0xaaaa);word(ram,0x290c40,0x1d000);word(ram,0x290c58,0xbbbb);ctx.pc=0x238ec0;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x23a7f0&&reg(ctx,31)==0x238f08&&reg(ctx,18)==delta,"trim failed query delta and unlock");
            require(word(ram,0x1e004)==(delta<16?0xaaaau:delta|1u)&&word(ram,0x290c58)==(delta<16?0xbbbbu:0x1000u+delta),"trim failure query conditional metadata stores");
            word(ram,0x290c80,7);word(ram,0x290c84,3);
            FUN_0023a7f0_0x23a7f0(ram,&ctx,runtime.get());runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x238f08&&word(ram,0x290c84)==2,"trim failure query actual nested unlock");
        }
        // Heap metadata builder uses the end address and aligns its header.
        for(const uint32_t base : {0x680000u,0x680123u}) {
            const uint32_t raw_size=0x01ff7000u-base;
            const uint32_t header=base+((raw_size-16u)&~15u);
            reg(ctx,28,0x2d8170,0x1111);reg(ctx,29,0x20000,0x2222);reg(ctx,31,0,0x3333);
            for(unsigned i=1;i<=8;++i)reg(ctx,i,0xabcdef,0x4444+i);
            word(ram,0x2d0a54,base);
            const uint64_t caller=0xffffffff001966ecull;std::memcpy(ram+0x20000,&caller,8);
            word(ram,header-4,0xabcddcba);word(ram,header+16,0x12344321);
            for(unsigned i=0;i<4;++i)word(ram,header+i*4,0xeeeeeeee);
            ctx.pc=0x1c0040;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x464a90)==base&&word(ram,0x464aa8)==raw_size,"heap builder base and raw size globals");
            require(word(ram,0x464a94)==header&&word(ram,0x464a98)==header&&word(ram,0x464a9c)==header,"heap builder aligned header globals");
            require(word(ram,0x464aac)==raw_size-16-(raw_size&15u),"heap builder remaining aligned capacity");
            require(word(ram,header)==0&&word(ram,header+4)==0&&word(ram,header+8)==0&&word(ram,header+12)==raw_size-16-(raw_size&15u),"heap builder header fields");
            require(word(ram,header-4)==0xabcddcba&&word(ram,header+16)==0x12344321,"heap builder adjacent memory preserved");
            require(reg(ctx,2)==raw_size&&reg(ctx,3)==raw_size-16-(raw_size&15u),"heap builder final signed SUBU results");
            require(ctx.pc==0x1966ec&&reg(ctx,31)==caller&&reg(ctx,31,1)==0x3333&&reg(ctx,29)==0x20010&&reg(ctx,29,1)==0x2222,"heap builder RA and JR stack delay");
            require(ctx.branch_pc==0x1c00d4&&!ctx.in_delay_slot,"heap builder delay state");
            for(unsigned i=1;i<=8;++i)require(reg(ctx,i,1)==0x4444+i,"heap builder upper lanes preserved");
        }
        reg(ctx,4,0xabcdef0123456789ull,0x1111);reg(ctx,31,0,0x2222);reg(ctx,29,0x22000,0x3333);ctx.pc=0x17feb0;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a7068&&reg(ctx,31)==0x17feb8&&reg(ctx,4)==0,"subsystem resume original call and zero argument");
        require(reg(ctx,4,1)==0x1111&&reg(ctx,31,1)==0x2222&&reg(ctx,29)==0x22000&&reg(ctx,29,1)==0x3333,"subsystem resume no repeated prologue and preserved upper lanes");
        require(ctx.branch_pc==0x17feb0&&!ctx.in_delay_slot,"subsystem resume JAL delay completed");
        // First invocation sets the real init flag in the call delay slot.
        reg(ctx,29,0x24000,0x1111);reg(ctx,17,0,0x2222);reg(ctx,31,0,0x3333);
        word(ram,0x285b70,0);ctx.pc=0x1a7080;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad4a8&&reg(ctx,31)==0x1a70b0&&word(ram,0x285b70)==1&&reg(ctx,17)==1,"subsystem first init flag before restore call");
        require(ctx.branch_pc==0x1a70a8&&!ctx.in_delay_slot&&reg(ctx,17,1)==0x2222,"subsystem flag call delay lanes");
        ctx.pc=0x1a70b0;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a6998&&reg(ctx,31)==0x1a70b8&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a70b0,"subsystem first init next original call");
        // Subsequent invocation restores frame and tail-jumps; signed flag LW.
        const std::array<uint64_t,7> flag_saved{0xabcdef0000000001ull,0,0xabcdef0000000002ull,0,0xabcdef0000000003ull,0,0xffffffff0017feb8ull};
        std::memcpy(ram+0x24000,flag_saved.data(),sizeof(flag_saved));
        reg(ctx,16,0,0x4444);reg(ctx,17,0,0x5555);reg(ctx,18,0,0x6666);reg(ctx,31,0,0x7777);reg(ctx,29,0x24000,0x8888);
        word(ram,0x285b70,0x81234567);ctx.pc=0x1a7080;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad4a8&&reg(ctx,2)==0xffffffff81234567ull&&word(ram,0x285b70)==0x81234567,"subsystem initialized path signed flag no mutation");
        require(reg(ctx,16)==flag_saved[0]&&reg(ctx,17)==flag_saved[2]&&reg(ctx,18)==flag_saved[4]&&reg(ctx,31)==flag_saved[6],"subsystem initialized path saved low64");
        require(reg(ctx,16,1)==0x4444&&reg(ctx,17,1)==0x5555&&reg(ctx,18,1)==0x6666&&reg(ctx,31,1)==0x7777&&reg(ctx,29)==0x24040&&reg(ctx,29,1)==0x8888,"subsystem initialized path lanes and SP delay");
        require(ctx.branch_pc==0x1a70a0&&!ctx.in_delay_slot,"subsystem initialized tail jump state");
        for(const uint64_t previous_mask : {0ull,0x10000ull,0xffffffffffffffffull}) {
            reg(ctx,2,previous_mask,0x1111);reg(ctx,31,0xffffffff001a70b0ull,0x2222);
            reg(ctx,29,0x26000,0x3333);ctx.cop0_status=0x00400003;ctx.pc=0x1ad4b4;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.cop0_status==0x00410003&&reg(ctx,2)==(previous_mask?1ull:0ull),"interrupt helper EI and unsigned delay boolean");
            require(ctx.pc==0x1a70b0&&ctx.branch_pc==0x1ad4b8&&!ctx.in_delay_slot,"interrupt helper JR sampled target and delay state");
            require(reg(ctx,2,1)==0x1111&&reg(ctx,31)==0xffffffff001a70b0ull&&reg(ctx,31,1)==0x2222&&reg(ctx,29)==0x26000&&reg(ctx,29,1)==0x3333,"interrupt helper preserves lanes RA and SP");
        }
        std::memset(ram+0x371740,0xa5,0x300);
        word(ram,0x285b68,0);reg(ctx,29,0x27000,0x8888);reg(ctx,31,0x1a70b8,0x7777);
        for(unsigned index=1;index<29;++index)reg(ctx,index,0,0x9000+index);
        reg(ctx,31,0x1a70b8,0x7777);ctx.pc=0x1a69b8;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad4a8&&reg(ctx,31)==0x1a6acc&&reg(ctx,29)==0x27000,"subsystem tables original call without repeat frame");
        require(ctx.branch_pc==0x1a6ac4&&!ctx.in_delay_slot&&word(ram,0x285b68)==1,"subsystem tables first flag and delay");
        require(word(ram,0x371818)==0x20371740&&word(ram,0x37181c)==0x203717c0&&word(ram,0x371834)==0x371940,"subsystem uncached aliases and table pointer");
        require(word(ram,0x371820)==0&&word(ram,0x371824)==0x371840&&word(ram,0x371828)==32&&word(ram,0x37182c)==0&&word(ram,0x371830)==0,"subsystem metadata capacity and cleared state");
        require(word(ram,0x371840)==0x1a6940&&word(ram,0x371844)==0x371818&&word(ram,0x371848)==0x1a6920&&word(ram,0x37184c)==0x371818,"subsystem callbacks and original delay store");
        for(unsigned index=4;index<64;++index)require(word(ram,0x371840+index*4)==0,"subsystem descriptor loop complete");
        for(unsigned index=0;index<32;++index)require(word(ram,0x371940+index*4)==0,"subsystem pointer loop complete");
        require(word(ram,0x37183c)==0xa5a5a5a5&&word(ram,0x3719c0)==0xa5a5a5a5,"subsystem loops preserve boundary sentinels");
        require(reg(ctx,16)==32&&reg(ctx,17)==0x371818&&reg(ctx,18)==0x370000&&reg(ctx,19)==0x370000&&reg(ctx,20)==0x370000,"subsystem saved registers values");
        for(unsigned index=1;index<29;++index)require(reg(ctx,index,1)==0x9000+index,"subsystem scalar operations preserve high lanes");
        const std::array<uint64_t,12> table_saved{0x111,0xaaa,0x222,0xbbb,0x333,0xccc,0x444,0xddd,0x555,0xeee,0x1a70b8,0xfff};
        std::memcpy(ram+0x27000,table_saved.data(),sizeof(table_saved));word(ram,0x285b68,0x80000001);
        ctx.pc=0x1a69b8;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad4a8&&reg(ctx,29)==0x27060&&reg(ctx,31)==0x1a70b8&&ctx.branch_pc==0x1a69e0&&!ctx.in_delay_slot,"subsystem repeated init original tail frame restore");
        for(unsigned index=0;index<5;++index)require(reg(ctx,16+index)==table_saved[index*2]&&reg(ctx,16+index,1)==0x9010+index,"subsystem repeated saved low64 and high lanes");
        require(reg(ctx,2)==0xffffffff80000001ull&&word(ram,0x285b68)==0x80000001&&word(ram,0x371844)==0x371818,"subsystem repeated signed flag no table rewrite");
        ctx.pc=0x1a6acc;reg(ctx,4,0x1234,0xa4);reg(ctx,31,0,0xa31);reg(ctx,29,0x28000,0xa29);
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4aa0&&reg(ctx,31)==0x1a6ad4&&reg(ctx,4)==0&&reg(ctx,4,1)==0xa4&&reg(ctx,31,1)==0xa31&&reg(ctx,29)==0x28000,"subsystem FlushCache original call and zero delay preserves lanes/frame");
        require(ctx.branch_pc==0x1a6acc&&!ctx.in_delay_slot,"subsystem FlushCache call branch state");
        runtime->memory().writeIORegister(0x1000e010,0x200000); // Toggle DMA5 mask on.
        runtime->memory().writeIORegister(0x1000c000,0);
        reg(ctx,16,32,0xb16);reg(ctx,1,0xabc,0xb1);ctx.pc=0x1a6ad4;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4c00&&reg(ctx,31)==0x1a6b14&&reg(ctx,5)==0x1a0000&&reg(ctx,1)==0xabc,"subsystem DMA status absent idle chain call");
        require(runtime->memory().readIORegister(0x1000e010)==0x200000&&reg(ctx,3)==0&&reg(ctx,2)==0x1000c000,"subsystem absent DMA status mask preserved");
        runtime->memory().writeIORegister(0x1000c000,0x100);
        const auto completed_before=runtime->memory().consumeCompletedDmacCauses();
        require(completed_before.empty(),"DMA read contract starts without completion events");
        for(unsigned read=0;read<3;++read)require(runtime->memory().readIORegister(0x1000c000)==0x100,"CHCR passive repeated read retains STR");
        require(runtime->memory().read32(0x1000c000)==0x100&&runtime->Load32(ram,&ctx,0x1000c000)==0x100,"CHCR memory and guest loads retain STR");
        require(runtime->memory().consumeCompletedDmacCauses().empty()&&runtime->memory().readIORegister(0x1000e010)==0x200000,"CHCR reads do not publish completion or alter status");
        ctx.pc=0x1a6ad4;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4530&&reg(ctx,31)==0x1a6b28&&reg(ctx,4)==5&&reg(ctx,5)==0x1a6e90&&reg(ctx,6)==0,"subsystem busy DMA skips chain and calls original handler");
        require(runtime->memory().readIORegister(0x1000c000)==0x100&&ctx.branch_pc==0x1a6b20&&!ctx.in_delay_slot,"busy channel survives guest branch and loads");
        runtime->memory().writeIORegister(0x1000c000,0);
        require(runtime->memory().readIORegister(0x1000c000)==0,"explicit channel stop still clears STR");
        reg(ctx,6,0xabcdef,0xb6);reg(ctx,4,0,0xb4);
        ctx.pc=0x1a6b14;reg(ctx,5,0xdeadbeef,0xb5);runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4530&&reg(ctx,5)==0x1a6e90&&reg(ctx,5,1)==0xb5&&reg(ctx,31)==0x1a6b28,"subsystem chain return handler arguments rebuilt");
        runtime->Store32(ram,&ctx,0x20028080,0x12345678);
        require(word(ram,0x28080)==0x12345678&&runtime->Load32(ram,&ctx,0x80028080)==0x12345678,"guest32 RAM aliases share backend memory");
        runtime->Store32(ram,&ctx,0x1000e010,0x200000);
        require(runtime->Load32(ram,&ctx,0x1000e010)==0,"guest32 MMIO write toggles DMA mask in backend");
        runtime->Store32(ram,&ctx,0x1000c000,0x100);
        require(runtime->Load32(ram,&ctx,0x1000c000)==0x100,"guest32 MMIO write and passive read retain busy");
        runtime->Store32(ram,&ctx,0x1000c000,0);
        require(runtime->Load32(ram,&ctx,0x1000c000)==0,"guest32 explicit channel stop reaches backend");
        reg(ctx,2,0xffffffff81234567ull,0xc2);reg(ctx,29,0x29000,0xc29);ctx.pc=0x1a6b28;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a5438&&reg(ctx,4)==5&&reg(ctx,31)==0x1a6b38&&word(ram,0x371814)==0x81234567,"handler ID stored in EnableDmac call delay");
        require(ctx.branch_pc==0x1a6b30&&!ctx.in_delay_slot&&reg(ctx,29)==0x29000&&reg(ctx,2,1)==0xc2,"handler return preserves frame and lanes");
        ctx.pc=0x1a6b38;reg(ctx,4,0,0xc4);runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4c30&&reg(ctx,4)==0xffffffff80000000ull&&reg(ctx,4,1)==0xc4&&reg(ctx,31)==0x1a6b44,"handler SIF register query original signed argument");
        require(ctx.branch_pc==0x1a6b3c&&!ctx.in_delay_slot,"handler SIF query delay state");
        reg(ctx,17,0x371818,0xc17);reg(ctx,2,0,0xc2);word(ram,0x371820,0xabcdef);ctx.pc=0x1a6b44;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a6b8c&&word(ram,0x371820)==0&&reg(ctx,29)==0x29000&&reg(ctx,17)==0x371818,"missing SIF pointer stored before original polling branch");
        require(ctx.branch_pc==0x1a6b44&&!ctx.in_delay_slot,"missing SIF pointer branch delay");
        const std::array<uint64_t,12> handler_saved{0x111,0xaaa,0x222,0xbbb,0x333,0xccc,0x444,0xddd,0x555,0xeee,0x1a70b8,0xfff};
        std::memcpy(ram+0x29000,handler_saved.data(),sizeof(handler_saved));
        for(unsigned index=16;index<=20;++index)reg(ctx,index,0x370000,0xd000+index);
        reg(ctx,17,0x371818,0xd011);reg(ctx,2,0xffffffff81234567ull,0xc2);reg(ctx,29,0x29000,0xc29);reg(ctx,31,0,0xc31);
        ctx.pc=0x1a6b44;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a6e10&&word(ram,0x371820)==0x81234567&&word(ram,0x371810)==0x371740,"nonzero SIF pointer stored and original payload descriptor built");
        require(reg(ctx,4)==0xffffffff80000000ull&&reg(ctx,5)==0x371800&&reg(ctx,6)==20&&reg(ctx,7)==0&&reg(ctx,8)==0&&reg(ctx,9)==0,"original SIF tail arguments");
        require(reg(ctx,31)==0x1a70b8&&reg(ctx,31,1)==0xc31&&reg(ctx,29)==0x29060&&reg(ctx,29,1)==0xc29&&ctx.branch_pc==0x1a6b84&&!ctx.in_delay_slot,"handler frame restore and tail stack delay");
        for(unsigned index=0;index<5;++index)require(reg(ctx,16+index)==handler_saved[index*2]&&reg(ctx,16+index,1)==0xd010+index,"handler saved low64 restore preserves upper lanes");
        const std::array<uint64_t,6> enable_saved{0x123,0xaaa,0x456,0xbbb,0xffffffff001a6b38ull,0xccc};
        std::memcpy(ram+0x2a000,enable_saved.data(),sizeof(enable_saved));
        for(const uint64_t result : {0ull,1ull,0xffffffff80000001ull}) {
            reg(ctx,29,0x2a000,0xe29);reg(ctx,31,0,0xe31);reg(ctx,16,0,0xe16);reg(ctx,17,0,0xe17);reg(ctx,2,result,0xe2);ctx.pc=0x1a5470;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a5498&&reg(ctx,2)==result&&reg(ctx,16)==enable_saved[0]&&reg(ctx,17)==enable_saved[2]&&reg(ctx,31)==enable_saved[4],"EnableDmac disabled path result and saved frame");
            require(reg(ctx,16,1)==0xe16&&reg(ctx,17,1)==0xe17&&reg(ctx,2,1)==0xe2&&reg(ctx,31,1)==0xe31,"EnableDmac preserved upper lanes");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a6b38&&reg(ctx,29)==0x2a030&&reg(ctx,29,1)==0xe29&&ctx.branch_pc==0x1a5498&&!ctx.in_delay_slot,"EnableDmac JR sampled target and stack delay");
        }
        reg(ctx,29,0x2a000,0xe29);reg(ctx,16,0x10000,0xe16);reg(ctx,17,0,0xe17);reg(ctx,2,0,0xe2);ctx.pc=0x1a5470;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad4a8&&reg(ctx,31)==0x1a5488&&reg(ctx,17)==0&&reg(ctx,2)==0&&reg(ctx,29)==0x2a000,"EnableDmac enabled path interrupt restore call");
        ctx.pc=0x1a5488;reg(ctx,2,1,0xe2);runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a5498&&reg(ctx,2)==0&&reg(ctx,2,1)==0xe2&&reg(ctx,16)==enable_saved[0]&&reg(ctx,17)==enable_saved[2]&&reg(ctx,31)==enable_saved[4],"EnableDmac restores kernel result after interrupt helper");
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());require(ctx.pc==0x1a6b38&&reg(ctx,29)==0x2a030,"EnableDmac enabled path original caller return");
        // Original SIF polling must wait; synthetic ready input tests only the branch.
        for(const uint64_t value : {0ull,1ull,0x10000ull,0x20000ull,0xffffffffffffffffull}) {
            reg(ctx,2,value,0xa2);reg(ctx,16,0x20000,0xa16);reg(ctx,18,0x370000,0xa18);reg(ctx,4,0,0xa4);reg(ctx,31,0x1a6b98,0xa31);ctx.pc=0x1a6b98;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            const bool ready=(value&0x20000ull)!=0;
            require(reg(ctx,2)==(value&0x20000ull)&&reg(ctx,2,1)==0xa2&&reg(ctx,4)==2&&reg(ctx,4,1)==0xa4,"SIF original AND and unconditional branch delay");
            require(ctx.pc==(ready?0x1a4c30u:0x1a6b90u)&&!ctx.in_delay_slot,"SIF ready query or original wait backedge");
            require(reg(ctx,16)==(ready?0x371818ull:0x20000ull)&&reg(ctx,16,1)==0xa16,"SIF next query delay computes descriptor only when ready");
            require(reg(ctx,31)==(ready?0x1a6bacull:0x1a6b98ull)&&reg(ctx,31,1)==0xa31,"SIF wait preserves RA and ready path links original resume");
        }
        reg(ctx,16,0x371818,0xb16);reg(ctx,2,0xffffffff81234567ull,0xb2);reg(ctx,4,0,0xb4);reg(ctx,5,0,0xb5);reg(ctx,31,0,0xb31);ctx.pc=0x1a6bac;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(word(ram,0x371820)==0x81234567&&reg(ctx,4)==0xffffffff80000000ull&&reg(ctx,5)==0xffffffff81234567ull&&reg(ctx,31)==0x1a6bbc&&ctx.pc==0x1a4c20,"SIF query result store and SetReg argument delay");
        require(ctx.branch_pc==0x1a6bb4&&!ctx.in_delay_slot&&reg(ctx,4,1)==0xb4&&reg(ctx,5,1)==0xb5,"SIF SetReg first delay state and lanes");
        ctx.pc=0x1a6bbc;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(reg(ctx,4)==0xffffffff80000001ull&&reg(ctx,5)==0x371818&&reg(ctx,31)==0x1a6bcc&&ctx.pc==0x1a4c20&&ctx.branch_pc==0x1a6bc4&&!ctx.in_delay_slot,"SIF second SetReg main descriptor delay");
        std::memcpy(ram+0x2b000,handler_saved.data(),sizeof(handler_saved));
        for(unsigned index=16;index<=20;++index)reg(ctx,index,0x370000,0xc000+index);
        reg(ctx,29,0x2b000,0xc29);reg(ctx,31,0,0xc31);reg(ctx,2,0,0xc2);reg(ctx,3,0,0xc3);reg(ctx,4,0,0xc4);reg(ctx,5,0,0xc5);ctx.pc=0x1a6bcc;
        word(ram,0x37180c,0xdeadbeef);word(ram,0x371810,0);
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a6e10&&word(ram,0x37180c)==0&&word(ram,0x371810)==0x371740,"SIF final descriptor stores and original tail");
        require(reg(ctx,4)==0xffffffff80000002ull&&reg(ctx,5)==0x371800&&reg(ctx,6)==20&&reg(ctx,7)==0&&reg(ctx,8)==0&&reg(ctx,9)==0,"SIF command tail original arguments");
        for(unsigned index=0;index<5;++index)require(reg(ctx,16+index)==handler_saved[index*2]&&reg(ctx,16+index,1)==0xc010+index,"SIF saved low64 and high lanes");
        require(reg(ctx,31)==handler_saved[10]&&reg(ctx,31,1)==0xc31&&reg(ctx,29)==0x2b060&&reg(ctx,29,1)==0xc29&&ctx.branch_pc==0x1a6c10&&!ctx.in_delay_slot,"SIF tail saved RA and SP60 delay");
        for(const uint32_t address : {0x1a705cu,0x1a7064u}) {
            ctx.pc=address;reg(ctx,31,0x1a6dc8,0xd31);reg(ctx,29,0x20,0xd29);reg(ctx,2,0x44,0xd2);
            runtime->lookupFunction(address)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a6dc8&&ctx.branch_pc==address&&!ctx.in_delay_slot,"cache return original target and delay state");
            require(reg(ctx,29)==(address==0x1a7064?0xffffffffffffffe0ull:0x20ull)&&reg(ctx,29,1)==0xd29,"cache return exact alternate SP delay and high lane");
            require(reg(ctx,2)==0x44&&reg(ctx,2,1)==0xd2&&reg(ctx,31,1)==0xd31,"cache return preserves result and RA lanes");
        }
        for(const bool interrupt : {false,true}) {
            ctx.pc=0x1a6dc8;reg(ctx,19,interrupt?1:2,0xe19);reg(ctx,18,2,0xe18);reg(ctx,29,0x2c000,0xe29);
            reg(ctx,4,0,0xe4);reg(ctx,5,0,0xe5);reg(ctx,31,0,0xe31);
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==(interrupt?0x1a4bf0u:0x1a4be0u)&&reg(ctx,4)==0x2c000&&reg(ctx,5)==2,"SIF send chooses original DMA syscall and descriptor/count arguments");
            require(reg(ctx,31)==(interrupt?0x1a6ddcu:0x1a6decu)&&ctx.branch_pc==(interrupt?0x1a6dd4u:0x1a6de4u)&&!ctx.in_delay_slot,"SIF DMA call original link and delay state");
            for(unsigned i=0;i<5;++i) {const uint64_t value=0xabcdef0000000000ull+i;std::memcpy(ram+0x2c020+i*16,&value,8);reg(ctx,16+i,0,0xe16+i);}
            const uint64_t dma_saved_ra=0x1a6c20;std::memcpy(ram+0x2c070,&dma_saved_ra,8);
            ctx.pc=interrupt?0x1a6ddc:0x1a6df0;reg(ctx,2,17,0xe2);
            if(!interrupt)reg(ctx,31,dma_saved_ra,0xe31); // Existing original001a6dec loads RA before this continuation.
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==dma_saved_ra&&reg(ctx,29)==0x2c080&&reg(ctx,29,1)==0xe29&&ctx.branch_pc==0x1a6e04&&!ctx.in_delay_slot,"SIF send restores saved return and SP80 delay");
            for(unsigned i=0;i<5;++i)require(reg(ctx,16+i)==0xabcdef0000000000ull+i&&reg(ctx,16+i,1)==0xe16+i,"SIF send restores saved low64 and preserves high lanes");
            require(reg(ctx,2)==17&&reg(ctx,2,1)==0xe2&&reg(ctx,31,1)==0xe31,"SIF send preserves actual DMA completion result");
        }
        for(const uint32_t start : {0x1a6e40u,0x1a6e80u}) {
            const uint64_t command_ra=0x1234567887654321ull;std::memcpy(ram+0x2d000,&command_ra,8);
            ctx.pc=start;reg(ctx,29,0x2d000,0xf29);reg(ctx,31,0,0xf31);reg(ctx,2,17,0xf2);
            runtime->lookupFunction(start)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321u&&reg(ctx,31)==command_ra&&reg(ctx,31,1)==0xf31,"SIF command loads saved RA low64 and guest target low32");
            require(reg(ctx,29)==0x2d010&&reg(ctx,29,1)==0xf29&&ctx.branch_pc==start+4u&&!ctx.in_delay_slot,"SIF command SP10 in original return delay");
            require(reg(ctx,2)==17&&reg(ctx,2,1)==0xf2,"SIF command preserves DMA result");
        }
        ctx.pc=0x1a70b8;reg(ctx,31,0,0x123);
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad460&&reg(ctx,31)==0x1a70c0&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a70b8,"RPC setup first interrupt-disable call");
        const auto rpc_handler_translation=runtime->lookupFunction(0x1a6c80);
        require(runtime->replaceFunction(0x1a6c80,nullptr),"isolate RPC table setup at handler call");
        reg(ctx,17,1,0x456);ctx.pc=0x1a70c0;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a6c80&&reg(ctx,4)==0xffffffff80000008ull&&reg(ctx,5)==0x1a7368&&reg(ctx,6)==0x3731c0&&reg(ctx,31)==0x1a7134,"RPC first handler original arguments");
        require(word(ram,0x3731c0)==1&&word(ram,0x3731c4)==0x203719c0&&word(ram,0x3731c8)==32,"RPC pid packet table alias and count");
        require(word(ram,0x3731d4)==0x203721c0&&word(ram,0x3731d8)==32&&word(ram,0x3731dc)==0x203729c0&&word(ram,0x3731e0)==32,"RPC data client aliases and counts");
        require(word(ram,0x3731cc)==0&&word(ram,0x3731d0)==0&&word(ram,0x3731e4)==0&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a712c,"RPC table cleared fields and handler delay store");
        require(runtime->replaceFunction(0x1a6c80,rpc_handler_translation),"restore actual RPC handler translation");
        for(const bool user : {false,true}) {
            word(ram,0x371824,0x2e000);word(ram,0x37182c,0x2f000);
            reg(ctx,4,user?8:0xffffffff80000008ull,0x101);reg(ctx,5,0x1a7368,0x102);reg(ctx,6,0x3731c0,0x103);reg(ctx,31,0x1a7134,0x104);reg(ctx,29,0x30000,0x105);ctx.pc=0x1a6c80;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            const uint32_t table=user?0x2f000:0x2e000;
            require(word(ram,table+64)==0x1a7368&&word(ram,table+68)==0x3731c0,"original EE command handler table stride8 function and argument");
            require(ctx.pc==0x1a7134&&ctx.branch_pc==0x1a6ca4&&!ctx.in_delay_slot&&reg(ctx,29)==0x30000,"handler registered in return delay without stack change");
            require(reg(ctx,4,1)==0x101&&reg(ctx,5,1)==0x102&&reg(ctx,6,1)==0x103&&reg(ctx,31,1)==0x104,"handler table guest upper lanes preserved");
        }
        const auto rpc_registration_fn=runtime->lookupFunction(0x1a6c80);
        require(runtime->replaceFunction(0x1a6c80,nullptr),"isolate remaining RPC handler argument calls");
        const std::array<uint32_t,3> handler_entries{0x1a7134,0x1a714c,0x1a7164};
        const std::array<uint32_t,3> handler_ids{0x80000009,0x8000000a,0x8000000c};
        const std::array<uint32_t,3> handler_functions{0x1a7628,0x1a7818,0x1a7420};
        const std::array<uint32_t,3> handler_returns{0x1a714c,0x1a7164,0x1a717c};
        for(unsigned i=0;i<3;++i) {
            reg(ctx,16,0x3731c0,0xaaa);reg(ctx,4,0,0xbbb);reg(ctx,5,0,0xccc);reg(ctx,6,0,0xddd);ctx.pc=handler_entries[i];
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a6c80&&reg(ctx,4)==(0xffffffff00000000ull|handler_ids[i])&&reg(ctx,5)==handler_functions[i]&&reg(ctx,6)==0x3731c0&&reg(ctx,31)==handler_returns[i],"remaining RPC original command IDs handlers args and resumes");
            require(!ctx.in_delay_slot&&reg(ctx,4,1)==0xbbb&&reg(ctx,5,1)==0xccc&&reg(ctx,6,1)==0xddd,"RPC handler call lanes and delay complete");
        }
        require(runtime->replaceFunction(0x1a6c80,rpc_registration_fn),"restore actual remaining handler target");
        ctx.pc=0x1a717c;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1ad4a8&&reg(ctx,31)==0x1a7184&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a717c,"RPC setup enables interrupts using original call");
        ctx.pc=0x1a7184;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4c30&&reg(ctx,4)==0xffffffff80000002ull&&reg(ctx,31)==0x1a7190&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a7188,"RPC setup queries original software RPCINIT register");
        const uint64_t rpc_saved_ra=0x1234567887654321ull;
        std::memcpy(ram+0x31030,&rpc_saved_ra,8);
        for(const uint64_t ready : {0ull,1ull,0xffffffff80000001ull}) {
            ctx.pc=0x1a7190;reg(ctx,2,ready,0xb2);reg(ctx,29,0x31000,0xb29);reg(ctx,31,0,0xb31);
            reg(ctx,18,0x3717c0,0xb18);reg(ctx,17,1,0xb17);word(ram,0x37180c,0xdeadbeef);
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==(ready?0x1a71f0u:0x1a6e10u)&&reg(ctx,31)==(ready?rpc_saved_ra:0x1a71bcu),"RPC request preserves original branch and link");
            require(reg(ctx,31,1)==0xb31&&reg(ctx,29)==0x31000&&!ctx.in_delay_slot,"RPC request RA load delay and preserved lanes/frame");
            if(!ready) {
                require(reg(ctx,4)==0xffffffff80000002ull&&reg(ctx,5)==0x371800&&reg(ctx,6)==16&&reg(ctx,7)==0&&reg(ctx,8)==0&&reg(ctx,9)==0,"RPC request INIT_CMD sixteen-byte packet args");
                require(word(ram,0x37180c)==1&&ctx.branch_pc==0x1a71b4,"RPC request opt1 store and original send delay");
            } else require(word(ram,0x37180c)==0xdeadbeef&&ctx.branch_pc==0x1a7190,"ready branch sends no duplicate init request");
        }
        ctx.pc=0x1a71bc;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());require(ctx.pc==0x1a71c0,"RPC send return NOP reaches original polling loop");
        for(const uint32_t value : {0u,1u,0x80000001u}) {
            word(ram,0x371940,value);reg(ctx,4,0x371940,0xc4);reg(ctx,31,0x1a71c8,0xc31);reg(ctx,2,0,0xc2);ctx.pc=0x1a6960;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a71c8&&reg(ctx,2)==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(value)))&&reg(ctx,2,1)==0xc2,"RPC software getter original signed LW in JR delay");
            require(ctx.branch_pc==0x1a6960&&!ctx.in_delay_slot&&word(ram,0x371940)==value,"RPC getter samples return target and never fabricates readiness");
            ctx.pc=0x1a71c8;reg(ctx,29,0x31000,0xc29);runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==(value?0x1a4c20u:0x1a71c0u)&&reg(ctx,31)==rpc_saved_ra,"RPC wait backedge or original register publication tail");
            require(reg(ctx,29)==(value?0x31040ull:0x31000ull)&&!ctx.in_delay_slot,"RPC wait preserves frame until positive response");
            if(value)require(reg(ctx,4)==0xffffffff80000002ull&&reg(ctx,5)==1&&ctx.branch_pc==0x1a71e8,"RPC positive tail publishes original SetReg args");
        }
        word(ram,0x3201c,0x371940);
        for(const uint32_t index : {0u,1u,31u}) {
            word(ram,0x33010,index);word(ram,0x33014,0x81234567);word(ram,0x371940+index*4,0);
            reg(ctx,4,0x33000,0xa4);reg(ctx,5,0x32000,0xa5);reg(ctx,6,0,0xa6);reg(ctx,2,0,0xa2);reg(ctx,3,0,0xa3);reg(ctx,31,0x1234567887654321ull,0xa31);reg(ctx,29,0x34000,0xa29);ctx.pc=0x1a6920;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x371940+index*4)==0x81234567&&reg(ctx,3)==0xffffffff81234567ull,"original SET_SREG index and signed value reads");
            require(ctx.pc==0x87654321u&&ctx.branch_pc==0x1a6934&&!ctx.in_delay_slot&&reg(ctx,29)==0x34000,"original SET_SREG JR samples target and store delay preserves stack");
            require(reg(ctx,2)==0x371940+index*4&&reg(ctx,6)==0x371940&&reg(ctx,2,1)==0xa2&&reg(ctx,3,1)==0xa3&&reg(ctx,6,1)==0xa6,"original SET_SREG calculation and upper lanes");
        }
        word(ram,0x33010,0x81234567);reg(ctx,4,0x33000,0xb4);reg(ctx,5,0x32000,0xb5);reg(ctx,2,0,0xb2);reg(ctx,31,0x1234567887654321ull,0xb31);ctx.pc=0x1a6940;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(word(ram,0x32008)==0x81234567&&reg(ctx,2)==0xffffffff81234567ull&&reg(ctx,2,1)==0xb2,"original CHANGE_ADDR signed read and descriptor store");
        require(ctx.pc==0x87654321u&&ctx.branch_pc==0x1a6944&&!ctx.in_delay_slot&&reg(ctx,29)==0x34000,"original CHANGE_ADDR return store delay preserves frame");
        word(ram,0x371818,0x45000);word(ram,0x45000,0);
        const uint64_t irqSavedS0=0x1234567887654321ull,irqSavedRa=0x2345678998765432ull;
        std::memcpy(ram+0x46070,&irqSavedS0,8);std::memcpy(ram+0x46080,&irqSavedRa,8);
        reg(ctx,29,0x46000,0xaaa);reg(ctx,16,0,0xbbb);reg(ctx,31,0,0xccc);ctx.pc=0x1a6ea4;ctx.cop0_status=0;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==static_cast<uint32_t>(irqSavedRa)&&reg(ctx,16)==irqSavedS0&&reg(ctx,16,1)==0xbbb,"Empty posted SIF buffer original IRQ restore and return");
        require(reg(ctx,29)==0x46090&&reg(ctx,29,1)==0xaaa&&reg(ctx,2)==0&&ctx.cop0_status==0&&ctx.branch_pc==0x1a6fb0&&!ctx.in_delay_slot,"Original empty IRQ branch bypasses EI and restores stack in JR delay");
        for(const uint32_t previousControl : {0u,0x100u,0xdeadbeefu}) {
            auto &mem=runtime->memory();
            mem.writeIORegister(0x1000C000u,previousControl);
            mem.writeIORegister(0x1000C020u,99u);
            mem.writeIORegister(0x1000C010u,0x45000u);
            mem.writeIORegister(0x1000C400u,0x44u);
            reg(ctx,2,0x9999,0xaaa);reg(ctx,3,0,0xbbb);reg(ctx,31,0x1234567887654321ull,0xccc);reg(ctx,29,0x46000,0xddd);ctx.pc=0x1a4c10;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(mem.readIORegister(0x1000C000u)==0x184u&&mem.readIORegister(0x1000C020u)==0,"Original SetDChain replaces CHCR and clears QWC");
            require(mem.readIORegister(0x1000C010u)==0x45000u&&mem.readIORegister(0x1000C400u)==0x44u,"SetDChain preserves MADR and SIF1");
            require(reg(ctx,2)==0x184u&&reg(ctx,2,1)==0xaaa&&reg(ctx,3)==0xffffffffffffff88ull&&reg(ctx,3,1)==0xbbb,"SetDChain returns actual CHCR and wrapper signed syscall ID");
            require(ctx.pc==0x87654321u&&ctx.branch_pc==0x1a4c18u&&!ctx.in_delay_slot&&reg(ctx,29)==0x46000&&reg(ctx,29,1)==0xddd,"Original syscall wrapper returns preserving stack and lanes");
        }
        // Drive original nonempty IRQ copying, syscall and actual handler-table
        // dispatch. The observer is test-only; production uses original handlers.
        require(runtime->registerFunction(0x48000,[](uint8_t* memory,R5900Context* c,PS2Runtime* r){
            const uint32_t packet=static_cast<uint32_t>(reg(*c,4));
            require(packet==0x46000&&reg(*c,5)==0x49000,"IRQ supplies stack packet and live handler argument");
            require(r->memory().readIORegister(0x1000C000u)==0x184u,"IRQ rearms receive chain before dispatch");
            word(memory,0x49000,word(memory,0x49000)+1);
            word(memory,0x49004,word(memory,packet+8));
            c->pc=static_cast<uint32_t>(reg(*c,31));
        }),"register IRQ test observer");
        for(const uint32_t command : {0x80000001u,1u,0x80000002u,2u}) {
            word(ram,0x371818,0x45000);word(ram,0x371824,0x47000);word(ram,0x371828,2);word(ram,0x37182c,0x47020);word(ram,0x371830,2);
            word(ram,0x47008,0x48000);word(ram,0x4700c,0x49000);word(ram,0x47028,0x48000);word(ram,0x4702c,0x49000);word(ram,0x49000,0);
            std::array<uint8_t,32> packet{};
            for(unsigned i=0;i<packet.size();++i)packet[i]=static_cast<uint8_t>(i+1);
            const uint32_t psize=24;std::memcpy(packet.data(),&psize,4);std::memcpy(packet.data()+8,&command,4);
            std::memcpy(ram+0x45000,packet.data(),packet.size());packet[0]=0;
            std::memcpy(ram+0x46070,&irqSavedS0,8);std::memcpy(ram+0x46080,&irqSavedRa,8);
            reg(ctx,29,0x46000,0xaaa);reg(ctx,16,0,0xbbb);reg(ctx,31,0,0xccc);ctx.pc=0x1a6ea4;ctx.cop0_status=0;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a4c10u&&reg(ctx,31)==0x1a6f14u,"Nonempty IRQ calls original receive syscall after copying");
            require(ram[0x45000]==0&&std::memcmp(ram+0x46000,packet.data(),32)==0,"IRQ clears posted size byte and copies exact rounded quadwords");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x49000)==((command&0x7fffffffu)<2u?1u:0u),"Original system and user table dispatch and bounds");
            if((command&0x7fffffffu)<2u)require(word(ram,0x49004)==command,"Handler observes copied original command");
            require(ctx.pc==static_cast<uint32_t>(irqSavedRa)&&reg(ctx,16)==irqSavedS0&&reg(ctx,16,1)==0xbbb&&reg(ctx,29)==0x46090&&reg(ctx,29,1)==0xaaa&&reg(ctx,2)==0,"Nonempty IRQ restores saved frame and returns zero");
            require(ctx.cop0_status!=0&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a6fb0u,"Nonempty IRQ executes original EI and JR delay");
        }
        for(const int semaphore : {-1,2}) {
            word(ram,0x4001c,0x41000);word(ram,0x40028,0x123450);word(ram,0x4002c,0x678900);
            word(ram,0x41000,0x42000);word(ram,0x41008,static_cast<uint32_t>(semaphore));word(ram,0x42010,0x12340005);word(ram,0x42018,0x1234);
            const uint64_t saved[]{0x1234567887654321ull,0x2345678998765432ull,0x3456789aa9876543ull};
            std::memcpy(ram+0x43000,&saved[0],8);std::memcpy(ram+0x43010,&saved[1],8);std::memcpy(ram+0x43020,&saved[2],8);
            reg(ctx,17,0x40000,0xaaa);reg(ctx,16,0x9999,0xbbb);reg(ctx,29,0x43000,0xccc);reg(ctx,2,0x11223344,0xddd);ctx.pc=0x1a73d0;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x41024)==0x11223344&&word(ram,0x41014)==0x123450&&word(ram,0x41018)==0x678900,"Original END BIND updates server buf cbuf");
            if(semaphore>=0) {
                require(ctx.pc==0x1a4850&&reg(ctx,4)==2&&reg(ctx,31)==0x1a73fc,"END signals original semaphore before packetfree");
                ctx.pc=0x1a73fc;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            }
            require(ctx.pc==0x1a72d8&&reg(ctx,4)==0x42000&&reg(ctx,31)==0x1a7404,"END frees original client packet after completion");
            // Execute the original free tail after its existing AND/store preparation.
            word(ram,0x42018,0);reg(ctx,3,0x12340004,0);ctx.pc=0x1a72ec;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a7404&&word(ram,0x42010)==0x12340004,"Packetfree original JR store clears only allocated bit");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x41000)==0&&ctx.pc==static_cast<uint32_t>(saved[2]),"END clears original packet link and returns");
            require(reg(ctx,16)==saved[0]&&reg(ctx,16,1)==0xbbb&&reg(ctx,17)==saved[1]&&reg(ctx,17,1)==0xaaa&&reg(ctx,29)==0x43030&&reg(ctx,29,1)==0xccc,"END restore low64 and original JR stack delay");
        }
        {
            word(ram,0x47008,0xffffffffu);word(ram,0x47020,0x81234567u);
            reg(ctx,0,0,0);reg(ctx,16,0x47000,0xabc);reg(ctx,2,0x4b000,0xdef);reg(ctx,4,0x5555,0x789);ctx.pc=0x1a73b8;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x4b000&&reg(ctx,31)==0x1a73c8&&reg(ctx,4)==0xffffffff81234567ull&&reg(ctx,4,1)==0x789,"RPC END indirect callback takes original client argument in delay slot");
            require(!ctx.in_delay_slot&&ctx.branch_pc==0x1a73c0,"RPC END callback branch state");
            word(ram,0x4901c,0x47000);reg(ctx,17,0x49000,0x111);reg(ctx,16,0xdead,0xabc);reg(ctx,29,0x4a000,0x222);ctx.pc=0x1a73c8;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(reg(ctx,16)==0x47000&&reg(ctx,16,1)==0xabc&&ctx.pc==0x1a72d8&&reg(ctx,31)==0x1a7404,"RPC END callback resume reloads client before freeing packet");
            reg(ctx,16,0x47000,0xabc);reg(ctx,2,0,0);reg(ctx,29,0x4a000,0x222);ctx.pc=0x1a73b8;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a72d8&&reg(ctx,4)==0&&reg(ctx,31)==0x1a7404,"RPC END null callback follows original negative semaphore branch to free packet");
        }
        {
            reg(ctx,2,7,0xabc);reg(ctx,16,0x280000,0x111);reg(ctx,17,0x280000,0x222);reg(ctx,29,0x4c000,0x333);ctx.pc=0x1af43c;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x2872a8)==7&&ctx.pc==0x1a4820&&reg(ctx,31)==0x1af448&&reg(ctx,4)==0x4c000,"CDVD semaphore resume stores first ID in JAL delay");
            reg(ctx,2,8,0xabc);ctx.pc=0x1af448;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x2872ac)==8&&word(ram,0x4c008)==0&&ctx.pc==0x1a4820&&reg(ctx,31)==0x1af458,"CDVD semaphore second ID and zero-count delay");
            const uint64_t saved[]{0x1234567812345678ull,0x2345678923456789ull,0x3456789a87654321ull};
            for(unsigned i=0;i<3;++i)std::memcpy(ram+0x4c020+i*16,&saved[i],8);
            reg(ctx,2,9,0xabc);ctx.pc=0x1af458;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,0x2872a0)==9&&word(ram,0x2872b0)==0&&ctx.pc==0x1af474,"CDVD semaphore final ID and initial state stores");
            require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==saved[2]&&reg(ctx,16,1)==0x111,"CDVD semaphore restores original low64");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x4c050&&reg(ctx,29,1)==0x333&&!ctx.in_delay_slot,"CDVD semaphore original JR and stack delay");
        }
        {
            const auto actualCommandRegistration=runtime->lookupFunction(0x1a6c80u);
            require(runtime->replaceFunction(0x1a6c80u,nullptr),"isolate CDVD registration arguments");
            reg(ctx,16,0,0x111);reg(ctx,2,1,0xabc);reg(ctx,0,0,0);reg(ctx,29,0x4d000,0x111);ctx.pc=0x1af5f4;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a6c80&&reg(ctx,31)==0x1af610&&reg(ctx,4)==0xffffffff80000012ull&&reg(ctx,5)==0x1af590&&reg(ctx,6)==0,"CDVD initialization registers original command12 handler with zero argument");
            require(reg(ctx,16)==1&&reg(ctx,16,1)==0x111,"CDVD initialization keeps prior interrupt state in low64");
            require(runtime->replaceFunction(0x1a6c80u,actualCommandRegistration),"restore original command registration");
            for(const uint32_t previous : {0u,1u}) {
                reg(ctx,16,previous,0xabc);reg(ctx,17,0x280000,0xdef);reg(ctx,18,1,0x123);reg(ctx,29,0x4d000,0x456);ctx.pc=0x1af610;
                const uint64_t saved[]{0x1234567812345678ull,0x2345678923456789ull,0x3456789a3456789aull,0x456789ab87654321ull};
                for(unsigned i=0;i<4;++i)std::memcpy(ram+0x4d000+i*16,&saved[i],8);
                word(ram,0x2872a4,1);word(ram,0x2872bc,0);
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                if(previous) {
                    require(ctx.pc==0x1ad4a8&&reg(ctx,31)==0x1af620&&word(ram,0x2872a4)==1,"CDVD initialization restores interrupts only when previously enabled");
                    ctx.pc=0x1af620;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                }
                require(ctx.pc==0x87654321&&reg(ctx,2)==1&&word(ram,0x2872a4)==0&&word(ram,0x2872bc)==1,"CDVD initialization original completion stores and success return");
                require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,18)==saved[2]&&reg(ctx,31)==saved[3]&&reg(ctx,16,1)==0xabc&&reg(ctx,17,1)==0xdef&&reg(ctx,18,1)==0x123,"CDVD initialization restores low64 without changing upper lanes");
                require(reg(ctx,29)==0x4d040&&reg(ctx,29,1)==0x456&&!ctx.in_delay_slot&&ctx.branch_pc==0x1af640,"CDVD initialization JR executes original stack delay");
            }
        }
        {
            reg(ctx,2,1,0xabc);reg(ctx,29,0x4e000,0xdef);ctx.pc=0x17fec0;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1acac0&&reg(ctx,31)==0x17fee4&&reg(ctx,4)==0x2c9810,"Game CDVD success resumes original next initialization with correct address");
            require(reg(ctx,29)==0x4e000&&reg(ctx,29,1)==0xdef,"Game CDVD return preserves caller frame");
        }
        {
            reg(ctx,29,0x4f000,0xabc);ctx.pc=0x1acb3c;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a7208&&reg(ctx,31)==0x1acb44&&reg(ctx,29)==0x4f000,"Module loader resume invokes original RPC initialization preserving frame");
            for(const char* prefix : {"", "host0:"}) {
                std::memset(ram+0x50000,0,32);std::memcpy(ram+0x50000,prefix,std::strlen(prefix));
                const char path[]="cdrom0:MODULES/PADMAN.IRX";
                std::memcpy(ram+0x50100,path,sizeof(path));std::memset(ram+0x4f000,0xcc,48);
                reg(ctx,17,0x50000,0x123);reg(ctx,16,0x50100,0x456);reg(ctx,29,0x4f000,0xabc);ctx.pc=0x1acb44;
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                const std::string expected=std::string(prefix)+path;
                require(std::memcmp(ram+0x4f000,expected.c_str(),expected.size()+1)==0,"Module loader original prefix/path concatenation and terminator");
                require(ctx.pc==0x1ac920&&reg(ctx,31)==0x1acbbc&&reg(ctx,4)==0x4f000&&reg(ctx,5)==0,"Module loader sends assembled original path without extra arguments");
            }
            const uint64_t saved[]{0x1234567812345678ull,0x2345678923456789ull,0x3456789a87654321ull};
            for(unsigned i=0;i<3;++i)std::memcpy(ram+0x4f050+i*16,&saved[i],8);
            reg(ctx,16,0,0x111);reg(ctx,17,0,0x222);reg(ctx,2,99,0x333);ctx.pc=0x1acb2c;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1acbc8&&reg(ctx,2)==0&&reg(ctx,2,1)==0x333,"Module loader error branch returns original zero");
            require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==saved[2]&&reg(ctx,16,1)==0x111&&reg(ctx,17,1)==0x222,"Module loader epilogue restores low64 preserving upper lanes");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x4f080&&reg(ctx,29,1)==0xabc&&!ctx.in_delay_slot&&ctx.branch_pc==0x1acbc8,"Module loader original return stack delay");
        }
        for(const uint32_t previous : {0u,0x10000u}) {
            const uint64_t saved[]{0x1234567812345678ull,0x2345678923456789ull,0x3456789a87654321ull};
            for(unsigned i=0;i<3;++i)std::memcpy(ram+0x51000+i*16,&saved[i],8);
            reg(ctx,0,0,0);reg(ctx,16,previous,0x111);reg(ctx,17,99,0x222);reg(ctx,2,5,0x333);reg(ctx,29,0x51000,0x444);ctx.pc=0x1a5408;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            if(previous) {
                require(ctx.pc==0x1ad4a8&&reg(ctx,31)==0x1a5420&&reg(ctx,2)==5,"Interrupt removal reenables original prior interrupt state and branch delay result");
                ctx.pc=0x1a5420;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            }
            require(ctx.pc==0x1a5430&&reg(ctx,2)==5&&reg(ctx,2,1)==0x333,"Interrupt removal returns original syscall result");
            require(reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==saved[2]&&reg(ctx,16,1)==0x111&&reg(ctx,17,1)==0x222,"Interrupt removal restores low64 preserving high64");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x51030&&reg(ctx,29,1)==0x444&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a5430,"Interrupt removal original JR stack delay");
        }
        {
            word(ram,0x371814,0x81234567u);reg(ctx,29,0x52000,0x111);reg(ctx,5,99,0x222);ctx.pc=0x1a6c28;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a4550&&reg(ctx,31)==0x1a6c38&&reg(ctx,4)==5&&reg(ctx,5)==0xffffffff81234567ull&&reg(ctx,5,1)==0x222,"SIF deinitialization removes original handler ID and signed saved handler argument");
            const uint64_t savedRa=0x3456789a87654321ull;std::memcpy(ram+0x52000,&savedRa,8);
            word(ram,0x285b68,0x1234);word(ram,0x285b70,0x5678);reg(ctx,31,0,0x333);ctx.pc=0x1a6c38;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a6c44&&word(ram,0x285b68)==0&&word(ram,0x285b70)==0x5678&&reg(ctx,31)==savedRa&&reg(ctx,31,1)==0x333,"SIF deinitialization clears only original command initialized flag");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x52010&&reg(ctx,29,1)==0x111&&ctx.branch_pc==0x1a6c44&&!ctx.in_delay_slot,"SIF deinitialization original JR stack delay");
            reg(ctx,29,0x52000,0x111);reg(ctx,31,0,0x333);reg(ctx,2,99,0x444);ctx.pc=0x1a7218;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a7224&&word(ram,0x285b70)==0&&reg(ctx,31)==savedRa&&reg(ctx,31,1)==0x333&&reg(ctx,2)==0x280000&&reg(ctx,2,1)==0x444,"RPC deinitialization clears its distinct flag and restores original return");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x52010&&reg(ctx,29,1)==0x111&&ctx.branch_pc==0x1a7224&&!ctx.in_delay_slot,"RPC deinitialization original JR stack delay");
        }
        {
            auto& memory=runtime->memory();
            memory.writeIORegister(0x1000c000u,0x184u);memory.writeIORegister(0x1000c020u,17u);
            memory.writeIORegister(0x1000c010u,0x12340u);memory.writeIORegister(0x1000c400u,0x144u);memory.writeIORegister(0x1000c420u,19u);
            reg(ctx,2,0x1234,0xabcdef);reg(ctx,3,0x6b,0);reg(ctx,4,0x52000,0x111);ctx.pc=0x1a4af8;
            runtime->handleSyscall(ram,&ctx,0);
            require(memory.readIORegister(0x1000c000u)==0&&memory.readIORegister(0x1000c020u)==0,"SifStopDma numeric syscall stops SIF0 and clears QWC");
            require(memory.readIORegister(0x1000c010u)==0x12340&&memory.readIORegister(0x1000c400u)==0x144&&memory.readIORegister(0x1000c420u)==19,"SifStopDma preserves MADR and SIF1");
            require(reg(ctx,2)==0&&reg(ctx,2,1)==0xabcdef&&reg(ctx,4)==0x52000&&reg(ctx,4,1)==0x111,"SifStopDma original readback preserves upper lane and argument");
        }
        // Original CallRpc null-packet error and complete ABI restoration.
        {
            const unsigned savedRegisters[]{16,17,18,19,20,21,22,23,30,31};
            const uint64_t savedRa=0x1234567887654321ull;
            for(unsigned i=0;i<10;++i) {
                const uint64_t saved=i==9?savedRa:0x3456789000000000ull+i;
                std::memcpy(ram+0x46020+i*16,&saved,8);
                reg(ctx,savedRegisters[i],0x7777,0xabc000+i);
            }
            reg(ctx,0,0,0);reg(ctx,2,0,0x1234);reg(ctx,29,0x46000,0x5678);ctx.pc=0x1a7900;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a7a8c&&reg(ctx,2)==0xffffffffffffffffull&&reg(ctx,2,1)==0x1234,"CallRpc null packet returns original error");
            for(unsigned i=0;i<10;++i)
                require(reg(ctx,savedRegisters[i])==(i==9?savedRa:0x3456789000000000ull+i)&&reg(ctx,savedRegisters[i],1)==0xabc000+i,"CallRpc restores low64 and preserves high64");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321u&&reg(ctx,29)==0x460c0&&reg(ctx,29,1)==0x5678&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a7a8c,"CallRpc JR samples RA and executes stack delay");
            for(unsigned i=0;i<10;++i)reg(ctx,savedRegisters[i],0x7777,0xabc000+i);
            reg(ctx,29,0x46000,0x5678);ctx.pc=0x1a7a64;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            for(unsigned i=0;i<10;++i)
                require(reg(ctx,savedRegisters[i])==(i==9?savedRa:0x3456789000000000ull+i)&&reg(ctx,savedRegisters[i],1)==0xabc000+i,"CallRpc split epilogue matches original LD registers and widths");
            require(ctx.pc==0x1a7a8c,"CallRpc split epilogue reaches original JR");
            for(const uint32_t sp : {0x7fffffc0u,0xffffff80u}) {
                reg(ctx,29,sp,0x5678);reg(ctx,31,savedRa,0xdef);ctx.pc=0x1a7a8c;
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                const auto expected=static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(sp+0xc0u)));
                require(reg(ctx,29)==expected&&reg(ctx,29,1)==0x5678&&ctx.pc==0x87654321u,"CallRpc ADDIU wraps32 and sign extends");
            }
        }
        for(const uint32_t packet : {0u,0x3d000u}) {
            for(const uint32_t mode : {0u,1u}) {
                const uint64_t savedRa=0x1234567887654321ull;
                std::memcpy(ram+0x3c060,&savedRa,8);
                for(unsigned i=0;i<4;++i) { const uint64_t value=0x3456789000000000ull+i;std::memcpy(ram+0x3c020+i*16,&value,8); }
                word(ram,0x3d018,0x1234);word(ram,0x3e008,0xaaaa);
                reg(ctx,2,packet,0xaaa);reg(ctx,17,0x3e000,0xbbb);reg(ctx,18,mode,0xccc);reg(ctx,19,0x80000592u,0xddd);reg(ctx,29,0x3c000,0xeee);reg(ctx,31,0x9999,0xfff);ctx.pc=0x1a7710;
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                if(packet) {
                    require(word(ram,0x3e000)==packet&&word(ram,0x3e004)==0x1234,"BindRpc client tracks original packet and rpcid");
                    require(word(ram,packet+20)==packet&&word(ram,packet+28)==0x3e000&&word(ram,packet+32)==0x80000592u,"BindRpc exact original packet client and sid fields");
                    if(mode) {
                        require(ctx.pc==0x1a6e10&&reg(ctx,31)==0x1a77e8&&word(ram,0x3e008)==0xffffffffu,"Async BindRpc bypasses semaphore and sends original command");
                        require(reg(ctx,4)==0xffffffff80000009ull&&reg(ctx,5)==packet&&reg(ctx,6)==64&&reg(ctx,7)==0&&reg(ctx,8)==0&&reg(ctx,9)==0,"BindRpc command header and payload arguments");
                    } else {
                        require(ctx.pc==0x1a4820&&reg(ctx,31)==0x1a7750&&reg(ctx,4)==0x3c000&&word(ram,0x3c004)==1&&word(ram,0x3c008)==0,"Synchronous BindRpc creates original one-count semaphore");
                    }
                    require(reg(ctx,29)==0x3c000&&reg(ctx,29,1)==0xeee,"BindRpc resume preserves existing frame");
                } else {
                    require(ctx.pc==0x1a7810&&reg(ctx,2)==0xffffffffffffffffull&&reg(ctx,2,1)==0xaaa&&reg(ctx,31)==savedRa,"Null packet original error delay and restore");
                    runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                    require(ctx.pc==0x87654321u&&reg(ctx,29)==0x3c070&&reg(ctx,29,1)==0xeee&&ctx.branch_pc==0x1a7810&&!ctx.in_delay_slot,"BindRpc original JR stack delay");
                }
            }
        }
        for(const int length : {-1,0,1,3}) {
            for(const int occupied : {0,1,3}) {
                for(const uint32_t pid : {0u,1u,0xffffffffu}) {
                    word(ram,0x39000,pid);word(ram,0x39004,0x3a000);word(ram,0x39008,static_cast<uint32_t>(length));
                    for(unsigned i=0;i<3;++i) {
                        word(ram,0x3a010+i*64,i<static_cast<unsigned>(occupied)?1u:2u);
                        word(ram,0x3a014+i*64,0xdddd);word(ram,0x3a018+i*64,0xeeee);
                    }
                    const uint64_t saved[]{0x1234567887654321ull,0x2345678998765432ull,0x3456789aa9876543ull};
                    std::memcpy(ram+0x3b000,&saved[0],8);std::memcpy(ram+0x3b010,&saved[1],8);std::memcpy(ram+0x3b020,&saved[2],8);
                    reg(ctx,29,0x3b000,0xaaa);reg(ctx,17,0x39000,0xbbb);reg(ctx,16,0x1234,0xccc);reg(ctx,31,0x9999,0xddd);ctx.pc=0x1a7248;
                    runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                    const bool success=length>0&&occupied<length;
                    require(ctx.pc==0x1ad4a8&&reg(ctx,31)==(success?0x1a72a4u:0x1a72c0u),"RPC allocator always dispatches original interrupt restoration with correct return");
                    if(success) {
                        const uint32_t packet=0x3a000+occupied*64;
                        require(word(ram,packet+16)==((static_cast<uint32_t>(occupied)<<16)|5u)&&word(ram,packet+20)==packet,"Original EE busy mask1 ignores IOP bit2 and stores packet identity");
                        require(word(ram,packet+24)==(pid==0?1u:pid+1u)&&word(ram,0x39000)==(pid==0?2u:pid+1u),"Original EE PID increment zero fallback and wrap");
                    } else {
                        require(word(ram,0x39000)==pid&&word(ram,0x3a014)==0xdddd,"Exhausted or empty ring does not allocate or change PID");
                    }
                    // Execute the allocator's return after the real interrupt wrapper boundary.
                    ctx.pc=success?0x1a72a4u:0x1a72c0u;
                    runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                    require(reg(ctx,2)==(success?0x3a000ull+occupied*64:0ull)&&ctx.pc==static_cast<uint32_t>(saved[2]),"RPC allocator original pointer/null result and restored return");
                    require(reg(ctx,16)==saved[0]&&reg(ctx,16,1)==0xccc&&reg(ctx,17)==saved[1]&&reg(ctx,17,1)==0xbbb,"RPC allocator preserves upper lanes while restoring saved low64");
                    require(reg(ctx,29)==0x3b030&&reg(ctx,29,1)==0xaaa&&!ctx.in_delay_slot&&ctx.branch_pc==0x1a72d0,"RPC allocator original stack increment in JR delay");
                }
            }
        }
        for(const uint64_t busy : {0ull,0x100000000ull}) {
            const uint64_t savedRa=0x1234567887654321ull;
            std::memcpy(ram+0x380a0,&savedRa,8);
            for(unsigned i=0;i<9;++i) {
                const uint64_t value=0x1234000000000000ull+i;
                std::memcpy(ram+0x38010+i*16,&value,8);
            }
            reg(ctx,29,0x38000,0xaaa);reg(ctx,2,busy,0xbbb);reg(ctx,31,0x9999,0xccc);ctx.pc=0x1afe40;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            if(busy) {
                require(ctx.pc==0x1b00e0&&reg(ctx,2)==0&&reg(ctx,2,1)==0xbbb,"Original caller checks full64 busy before zero delay and restores original epilogue");
                require(reg(ctx,31)==savedRa&&reg(ctx,31,1)==0xccc&&reg(ctx,29)==0x38000,"Original caller restores saved RA without repeating prologue");
                runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                require(ctx.pc==0x87654321&&ctx.branch_pc==0x1b00e0&&!ctx.in_delay_slot&&reg(ctx,29)==0x380b0&&reg(ctx,29,1)==0xaaa,"Caller original JR stack delay");
            } else {
                require(ctx.pc==0x1a7068&&reg(ctx,4)==0&&reg(ctx,21)==0x280000&&reg(ctx,31)==0x1afe54,"Original caller invokes InitRpc with original LUI delay");
                require(reg(ctx,29)==0x38000&&reg(ctx,29,1)==0xaaa,"Caller resume leaves existing frame intact");
            }
        }
        for(const uint32_t entry : {0x1afc84u,0x1afc8cu}) {
            const uint64_t savedRa=0x1234567887654321ull,savedS0=0xabcdef0123456789ull;
            std::memcpy(ram+0x37010,&savedRa,8);std::memcpy(ram+0x37000,&savedS0,8);
            reg(ctx,31,entry==0x1afc84u?0x9999ull:savedRa,0xbbb);
            reg(ctx,16,0x5555,0xaaa);reg(ctx,29,0x37000,0xccc);reg(ctx,2,1,0xddd);ctx.pc=entry;
            runtime->lookupFunction(entry)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321u&&ctx.branch_pc==0x1afc8cu&&!ctx.in_delay_slot,"Loadmodule status JR and stack delay");
            require(reg(ctx,31)==savedRa&&reg(ctx,31,1)==0xbbb,"Loadmodule restores low64 RA preserving upper lane");
            require(reg(ctx,16)==(entry==0x1afc84u?savedS0:0x5555ull)&&reg(ctx,16,1)==0xaaa,"Loadmodule status s0 restoration only before JR");
            require(reg(ctx,29)==0x37020&&reg(ctx,29,1)==0xccc&&reg(ctx,2)==1&&reg(ctx,2,1)==0xddd,"Loadmodule status preserves result and restores caller frame");
        }
        for(const uint32_t entry : {0x1a7ac4u,0x1a7accu}) {
            reg(ctx,2,0xDEADBEEF,0xaaa);reg(ctx,31,0x1234567887654321ull,0xbbb);reg(ctx,29,0x37000,0xccc);ctx.pc=entry;
            runtime->lookupFunction(entry)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321u&&ctx.branch_pc==entry&&!ctx.in_delay_slot,"RPC status JR sampled target and original result delay");
            require(reg(ctx,2)==(entry==0x1a7accu?1ull:0ull)&&reg(ctx,2,1)==0xaaa&&reg(ctx,31)==0x1234567887654321ull&&reg(ctx,31,1)==0xbbb,"RPC status original boolean and preserved lanes");
            require(reg(ctx,29)==0x37000&&reg(ctx,29,1)==0xccc,"RPC status return preserves caller frame");
        }
        {
            reg(ctx,31,0x1234567887654321ull,0xaaa);reg(ctx,4,0xffffffffffffffffull,0xbbb);reg(ctx,2,7,0xccc);ctx.pc=0x23a768u;
            fate::recomp::execute_register_return(ctx,0x0080102du);
            require(ctx.pc==0x87654321u&&reg(ctx,2)==0xffffffffffffffffull&&reg(ctx,2,1)==0xccc,"Original DADDU delay returns full64 a0 preserving high64");
            reg(ctx,31,0x3456,0xaaa);reg(ctx,29,0xfffffff8ull,0xbbb);ctx.pc=0x100u;
            fate::recomp::execute_register_return(ctx,0x27bd0010u);
            require(reg(ctx,29)==8u&&reg(ctx,29,1)==0xbbb&&ctx.pc==0x3456u,"Original ADDIU return delay wraps32 and preserves high64");
            reg(ctx,31,0x3456,0xaaa);reg(ctx,4,0x789a,0xbbb);ctx.pc=0x100u;
            fate::recomp::execute_register_return(ctx,0x0080f82du);
            require(ctx.pc==0x3456u&&reg(ctx,31)==0x789au&&reg(ctx,31,1)==0xaaa,"JR samples RA before delay overwrites RA");
            reg(ctx,4,0x7fffffff,0);reg(ctx,5,1,0);reg(ctx,2,0,0xccc);ctx.pc=0x100u;
            fate::recomp::execute_register_return(ctx,0x00851021u);
            require(reg(ctx,2)==0xffffffff80000000ull&&reg(ctx,2,1)==0xccc,"ADDU delay signextends32 result");
            ctx.pc=0x100u;bool unsupported=false;
            try {fate::recomp::execute_register_return(ctx,0x8fa20010u);}catch(const std::runtime_error&){unsupported=true;}
            require(unsupported&&ctx.pc==0x100u&&!ctx.in_delay_slot,"Unsupported memory delay rejected before execution");
        }
        for(const uint32_t entry : {0x1abd78u,0x1a88bcu})
        for(const uint64_t stack : {0x54000ull,0x100054000ull,0x80054000ull}) {
            const uint64_t savedRa=0x1234567887654321ull;
            std::memcpy(ram+0x54000,&savedRa,8);
            reg(ctx,29,stack,0x111);reg(ctx,31,0x1abd78,0x222);reg(ctx,2,0x3749a8,0x333);
            ctx.pc=entry;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            const auto adjusted=static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(static_cast<uint32_t>(stack)+16u)));
            require(ctx.pc==0x87654321u&&ctx.branch_pc==entry+8u&&!ctx.in_delay_slot,"Original reset epilogue restores return before JR and stack delay");
            require(reg(ctx,31)==savedRa&&reg(ctx,31,1)==0x222&&reg(ctx,2)==0&&reg(ctx,2,1)==0x333,"Original 1ABD78 LD and DADDU preserve upper64 lanes");
            require(reg(ctx,29)==adjusted&&reg(ctx,29,1)==0x111,"Original 1ABD78 ADDIU signextends low32 stack and reads guest aliases");
            require(std::memcmp(ram+0x54000,&savedRa,8)==0,"Original 1ABD78 epilogue does not modify saved frame");
        }
        for(const uint64_t base : {0x280000ull,0x100020000ull,0xfffffffffffffff0ull}) {
            const uint32_t address=static_cast<uint32_t>(base+0x5b50u);
            word(ram,address,0x12345678u);word(ram,address+4u,0xaabbccddu);
            reg(ctx,2,base,0x111);reg(ctx,31,0x1234567887654321ull,0x222);
            reg(ctx,29,0x54000,0x333);ctx.pc=0x1a4ca4u;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(word(ram,address)==0u&&word(ram,address+4u)==0xaabbccddu,"SIF clear writes exact original word with 32bit address wrap");
            require(ctx.pc==0x87654321u&&ctx.branch_pc==0x1a4ca4u&&!ctx.in_delay_slot,"SIF clear JR executes store delay then returns");
            require(reg(ctx,2)==base&&reg(ctx,2,1)==0x111&&reg(ctx,29)==0x54000&&reg(ctx,31,1)==0x222,"SIF clear preserves return lanes and stack");
        }
        for(const uint64_t ready : {0ull,1ull,0x100000000ull}) {
            reg(ctx,2,ready,0x111);reg(ctx,29,0x54000,0x222);reg(ctx,4,99,0x333);ctx.pc=0x17ff00;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==(ready?0x1a7068u:0x1aca88u)&&reg(ctx,31)==(ready?0x17ff20u:0x17ff00u),"Original sync polling retries until full64 ready without inventing success");
            if(ready) require(reg(ctx,4)==0&&reg(ctx,4,1)==0x333,"Original sync exit invokes InitRpc with zero delay argument");
            else require(reg(ctx,29)==0x54000&&reg(ctx,4)==99,"Original sync retry preserves caller frame at isolated callee boundary");
        }
        for(const uint64_t status : {0ull,0x20000ull,0x40000ull,0x60000ull,0x100000000ull}) {
            const uint64_t savedRa=0x1234567887654321ull;
            std::memcpy(ram+0x54000,&savedRa,8);
            reg(ctx,29,0x54000,0x111);reg(ctx,31,0,0x222);reg(ctx,2,status,0x333);ctx.pc=0x1aca98;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            if(status&0x40000ull) {
                require(ctx.pc==0x1a4ca0&&reg(ctx,31)==0x1acab0&&reg(ctx,2)==0,"Original IOP sync ready bit invokes original cache syscall after zero delay");
                ctx.pc=0x1acab0;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            }
            require(ctx.pc==0x1acab8&&reg(ctx,2)==((status&0x40000ull)?1ull:0ull)&&reg(ctx,2,1)==0x333,"IOP sync masks exact ready bit and preserves result high64");
            require(reg(ctx,31)==savedRa&&reg(ctx,31,1)==0x222&&reg(ctx,29)==0x54000,"IOP sync restores low64 RA before JR");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x54010&&reg(ctx,29,1)==0x111&&ctx.branch_pc==0x1acab8&&!ctx.in_delay_slot,"IOP sync original JR stack delay");
        }
        // Original IOP reboot packet and call/return ABI, not an invented reboot.
        for(const uint64_t result : {0ull,1ull,0x100000000ull}) {
            reg(ctx,2,result,0x123);reg(ctx,29,0x55000,0x456);ctx.pc=0x17fee4;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==(result?0x1aca88u:0x1acac0u)&&reg(ctx,31)==(result?0x17ff00u:0x17fee4u),"Original game reboot result full64 predicate chooses sync or retry");
            if(!result) require(reg(ctx,4)==0x2c9810,"Original game retry restores module path with signextended ADDIU delay");
            require(reg(ctx,29)==0x55000&&reg(ctx,29,1)==0x456,"Original game return resume never repeats prologue");
        }
        const auto previousRebootPolicy=runtime->missingFunctionPolicy();
        runtime->setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::ContinueToTarget);
        const uint32_t rebootTargets[]{0x1a4c30u,0x1a6fb8u,0x1a4c20u,0x1a4be0u};
        PS2Runtime::RecompiledFunction previousRebootTargets[4]{};
        for(unsigned i=0;i<4;++i) {
            previousRebootTargets[i]=runtime->lookupFunction(rebootTargets[i]);
            if(previousRebootTargets[i]) runtime->replaceFunction(rebootTargets[i],nullptr);
        }
        reg(ctx,29,0x55000,0x111);ctx.pc=0x1ac93c;
        runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
        require(ctx.pc==0x1a4c30&&reg(ctx,4)==0xffffffff80000000ull&&reg(ctx,31)==0x1ac948,"Reboot queries original IOP address register");
        for(const std::string path : {std::string(),std::string("rom0:UDNL cdrom0:IOPRP253.IMG;1"),std::string("A\x80" "B")}) {
            std::memcpy(ram+0x56000,path.c_str(),path.size()+1);
            std::memset(ram+0x3749c0,0xa5,104);
            reg(ctx,29,0x55000,0x111);reg(ctx,17,0x56000,0x222);
            reg(ctx,16,0xdeadbeef,0x333);reg(ctx,2,0x12340000,0x444);ctx.pc=0x1ac948;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x1a6fb8&&reg(ctx,31)==0x1ac9ec,"Reboot sends original packet at original call boundary");
            require(word(ram,0x3749c0)==104&&word(ram,0x3749c4)==0&&word(ram,0x3749c8)==0x80000003&&word(ram,0x3749cc)==0xa5a5a5a5,"Reboot header mask and command preserve unrelated field");
            require(word(ram,0x3749d0)==path.size()&&word(ram,0x3749d4)==0xdeadbeef,"Reboot records exact path length and original flags");
            require(std::memcmp(ram+0x3749d8,path.data(),path.size())==0&&ram[0x3749d8+path.size()]==0xa5,"Reboot copies bytes without inventing terminator");
            require(reg(ctx,4)==0x3749c0&&reg(ctx,5)==104&&word(ram,0x55000)==0x3749c0&&word(ram,0x55004)==0x12340000&&word(ram,0x55008)==104&&word(ram,0x5500c)==68,"Reboot stack DMA descriptor includes original JAL delay store");
            require(reg(ctx,29)==0x55000&&reg(ctx,29,1)==0x111,"Reboot resumes preserve active frame");
        }
        const uint64_t rebootSaved[]{0x1234567887654321ull,0xabcdef0198765432ull,0x8765432112345678ull};
        std::memcpy(ram+0x55030,&rebootSaved[0],8);std::memcpy(ram+0x55020,&rebootSaved[1],8);std::memcpy(ram+0x55010,&rebootSaved[2],8);
        for(const uint64_t accepted : {0ull,1ull,0x100000000ull}) {
            reg(ctx,29,0x55000,0x111);reg(ctx,31,0,0x222);reg(ctx,17,0,0x333);reg(ctx,16,0,0x444);reg(ctx,2,accepted,0x555);ctx.pc=0x1aca04;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            if(accepted) {
                require(ctx.pc==0x1a4c20&&reg(ctx,4)==4&&reg(ctx,5)==0x10000&&reg(ctx,31)==0x1aca14,"Reboot success uses full64 predicate and first register acknowledgement");
                ctx.pc=0x1aca14;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                require(ctx.pc==0x1a4c20&&reg(ctx,5)==0x20000&&reg(ctx,31)==0x1aca20,"Reboot second register acknowledgement");
                ctx.pc=0x1aca20;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                require(ctx.pc==0x1a4c20&&reg(ctx,4)==0xffffffff80000002ull&&reg(ctx,5)==0&&reg(ctx,31)==0x1aca30,"Reboot clears original RPC soft register with ORI delay");
                ctx.pc=0x1aca30;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
                require(ctx.pc==0x1a4c20&&reg(ctx,4)==0xffffffff80000000ull&&reg(ctx,5)==0&&reg(ctx,31)==0x1aca3c,"Reboot clears original address register");
                ctx.pc=0x1aca3c;runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            }
            require(ctx.pc==0x1aca54&&reg(ctx,2)==(accepted?1ull:0ull)&&reg(ctx,2,1)==0x555,"Reboot retains original success/failure and upper result lane");
            require(reg(ctx,31)==rebootSaved[0]&&reg(ctx,17)==rebootSaved[1]&&reg(ctx,16)==rebootSaved[2]&&reg(ctx,31,1)==0x222&&reg(ctx,17,1)==0x333&&reg(ctx,16,1)==0x444,"Reboot restores only saved low64 registers");
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x55040&&reg(ctx,29,1)==0x111&&ctx.branch_pc==0x1aca54&&!ctx.in_delay_slot,"Reboot recovered JR samples RA before stack delay");
        }
        for(const auto entry : {0x1ac9ecu,0x1ac9f8u}) {
            reg(ctx,29,0x55000,0x111);ctx.pc=entry;
            runtime->lookupFunction(ctx.pc)(ram,&ctx,runtime.get());
            require(ctx.pc==(entry==0x1ac9ecu?0x1a4c20u:0x1a4be0u)&&reg(ctx,31)==(entry==0x1ac9ecu?0x1ac9f8u:0x1aca04u),"Reboot post-send original call resumes");
            require(reg(ctx,4)==(entry==0x1ac9ecu?4ull:0x55000ull)&&reg(ctx,5)==(entry==0x1ac9ecu?0x40000ull:1ull),"Reboot post-send register and DMA arguments/delays");
        }
        for(unsigned i=0;i<4;++i) if(previousRebootTargets[i]) runtime->replaceFunction(rebootTargets[i],previousRebootTargets[i]);
        runtime->setMissingFunctionPolicy(previousRebootPolicy);
        // Original CDVD command continuation, with adversarial low64 values
        // that distinguish the R5900 branch from the old signed32 emitter.
        const uint64_t cdvdSaved[]{0x1234567887654321ull,0x1122334455667788ull,
                                   0xaabbccdd8899aabbull,0x55667788abcdef01ull};
        auto prepareCdvd=[&](uint32_t sp) {
            for(unsigned i=0;i<4;++i) {
                const auto address=(sp+0x40u-i*0x10u)&0x1ffffffu;
                std::memcpy(ram+address,&cdvdSaved[i],8);
            }
            reg(ctx,29,sp,0x111);reg(ctx,31,0,0x222);reg(ctx,18,0x2888c0,0x333);
            reg(ctx,17,0x290000,0x444);reg(ctx,16,0xabcdef02,0x555);reg(ctx,2,0,0x666);
        };
        auto cdvdStep=[&](uint32_t pc) {ctx.pc=pc;runtime->lookupFunction(pc)(ram,&ctx,runtime.get());};
        for(const auto gate : {0ull,1ull,0x100000000ull}) {
            prepareCdvd(0x57000);word(ram,0x2888c0,0x778899aa);reg(ctx,2,gate,0x666);
            cdvdStep(0x1b0308);
            if(gate) {
                require(word(ram,0x2888c0)==0xabcdef02&&ctx.pc==0x1a6fb8&&reg(ctx,31)==0x1b0324,
                        "CDVD BNEL full64 taken delay stores command and reaches cache call");
                require(reg(ctx,4)==0x2888c0&&reg(ctx,5)==4,"CDVD original cache arguments");
                cdvdStep(0x1b0324);
                require(ctx.pc==0x1a78a8&&reg(ctx,31)==0x1b0358,"CDVD RPC continuation preserves call boundary");
                require(reg(ctx,4)==0x288cc8&&reg(ctx,5)==0x22&&reg(ctx,6)==0&&reg(ctx,7)==0x2888c0&&
                        reg(ctx,8)==4&&reg(ctx,9)==0x288480&&reg(ctx,10)==4&&reg(ctx,11)==0&&word(ram,0x57000)==0,
                        "CDVD RPC command, buffers, lengths and stack callback are original");
            } else {
                require(word(ram,0x2888c0)==0x778899aa&&reg(ctx,2)==0&&ctx.pc==0x87654321,
                        "CDVD zero gate annuls store and all calls");
            }
        }
        for(const auto rpc : {0ull,1ull,0x80000000ull,0x100000000ull,0xffffffff00000001ull,0xffffffffffffffffull}) {
            prepareCdvd(0x57000);reg(ctx,2,rpc,0x666);reg(ctx,16,0x288480,0x555);
            word(ram,0x2872ac,0x80000009);word(ram,0x288480,0x8000abcd);
            cdvdStep(0x1b0358);
            const bool negative=(rpc>>63)!=0;
            require(ctx.pc==0x1a4840&&reg(ctx,31)==(negative?0x1b036cull:0x1b0388ull),
                    "CDVD BGEZ uses sign of low64 and signals once on each route");
            require(reg(ctx,4)==0xffffffff80000009ull&&reg(ctx,3)==0x280000,"CDVD semaphore load and branch delay");
            require(reg(ctx,16)==(negative?0x288480ull:0xffffffff8000abcdull),
                    "CDVD successful result reads original uncached alias with sign extension");
            cdvdStep(negative?0x1b036c:0x1b0388);
            require(reg(ctx,2)==(negative?0ull:0xffffffff8000abcdull)&&reg(ctx,2,1)==0x666,
                    "CDVD returns zero on RPC failure or original result, preserving upper lane");
            require(ctx.pc==0x87654321&&reg(ctx,29)==0x57050&&reg(ctx,31)==cdvdSaved[0]&&
                    reg(ctx,18)==cdvdSaved[1]&&reg(ctx,17)==cdvdSaved[2]&&reg(ctx,16)==cdvdSaved[3],
                    "CDVD original low64 frame restored without repeating prologue");
            require(reg(ctx,29,1)==0x111&&reg(ctx,31,1)==0x222&&reg(ctx,18,1)==0x333&&
                    reg(ctx,17,1)==0x444&&reg(ctx,16,1)==0x555&&!ctx.in_delay_slot&&ctx.branch_pc==0x1b039c,
                    "CDVD high64 lanes and JR delay metadata preserved");
        }
        for(const uint32_t sp : {0x20057000u,0xfffffff0u}) {
            prepareCdvd(sp);cdvdStep(0x1b036c);
            require(reg(ctx,29)==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(sp+0x50u)))&&
                    reg(ctx,31)==cdvdSaved[0]&&ctx.pc==0x87654321,"CDVD stack alias and ADDIU wrap");
        }
        auto cacheStep=[&](uint32_t pc) {
            ctx.pc=pc; auto fn=runtime->lookupFunction(pc);
            require(fn!=nullptr,"original cache continuation registered");
            fn(ram,&ctx,runtime.get());
        };
        for(const uint64_t count : {0ull,1ull,0x80000000ull,0x100000000ull,0x8000000000000000ull,0xffffffffffffffffull}) {
            ctx={};reg(ctx,8,0x60000,0x111);reg(ctx,10,count,0x222);reg(ctx,31,0x12345678,0x333);
            cacheStep(0x1a7014);
            const bool positive=count!=0 && (count>>63)==0;
            require(ctx.pc==(positive?0x1a700cu:0x1a705cu)&&reg(ctx,10)==count&&reg(ctx,10,1)==0x222,
                    "cache BGTZ tests original low64 count without repeating initial decrement");
            require(reg(ctx,8)==0x60200&&reg(ctx,8,1)==0x111&&reg(ctx,31)==0x12345678&&
                    reg(ctx,31,1)==0x333&&ctx.branch_pc==0x1a7054&&!ctx.in_delay_slot,
                    "cache pointer delay executes once on both branch paths and preserves upper lanes");
        }
        for(const uint32_t address : {0x60000u,0x20060000u,0x80060000u,0xa0060000u}) {
            std::array<uint8_t,512> bytes{};
            for(size_t i=0;i<bytes.size();++i) bytes[i]=static_cast<uint8_t>(i*17u);
            std::memcpy(ram+0x60000,bytes.data(),bytes.size());
            ctx={};reg(ctx,8,address,0xaaa);reg(ctx,10,1,0xbbb);
            cacheStep(0x1a700c);
            require(ctx.pc==0x1a705c&&reg(ctx,10)==0&&reg(ctx,10,1)==0xbbb,
                    "cache back edge decrements once and exits after final block");
            const auto next=static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(address+0x200u)));
            require(reg(ctx,8)==next&&reg(ctx,8,1)==0xaaa&&std::memcmp(ram+0x60000,bytes.data(),bytes.size())==0,
                    "coherent cache aliases preserve all bytes and sign extend the pointer delay");
        }
        ctx={};reg(ctx,8,0x60000,0);reg(ctx,10,2,0);
        cacheStep(0x1a700c);require(ctx.pc==0x1a700c&&reg(ctx,8)==0x60200&&reg(ctx,10)==1,"cache first block yields at back edge");
        cacheStep(ctx.pc);require(ctx.pc==0x1a705c&&reg(ctx,8)==0x60400&&reg(ctx,10)==0,"cache next block resumes at decrement");
        ctx={};reg(ctx,8,PS2_RAM_SIZE-0x200u,0);reg(ctx,10,0,0);cacheStep(0x1a7014);
        require(ctx.pc==0x1a705c&&reg(ctx,8)==PS2_RAM_SIZE,"cache last complete RDRAM block is valid");
        ctx={};reg(ctx,8,PS2_RAM_SIZE-64u,0);reg(ctx,10,0,0);
        bool invalidCache=false;try {cacheStep(0x1a7014);} catch(const std::runtime_error&) {invalidCache=true;}
        require(invalidCache&&ctx.pc==0x1a701c&&reg(ctx,8)==PS2_RAM_SIZE-64u,
                "cache range crossing stops at first unsupported line without MMIO or pointer advance");
        for(const uint32_t address : {0x10000000u,0x70000000u,0xc0060000u,0xffffffc0u}) {
            ctx={};reg(ctx,8,address,0);reg(ctx,10,0,0);invalidCache=false;
            try {cacheStep(0x1a7014);} catch(const std::runtime_error&) {invalidCache=true;}
            require(invalidCache&&ctx.pc==0x1a7014,"unsupported cache mapping remains an explicit barrier");
        }
        auto stringStep=[&](uint32_t pc) {
            ctx.pc=pc; auto fn=runtime->lookupFunction(pc);
            require(fn!=nullptr,"original string continuation registered");
            fn(ram,&ctx,runtime.get());
        };
        for(const uint64_t byteResult : {1ull,0x100000000ull,0xffffffffffffffffull}) {
            ctx={};reg(ctx,2,byteResult,0x123);reg(ctx,4,0x7fffffff,0x456);reg(ctx,31,0x789,0xabc);
            stringStep(0x23cb40);
            require(ctx.pc==0x23cb2c&&reg(ctx,4)==0xffffffff80000000ull&&reg(ctx,4,1)==0x456,
                    "taken string BNEL tests low64 and sign-extends wrapped pointer increment");
            require(reg(ctx,31)==0x789&&reg(ctx,31,1)==0xabc&&reg(ctx,2)==byteResult&&
                    ctx.branch_pc==0x23cb40&&!ctx.in_delay_slot,"taken branch preserves live registers and returns to byte scan");
        }
        ctx={};reg(ctx,2,1,0);reg(ctx,4,0xffffffffu,0x456);stringStep(0x23cb40);
        require(reg(ctx,4)==0&&reg(ctx,4,1)==0x456,"string pointer ADDIU wraps at32bits");
        for(const uint32_t pc : {0x23cb40u,0x23cb48u}) {
            ctx={};reg(ctx,2,0,0xffff);reg(ctx,4,0x60000,0x11);reg(ctx,5,0x61000,0x22);reg(ctx,31,0,0x33);
            stringStep(pc);
            require(ctx.pc==0x23ce40&&reg(ctx,4)==0x60000&&reg(ctx,5)==0x61000&&reg(ctx,31)==0x23cb50,
                    "not-taken string BNEL annuls increment and calls original copy with unchanged args");
            require(reg(ctx,31,1)==0x33&&ctx.branch_pc==0x23cb48&&!ctx.in_delay_slot,"JAL NOP delay and upper return lane preserved");
        }
        const std::array<uint64_t,4> savedStringFrame{0x1122334455667788ull,0x8877665544332211ull,0x12345678ull,0xabcdef0123456789ull};
        std::memcpy(ram+0x58000,savedStringFrame.data(),sizeof(savedStringFrame));
        ctx={};reg(ctx,29,0x20058000,0xaabb);reg(ctx,16,0x1234000060000ull,0);reg(ctx,2,0,0x5566);
        stringStep(0x23cb50);
        require(reg(ctx,2)==0x1234000060000ull&&reg(ctx,2,1)==0x5566&&ctx.pc==0x12345678,
                "string return uses original destination low64 before frame restore");
        require(reg(ctx,16)==savedStringFrame[0]&&reg(ctx,16,1)==savedStringFrame[1]&&
                reg(ctx,31)==savedStringFrame[2]&&reg(ctx,31,1)==savedStringFrame[3],"string epilogue restores full128-bit LQ values");
        require(reg(ctx,29)==0x20058020&&reg(ctx,29,1)==0xaabb&&ctx.branch_pc==0x23cb5c&&!ctx.in_delay_slot,
                "string JR restores aliased frame and advances stack in delay slot");
        word(ram,0x3200c,0x35000);word(ram,0x32010,32);word(ram,0x3201c,0x371940);
        word(ram,0x35008,0x1a6920);word(ram,0x3500c,0x32000);word(ram,0x371940,0);
        require(runtime->registerFunction(0x36000,[](uint8_t*,R5900Context* c,PS2Runtime* r){c->pc=0;r->eeScheduler().requestStop();}),"register bounded scheduler test stop");
        ctx.pc=0x36000;runtime->eeScheduler().reset(ram,ctx);
        reg(ctx,4,0x80000001,0);reg(ctx,5,0x32000,0);ps2_stubs::sceSifSetReg(ram,&ctx,runtime.get());
        const std::array<uint32_t,6> original_set_packet{24,0,0x80000001,0,0,1};
        require(ps2_stubs::dispatchSifCommand(ram,runtime.get(),0x80000001,original_set_packet.data(),sizeof(original_set_packet)),"queue original SET_SREG through actual live guest table");
        runtime->eeScheduler().run();
        require(word(ram,0x371940)==1,"actual scheduler invokes original SET_SREG and publishes supplied payload");
        std::cout<<"Boot continuation contracts passed (synthetic, not retail parity).\n";
    } catch(const std::exception& error) {
        std::cerr<<error.what()<<'\n'; return 1;
    }
    return 0;
}
