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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part525(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29b3a8u: goto label_29b3a8;
        case 0x29b3acu: goto label_29b3ac;
        case 0x29b3b0u: goto label_29b3b0;
        case 0x29b3b4u: goto label_29b3b4;
        case 0x29b3b8u: goto label_29b3b8;
        case 0x29b3bcu: goto label_29b3bc;
        case 0x29b3c0u: goto label_29b3c0;
        case 0x29b3c4u: goto label_29b3c4;
        case 0x29b3c8u: goto label_29b3c8;
        case 0x29b3ccu: goto label_29b3cc;
        case 0x29b3d0u: goto label_29b3d0;
        case 0x29b3d4u: goto label_29b3d4;
        case 0x29b3d8u: goto label_29b3d8;
        case 0x29b3dcu: goto label_29b3dc;
        case 0x29b3e0u: goto label_29b3e0;
        case 0x29b3e4u: goto label_29b3e4;
        case 0x29b3e8u: goto label_29b3e8;
        case 0x29b3ecu: goto label_29b3ec;
        case 0x29b3f0u: goto label_29b3f0;
        case 0x29b3f4u: goto label_29b3f4;
        case 0x29b3f8u: goto label_29b3f8;
        case 0x29b3fcu: goto label_29b3fc;
        case 0x29b400u: goto label_29b400;
        case 0x29b404u: goto label_29b404;
        case 0x29b408u: goto label_29b408;
        case 0x29b40cu: goto label_29b40c;
        case 0x29b410u: goto label_29b410;
        case 0x29b414u: goto label_29b414;
        case 0x29b418u: goto label_29b418;
        case 0x29b41cu: goto label_29b41c;
        case 0x29b420u: goto label_29b420;
        case 0x29b424u: goto label_29b424;
        case 0x29b428u: goto label_29b428;
        case 0x29b42cu: goto label_29b42c;
        case 0x29b430u: goto label_29b430;
        case 0x29b434u: goto label_29b434;
        case 0x29b438u: goto label_29b438;
        case 0x29b43cu: goto label_29b43c;
        case 0x29b440u: goto label_29b440;
        case 0x29b444u: goto label_29b444;
        case 0x29b448u: goto label_29b448;
        case 0x29b44cu: goto label_29b44c;
        case 0x29b450u: goto label_29b450;
        case 0x29b454u: goto label_29b454;
        case 0x29b458u: goto label_29b458;
        case 0x29b45cu: goto label_29b45c;
        case 0x29b460u: goto label_29b460;
        case 0x29b464u: goto label_29b464;
        case 0x29b468u: goto label_29b468;
        case 0x29b46cu: goto label_29b46c;
        case 0x29b470u: goto label_29b470;
        case 0x29b474u: goto label_29b474;
        case 0x29b478u: goto label_29b478;
        case 0x29b47cu: goto label_29b47c;
        case 0x29b480u: goto label_29b480;
        case 0x29b484u: goto label_29b484;
        case 0x29b488u: goto label_29b488;
        case 0x29b48cu: goto label_29b48c;
        case 0x29b490u: goto label_29b490;
        case 0x29b494u: goto label_29b494;
        case 0x29b498u: goto label_29b498;
        case 0x29b49cu: goto label_29b49c;
        case 0x29b4a0u: goto label_29b4a0;
        case 0x29b4a4u: goto label_29b4a4;
        case 0x29b4a8u: goto label_29b4a8;
        case 0x29b4acu: goto label_29b4ac;
        case 0x29b4b0u: goto label_29b4b0;
        case 0x29b4b4u: goto label_29b4b4;
        case 0x29b4b8u: goto label_29b4b8;
        case 0x29b4bcu: goto label_29b4bc;
        case 0x29b4c0u: goto label_29b4c0;
        case 0x29b4c4u: goto label_29b4c4;
        case 0x29b4c8u: goto label_29b4c8;
        case 0x29b4ccu: goto label_29b4cc;
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4d4u: goto label_29b4d4;
        case 0x29b4d8u: goto label_29b4d8;
        case 0x29b4dcu: goto label_29b4dc;
        case 0x29b4e0u: goto label_29b4e0;
        case 0x29b4e4u: goto label_29b4e4;
        case 0x29b4e8u: goto label_29b4e8;
        case 0x29b4ecu: goto label_29b4ec;
        case 0x29b4f0u: goto label_29b4f0;
        case 0x29b4f4u: goto label_29b4f4;
        case 0x29b4f8u: goto label_29b4f8;
        case 0x29b4fcu: goto label_29b4fc;
        case 0x29b500u: goto label_29b500;
        case 0x29b504u: goto label_29b504;
        case 0x29b508u: goto label_29b508;
        case 0x29b50cu: goto label_29b50c;
        case 0x29b510u: goto label_29b510;
        case 0x29b514u: goto label_29b514;
        case 0x29b518u: goto label_29b518;
        case 0x29b51cu: goto label_29b51c;
        case 0x29b520u: goto label_29b520;
        case 0x29b524u: goto label_29b524;
        case 0x29b528u: goto label_29b528;
        case 0x29b52cu: goto label_29b52c;
        case 0x29b530u: goto label_29b530;
        case 0x29b534u: goto label_29b534;
        case 0x29b538u: goto label_29b538;
        case 0x29b53cu: goto label_29b53c;
        case 0x29b540u: goto label_29b540;
        case 0x29b544u: goto label_29b544;
        case 0x29b548u: goto label_29b548;
        case 0x29b54cu: goto label_29b54c;
        case 0x29b550u: goto label_29b550;
        case 0x29b554u: goto label_29b554;
        case 0x29b558u: goto label_29b558;
        case 0x29b55cu: goto label_29b55c;
        case 0x29b560u: goto label_29b560;
        case 0x29b564u: goto label_29b564;
        case 0x29b568u: goto label_29b568;
        case 0x29b56cu: goto label_29b56c;
        case 0x29b570u: goto label_29b570;
        case 0x29b574u: goto label_29b574;
        case 0x29b578u: goto label_29b578;
        case 0x29b57cu: goto label_29b57c;
        case 0x29b580u: goto label_29b580;
        case 0x29b584u: goto label_29b584;
        case 0x29b588u: goto label_29b588;
        case 0x29b58cu: goto label_29b58c;
        case 0x29b590u: goto label_29b590;
        case 0x29b594u: goto label_29b594;
        case 0x29b598u: goto label_29b598;
        case 0x29b59cu: goto label_29b59c;
        case 0x29b5a0u: goto label_29b5a0;
        case 0x29b5a4u: goto label_29b5a4;
        case 0x29b5a8u: goto label_29b5a8;
        case 0x29b5acu: goto label_29b5ac;
        case 0x29b5b0u: goto label_29b5b0;
        case 0x29b5b4u: goto label_29b5b4;
        case 0x29b5b8u: goto label_29b5b8;
        case 0x29b5bcu: goto label_29b5bc;
        case 0x29b5c0u: goto label_29b5c0;
        case 0x29b5c4u: goto label_29b5c4;
        case 0x29b5c8u: goto label_29b5c8;
        case 0x29b5ccu: goto label_29b5cc;
        case 0x29b5d0u: goto label_29b5d0;
        case 0x29b5d4u: goto label_29b5d4;
        case 0x29b5d8u: goto label_29b5d8;
        case 0x29b5dcu: goto label_29b5dc;
        case 0x29b5e0u: goto label_29b5e0;
        case 0x29b5e4u: goto label_29b5e4;
        case 0x29b5e8u: goto label_29b5e8;
        case 0x29b5ecu: goto label_29b5ec;
        case 0x29b5f0u: goto label_29b5f0;
        default: return;
    }

label_29b3a8:
    // 0x29b3a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3ac:
    // 0x29b3ac: 0x0  nop
    ctx->pc = 0x29b3acu;
    // NOP
label_29b3b0:
    // 0x29b3b0: 0x34b56  .word       0x00034B56                   # dsrlv       $t1, $v1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b3b4:
    // 0x29b3b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3b8:
    // 0x29b3b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3bc:
    // 0x29b3bc: 0x0  nop
    ctx->pc = 0x29b3bcu;
    // NOP
label_29b3c0:
    // 0x29b3c0: 0x34b57  .word       0x00034B57                   # dsrav       $t1, $v1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b3c4:
    // 0x29b3c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b3c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b3c8:
    // 0x29b3c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b3cc:
    // 0x29b3cc: 0x0  nop
    ctx->pc = 0x29b3ccu;
    // NOP
label_29b3d0:
    // 0x29b3d0: 0x34b5b  .word       0x00034B5B                   # divu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b3d4:
    // 0x29b3d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b3d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b3d8:
    // 0x29b3d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b3dc:
    // 0x29b3dc: 0x0  nop
    ctx->pc = 0x29b3dcu;
    // NOP
label_29b3e0:
    // 0x29b3e0: 0x34b5f  .word       0x00034B5F                   # ddivu       $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B3E0 raw=0x00034B5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3e4:
    // 0x29b3e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3e8:
    // 0x29b3e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3ec:
    // 0x29b3ec: 0x0  nop
    ctx->pc = 0x29b3ecu;
    // NOP
label_29b3f0:
    // 0x29b3f0: 0x34b60  .word       0x00034B60                   # add         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29b3f4:
    // 0x29b3f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3f8:
    // 0x29b3f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3fc:
    // 0x29b3fc: 0x0  nop
    ctx->pc = 0x29b3fcu;
    // NOP
label_29b400:
    // 0x29b400: 0x34b61  .word       0x00034B61                   # addu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b404:
    // 0x29b404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b408:
    // 0x29b408: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b40c:
    // 0x29b40c: 0x0  nop
    ctx->pc = 0x29b40cu;
    // NOP
label_29b410:
    // 0x29b410: 0x34b65  .word       0x00034B65                   # or          $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29b414:
    // 0x29b414: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b418:
    // 0x29b418: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b41c:
    // 0x29b41c: 0x0  nop
    ctx->pc = 0x29b41cu;
    // NOP
label_29b420:
    // 0x29b420: 0x34b69  .word       0x00034B69                   # mtsa        $zero # 00034B40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b420u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29b424:
    // 0x29b424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b428:
    // 0x29b428: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b42c:
    // 0x29b42c: 0x0  nop
    ctx->pc = 0x29b42cu;
    // NOP
label_29b430:
    // 0x29b430: 0x34b6a  .word       0x00034B6A                   # slt         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29b434:
    // 0x29b434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B434 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b438:
    // 0x29b438: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b43c:
    // 0x29b43c: 0x0  nop
    ctx->pc = 0x29b43cu;
    // NOP
label_29b440:
    // 0x29b440: 0x34b6b  .word       0x00034B6B                   # sltu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b444:
    // 0x29b444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b448:
    // 0x29b448: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b448u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b44c:
    // 0x29b44c: 0x0  nop
    ctx->pc = 0x29b44cu;
    // NOP
label_29b450:
    // 0x29b450: 0x34b6f  .word       0x00034B6F                   # dsubu       $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b450u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29b454:
    // 0x29b454: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b454u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b458:
    // 0x29b458: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b45c:
    // 0x29b45c: 0x0  nop
    ctx->pc = 0x29b45cu;
    // NOP
label_29b460:
    // 0x29b460: 0x34b73  tltu        $zero, $v1, 301
    ctx->pc = 0x29b460u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b464:
    // 0x29b464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b468:
    // 0x29b468: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b46c:
    // 0x29b46c: 0x0  nop
    ctx->pc = 0x29b46cu;
    // NOP
label_29b470:
    // 0x29b470: 0x34b74  teq         $zero, $v1, 301
    ctx->pc = 0x29b470u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b474:
    // 0x29b474: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B474 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b478:
    // 0x29b478: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b478u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b47c:
    // 0x29b47c: 0x0  nop
    ctx->pc = 0x29b47cu;
    // NOP
label_29b480:
    // 0x29b480: 0x34b75  .word       0x00034B75                   # INVALID     $zero, $v1, 0x4B75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B480 raw=0x00034B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b484:
    // 0x29b484: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b484u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b488:
    // 0x29b488: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b488u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b48c:
    // 0x29b48c: 0x0  nop
    ctx->pc = 0x29b48cu;
    // NOP
label_29b490:
    // 0x29b490: 0x34b79  .word       0x00034B79                   # INVALID     $zero, $v1, 0x4B79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29B490 raw=0x00034B79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b494:
    // 0x29b494: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b494u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b498:
    // 0x29b498: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b498u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b49c:
    // 0x29b49c: 0x0  nop
    ctx->pc = 0x29b49cu;
    // NOP
label_29b4a0:
    // 0x29b4a0: 0x34b7d  .word       0x00034B7D                   # INVALID     $zero, $v1, 0x4B7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B4A0 raw=0x00034B7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b4a4:
    // 0x29b4a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b4a8:
    // 0x29b4a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4ac:
    // 0x29b4ac: 0x0  nop
    ctx->pc = 0x29b4acu;
    // NOP
label_29b4b0:
    // 0x29b4b0: 0x34b7e  dsrl32      $t1, $v1, 13
    ctx->pc = 0x29b4b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (32 + 13));
label_29b4b4:
    // 0x29b4b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b4b8:
    // 0x29b4b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4bc:
    // 0x29b4bc: 0x0  nop
    ctx->pc = 0x29b4bcu;
    // NOP
label_29b4c0:
    // 0x29b4c0: 0x34b7f  dsra32      $t1, $v1, 13
    ctx->pc = 0x29b4c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 13));
label_29b4c4:
    // 0x29b4c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b4c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b4c8:
    // 0x29b4c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b4cc:
    // 0x29b4cc: 0x0  nop
    ctx->pc = 0x29b4ccu;
    // NOP
label_29b4d0:
    // 0x29b4d0: 0x34b83  sra         $t1, $v1, 14
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 14));
label_29b4d4:
    // 0x29b4d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b4d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b4d8:
    // 0x29b4d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b4dc:
    // 0x29b4dc: 0x0  nop
    ctx->pc = 0x29b4dcu;
    // NOP
label_29b4e0:
    // 0x29b4e0: 0x34b87  .word       0x00034B87                   # srav        $t1, $v1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4e0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b4e4:
    // 0x29b4e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b4e8:
    // 0x29b4e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4ec:
    // 0x29b4ec: 0x0  nop
    ctx->pc = 0x29b4ecu;
    // NOP
label_29b4f0:
    // 0x29b4f0: 0x34b88  .word       0x00034B88                   # jr          $zero # 00034B80 <InstrIdType: CPU_SPECIAL>
label_29b4f4:
    if (ctx->pc == 0x29B4F4u) {
        ctx->pc = 0x29B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4F0u;
        // 0x29b4f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B4F8u;
        goto label_29b4f8;
    }
    ctx->pc = 0x29B4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4F0u;
        // 0x29b4f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29B4F8u;
label_29b4f8:
    // 0x29b4f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4fc:
    // 0x29b4fc: 0x0  nop
    ctx->pc = 0x29b4fcu;
    // NOP
label_29b500:
    // 0x29b500: 0x34b89  .word       0x00034B89                   # jalr        $t1, $zero # 00030380 <InstrIdType: CPU_SPECIAL>
label_29b504:
    if (ctx->pc == 0x29B504u) {
        ctx->pc = 0x29B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B500u;
        // 0x29b504: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B508u;
        goto label_29b508;
    }
    ctx->pc = 0x29B500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B508u);
        ctx->pc = 0x29B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B500u;
        // 0x29b504: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B500u, 0x29B508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B508u;
label_29b508:
    // 0x29b508: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b508u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b50c:
    // 0x29b50c: 0x0  nop
    ctx->pc = 0x29b50cu;
    // NOP
label_29b510:
    // 0x29b510: 0x34b8d  break       3, 302
    ctx->pc = 0x29b510u;
    runtime->handleBreak(rdram, ctx);
label_29b514:
    // 0x29b514: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b514u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b518:
    // 0x29b518: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b518u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b51c:
    // 0x29b51c: 0x0  nop
    ctx->pc = 0x29b51cu;
    // NOP
label_29b520:
    // 0x29b520: 0x34b91  .word       0x00034B91                   # mthi        $zero # 00034B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b520u;
    ctx->hi = GPR_U64(ctx, 0);
label_29b524:
    // 0x29b524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b528:
    // 0x29b528: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b52c:
    // 0x29b52c: 0x0  nop
    ctx->pc = 0x29b52cu;
    // NOP
label_29b530:
    // 0x29b530: 0x34b92  .word       0x00034B92                   # mflo        $t1 # 00030380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b530u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_29b534:
    // 0x29b534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B534 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b538:
    // 0x29b538: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b538u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b53c:
    // 0x29b53c: 0x0  nop
    ctx->pc = 0x29b53cu;
    // NOP
label_29b540:
    // 0x29b540: 0x34b93  .word       0x00034B93                   # mtlo        $zero # 00034B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b540u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b544:
    // 0x29b544: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b544u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b548:
    // 0x29b548: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b54c:
    // 0x29b54c: 0x0  nop
    ctx->pc = 0x29b54cu;
    // NOP
label_29b550:
    // 0x29b550: 0x34b97  .word       0x00034B97                   # dsrav       $t1, $v1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b550u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b554:
    // 0x29b554: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b554u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b558:
    // 0x29b558: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b55c:
    // 0x29b55c: 0x0  nop
    ctx->pc = 0x29b55cu;
    // NOP
label_29b560:
    // 0x29b560: 0x34b9b  .word       0x00034B9B                   # divu        $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b560u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b564:
    // 0x29b564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b568:
    // 0x29b568: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b568u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b56c:
    // 0x29b56c: 0x0  nop
    ctx->pc = 0x29b56cu;
    // NOP
label_29b570:
    // 0x29b570: 0x34b9c  .word       0x00034B9C                   # dmult       $zero, $v1 # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29B570 raw=0x00034B9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b574:
    // 0x29b574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B574 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b578:
    // 0x29b578: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b578u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b57c:
    // 0x29b57c: 0x0  nop
    ctx->pc = 0x29b57cu;
    // NOP
label_29b580:
    // 0x29b580: 0x34b9d  .word       0x00034B9D                   # dmultu      $zero, $v1 # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B580 raw=0x00034B9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b584:
    // 0x29b584: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b584u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b588:
    // 0x29b588: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b58c:
    // 0x29b58c: 0x0  nop
    ctx->pc = 0x29b58cu;
    // NOP
label_29b590:
    // 0x29b590: 0x34ba1  .word       0x00034BA1                   # addu        $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b594:
    // 0x29b594: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b598:
    // 0x29b598: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b59c:
    // 0x29b59c: 0x0  nop
    ctx->pc = 0x29b59cu;
    // NOP
label_29b5a0:
    // 0x29b5a0: 0x34ba5  .word       0x00034BA5                   # or          $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29b5a4:
    // 0x29b5a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b5a8:
    // 0x29b5a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5ac:
    // 0x29b5ac: 0x0  nop
    ctx->pc = 0x29b5acu;
    // NOP
label_29b5b0:
    // 0x29b5b0: 0x34ba6  .word       0x00034BA6                   # xor         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 3));
label_29b5b4:
    // 0x29b5b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b5b8:
    // 0x29b5b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5bc:
    // 0x29b5bc: 0x0  nop
    ctx->pc = 0x29b5bcu;
    // NOP
label_29b5c0:
    // 0x29b5c0: 0x34ba7  .word       0x00034BA7                   # nor         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5c0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b5c4:
    // 0x29b5c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b5c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b5c8:
    // 0x29b5c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b5cc:
    // 0x29b5cc: 0x0  nop
    ctx->pc = 0x29b5ccu;
    // NOP
label_29b5d0:
    // 0x29b5d0: 0x34bab  .word       0x00034BAB                   # sltu        $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5d0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b5d4:
    // 0x29b5d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b5d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b5d8:
    // 0x29b5d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b5dc:
    // 0x29b5dc: 0x0  nop
    ctx->pc = 0x29b5dcu;
    // NOP
label_29b5e0:
    // 0x29b5e0: 0x34baf  .word       0x00034BAF                   # dsubu       $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29b5e4:
    // 0x29b5e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b5e8:
    // 0x29b5e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5ec:
    // 0x29b5ec: 0x0  nop
    ctx->pc = 0x29b5ecu;
    // NOP
label_29b5f0:
    // 0x29b5f0: 0x34bb0  tge         $zero, $v1, 302
    ctx->pc = 0x29b5f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x29b5f4u;
}
