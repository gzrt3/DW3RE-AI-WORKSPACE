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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part525(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        case 0x27d1e0u: goto label_27d1e0;
        case 0x27d1e4u: goto label_27d1e4;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1ecu: goto label_27d1ec;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d200u: goto label_27d200;
        case 0x27d204u: goto label_27d204;
        case 0x27d208u: goto label_27d208;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d210u: goto label_27d210;
        case 0x27d214u: goto label_27d214;
        case 0x27d218u: goto label_27d218;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d220u: goto label_27d220;
        case 0x27d224u: goto label_27d224;
        case 0x27d228u: goto label_27d228;
        case 0x27d22cu: goto label_27d22c;
        case 0x27d230u: goto label_27d230;
        case 0x27d234u: goto label_27d234;
        case 0x27d238u: goto label_27d238;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d240u: goto label_27d240;
        case 0x27d244u: goto label_27d244;
        case 0x27d248u: goto label_27d248;
        case 0x27d24cu: goto label_27d24c;
        case 0x27d250u: goto label_27d250;
        case 0x27d254u: goto label_27d254;
        case 0x27d258u: goto label_27d258;
        case 0x27d25cu: goto label_27d25c;
        case 0x27d260u: goto label_27d260;
        case 0x27d264u: goto label_27d264;
        case 0x27d268u: goto label_27d268;
        case 0x27d26cu: goto label_27d26c;
        case 0x27d270u: goto label_27d270;
        case 0x27d274u: goto label_27d274;
        case 0x27d278u: goto label_27d278;
        case 0x27d27cu: goto label_27d27c;
        case 0x27d280u: goto label_27d280;
        case 0x27d284u: goto label_27d284;
        case 0x27d288u: goto label_27d288;
        case 0x27d28cu: goto label_27d28c;
        case 0x27d290u: goto label_27d290;
        case 0x27d294u: goto label_27d294;
        case 0x27d298u: goto label_27d298;
        case 0x27d29cu: goto label_27d29c;
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2a4u: goto label_27d2a4;
        case 0x27d2a8u: goto label_27d2a8;
        case 0x27d2acu: goto label_27d2ac;
        case 0x27d2b0u: goto label_27d2b0;
        case 0x27d2b4u: goto label_27d2b4;
        case 0x27d2b8u: goto label_27d2b8;
        case 0x27d2bcu: goto label_27d2bc;
        case 0x27d2c0u: goto label_27d2c0;
        case 0x27d2c4u: goto label_27d2c4;
        case 0x27d2c8u: goto label_27d2c8;
        case 0x27d2ccu: goto label_27d2cc;
        case 0x27d2d0u: goto label_27d2d0;
        case 0x27d2d4u: goto label_27d2d4;
        case 0x27d2d8u: goto label_27d2d8;
        case 0x27d2dcu: goto label_27d2dc;
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2e4u: goto label_27d2e4;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d2ecu: goto label_27d2ec;
        case 0x27d2f0u: goto label_27d2f0;
        case 0x27d2f4u: goto label_27d2f4;
        case 0x27d2f8u: goto label_27d2f8;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d300u: goto label_27d300;
        case 0x27d304u: goto label_27d304;
        case 0x27d308u: goto label_27d308;
        case 0x27d30cu: goto label_27d30c;
        case 0x27d310u: goto label_27d310;
        case 0x27d314u: goto label_27d314;
        case 0x27d318u: goto label_27d318;
        case 0x27d31cu: goto label_27d31c;
        case 0x27d320u: goto label_27d320;
        case 0x27d324u: goto label_27d324;
        case 0x27d328u: goto label_27d328;
        case 0x27d32cu: goto label_27d32c;
        case 0x27d330u: goto label_27d330;
        case 0x27d334u: goto label_27d334;
        case 0x27d338u: goto label_27d338;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d340u: goto label_27d340;
        case 0x27d344u: goto label_27d344;
        case 0x27d348u: goto label_27d348;
        case 0x27d34cu: goto label_27d34c;
        case 0x27d350u: goto label_27d350;
        case 0x27d354u: goto label_27d354;
        case 0x27d358u: goto label_27d358;
        case 0x27d35cu: goto label_27d35c;
        case 0x27d360u: goto label_27d360;
        case 0x27d364u: goto label_27d364;
        case 0x27d368u: goto label_27d368;
        case 0x27d36cu: goto label_27d36c;
        case 0x27d370u: goto label_27d370;
        case 0x27d374u: goto label_27d374;
        case 0x27d378u: goto label_27d378;
        case 0x27d37cu: goto label_27d37c;
        case 0x27d380u: goto label_27d380;
        case 0x27d384u: goto label_27d384;
        case 0x27d388u: goto label_27d388;
        case 0x27d38cu: goto label_27d38c;
        case 0x27d390u: goto label_27d390;
        case 0x27d394u: goto label_27d394;
        case 0x27d398u: goto label_27d398;
        case 0x27d39cu: goto label_27d39c;
        case 0x27d3a0u: goto label_27d3a0;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d3acu: goto label_27d3ac;
        case 0x27d3b0u: goto label_27d3b0;
        case 0x27d3b4u: goto label_27d3b4;
        case 0x27d3b8u: goto label_27d3b8;
        case 0x27d3bcu: goto label_27d3bc;
        case 0x27d3c0u: goto label_27d3c0;
        case 0x27d3c4u: goto label_27d3c4;
        case 0x27d3c8u: goto label_27d3c8;
        case 0x27d3ccu: goto label_27d3cc;
        case 0x27d3d0u: goto label_27d3d0;
        case 0x27d3d4u: goto label_27d3d4;
        case 0x27d3d8u: goto label_27d3d8;
        case 0x27d3dcu: goto label_27d3dc;
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d3e4u: goto label_27d3e4;
        case 0x27d3e8u: goto label_27d3e8;
        case 0x27d3ecu: goto label_27d3ec;
        case 0x27d3f0u: goto label_27d3f0;
        case 0x27d3f4u: goto label_27d3f4;
        case 0x27d3f8u: goto label_27d3f8;
        case 0x27d3fcu: goto label_27d3fc;
        case 0x27d400u: goto label_27d400;
        case 0x27d404u: goto label_27d404;
        case 0x27d408u: goto label_27d408;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d410u: goto label_27d410;
        case 0x27d414u: goto label_27d414;
        case 0x27d418u: goto label_27d418;
        case 0x27d41cu: goto label_27d41c;
        case 0x27d420u: goto label_27d420;
        case 0x27d424u: goto label_27d424;
        case 0x27d428u: goto label_27d428;
        case 0x27d42cu: goto label_27d42c;
        case 0x27d430u: goto label_27d430;
        case 0x27d434u: goto label_27d434;
        case 0x27d438u: goto label_27d438;
        case 0x27d43cu: goto label_27d43c;
        case 0x27d440u: goto label_27d440;
        case 0x27d444u: goto label_27d444;
        case 0x27d448u: goto label_27d448;
        case 0x27d44cu: goto label_27d44c;
        case 0x27d450u: goto label_27d450;
        case 0x27d454u: goto label_27d454;
        case 0x27d458u: goto label_27d458;
        case 0x27d45cu: goto label_27d45c;
        case 0x27d460u: goto label_27d460;
        case 0x27d464u: goto label_27d464;
        case 0x27d468u: goto label_27d468;
        case 0x27d46cu: goto label_27d46c;
        case 0x27d470u: goto label_27d470;
        case 0x27d474u: goto label_27d474;
        case 0x27d478u: goto label_27d478;
        case 0x27d47cu: goto label_27d47c;
        case 0x27d480u: goto label_27d480;
        case 0x27d484u: goto label_27d484;
        case 0x27d488u: goto label_27d488;
        case 0x27d48cu: goto label_27d48c;
        case 0x27d490u: goto label_27d490;
        case 0x27d494u: goto label_27d494;
        case 0x27d498u: goto label_27d498;
        case 0x27d49cu: goto label_27d49c;
        case 0x27d4a0u: goto label_27d4a0;
        case 0x27d4a4u: goto label_27d4a4;
        case 0x27d4a8u: goto label_27d4a8;
        case 0x27d4acu: goto label_27d4ac;
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d4b4u: goto label_27d4b4;
        case 0x27d4b8u: goto label_27d4b8;
        case 0x27d4bcu: goto label_27d4bc;
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4c4u: goto label_27d4c4;
        case 0x27d4c8u: goto label_27d4c8;
        case 0x27d4ccu: goto label_27d4cc;
        case 0x27d4d0u: goto label_27d4d0;
        case 0x27d4d4u: goto label_27d4d4;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d4dcu: goto label_27d4dc;
        case 0x27d4e0u: goto label_27d4e0;
        case 0x27d4e4u: goto label_27d4e4;
        case 0x27d4e8u: goto label_27d4e8;
        case 0x27d4ecu: goto label_27d4ec;
        case 0x27d4f0u: goto label_27d4f0;
        case 0x27d4f4u: goto label_27d4f4;
        case 0x27d4f8u: goto label_27d4f8;
        case 0x27d4fcu: goto label_27d4fc;
        case 0x27d500u: goto label_27d500;
        case 0x27d504u: goto label_27d504;
        case 0x27d508u: goto label_27d508;
        case 0x27d50cu: goto label_27d50c;
        case 0x27d510u: goto label_27d510;
        case 0x27d514u: goto label_27d514;
        case 0x27d518u: goto label_27d518;
        case 0x27d51cu: goto label_27d51c;
        case 0x27d520u: goto label_27d520;
        case 0x27d524u: goto label_27d524;
        case 0x27d528u: goto label_27d528;
        case 0x27d52cu: goto label_27d52c;
        case 0x27d530u: goto label_27d530;
        default: return;
    }

label_27d1d0:
    // 0x27d1d0: 0x14495  .word       0x00014495                   # INVALID     $zero, $at, 0x4495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D1D0 raw=0x00014495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d1d4:
    // 0x27d1d4: 0xaf30  tge         $zero, $zero, 700
    ctx->pc = 0x27d1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d1d8:
    // 0x27d1d8: 0x0  nop
    ctx->pc = 0x27d1d8u;
    // NOP
label_27d1dc:
    // 0x27d1dc: 0x0  nop
    ctx->pc = 0x27d1dcu;
    // NOP
label_27d1e0:
    // 0x27d1e0: 0x144ab  .word       0x000144AB                   # sltu        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1e0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d1e4:
    // 0x27d1e4: 0x7ca0  .word       0x00007CA0                   # add         $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27d1e8:
    // 0x27d1e8: 0x0  nop
    ctx->pc = 0x27d1e8u;
    // NOP
label_27d1ec:
    // 0x27d1ec: 0x0  nop
    ctx->pc = 0x27d1ecu;
    // NOP
label_27d1f0:
    // 0x27d1f0: 0x144bb  dsra        $t0, $at, 18
    ctx->pc = 0x27d1f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 18);
label_27d1f4:
    // 0x27d1f4: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27d1f8:
    // 0x27d1f8: 0x0  nop
    ctx->pc = 0x27d1f8u;
    // NOP
label_27d1fc:
    // 0x27d1fc: 0x0  nop
    ctx->pc = 0x27d1fcu;
    // NOP
label_27d200:
    // 0x27d200: 0x144cf  .word       0x000144CF                   # sync.p # 00014000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27d204:
    // 0x27d204: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27d208:
    // 0x27d208: 0x0  nop
    ctx->pc = 0x27d208u;
    // NOP
label_27d20c:
    // 0x27d20c: 0x0  nop
    ctx->pc = 0x27d20cu;
    // NOP
label_27d210:
    // 0x27d210: 0x144dd  .word       0x000144DD                   # dmultu      $zero, $at # 000044C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D210 raw=0x000144DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d214:
    // 0x27d214: 0x6340  sll         $t4, $zero, 13
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d218:
    // 0x27d218: 0x0  nop
    ctx->pc = 0x27d218u;
    // NOP
label_27d21c:
    // 0x27d21c: 0x0  nop
    ctx->pc = 0x27d21cu;
    // NOP
label_27d220:
    // 0x27d220: 0x144ea  .word       0x000144EA                   # slt         $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d220u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d224:
    // 0x27d224: 0xca80  sll         $t9, $zero, 10
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27d228:
    // 0x27d228: 0x0  nop
    ctx->pc = 0x27d228u;
    // NOP
label_27d22c:
    // 0x27d22c: 0x0  nop
    ctx->pc = 0x27d22cu;
    // NOP
label_27d230:
    // 0x27d230: 0x14504  .word       0x00014504                   # sllv        $t0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d230u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d234:
    // 0x27d234: 0x8260  .word       0x00008260                   # add         $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27d238:
    // 0x27d238: 0x0  nop
    ctx->pc = 0x27d238u;
    // NOP
label_27d23c:
    // 0x27d23c: 0x0  nop
    ctx->pc = 0x27d23cu;
    // NOP
label_27d240:
    // 0x27d240: 0x14515  .word       0x00014515                   # INVALID     $zero, $at, 0x4515 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D240 raw=0x00014515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d244:
    // 0x27d244: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x27d244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d248:
    // 0x27d248: 0x0  nop
    ctx->pc = 0x27d248u;
    // NOP
label_27d24c:
    // 0x27d24c: 0x0  nop
    ctx->pc = 0x27d24cu;
    // NOP
label_27d250:
    // 0x27d250: 0x1452e  .word       0x0001452E                   # dsub        $t0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d254:
    // 0x27d254: 0xbd00  sll         $s7, $zero, 20
    ctx->pc = 0x27d254u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27d258:
    // 0x27d258: 0x0  nop
    ctx->pc = 0x27d258u;
    // NOP
label_27d25c:
    // 0x27d25c: 0x0  nop
    ctx->pc = 0x27d25cu;
    // NOP
label_27d260:
    // 0x27d260: 0x14546  .word       0x00014546                   # srlv        $t0, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d260u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d264:
    // 0x27d264: 0xef90  .word       0x0000EF90                   # mfhi        $sp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d264u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_27d268:
    // 0x27d268: 0x0  nop
    ctx->pc = 0x27d268u;
    // NOP
label_27d26c:
    // 0x27d26c: 0x0  nop
    ctx->pc = 0x27d26cu;
    // NOP
label_27d270:
    // 0x27d270: 0x14564  .word       0x00014564                   # and         $t0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27d274:
    // 0x27d274: 0xbf70  tge         $zero, $zero, 765
    ctx->pc = 0x27d274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d278:
    // 0x27d278: 0x0  nop
    ctx->pc = 0x27d278u;
    // NOP
label_27d27c:
    // 0x27d27c: 0x0  nop
    ctx->pc = 0x27d27cu;
    // NOP
label_27d280:
    // 0x27d280: 0x1457c  dsll32      $t0, $at, 21
    ctx->pc = 0x27d280u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 21));
label_27d284:
    // 0x27d284: 0xa240  sll         $s4, $zero, 9
    ctx->pc = 0x27d284u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27d288:
    // 0x27d288: 0x0  nop
    ctx->pc = 0x27d288u;
    // NOP
label_27d28c:
    // 0x27d28c: 0x0  nop
    ctx->pc = 0x27d28cu;
    // NOP
label_27d290:
    // 0x27d290: 0x14591  .word       0x00014591                   # mthi        $zero # 00014580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d290u;
    ctx->hi = GPR_U64(ctx, 0);
label_27d294:
    // 0x27d294: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d294u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27d298:
    // 0x27d298: 0x0  nop
    ctx->pc = 0x27d298u;
    // NOP
label_27d29c:
    // 0x27d29c: 0x0  nop
    ctx->pc = 0x27d29cu;
    // NOP
label_27d2a0:
    // 0x27d2a0: 0x145a6  .word       0x000145A6                   # xor         $t0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27d2a4:
    // 0x27d2a4: 0x7b30  tge         $zero, $zero, 492
    ctx->pc = 0x27d2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d2a8:
    // 0x27d2a8: 0x0  nop
    ctx->pc = 0x27d2a8u;
    // NOP
label_27d2ac:
    // 0x27d2ac: 0x0  nop
    ctx->pc = 0x27d2acu;
    // NOP
label_27d2b0:
    // 0x27d2b0: 0x145b6  tne         $zero, $at, 278
    ctx->pc = 0x27d2b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d2b4:
    // 0x27d2b4: 0xb750  .word       0x0000B750                   # mfhi        $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27d2b8:
    // 0x27d2b8: 0x0  nop
    ctx->pc = 0x27d2b8u;
    // NOP
label_27d2bc:
    // 0x27d2bc: 0x0  nop
    ctx->pc = 0x27d2bcu;
    // NOP
label_27d2c0:
    // 0x27d2c0: 0x145cd  break       1, 279
    ctx->pc = 0x27d2c0u;
    runtime->handleBreak(rdram, ctx);
label_27d2c4:
    // 0x27d2c4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27d2c8:
    // 0x27d2c8: 0x0  nop
    ctx->pc = 0x27d2c8u;
    // NOP
label_27d2cc:
    // 0x27d2cc: 0x0  nop
    ctx->pc = 0x27d2ccu;
    // NOP
label_27d2d0:
    // 0x27d2d0: 0x145e6  .word       0x000145E6                   # xor         $t0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27d2d4:
    // 0x27d2d4: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27d2d8:
    // 0x27d2d8: 0x0  nop
    ctx->pc = 0x27d2d8u;
    // NOP
label_27d2dc:
    // 0x27d2dc: 0x0  nop
    ctx->pc = 0x27d2dcu;
    // NOP
label_27d2e0:
    // 0x27d2e0: 0x145fb  dsra        $t0, $at, 23
    ctx->pc = 0x27d2e0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 23);
label_27d2e4:
    // 0x27d2e4: 0xac00  sll         $s5, $zero, 16
    ctx->pc = 0x27d2e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27d2e8:
    // 0x27d2e8: 0x0  nop
    ctx->pc = 0x27d2e8u;
    // NOP
label_27d2ec:
    // 0x27d2ec: 0x0  nop
    ctx->pc = 0x27d2ecu;
    // NOP
label_27d2f0:
    // 0x27d2f0: 0x14611  .word       0x00014611                   # mthi        $zero # 00014600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27d2f4:
    // 0x27d2f4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x27d2f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27d2f8:
    // 0x27d2f8: 0x0  nop
    ctx->pc = 0x27d2f8u;
    // NOP
label_27d2fc:
    // 0x27d2fc: 0x0  nop
    ctx->pc = 0x27d2fcu;
    // NOP
label_27d300:
    // 0x27d300: 0x1461d  .word       0x0001461D                   # dmultu      $zero, $at # 00004600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D300 raw=0x0001461D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d304:
    // 0x27d304: 0xbac0  sll         $s7, $zero, 11
    ctx->pc = 0x27d304u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27d308:
    // 0x27d308: 0x0  nop
    ctx->pc = 0x27d308u;
    // NOP
label_27d30c:
    // 0x27d30c: 0x0  nop
    ctx->pc = 0x27d30cu;
    // NOP
label_27d310:
    // 0x27d310: 0x14635  .word       0x00014635                   # INVALID     $zero, $at, 0x4635 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27D310 raw=0x00014635"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d314:
    // 0x27d314: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x27d314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d318:
    // 0x27d318: 0x0  nop
    ctx->pc = 0x27d318u;
    // NOP
label_27d31c:
    // 0x27d31c: 0x0  nop
    ctx->pc = 0x27d31cu;
    // NOP
label_27d320:
    // 0x27d320: 0x14643  sra         $t0, $at, 25
    ctx->pc = 0x27d320u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 25));
label_27d324:
    // 0x27d324: 0x6470  tge         $zero, $zero, 401
    ctx->pc = 0x27d324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d328:
    // 0x27d328: 0x0  nop
    ctx->pc = 0x27d328u;
    // NOP
label_27d32c:
    // 0x27d32c: 0x0  nop
    ctx->pc = 0x27d32cu;
    // NOP
label_27d330:
    // 0x27d330: 0x14650  .word       0x00014650                   # mfhi        $t0 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d330u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27d334:
    // 0x27d334: 0x9380  sll         $s2, $zero, 14
    ctx->pc = 0x27d334u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27d338:
    // 0x27d338: 0x0  nop
    ctx->pc = 0x27d338u;
    // NOP
label_27d33c:
    // 0x27d33c: 0x0  nop
    ctx->pc = 0x27d33cu;
    // NOP
label_27d340:
    // 0x27d340: 0x14663  .word       0x00014663                   # negu        $t0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27d344:
    // 0x27d344: 0x7f60  .word       0x00007F60                   # add         $t7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27d348:
    // 0x27d348: 0x0  nop
    ctx->pc = 0x27d348u;
    // NOP
label_27d34c:
    // 0x27d34c: 0x0  nop
    ctx->pc = 0x27d34cu;
    // NOP
label_27d350:
    // 0x27d350: 0x14673  tltu        $zero, $at, 281
    ctx->pc = 0x27d350u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d354:
    // 0x27d354: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d358:
    // 0x27d358: 0x0  nop
    ctx->pc = 0x27d358u;
    // NOP
label_27d35c:
    // 0x27d35c: 0x0  nop
    ctx->pc = 0x27d35cu;
    // NOP
label_27d360:
    // 0x27d360: 0x1467d  .word       0x0001467D                   # INVALID     $zero, $at, 0x467D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27D360 raw=0x0001467D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d364:
    // 0x27d364: 0x4b60  .word       0x00004B60                   # add         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d368:
    // 0x27d368: 0x0  nop
    ctx->pc = 0x27d368u;
    // NOP
label_27d36c:
    // 0x27d36c: 0x0  nop
    ctx->pc = 0x27d36cu;
    // NOP
label_27d370:
    // 0x27d370: 0x14687  .word       0x00014687                   # srav        $t0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d374:
    // 0x27d374: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d374u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27d378:
    // 0x27d378: 0x0  nop
    ctx->pc = 0x27d378u;
    // NOP
label_27d37c:
    // 0x27d37c: 0x0  nop
    ctx->pc = 0x27d37cu;
    // NOP
label_27d380:
    // 0x27d380: 0x14699  .word       0x00014699                   # multu       $zero, $at # 00004680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d380u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27d384:
    // 0x27d384: 0x8ef0  tge         $zero, $zero, 571
    ctx->pc = 0x27d384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d388:
    // 0x27d388: 0x0  nop
    ctx->pc = 0x27d388u;
    // NOP
label_27d38c:
    // 0x27d38c: 0x0  nop
    ctx->pc = 0x27d38cu;
    // NOP
label_27d390:
    // 0x27d390: 0x146ab  .word       0x000146AB                   # sltu        $t0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d390u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d394:
    // 0x27d394: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27d394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d398:
    // 0x27d398: 0x0  nop
    ctx->pc = 0x27d398u;
    // NOP
label_27d39c:
    // 0x27d39c: 0x0  nop
    ctx->pc = 0x27d39cu;
    // NOP
label_27d3a0:
    // 0x27d3a0: 0x146b9  .word       0x000146B9                   # INVALID     $zero, $at, 0x46B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27D3A0 raw=0x000146B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d3a4:
    // 0x27d3a4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27d3a8:
    // 0x27d3a8: 0x0  nop
    ctx->pc = 0x27d3a8u;
    // NOP
label_27d3ac:
    // 0x27d3ac: 0x0  nop
    ctx->pc = 0x27d3acu;
    // NOP
label_27d3b0:
    // 0x27d3b0: 0x146cb  .word       0x000146CB                   # movn        $t0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3b0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27d3b4:
    // 0x27d3b4: 0xa800  sll         $s5, $zero, 0
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27d3b8:
    // 0x27d3b8: 0x0  nop
    ctx->pc = 0x27d3b8u;
    // NOP
label_27d3bc:
    // 0x27d3bc: 0x0  nop
    ctx->pc = 0x27d3bcu;
    // NOP
label_27d3c0:
    // 0x27d3c0: 0x146e0  .word       0x000146E0                   # add         $t0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27d3c4:
    // 0x27d3c4: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3c4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27d3c8:
    // 0x27d3c8: 0x0  nop
    ctx->pc = 0x27d3c8u;
    // NOP
label_27d3cc:
    // 0x27d3cc: 0x0  nop
    ctx->pc = 0x27d3ccu;
    // NOP
label_27d3d0:
    // 0x27d3d0: 0x146f6  tne         $zero, $at, 283
    ctx->pc = 0x27d3d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d3d4:
    // 0x27d3d4: 0x3260  .word       0x00003260                   # add         $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27d3d8:
    // 0x27d3d8: 0x0  nop
    ctx->pc = 0x27d3d8u;
    // NOP
label_27d3dc:
    // 0x27d3dc: 0x0  nop
    ctx->pc = 0x27d3dcu;
    // NOP
label_27d3e0:
    // 0x27d3e0: 0x146fd  .word       0x000146FD                   # INVALID     $zero, $at, 0x46FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27D3E0 raw=0x000146FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d3e4:
    // 0x27d3e4: 0xbf80  sll         $s7, $zero, 30
    ctx->pc = 0x27d3e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27d3e8:
    // 0x27d3e8: 0x0  nop
    ctx->pc = 0x27d3e8u;
    // NOP
label_27d3ec:
    // 0x27d3ec: 0x0  nop
    ctx->pc = 0x27d3ecu;
    // NOP
label_27d3f0:
    // 0x27d3f0: 0x14715  .word       0x00014715                   # INVALID     $zero, $at, 0x4715 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D3F0 raw=0x00014715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d3f4:
    // 0x27d3f4: 0xbdc0  sll         $s7, $zero, 23
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27d3f8:
    // 0x27d3f8: 0x0  nop
    ctx->pc = 0x27d3f8u;
    // NOP
label_27d3fc:
    // 0x27d3fc: 0x0  nop
    ctx->pc = 0x27d3fcu;
    // NOP
label_27d400:
    // 0x27d400: 0x1472d  .word       0x0001472D                   # daddu       $t0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27d404:
    // 0x27d404: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d404u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27d408:
    // 0x27d408: 0x0  nop
    ctx->pc = 0x27d408u;
    // NOP
label_27d40c:
    // 0x27d40c: 0x0  nop
    ctx->pc = 0x27d40cu;
    // NOP
label_27d410:
    // 0x27d410: 0x14743  sra         $t0, $at, 29
    ctx->pc = 0x27d410u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 29));
label_27d414:
    // 0x27d414: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27d418:
    // 0x27d418: 0x0  nop
    ctx->pc = 0x27d418u;
    // NOP
label_27d41c:
    // 0x27d41c: 0x0  nop
    ctx->pc = 0x27d41cu;
    // NOP
label_27d420:
    // 0x27d420: 0x14752  .word       0x00014752                   # mflo        $t0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d420u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_27d424:
    // 0x27d424: 0xbb40  sll         $s7, $zero, 13
    ctx->pc = 0x27d424u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d428:
    // 0x27d428: 0x0  nop
    ctx->pc = 0x27d428u;
    // NOP
label_27d42c:
    // 0x27d42c: 0x0  nop
    ctx->pc = 0x27d42cu;
    // NOP
label_27d430:
    // 0x27d430: 0x1476a  .word       0x0001476A                   # slt         $t0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d430u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d434:
    // 0x27d434: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x27d434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d438:
    // 0x27d438: 0x0  nop
    ctx->pc = 0x27d438u;
    // NOP
label_27d43c:
    // 0x27d43c: 0x0  nop
    ctx->pc = 0x27d43cu;
    // NOP
label_27d440:
    // 0x27d440: 0x14781  .word       0x00014781                   # INVALID     $zero, $at, 0x4781 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27D440 raw=0x00014781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d444:
    // 0x27d444: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27d448:
    // 0x27d448: 0x0  nop
    ctx->pc = 0x27d448u;
    // NOP
label_27d44c:
    // 0x27d44c: 0x0  nop
    ctx->pc = 0x27d44cu;
    // NOP
label_27d450:
    // 0x27d450: 0x1479b  .word       0x0001479B                   # divu        $t0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d450u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27d454:
    // 0x27d454: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27d458:
    // 0x27d458: 0x0  nop
    ctx->pc = 0x27d458u;
    // NOP
label_27d45c:
    // 0x27d45c: 0x0  nop
    ctx->pc = 0x27d45cu;
    // NOP
label_27d460:
    // 0x27d460: 0x147b6  tne         $zero, $at, 286
    ctx->pc = 0x27d460u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d464:
    // 0x27d464: 0x6fc0  sll         $t5, $zero, 31
    ctx->pc = 0x27d464u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27d468:
    // 0x27d468: 0x0  nop
    ctx->pc = 0x27d468u;
    // NOP
label_27d46c:
    // 0x27d46c: 0x0  nop
    ctx->pc = 0x27d46cu;
    // NOP
label_27d470:
    // 0x27d470: 0x147c4  .word       0x000147C4                   # sllv        $t0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d470u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d474:
    // 0x27d474: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27d478:
    // 0x27d478: 0x0  nop
    ctx->pc = 0x27d478u;
    // NOP
label_27d47c:
    // 0x27d47c: 0x0  nop
    ctx->pc = 0x27d47cu;
    // NOP
label_27d480:
    // 0x27d480: 0x147d3  .word       0x000147D3                   # mtlo        $zero # 000147C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d480u;
    ctx->lo = GPR_U64(ctx, 0);
label_27d484:
    // 0x27d484: 0xd280  sll         $k0, $zero, 10
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27d488:
    // 0x27d488: 0x0  nop
    ctx->pc = 0x27d488u;
    // NOP
label_27d48c:
    // 0x27d48c: 0x0  nop
    ctx->pc = 0x27d48cu;
    // NOP
label_27d490:
    // 0x27d490: 0x147ee  .word       0x000147EE                   # dsub        $t0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d494:
    // 0x27d494: 0xa410  .word       0x0000A410                   # mfhi        $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d494u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27d498:
    // 0x27d498: 0x0  nop
    ctx->pc = 0x27d498u;
    // NOP
label_27d49c:
    // 0x27d49c: 0x0  nop
    ctx->pc = 0x27d49cu;
    // NOP
label_27d4a0:
    // 0x27d4a0: 0x14803  sra         $t1, $at, 0
    ctx->pc = 0x27d4a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 0));
label_27d4a4:
    // 0x27d4a4: 0xcea0  .word       0x0000CEA0                   # add         $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27d4a8:
    // 0x27d4a8: 0x0  nop
    ctx->pc = 0x27d4a8u;
    // NOP
label_27d4ac:
    // 0x27d4ac: 0x0  nop
    ctx->pc = 0x27d4acu;
    // NOP
label_27d4b0:
    // 0x27d4b0: 0x1481d  .word       0x0001481D                   # dmultu      $zero, $at # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D4B0 raw=0x0001481D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d4b4:
    // 0x27d4b4: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x27d4b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d4b8:
    // 0x27d4b8: 0x0  nop
    ctx->pc = 0x27d4b8u;
    // NOP
label_27d4bc:
    // 0x27d4bc: 0x0  nop
    ctx->pc = 0x27d4bcu;
    // NOP
label_27d4c0:
    // 0x27d4c0: 0x14832  tlt         $zero, $at, 288
    ctx->pc = 0x27d4c0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d4c4:
    // 0x27d4c4: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d4c8:
    // 0x27d4c8: 0x0  nop
    ctx->pc = 0x27d4c8u;
    // NOP
label_27d4cc:
    // 0x27d4cc: 0x0  nop
    ctx->pc = 0x27d4ccu;
    // NOP
label_27d4d0:
    // 0x27d4d0: 0x14845  .word       0x00014845                   # INVALID     $zero, $at, 0x4845 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27D4D0 raw=0x00014845"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d4d4:
    // 0x27d4d4: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x27d4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27d4d8:
    // 0x27d4d8: 0x0  nop
    ctx->pc = 0x27d4d8u;
    // NOP
label_27d4dc:
    // 0x27d4dc: 0x0  nop
    ctx->pc = 0x27d4dcu;
    // NOP
label_27d4e0:
    // 0x27d4e0: 0x14855  .word       0x00014855                   # INVALID     $zero, $at, 0x4855 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D4E0 raw=0x00014855"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d4e4:
    // 0x27d4e4: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27d4e8:
    // 0x27d4e8: 0x0  nop
    ctx->pc = 0x27d4e8u;
    // NOP
label_27d4ec:
    // 0x27d4ec: 0x0  nop
    ctx->pc = 0x27d4ecu;
    // NOP
label_27d4f0:
    // 0x27d4f0: 0x14860  .word       0x00014860                   # add         $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d4f4:
    // 0x27d4f4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x27d4f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27d4f8:
    // 0x27d4f8: 0x0  nop
    ctx->pc = 0x27d4f8u;
    // NOP
label_27d4fc:
    // 0x27d4fc: 0x0  nop
    ctx->pc = 0x27d4fcu;
    // NOP
label_27d500:
    // 0x27d500: 0x1486d  .word       0x0001486D                   # daddu       $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27d504:
    // 0x27d504: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d504u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d508:
    // 0x27d508: 0x0  nop
    ctx->pc = 0x27d508u;
    // NOP
label_27d50c:
    // 0x27d50c: 0x0  nop
    ctx->pc = 0x27d50cu;
    // NOP
label_27d510:
    // 0x27d510: 0x14880  sll         $t1, $at, 2
    ctx->pc = 0x27d510u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_27d514:
    // 0x27d514: 0xf3b0  tge         $zero, $zero, 974
    ctx->pc = 0x27d514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d518:
    // 0x27d518: 0x0  nop
    ctx->pc = 0x27d518u;
    // NOP
label_27d51c:
    // 0x27d51c: 0x0  nop
    ctx->pc = 0x27d51cu;
    // NOP
label_27d520:
    // 0x27d520: 0x1489f  .word       0x0001489F                   # ddivu       $t1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27D520 raw=0x0001489F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d524:
    // 0x27d524: 0xa7b0  tge         $zero, $zero, 670
    ctx->pc = 0x27d524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d528:
    // 0x27d528: 0x0  nop
    ctx->pc = 0x27d528u;
    // NOP
label_27d52c:
    // 0x27d52c: 0x0  nop
    ctx->pc = 0x27d52cu;
    // NOP
label_27d530:
    // 0x27d530: 0x148b4  teq         $zero, $at, 290
    ctx->pc = 0x27d530u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x27d534u;
}
