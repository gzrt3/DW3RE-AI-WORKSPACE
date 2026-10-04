#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part787(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ce840u: goto label_2ce840;
        case 0x2ce844u: goto label_2ce844;
        case 0x2ce848u: goto label_2ce848;
        case 0x2ce84cu: goto label_2ce84c;
        case 0x2ce850u: goto label_2ce850;
        case 0x2ce854u: goto label_2ce854;
        case 0x2ce858u: goto label_2ce858;
        case 0x2ce85cu: goto label_2ce85c;
        case 0x2ce860u: goto label_2ce860;
        case 0x2ce864u: goto label_2ce864;
        case 0x2ce868u: goto label_2ce868;
        case 0x2ce86cu: goto label_2ce86c;
        case 0x2ce870u: goto label_2ce870;
        case 0x2ce874u: goto label_2ce874;
        case 0x2ce878u: goto label_2ce878;
        case 0x2ce87cu: goto label_2ce87c;
        case 0x2ce880u: goto label_2ce880;
        case 0x2ce884u: goto label_2ce884;
        case 0x2ce888u: goto label_2ce888;
        case 0x2ce88cu: goto label_2ce88c;
        case 0x2ce890u: goto label_2ce890;
        case 0x2ce894u: goto label_2ce894;
        case 0x2ce898u: goto label_2ce898;
        case 0x2ce89cu: goto label_2ce89c;
        case 0x2ce8a0u: goto label_2ce8a0;
        case 0x2ce8a4u: goto label_2ce8a4;
        case 0x2ce8a8u: goto label_2ce8a8;
        case 0x2ce8acu: goto label_2ce8ac;
        case 0x2ce8b0u: goto label_2ce8b0;
        case 0x2ce8b4u: goto label_2ce8b4;
        case 0x2ce8b8u: goto label_2ce8b8;
        case 0x2ce8bcu: goto label_2ce8bc;
        case 0x2ce8c0u: goto label_2ce8c0;
        case 0x2ce8c4u: goto label_2ce8c4;
        case 0x2ce8c8u: goto label_2ce8c8;
        case 0x2ce8ccu: goto label_2ce8cc;
        case 0x2ce8d0u: goto label_2ce8d0;
        case 0x2ce8d4u: goto label_2ce8d4;
        case 0x2ce8d8u: goto label_2ce8d8;
        case 0x2ce8dcu: goto label_2ce8dc;
        case 0x2ce8e0u: goto label_2ce8e0;
        case 0x2ce8e4u: goto label_2ce8e4;
        case 0x2ce8e8u: goto label_2ce8e8;
        case 0x2ce8ecu: goto label_2ce8ec;
        case 0x2ce8f0u: goto label_2ce8f0;
        case 0x2ce8f4u: goto label_2ce8f4;
        case 0x2ce8f8u: goto label_2ce8f8;
        case 0x2ce8fcu: goto label_2ce8fc;
        case 0x2ce900u: goto label_2ce900;
        case 0x2ce904u: goto label_2ce904;
        case 0x2ce908u: goto label_2ce908;
        case 0x2ce90cu: goto label_2ce90c;
        case 0x2ce910u: goto label_2ce910;
        case 0x2ce914u: goto label_2ce914;
        case 0x2ce918u: goto label_2ce918;
        case 0x2ce91cu: goto label_2ce91c;
        case 0x2ce920u: goto label_2ce920;
        case 0x2ce924u: goto label_2ce924;
        case 0x2ce928u: goto label_2ce928;
        case 0x2ce92cu: goto label_2ce92c;
        case 0x2ce930u: goto label_2ce930;
        case 0x2ce934u: goto label_2ce934;
        case 0x2ce938u: goto label_2ce938;
        case 0x2ce93cu: goto label_2ce93c;
        case 0x2ce940u: goto label_2ce940;
        case 0x2ce944u: goto label_2ce944;
        case 0x2ce948u: goto label_2ce948;
        case 0x2ce94cu: goto label_2ce94c;
        case 0x2ce950u: goto label_2ce950;
        case 0x2ce954u: goto label_2ce954;
        case 0x2ce958u: goto label_2ce958;
        case 0x2ce95cu: goto label_2ce95c;
        case 0x2ce960u: goto label_2ce960;
        case 0x2ce964u: goto label_2ce964;
        case 0x2ce968u: goto label_2ce968;
        case 0x2ce96cu: goto label_2ce96c;
        case 0x2ce970u: goto label_2ce970;
        case 0x2ce974u: goto label_2ce974;
        case 0x2ce978u: goto label_2ce978;
        case 0x2ce97cu: goto label_2ce97c;
        case 0x2ce980u: goto label_2ce980;
        case 0x2ce984u: goto label_2ce984;
        case 0x2ce988u: goto label_2ce988;
        case 0x2ce98cu: goto label_2ce98c;
        case 0x2ce990u: goto label_2ce990;
        case 0x2ce994u: goto label_2ce994;
        case 0x2ce998u: goto label_2ce998;
        case 0x2ce99cu: goto label_2ce99c;
        case 0x2ce9a0u: goto label_2ce9a0;
        case 0x2ce9a4u: goto label_2ce9a4;
        case 0x2ce9a8u: goto label_2ce9a8;
        case 0x2ce9acu: goto label_2ce9ac;
        case 0x2ce9b0u: goto label_2ce9b0;
        case 0x2ce9b4u: goto label_2ce9b4;
        case 0x2ce9b8u: goto label_2ce9b8;
        case 0x2ce9bcu: goto label_2ce9bc;
        case 0x2ce9c0u: goto label_2ce9c0;
        case 0x2ce9c4u: goto label_2ce9c4;
        case 0x2ce9c8u: goto label_2ce9c8;
        case 0x2ce9ccu: goto label_2ce9cc;
        case 0x2ce9d0u: goto label_2ce9d0;
        case 0x2ce9d4u: goto label_2ce9d4;
        case 0x2ce9d8u: goto label_2ce9d8;
        case 0x2ce9dcu: goto label_2ce9dc;
        case 0x2ce9e0u: goto label_2ce9e0;
        case 0x2ce9e4u: goto label_2ce9e4;
        case 0x2ce9e8u: goto label_2ce9e8;
        case 0x2ce9ecu: goto label_2ce9ec;
        case 0x2ce9f0u: goto label_2ce9f0;
        case 0x2ce9f4u: goto label_2ce9f4;
        case 0x2ce9f8u: goto label_2ce9f8;
        case 0x2ce9fcu: goto label_2ce9fc;
        case 0x2cea00u: goto label_2cea00;
        case 0x2cea04u: goto label_2cea04;
        case 0x2cea08u: goto label_2cea08;
        case 0x2cea0cu: goto label_2cea0c;
        case 0x2cea10u: goto label_2cea10;
        case 0x2cea14u: goto label_2cea14;
        case 0x2cea18u: goto label_2cea18;
        case 0x2cea1cu: goto label_2cea1c;
        case 0x2cea20u: goto label_2cea20;
        case 0x2cea24u: goto label_2cea24;
        case 0x2cea28u: goto label_2cea28;
        case 0x2cea2cu: goto label_2cea2c;
        case 0x2cea30u: goto label_2cea30;
        case 0x2cea34u: goto label_2cea34;
        case 0x2cea38u: goto label_2cea38;
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea40u: goto label_2cea40;
        case 0x2cea44u: goto label_2cea44;
        case 0x2cea48u: goto label_2cea48;
        case 0x2cea4cu: goto label_2cea4c;
        case 0x2cea50u: goto label_2cea50;
        case 0x2cea54u: goto label_2cea54;
        case 0x2cea58u: goto label_2cea58;
        case 0x2cea5cu: goto label_2cea5c;
        case 0x2cea60u: goto label_2cea60;
        case 0x2cea64u: goto label_2cea64;
        case 0x2cea68u: goto label_2cea68;
        case 0x2cea6cu: goto label_2cea6c;
        case 0x2cea70u: goto label_2cea70;
        case 0x2cea74u: goto label_2cea74;
        case 0x2cea78u: goto label_2cea78;
        case 0x2cea7cu: goto label_2cea7c;
        case 0x2cea80u: goto label_2cea80;
        case 0x2cea84u: goto label_2cea84;
        case 0x2cea88u: goto label_2cea88;
        case 0x2cea8cu: goto label_2cea8c;
        case 0x2cea90u: goto label_2cea90;
        case 0x2cea94u: goto label_2cea94;
        case 0x2cea98u: goto label_2cea98;
        case 0x2cea9cu: goto label_2cea9c;
        case 0x2ceaa0u: goto label_2ceaa0;
        case 0x2ceaa4u: goto label_2ceaa4;
        case 0x2ceaa8u: goto label_2ceaa8;
        case 0x2ceaacu: goto label_2ceaac;
        case 0x2ceab0u: goto label_2ceab0;
        case 0x2ceab4u: goto label_2ceab4;
        case 0x2ceab8u: goto label_2ceab8;
        case 0x2ceabcu: goto label_2ceabc;
        case 0x2ceac0u: goto label_2ceac0;
        case 0x2ceac4u: goto label_2ceac4;
        case 0x2ceac8u: goto label_2ceac8;
        case 0x2ceaccu: goto label_2ceacc;
        case 0x2cead0u: goto label_2cead0;
        case 0x2cead4u: goto label_2cead4;
        case 0x2cead8u: goto label_2cead8;
        case 0x2ceadcu: goto label_2ceadc;
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceae4u: goto label_2ceae4;
        case 0x2ceae8u: goto label_2ceae8;
        case 0x2ceaecu: goto label_2ceaec;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceaf4u: goto label_2ceaf4;
        case 0x2ceaf8u: goto label_2ceaf8;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb00u: goto label_2ceb00;
        case 0x2ceb04u: goto label_2ceb04;
        case 0x2ceb08u: goto label_2ceb08;
        case 0x2ceb0cu: goto label_2ceb0c;
        case 0x2ceb10u: goto label_2ceb10;
        case 0x2ceb14u: goto label_2ceb14;
        case 0x2ceb18u: goto label_2ceb18;
        case 0x2ceb1cu: goto label_2ceb1c;
        case 0x2ceb20u: goto label_2ceb20;
        case 0x2ceb24u: goto label_2ceb24;
        case 0x2ceb28u: goto label_2ceb28;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb30u: goto label_2ceb30;
        case 0x2ceb34u: goto label_2ceb34;
        case 0x2ceb38u: goto label_2ceb38;
        case 0x2ceb3cu: goto label_2ceb3c;
        case 0x2ceb40u: goto label_2ceb40;
        case 0x2ceb44u: goto label_2ceb44;
        case 0x2ceb48u: goto label_2ceb48;
        case 0x2ceb4cu: goto label_2ceb4c;
        case 0x2ceb50u: goto label_2ceb50;
        case 0x2ceb54u: goto label_2ceb54;
        case 0x2ceb58u: goto label_2ceb58;
        case 0x2ceb5cu: goto label_2ceb5c;
        case 0x2ceb60u: goto label_2ceb60;
        case 0x2ceb64u: goto label_2ceb64;
        case 0x2ceb68u: goto label_2ceb68;
        case 0x2ceb6cu: goto label_2ceb6c;
        case 0x2ceb70u: goto label_2ceb70;
        case 0x2ceb74u: goto label_2ceb74;
        case 0x2ceb78u: goto label_2ceb78;
        case 0x2ceb7cu: goto label_2ceb7c;
        case 0x2ceb80u: goto label_2ceb80;
        case 0x2ceb84u: goto label_2ceb84;
        case 0x2ceb88u: goto label_2ceb88;
        case 0x2ceb8cu: goto label_2ceb8c;
        case 0x2ceb90u: goto label_2ceb90;
        case 0x2ceb94u: goto label_2ceb94;
        case 0x2ceb98u: goto label_2ceb98;
        case 0x2ceb9cu: goto label_2ceb9c;
        case 0x2ceba0u: goto label_2ceba0;
        case 0x2ceba4u: goto label_2ceba4;
        case 0x2ceba8u: goto label_2ceba8;
        case 0x2cebacu: goto label_2cebac;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebb8u: goto label_2cebb8;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc0u: goto label_2cebc0;
        case 0x2cebc4u: goto label_2cebc4;
        case 0x2cebc8u: goto label_2cebc8;
        case 0x2cebccu: goto label_2cebcc;
        case 0x2cebd0u: goto label_2cebd0;
        case 0x2cebd4u: goto label_2cebd4;
        case 0x2cebd8u: goto label_2cebd8;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        case 0x2cec18u: goto label_2cec18;
        case 0x2cec1cu: goto label_2cec1c;
        case 0x2cec20u: goto label_2cec20;
        case 0x2cec24u: goto label_2cec24;
        case 0x2cec28u: goto label_2cec28;
        case 0x2cec2cu: goto label_2cec2c;
        case 0x2cec30u: goto label_2cec30;
        case 0x2cec34u: goto label_2cec34;
        case 0x2cec38u: goto label_2cec38;
        case 0x2cec3cu: goto label_2cec3c;
        case 0x2cec40u: goto label_2cec40;
        case 0x2cec44u: goto label_2cec44;
        case 0x2cec48u: goto label_2cec48;
        case 0x2cec4cu: goto label_2cec4c;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec54u: goto label_2cec54;
        case 0x2cec58u: goto label_2cec58;
        case 0x2cec5cu: goto label_2cec5c;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec64u: goto label_2cec64;
        case 0x2cec68u: goto label_2cec68;
        case 0x2cec6cu: goto label_2cec6c;
        case 0x2cec70u: goto label_2cec70;
        case 0x2cec74u: goto label_2cec74;
        case 0x2cec78u: goto label_2cec78;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec80u: goto label_2cec80;
        case 0x2cec84u: goto label_2cec84;
        case 0x2cec88u: goto label_2cec88;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2cec90u: goto label_2cec90;
        case 0x2cec94u: goto label_2cec94;
        case 0x2cec98u: goto label_2cec98;
        case 0x2cec9cu: goto label_2cec9c;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca4u: goto label_2ceca4;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cecacu: goto label_2cecac;
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecb4u: goto label_2cecb4;
        case 0x2cecb8u: goto label_2cecb8;
        case 0x2cecbcu: goto label_2cecbc;
        case 0x2cecc0u: goto label_2cecc0;
        case 0x2cecc4u: goto label_2cecc4;
        case 0x2cecc8u: goto label_2cecc8;
        case 0x2cecccu: goto label_2ceccc;
        case 0x2cecd0u: goto label_2cecd0;
        case 0x2cecd4u: goto label_2cecd4;
        case 0x2cecd8u: goto label_2cecd8;
        case 0x2cecdcu: goto label_2cecdc;
        case 0x2cece0u: goto label_2cece0;
        case 0x2cece4u: goto label_2cece4;
        case 0x2cece8u: goto label_2cece8;
        case 0x2cececu: goto label_2cecec;
        case 0x2cecf0u: goto label_2cecf0;
        case 0x2cecf4u: goto label_2cecf4;
        case 0x2cecf8u: goto label_2cecf8;
        case 0x2cecfcu: goto label_2cecfc;
        case 0x2ced00u: goto label_2ced00;
        case 0x2ced04u: goto label_2ced04;
        case 0x2ced08u: goto label_2ced08;
        case 0x2ced0cu: goto label_2ced0c;
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        default: return;
    }

label_2ce840:
    // 0x2ce840: 0x79442065  lq          $a0, 0x2065($t2)
    ctx->pc = 0x2ce840u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 8293)));
label_2ce844:
    // 0x2ce844: 0x7473616e  .word       0x7473616E                   # INVALID     $v1, $s3, 0x616E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce844u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE844 raw=0x7473616E");
 /* MITIGATED */
label_2ce848:
    // 0x2ce848: 0x61572079  daddi       $s7, $t2, 0x2079
    ctx->pc = 0x2ce848u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_2ce84c:
    // 0x2ce84c: 0x6f697272  ldr         $t1, 0x7272($k1)
    ctx->pc = 0x2ce84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ce850:
    // 0x2ce850: 0x33207372  andi        $zero, $t9, 0x7372
    ctx->pc = 0x2ce850u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)29554);
label_2ce854:
    // 0x2ce854: 0x73696420  .word       0x73696420                   # madd1       $t4, $k1, $t1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce854u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ce858:
    // 0x2ce858: 0x6e612063  ldr         $at, 0x2063($s3)
    ctx->pc = 0x2ce858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ce85c:
    // 0x2ce85c: 0x6c632064  ldr         $v1, 0x2064($v1)
    ctx->pc = 0x2ce85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2ce860:
    // 0x2ce860: 0x2065736f  addi        $a1, $v1, 0x736F
    ctx->pc = 0x2ce860u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29551, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce864:
    // 0x2ce864: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ce864u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce868:
    // 0x2ce868: 0x63736964  daddi       $s3, $k1, 0x6964
    ctx->pc = 0x2ce868u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26980; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce86c:
    // 0x2ce86c: 0x61727420  daddi       $s2, $t3, 0x7420
    ctx->pc = 0x2ce86cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2ce870:
    // 0x2ce870: 0x2e79  .word       0x00002E79                   # INVALID     $zero, $zero, 0x2E79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce870u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CE870 raw=0x00002E79");
 /* MITIGATED */
label_2ce874:
    // 0x2ce874: 0x0  nop
    ctx->pc = 0x2ce874u;
    // NOP
label_2ce878:
    // 0x2ce878: 0x0  nop
    ctx->pc = 0x2ce878u;
    // NOP
label_2ce87c:
    // 0x2ce87c: 0x0  nop
    ctx->pc = 0x2ce87cu;
    // NOP
label_2ce880:
    // 0x2ce880: 0x61656c50  daddi       $a1, $t3, 0x6C50
    ctx->pc = 0x2ce880u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ce884:
    // 0x2ce884: 0x69206573  ldl         $zero, 0x6573($t1)
    ctx->pc = 0x2ce884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2ce888:
    // 0x2ce888: 0x7265736e  .word       0x7265736E                   # INVALID     $s3, $a1, 0x736E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce888u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CE888 raw=0x7265736E");
 /* MITIGATED */
label_2ce88c:
    // 0x2ce88c: 0x68742074  ldl         $s4, 0x2074($v1)
    ctx->pc = 0x2ce88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ce890:
    // 0x2ce890: 0x74582065  .word       0x74582065                   # INVALID     $v0, $t8, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce890u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE890 raw=0x74582065");
 /* MITIGATED */
label_2ce894:
    // 0x2ce894: 0x656d6572  daddiu      $t5, $t3, 0x6572
    ctx->pc = 0x2ce894u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_2ce898:
    // 0x2ce898: 0x67654c20  daddiu      $a1, $k1, 0x4C20
    ctx->pc = 0x2ce898u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)19488);
label_2ce89c:
    // 0x2ce89c: 0x73646e65  .word       0x73646E65                   # INVALID     $k1, $a0, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce89cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CE89C raw=0x73646E65");
 /* MITIGATED */
label_2ce8a0:
    // 0x2ce8a0: 0x73696420  .word       0x73696420                   # madd1       $t4, $k1, $t1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce8a0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ce8a4:
    // 0x2ce8a4: 0x6e612063  ldr         $at, 0x2063($s3)
    ctx->pc = 0x2ce8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ce8a8:
    // 0x2ce8a8: 0x6c632064  ldr         $v1, 0x2064($v1)
    ctx->pc = 0x2ce8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2ce8ac:
    // 0x2ce8ac: 0x2065736f  addi        $a1, $v1, 0x736F
    ctx->pc = 0x2ce8acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29551, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce8b0:
    // 0x2ce8b0: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ce8b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce8b4:
    // 0x2ce8b4: 0x63736964  daddi       $s3, $k1, 0x6964
    ctx->pc = 0x2ce8b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26980; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce8b8:
    // 0x2ce8b8: 0x61727420  daddi       $s2, $t3, 0x7420
    ctx->pc = 0x2ce8b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2ce8bc:
    // 0x2ce8bc: 0x2e79  .word       0x00002E79                   # INVALID     $zero, $zero, 0x2E79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce8bcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CE8BC raw=0x00002E79");
 /* MITIGATED */
label_2ce8c0:
    // 0x2ce8c0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2ce8c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce8c4:
    // 0x2ce8c4: 0x63736964  daddi       $s3, $k1, 0x6964
    ctx->pc = 0x2ce8c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26980; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce8c8:
    // 0x2ce8c8: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2ce8c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ce8cc:
    // 0x2ce8cc: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2ce8ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ce8d0:
    // 0x2ce8d0: 0x616e7944  daddi       $t6, $t3, 0x7944
    ctx->pc = 0x2ce8d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31044; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2ce8d4:
    // 0x2ce8d4: 0x20797473  addi        $t9, $v1, 0x7473
    ctx->pc = 0x2ce8d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29811, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2ce8d8:
    // 0x2ce8d8: 0x72726157  .word       0x72726157                   # INVALID     $s3, $s2, 0x6157 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce8d8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x17 at 0x2CE8D8 raw=0x72726157");
 /* MITIGATED */
label_2ce8dc:
    // 0x2ce8dc: 0x73726f69  .word       0x73726F69                   # INVALID     $k1, $s2, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2ce8dcu;
//     throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x2CE8DC raw=0x73726F69");
 /* MITIGATED */
label_2ce8e0:
    // 0x2ce8e0: 0xa2e3320  j           func_8B8CC80
label_2ce8e4:
    if (ctx->pc == 0x2CE8E4u) {
        ctx->pc = 0x2CE8E8u;
        goto label_2ce8e8;
    }
    ctx->pc = 0x2CE8E0u;
    ctx->pc = 0x8B8CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8B8CC80u, 0x2CE8E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CE8E8u;
label_2ce8e8:
    // 0x2ce8e8: 0x0  nop
    ctx->pc = 0x2ce8e8u;
    // NOP
label_2ce8ec:
    // 0x2ce8ec: 0x0  nop
    ctx->pc = 0x2ce8ecu;
    // NOP
label_2ce8f0:
    // 0x2ce8f0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2ce8f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce8f4:
    // 0x2ce8f4: 0x63736964  daddi       $s3, $k1, 0x6964
    ctx->pc = 0x2ce8f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26980; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce8f8:
    // 0x2ce8f8: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2ce8f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ce8fc:
    // 0x2ce8fc: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2ce8fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ce900:
    // 0x2ce900: 0x65736e69  daddiu      $s3, $t3, 0x6E69
    ctx->pc = 0x2ce900u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_2ce904:
    // 0x2ce904: 0x64657472  daddiu      $a1, $v1, 0x7472
    ctx->pc = 0x2ce904u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29810);
label_2ce908:
    // 0x2ce908: 0xa2e  .word       0x00000A2E                   # dsub        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce908u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2ce90c:
    // 0x2ce90c: 0x0  nop
    ctx->pc = 0x2ce90cu;
    // NOP
label_2ce910:
    // 0x2ce910: 0x20776f4e  addi        $s7, $v1, 0x6F4E
    ctx->pc = 0x2ce910u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2ce914:
    // 0x2ce914: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x2ce914u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_2ce918:
    // 0x2ce918: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x2ce918u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2ce91c:
    // 0x2ce91c: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ce91cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce920:
    // 0x2ce920: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2ce920u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2ce924:
    // 0x2ce924: 0x6c50202e  ldr         $s0, 0x202E($v0)
    ctx->pc = 0x2ce924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8238); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2ce928:
    // 0x2ce928: 0x65736165  daddiu      $s3, $t3, 0x6165
    ctx->pc = 0x2ce928u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2ce92c:
    // 0x2ce92c: 0x206f6420  addi        $t7, $v1, 0x6420
    ctx->pc = 0x2ce92cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25632, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ce930:
    // 0x2ce930: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2ce930u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ce934:
    // 0x2ce934: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x2ce934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ce938:
    // 0x2ce938: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2ce938u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2ce93c:
    // 0x2ce93c: 0x73696420  .word       0x73696420                   # madd1       $t4, $k1, $t1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce93cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ce940:
    // 0x2ce940: 0x72742063  .word       0x72742063                   # INVALID     $s3, $s4, 0x2063 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce940u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CE940 raw=0x72742063");
 /* MITIGATED */
label_2ce944:
    // 0x2ce944: 0x2e7961  .word       0x002E7961                   # addu        $t7, $at, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 14)));
label_2ce948:
    // 0x2ce948: 0x0  nop
    ctx->pc = 0x2ce948u;
    // NOP
label_2ce94c:
    // 0x2ce94c: 0x0  nop
    ctx->pc = 0x2ce94cu;
    // NOP
label_2ce950:
    // 0x2ce950: 0x20776f4e  addi        $s7, $v1, 0x6F4E
    ctx->pc = 0x2ce950u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2ce954:
    // 0x2ce954: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x2ce954u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ce958:
    // 0x2ce958: 0x676e696b  daddiu      $t6, $k1, 0x696B
    ctx->pc = 0x2ce958u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26987);
label_2ce95c:
    // 0x2ce95c: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2ce95cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2ce960:
    // 0x2ce960: 0x73696420  .word       0x73696420                   # madd1       $t4, $k1, $t1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce960u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ce964:
    // 0x2ce964: 0x50202e63  beql        $at, $zero, . + 4 + (0x2E63 << 2)
label_2ce968:
    if (ctx->pc == 0x2CE968u) {
        ctx->pc = 0x2CE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE964u;
        // 0x2ce968: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CE968 raw=0x7361656C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE96Cu;
        goto label_2ce96c;
    }
    ctx->pc = 0x2CE964u;
    {
        const bool branch_taken_0x2ce964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce964) {
            ctx->pc = 0x2CE968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE964u;
            // 0x2ce968: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CE968 raw=0x7361656C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA2F4u;
            return;
        }
    }
    ctx->pc = 0x2CE96Cu;
label_2ce96c:
    // 0x2ce96c: 0x6f642065  ldr         $a0, 0x2065($k1)
    ctx->pc = 0x2ce96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2ce970:
    // 0x2ce970: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce970u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE970 raw=0x746F6E20");
 /* MITIGATED */
label_2ce974:
    // 0x2ce974: 0x65706f20  daddiu      $s0, $t3, 0x6F20
    ctx->pc = 0x2ce974u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_2ce978:
    // 0x2ce978: 0x6874206e  ldl         $s4, 0x206E($v1)
    ctx->pc = 0x2ce978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ce97c:
    // 0x2ce97c: 0x69642065  ldl         $a0, 0x2065($t3)
    ctx->pc = 0x2ce97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2ce980:
    // 0x2ce980: 0x74206373  .word       0x74206373                   # INVALID     $at, $zero, 0x6373 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce980u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE980 raw=0x74206373");
 /* MITIGATED */
label_2ce984:
    // 0x2ce984: 0x2e796172  sltiu       $t9, $s3, 0x6172
    ctx->pc = 0x2ce984u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24946) ? 1 : 0);
label_2ce988:
    // 0x2ce988: 0x0  nop
    ctx->pc = 0x2ce988u;
    // NOP
label_2ce98c:
    // 0x2ce98c: 0x0  nop
    ctx->pc = 0x2ce98cu;
    // NOP
label_2ce990:
    // 0x2ce990: 0x6e65704f  ldr         $a1, 0x704F($s3)
    ctx->pc = 0x2ce990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ce994:
    // 0x2ce994: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x2ce994u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2ce998:
    // 0x2ce998: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ce998u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce99c:
    // 0x2ce99c: 0x63736964  daddi       $s3, $k1, 0x6964
    ctx->pc = 0x2ce99cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26980; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce9a0:
    // 0x2ce9a0: 0x61727420  daddi       $s2, $t3, 0x7420
    ctx->pc = 0x2ce9a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2ce9a4:
    // 0x2ce9a4: 0x500a2e79  beql        $zero, $t2, . + 4 + (0x2E79 << 2)
label_2ce9a8:
    if (ctx->pc == 0x2CE9A8u) {
        ctx->pc = 0x2CE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9A4u;
        // 0x2ce9a8: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CE9A8 raw=0x7361656C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE9ACu;
        goto label_2ce9ac;
    }
    ctx->pc = 0x2CE9A4u;
    {
        const bool branch_taken_0x2ce9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ce9a4) {
            ctx->pc = 0x2CE9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE9A4u;
            // 0x2ce9a8: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CE9A8 raw=0x7361656C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA38Cu;
            return;
        }
    }
    ctx->pc = 0x2CE9ACu;
label_2ce9ac:
    // 0x2ce9ac: 0x72702065  .word       0x72702065                   # INVALID     $s3, $s0, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce9acu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CE9AC raw=0x72702065");
 /* MITIGATED */
label_2ce9b0:
    // 0x2ce9b0: 0x20737365  addi        $s3, $v1, 0x7365
    ctx->pc = 0x2ce9b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ce9b4:
    // 0x2ce9b4: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ce9b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce9b8:
    // 0x2ce9b8: 0x1b394d1b  .word       0x1B394D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2ce9bc:
    if (ctx->pc == 0x2CE9BCu) {
        ctx->pc = 0x2CE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9B8u;
        // 0x2ce9bc: 0x62203a4d  daddi       $zero, $s1, 0x3A4D (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)14925; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE9C0u;
        goto label_2ce9c0;
    }
    ctx->pc = 0x2CE9B8u;
    {
        const bool branch_taken_0x2ce9b8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9B8u;
        // 0x2ce9bc: 0x62203a4d  daddi       $zero, $s1, 0x3A4D (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)14925; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9b8) {
            ctx->pc = 0x2E1E28u;
            return;
        }
    }
    ctx->pc = 0x2CE9C0u;
label_2ce9c0:
    // 0x2ce9c0: 0x6f747475  ldr         $s4, 0x7475($k1)
    ctx->pc = 0x2ce9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2ce9c4:
    // 0x2ce9c4: 0x6f74206e  ldr         $s4, 0x206E($k1)
    ctx->pc = 0x2ce9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2ce9c8:
    // 0x2ce9c8: 0x6e6f6320  ldr         $t7, 0x6320($s3)
    ctx->pc = 0x2ce9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2ce9cc:
    // 0x2ce9cc: 0x756e6974  .word       0x756E6974                   # INVALID     $t3, $t6, 0x6974 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce9ccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE9CC raw=0x756E6974");
 /* MITIGATED */
label_2ce9d0:
    // 0x2ce9d0: 0x2e65  .word       0x00002E65                   # move        $a1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ce9d4:
    // 0x2ce9d4: 0x0  nop
    ctx->pc = 0x2ce9d4u;
    // NOP
label_2ce9d8:
    // 0x2ce9d8: 0x0  nop
    ctx->pc = 0x2ce9d8u;
    // NOP
label_2ce9dc:
    // 0x2ce9dc: 0x0  nop
    ctx->pc = 0x2ce9dcu;
    // NOP
label_2ce9e0:
    // 0x2ce9e0: 0x6769724f  daddiu      $t1, $k1, 0x724F
    ctx->pc = 0x2ce9e0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29263);
label_2ce9e4:
    // 0x2ce9e4: 0x6c616e69  ldr         $at, 0x6E69($v1)
    ctx->pc = 0x2ce9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ce9e8:
    // 0x2ce9e8: 0x74616420  .word       0x74616420                   # INVALID     $v1, $at, 0x6420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce9e8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE9E8 raw=0x74616420");
 /* MITIGATED */
label_2ce9ec:
    // 0x2ce9ec: 0x6f6c2061  ldr         $t4, 0x2061($k1)
    ctx->pc = 0x2ce9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2ce9f0:
    // 0x2ce9f0: 0x64656461  daddiu      $a1, $v1, 0x6461
    ctx->pc = 0x2ce9f0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25697);
label_2ce9f4:
    // 0x2ce9f4: 0x63757320  daddi       $s5, $k1, 0x7320
    ctx->pc = 0x2ce9f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2ce9f8:
    // 0x2ce9f8: 0x73736563  .word       0x73736563                   # INVALID     $k1, $s3, 0x6563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce9f8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CE9F8 raw=0x73736563");
 /* MITIGATED */
label_2ce9fc:
    // 0x2ce9fc: 0x6c6c7566  ldr         $t4, 0x7566($v1)
    ctx->pc = 0x2ce9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30054); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cea00:
    // 0x2cea00: 0x2e79  .word       0x00002E79                   # INVALID     $zero, $zero, 0x2E79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CEA00 raw=0x00002E79");
 /* MITIGATED */
label_2cea04:
    // 0x2cea04: 0x0  nop
    ctx->pc = 0x2cea04u;
    // NOP
label_2cea08:
    // 0x2cea08: 0x554c535c  bnel        $t2, $t4, . + 4 + (0x535C << 2)
label_2cea0c:
    if (ctx->pc == 0x2CEA0Cu) {
        ctx->pc = 0x2CEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA08u;
        // 0x2cea0c: 0x30325f53  andi        $s2, $at, 0x5F53 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)24403);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA10u;
        goto label_2cea10;
    }
    ctx->pc = 0x2CEA08u;
    {
        const bool branch_taken_0x2cea08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x2cea08) {
            ctx->pc = 0x2CEA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA08u;
            // 0x2cea0c: 0x30325f53  andi        $s2, $at, 0x5F53 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)24403);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E377Cu;
            return;
        }
    }
    ctx->pc = 0x2CEA10u;
label_2cea10:
    // 0x2cea10: 0x37312e36  ori         $s1, $t9, 0x2E36
    ctx->pc = 0x2cea10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)11830);
label_2cea14:
    // 0x2cea14: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x2cea14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
label_2cea18:
    // 0x2cea18: 0x554c535c  bnel        $t2, $t4, . + 4 + (0x535C << 2)
label_2cea1c:
    if (ctx->pc == 0x2CEA1Cu) {
        ctx->pc = 0x2CEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA18u;
        // 0x2cea1c: 0x30325f53  andi        $s2, $at, 0x5F53 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)24403);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA20u;
        goto label_2cea20;
    }
    ctx->pc = 0x2CEA18u;
    {
        const bool branch_taken_0x2cea18 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x2cea18) {
            ctx->pc = 0x2CEA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA18u;
            // 0x2cea1c: 0x30325f53  andi        $s2, $at, 0x5F53 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)24403);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E378Cu;
            return;
        }
    }
    ctx->pc = 0x2CEA20u;
label_2cea20:
    // 0x2cea20: 0x37372e32  ori         $s7, $t9, 0x2E32
    ctx->pc = 0x2cea20u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)11826);
label_2cea24:
    // 0x2cea24: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x2cea24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
label_2cea28:
    // 0x2cea28: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cea28u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CEA28 raw=0x73257325");
 /* MITIGATED */
label_2cea2c:
    // 0x2cea2c: 0x0  nop
    ctx->pc = 0x2cea2cu;
    // NOP
label_2cea30:
    // 0x2cea30: 0x23f7f0  tge         $at, $v1, 991
    ctx->pc = 0x2cea30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2cea34:
    // 0x2cea34: 0x23f804  sllv        $ra, $v1, $at
    ctx->pc = 0x2cea34u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 1) & 0x1F));
label_2cea38:
    // 0x2cea38: 0x23f830  tge         $at, $v1, 992
    ctx->pc = 0x2cea38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2cea3c:
    // 0x2cea3c: 0x23f844  .word       0x0023F844                   # sllv        $ra, $v1, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea3cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 1) & 0x1F));
label_2cea40:
    // 0x2cea40: 0x23f888  .word       0x0023F888                   # jr          $at # 0003F880 <InstrIdType: CPU_SPECIAL>
label_2cea44:
    if (ctx->pc == 0x2CEA44u) {
        ctx->pc = 0x2CEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA40u;
        // 0x2cea44: 0x23f8e8  .word       0x0023F8E8                   # mfsa        $ra # 002300C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 31, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA48u;
        goto label_2cea48;
    }
    ctx->pc = 0x2CEA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA40u;
        // 0x2cea44: 0x23f8e8  .word       0x0023F8E8                   # mfsa        $ra # 002300C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 31, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEA40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CEA48u;
label_2cea48:
    // 0x2cea48: 0x23f90c  .word       0x0023F90C                   # syscall     996 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea48u;
    ctx->pc = 0x2CEA4Cu;
runtime->handleSyscall(rdram, ctx, 0x8FE4u);
label_2cea4c:
    // 0x2cea4c: 0x23f92c  .word       0x0023F92C                   # dadd        $ra, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2cea50:
    // 0x2cea50: 0x23fabc  .word       0x0023FABC                   # dsll32      $ra, $v1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea50u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 3) << (32 + 10));
label_2cea54:
    // 0x2cea54: 0x0  nop
    ctx->pc = 0x2cea54u;
    // NOP
label_2cea58:
    // 0x2cea58: 0x0  nop
    ctx->pc = 0x2cea58u;
    // NOP
label_2cea5c:
    // 0x2cea5c: 0x0  nop
    ctx->pc = 0x2cea5cu;
    // NOP
label_2cea60:
    // 0x2cea60: 0x240534  teq         $at, $a0, 20
    ctx->pc = 0x2cea60u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2cea64:
    // 0x2cea64: 0x240544  .word       0x00240544                   # sllv        $zero, $a0, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea64u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 1) & 0x1F));
label_2cea68:
    // 0x2cea68: 0x240554  .word       0x00240554                   # dsllv       $zero, $a0, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) << (GPR_U32(ctx, 1) & 0x3F));
label_2cea6c:
    // 0x2cea6c: 0x240564  .word       0x00240564                   # and         $zero, $at, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_2cea70:
    // 0x2cea70: 0x240564  .word       0x00240564                   # and         $zero, $at, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_2cea74:
    // 0x2cea74: 0x240564  .word       0x00240564                   # and         $zero, $at, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_2cea78:
    // 0x2cea78: 0x240564  .word       0x00240564                   # and         $zero, $at, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea78u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_2cea7c:
    // 0x2cea7c: 0x0  nop
    ctx->pc = 0x2cea7cu;
    // NOP
label_2cea80:
    // 0x2cea80: 0x0  nop
    ctx->pc = 0x2cea80u;
    // NOP
label_2cea84:
    // 0x2cea84: 0x0  nop
    ctx->pc = 0x2cea84u;
    // NOP
label_2cea88:
    // 0x2cea88: 0x6432252b  daddiu      $s2, $at, 0x252B
    ctx->pc = 0x2cea88u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9515);
label_2cea8c:
    // 0x2cea8c: 0x0  nop
    ctx->pc = 0x2cea8cu;
    // NOP
label_2cea90:
    // 0x2cea90: 0x160002  srl         $zero, $s6, 0
    ctx->pc = 0x2cea90u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2cea94:
    // 0x2cea94: 0x340025  or          $zero, $at, $s4
    ctx->pc = 0x2cea94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) | GPR_U64(ctx, 20));
label_2cea98:
    // 0x2cea98: 0x550044  .word       0x00550044                   # sllv        $zero, $s5, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea98u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
label_2cea9c:
    // 0x2cea9c: 0x740063  .word       0x00740063                   # subu        $zero, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cea9cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ceaa0:
    // 0x2ceaa0: 0x930083  .word       0x00930083                   # sra         $zero, $s3, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceaa0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 19), 2));
label_2ceaa4:
    // 0x2ceaa4: 0x0  nop
    ctx->pc = 0x2ceaa4u;
    // NOP
label_2ceaa8:
    // 0x2ceaa8: 0x0  nop
    ctx->pc = 0x2ceaa8u;
    // NOP
label_2ceaac:
    // 0x2ceaac: 0x0  nop
    ctx->pc = 0x2ceaacu;
    // NOP
label_2ceab0:
    // 0x2ceab0: 0xa0012  .word       0x000A0012                   # mflo        $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceab0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2ceab4:
    // 0x2ceab4: 0xe000e  .word       0x000E000E                   # INVALID     $zero, $t6, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceab4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2CEAB4 raw=0x000E000E");
 /* MITIGATED */
label_2ceab8:
    // 0x2ceab8: 0xd0010  .word       0x000D0010                   # mfhi        $zero # 000D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceab8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2ceabc:
    // 0x2ceabc: 0xd0011  .word       0x000D0011                   # mthi        $zero # 000D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceabcu;
    ctx->hi = GPR_U64(ctx, 0);
label_2ceac0:
    // 0x2ceac0: 0x100010  .word       0x00100010                   # mfhi        $zero # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceac0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2ceac4:
    // 0x2ceac4: 0x0  nop
    ctx->pc = 0x2ceac4u;
    // NOP
label_2ceac8:
    // 0x2ceac8: 0x6100a9  .word       0x006100A9                   # mtsa        $v1 # 00010080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ceac8u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2ceacc:
    // 0x2ceacc: 0xc10049  .word       0x00C10049                   # jalr        $zero, $a2 # 00010040 <InstrIdType: CPU_SPECIAL>
label_2cead0:
    if (ctx->pc == 0x2CEAD0u) {
        ctx->pc = 0x2CEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEACCu;
        // 0x2cead0: 0xd90061  .word       0x00D90061                   # addu        $zero, $a2, $t9 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEAD4u;
        goto label_2cead4;
    }
    ctx->pc = 0x2CEACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x2CEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEACCu;
        // 0x2cead0: 0xd90061  .word       0x00D90061                   # addu        $zero, $a2, $t9 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEACCu, 0x2CEAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CEAD4u;
label_2cead4:
    // 0x2cead4: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cead4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2cead8:
    // 0x2cead8: 0x490001  .word       0x00490001                   # INVALID     $v0, $t1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cead8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CEAD8 raw=0x00490001");
 /* MITIGATED */
label_2ceadc:
    // 0x2ceadc: 0x790061  .word       0x00790061                   # addu        $zero, $v1, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceadcu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_2ceae0:
    // 0x2ceae0: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceae0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2ceae4:
    // 0x2ceae4: 0x0  nop
    ctx->pc = 0x2ceae4u;
    // NOP
label_2ceae8:
    // 0x2ceae8: 0x190001  .word       0x00190001                   # INVALID     $zero, $t9, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceae8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CEAE8 raw=0x00190001");
 /* MITIGATED */
label_2ceaec:
    // 0x2ceaec: 0x310019  multu       $at, $s1
    ctx->pc = 0x2ceaecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 1) * (uint64_t)GPR_U32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ceaf0:
    // 0x2ceaf0: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceaf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CEAF0 raw=0x01010101");
 /* MITIGATED */
label_2ceaf4:
    // 0x2ceaf4: 0x2040201  .word       0x02040201                   # INVALID     $s0, $a0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceaf4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CEAF4 raw=0x02040201");
 /* MITIGATED */
label_2ceaf8:
    // 0x2ceaf8: 0x2020303  .word       0x02020303                   # sra         $zero, $v0, 12 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceaf8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 12));
label_2ceafc:
    // 0x2ceafc: 0x4040303  .word       0x04040303                   # INVALID     $zero, $a0, 0x303 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2ceafcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CEAFC raw=0x04040303");
 /* MITIGATED */
label_2ceb00:
    // 0x2ceb00: 0x50f0a07  .word       0x050F0A07                   # INVALID     $t0, $t7, 0xA07 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2ceb00u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x2CEB00 raw=0x050F0A07");
 /* MITIGATED */
label_2ceb04:
    // 0x2ceb04: 0x1010203  .word       0x01010203                   # sra         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceb04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), 8));
label_2ceb08:
    // 0x2ceb08: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceb08u;
    // NOP
label_2ceb0c:
    // 0x2ceb0c: 0xf0a0704  jal         func_C281C10
label_2ceb10:
    if (ctx->pc == 0x2CEB10u) {
        ctx->pc = 0x2CEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB0Cu;
        // 0x2ceb10: 0x281e1914  slti        $fp, $zero, 0x1914 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)6420) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB14u;
        goto label_2ceb14;
    }
    ctx->pc = 0x2CEB0Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB14u);
    ctx->pc = 0x2CEB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB0Cu;
    // 0x2ceb10: 0x281e1914  slti        $fp, $zero, 0x1914 (Delay Slot)
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)6420) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC281C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC281C10u, 0x2CEB0Cu, 0x2CEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB14u;
label_2ceb14:
    // 0x2ceb14: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2ceb14u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ceb18:
    // 0x2ceb18: 0x0  nop
    ctx->pc = 0x2ceb18u;
    // NOP
label_2ceb1c:
    // 0x2ceb1c: 0x0  nop
    ctx->pc = 0x2ceb1cu;
    // NOP
label_2ceb20:
    // 0x2ceb20: 0x3ec66666  .word       0x3EC66666                   # lui         $a2, 0x6666 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2ceb24:
    // 0x2ceb24: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2ceb28:
    // 0x2ceb28: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb28u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2ceb2c:
    // 0x2ceb2c: 0x0  nop
    ctx->pc = 0x2ceb2cu;
    // NOP
label_2ceb30:
    // 0x2ceb30: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ceb30u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CEB30 raw=0x447A0000");
 /* MITIGATED */
label_2ceb34:
    // 0x2ceb34: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ceb34u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CEB34 raw=0x447A0000");
 /* MITIGATED */
label_2ceb38:
    // 0x2ceb38: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ceb38u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEB38 raw=0x44FA0000");
 /* MITIGATED */
label_2ceb3c:
    // 0x2ceb3c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2ceb3cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ceb40:
    // 0x2ceb40: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ceb40u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEB40 raw=0x41F00000");
 /* MITIGATED */
label_2ceb44:
    // 0x2ceb44: 0x0  nop
    ctx->pc = 0x2ceb44u;
    // NOP
label_2ceb48:
    // 0x2ceb48: 0x42f4  teq         $zero, $zero, 267
    ctx->pc = 0x2ceb48u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ceb4c:
    // 0x2ceb4c: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x2ceb4cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ceb50:
    // 0x2ceb50: 0x3eb33333  .word       0x3EB33333                   # lui         $s3, 0x3333 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2ceb54:
    // 0x2ceb54: 0x3ea66666  .word       0x3EA66666                   # lui         $a2, 0x6666 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2ceb58:
    // 0x2ceb58: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb58u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2ceb5c:
    // 0x2ceb5c: 0x0  nop
    ctx->pc = 0x2ceb5cu;
    // NOP
label_2ceb60:
    // 0x2ceb60: 0x443b8000  dmfc1       $k1, $f16
    ctx->pc = 0x2ceb60u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x2CEB60 raw=0x443B8000");
 /* MITIGATED */
label_2ceb64:
    // 0x2ceb64: 0x443b8000  dmfc1       $k1, $f16
    ctx->pc = 0x2ceb64u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x2CEB64 raw=0x443B8000");
 /* MITIGATED */
label_2ceb68:
    // 0x2ceb68: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ceb68u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEB68 raw=0x44FA0000");
 /* MITIGATED */
label_2ceb6c:
    // 0x2ceb6c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2ceb6cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ceb70:
    // 0x2ceb70: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ceb70u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEB70 raw=0x41F00000");
 /* MITIGATED */
label_2ceb74:
    // 0x2ceb74: 0x0  nop
    ctx->pc = 0x2ceb74u;
    // NOP
label_2ceb78:
    // 0x2ceb78: 0x43ea  .word       0x000043EA                   # slt         $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceb78u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2ceb7c:
    // 0x2ceb7c: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x2ceb7cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ceb80:
    // 0x2ceb80: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2ceb84:
    // 0x2ceb84: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2ceb88:
    // 0x2ceb88: 0x3ec66666  .word       0x3EC66666                   # lui         $a2, 0x6666 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2ceb8c:
    // 0x2ceb8c: 0x0  nop
    ctx->pc = 0x2ceb8cu;
    // NOP
label_2ceb90:
    // 0x2ceb90: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2ceb90u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceb94:
    // 0x2ceb94: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2ceb94u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceb98:
    // 0x2ceb98: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ceb98u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEB98 raw=0x44FA0000");
 /* MITIGATED */
label_2ceb9c:
    // 0x2ceb9c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2ceb9cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ceba0:
    // 0x2ceba0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ceba0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEBA0 raw=0x41F00000");
 /* MITIGATED */
label_2ceba4:
    // 0x2ceba4: 0x0  nop
    ctx->pc = 0x2ceba4u;
    // NOP
label_2ceba8:
    // 0x2ceba8: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ceba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2cebac:
    // 0x2cebac: 0xfb  dsra        $zero, $zero, 3
    ctx->pc = 0x2cebacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 3);
label_2cebb0:
    // 0x2cebb0: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cebb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2cebb4:
    // 0x2cebb4: 0x3ec66666  .word       0x3EC66666                   # lui         $a2, 0x6666 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2cebb8:
    // 0x2cebb8: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cebb8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2cebbc:
    // 0x2cebbc: 0x0  nop
    ctx->pc = 0x2cebbcu;
    // NOP
label_2cebc0:
    // 0x2cebc0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2cebc0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cebc4:
    // 0x2cebc4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2cebc4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cebc8:
    // 0x2cebc8: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cebc8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEBC8 raw=0x44FA0000");
 /* MITIGATED */
label_2cebcc:
    // 0x2cebcc: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2cebccu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2cebd0:
    // 0x2cebd0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cebd0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEBD0 raw=0x41F00000");
 /* MITIGATED */
label_2cebd4:
    // 0x2cebd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cebd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CEBD4 raw=0x00000001");
 /* MITIGATED */
label_2cebd8:
    // 0x2cebd8: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cebd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2cebdc:
    // 0x2cebdc: 0xfb  dsra        $zero, $zero, 3
    ctx->pc = 0x2cebdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 3);
label_2cebe0:
    // 0x2cebe0: 0x3ec66666  .word       0x3EC66666                   # lui         $a2, 0x6666 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2cebe4:
    // 0x2cebe4: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cebe4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2cebe8:
    // 0x2cebe8: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cebe8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2cebec:
    // 0x2cebec: 0x0  nop
    ctx->pc = 0x2cebecu;
    // NOP
label_2cebf0:
    // 0x2cebf0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2cebf0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cebf4:
    // 0x2cebf4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2cebf4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cebf8:
    // 0x2cebf8: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cebf8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEBF8 raw=0x44FA0000");
 /* MITIGATED */
label_2cebfc:
    // 0x2cebfc: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2cebfcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2cec00:
    // 0x2cec00: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cec00u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEC00 raw=0x41F00000");
 /* MITIGATED */
label_2cec04:
    // 0x2cec04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2cec04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2cec08:
    // 0x2cec08: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cec08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2cec0c:
    // 0x2cec0c: 0xfb  dsra        $zero, $zero, 3
    ctx->pc = 0x2cec0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 3);
label_2cec10:
    // 0x2cec10: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec10u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2cec14:
    // 0x2cec14: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec14u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2cec18:
    // 0x2cec18: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2cec1c:
    // 0x2cec1c: 0x0  nop
    ctx->pc = 0x2cec1cu;
    // NOP
label_2cec20:
    // 0x2cec20: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cec20u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CEC20 raw=0x447A0000");
 /* MITIGATED */
label_2cec24:
    // 0x2cec24: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cec24u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CEC24 raw=0x447A0000");
 /* MITIGATED */
label_2cec28:
    // 0x2cec28: 0x44bb8000  dmtc1       $k1, $f16
    ctx->pc = 0x2cec28u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x2CEC28 raw=0x44BB8000");
 /* MITIGATED */
label_2cec2c:
    // 0x2cec2c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2cec2cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2cec30:
    // 0x2cec30: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cec30u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEC30 raw=0x41F00000");
 /* MITIGATED */
label_2cec34:
    // 0x2cec34: 0x0  nop
    ctx->pc = 0x2cec34u;
    // NOP
label_2cec38:
    // 0x2cec38: 0x45db  .word       0x000045DB                   # divu        $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cec38u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2cec3c:
    // 0x2cec3c: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x2cec3cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cec40:
    // 0x2cec40: 0x3ea00000  .word       0x3EA00000                   # lui         $zero, 0x0 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec40u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cec44:
    // 0x2cec44: 0x3ea66666  .word       0x3EA66666                   # lui         $a2, 0x6666 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2cec48:
    // 0x2cec48: 0x3eaccccd  .word       0x3EACCCCD                   # lui         $t4, 0xCCCD # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec48u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2cec4c:
    // 0x2cec4c: 0x0  nop
    ctx->pc = 0x2cec4cu;
    // NOP
label_2cec50:
    // 0x2cec50: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cec50u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CEC50 raw=0x447A0000");
 /* MITIGATED */
label_2cec54:
    // 0x2cec54: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cec54u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEC54 raw=0x44FA0000");
 /* MITIGATED */
label_2cec58:
    // 0x2cec58: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cec58u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CEC58 raw=0x447A0000");
 /* MITIGATED */
label_2cec5c:
    // 0x2cec5c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2cec5cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2cec60:
    // 0x2cec60: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cec60u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEC60 raw=0x41F00000");
 /* MITIGATED */
label_2cec64:
    // 0x2cec64: 0x0  nop
    ctx->pc = 0x2cec64u;
    // NOP
label_2cec68:
    // 0x2cec68: 0x46d1  .word       0x000046D1                   # mthi        $zero # 000046C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cec68u;
    ctx->hi = GPR_U64(ctx, 0);
label_2cec6c:
    // 0x2cec6c: 0x1e6  .word       0x000001E6                   # xor         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cec6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2cec70:
    // 0x2cec70: 0x3ea33333  .word       0x3EA33333                   # lui         $v1, 0x3333 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
label_2cec74:
    // 0x2cec74: 0x3e666666  .word       0x3E666666                   # lui         $a2, 0x6666 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_2cec78:
    // 0x2cec78: 0x3ea33333  .word       0x3EA33333                   # lui         $v1, 0x3333 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cec78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
label_2cec7c:
    // 0x2cec7c: 0x0  nop
    ctx->pc = 0x2cec7cu;
    // NOP
label_2cec80:
    // 0x2cec80: 0x442f0000  dmfc1       $t7, $f0
    ctx->pc = 0x2cec80u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x2CEC80 raw=0x442F0000");
 /* MITIGATED */
label_2cec84:
    // 0x2cec84: 0x442f0000  dmfc1       $t7, $f0
    ctx->pc = 0x2cec84u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x2CEC84 raw=0x442F0000");
 /* MITIGATED */
label_2cec88:
    // 0x2cec88: 0x44e10000  .word       0x44E10000                   # INVALID     $a3, $at, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cec88u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CEC88 raw=0x44E10000");
 /* MITIGATED */
label_2cec8c:
    // 0x2cec8c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2cec8cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2cec90:
    // 0x2cec90: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cec90u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CEC90 raw=0x41F00000");
 /* MITIGATED */
label_2cec94:
    // 0x2cec94: 0x0  nop
    ctx->pc = 0x2cec94u;
    // NOP
label_2cec98:
    // 0x2cec98: 0x48b7  .word       0x000048B7                   # INVALID     $zero, $zero, 0x48B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cec98u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2CEC98 raw=0x000048B7");
 /* MITIGATED */
label_2cec9c:
    // 0x2cec9c: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x2cec9cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ceca0:
    // 0x2ceca0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceca0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2ceca4:
    // 0x2ceca4: 0x3ec00000  .word       0x3EC00000                   # lui         $zero, 0x0 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceca4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2ceca8:
    // 0x2ceca8: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ceca8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2cecac:
    // 0x2cecac: 0x0  nop
    ctx->pc = 0x2cecacu;
    // NOP
label_2cecb0:
    // 0x2cecb0: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cecb0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CECB0 raw=0x447A0000");
 /* MITIGATED */
label_2cecb4:
    // 0x2cecb4: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cecb4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CECB4 raw=0x447A0000");
 /* MITIGATED */
label_2cecb8:
    // 0x2cecb8: 0x45098000  .word       0x45098000                   # INVALID     $t0, $t1, -0x8000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2cecb8u;
    // FPU branch instruction - handled elsewhere
label_2cecbc:
    // 0x2cecbc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2cecbcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2cecc0:
    // 0x2cecc0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cecc0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CECC0 raw=0x41F00000");
 /* MITIGATED */
label_2cecc4:
    // 0x2cecc4: 0x0  nop
    ctx->pc = 0x2cecc4u;
    // NOP
label_2cecc8:
    // 0x2cecc8: 0x49ad  .word       0x000049AD                   # daddu       $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cecc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceccc:
    // 0x2ceccc: 0x1ec  .word       0x000001EC                   # dadd        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cecccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cecd0:
    // 0x2cecd0: 0x3eb9999a  .word       0x3EB9999A                   # lui         $t9, 0x999A # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cecd0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2cecd4:
    // 0x2cecd4: 0x3ec00000  .word       0x3EC00000                   # lui         $zero, 0x0 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cecd4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cecd8:
    // 0x2cecd8: 0x3eaccccd  .word       0x3EACCCCD                   # lui         $t4, 0xCCCD # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cecd8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_2cecdc:
    // 0x2cecdc: 0x0  nop
    ctx->pc = 0x2cecdcu;
    // NOP
label_2cece0:
    // 0x2cece0: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cece0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CECE0 raw=0x447A0000");
 /* MITIGATED */
label_2cece4:
    // 0x2cece4: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cece4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2CECE4 raw=0x447A0000");
 /* MITIGATED */
label_2cece8:
    // 0x2cece8: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cece8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2CECE8 raw=0x44FA0000");
 /* MITIGATED */
label_2cecec:
    // 0x2cecec: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2cececu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2CECEC raw=0x40A00000");
 /* MITIGATED */
label_2cecf0:
    // 0x2cecf0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cecf0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CECF0 raw=0x41F00000");
 /* MITIGATED */
label_2cecf4:
    // 0x2cecf4: 0x0  nop
    ctx->pc = 0x2cecf4u;
    // NOP
label_2cecf8:
    // 0x2cecf8: 0x4b99  .word       0x00004B99                   # multu       $zero, $zero # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cecf8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2cecfc:
    // 0x2cecfc: 0x267  .word       0x00000267                   # not         $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cecfcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ced00:
    // 0x2ced00: 0x7ae00  sll         $s5, $a3, 24
    ctx->pc = 0x2ced00u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_2ced04:
    // 0x2ced04: 0x7ae00  sll         $s5, $a3, 24
    ctx->pc = 0x2ced04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_2ced08:
    // 0x2ced08: 0x7d380  sll         $k0, $a3, 14
    ctx->pc = 0x2ced08u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
label_2ced0c:
    // 0x2ced0c: 0x7d380  sll         $k0, $a3, 14
    ctx->pc = 0x2ced0cu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
label_2ced10:
    // 0x2ced10: 0x7d380  sll         $k0, $a3, 14
    ctx->pc = 0x2ced10u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
label_2ced14:
    // 0x2ced14: 0x7ae00  sll         $s5, $a3, 24
    ctx->pc = 0x2ced14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_2ced18:
    // 0x2ced18: 0xf2e00  sll         $a1, $t7, 24
    ctx->pc = 0x2ced18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
label_2ced1c:
    // 0x2ced1c: 0x7ae00  sll         $s5, $a3, 24
    ctx->pc = 0x2ced1cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_2ced20:
    // 0x2ced20: 0xf5bf0  tge         $zero, $t7, 367
    ctx->pc = 0x2ced20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x2ced24u;
}
