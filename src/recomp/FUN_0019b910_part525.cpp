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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part525(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29b6d0u: goto label_29b6d0;
        case 0x29b6d4u: goto label_29b6d4;
        case 0x29b6d8u: goto label_29b6d8;
        case 0x29b6dcu: goto label_29b6dc;
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6e4u: goto label_29b6e4;
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b6ecu: goto label_29b6ec;
        case 0x29b6f0u: goto label_29b6f0;
        case 0x29b6f4u: goto label_29b6f4;
        case 0x29b6f8u: goto label_29b6f8;
        case 0x29b6fcu: goto label_29b6fc;
        case 0x29b700u: goto label_29b700;
        case 0x29b704u: goto label_29b704;
        case 0x29b708u: goto label_29b708;
        case 0x29b70cu: goto label_29b70c;
        case 0x29b710u: goto label_29b710;
        case 0x29b714u: goto label_29b714;
        case 0x29b718u: goto label_29b718;
        case 0x29b71cu: goto label_29b71c;
        case 0x29b720u: goto label_29b720;
        case 0x29b724u: goto label_29b724;
        case 0x29b728u: goto label_29b728;
        case 0x29b72cu: goto label_29b72c;
        case 0x29b730u: goto label_29b730;
        case 0x29b734u: goto label_29b734;
        case 0x29b738u: goto label_29b738;
        case 0x29b73cu: goto label_29b73c;
        case 0x29b740u: goto label_29b740;
        case 0x29b744u: goto label_29b744;
        case 0x29b748u: goto label_29b748;
        case 0x29b74cu: goto label_29b74c;
        case 0x29b750u: goto label_29b750;
        case 0x29b754u: goto label_29b754;
        case 0x29b758u: goto label_29b758;
        case 0x29b75cu: goto label_29b75c;
        case 0x29b760u: goto label_29b760;
        case 0x29b764u: goto label_29b764;
        case 0x29b768u: goto label_29b768;
        case 0x29b76cu: goto label_29b76c;
        case 0x29b770u: goto label_29b770;
        case 0x29b774u: goto label_29b774;
        case 0x29b778u: goto label_29b778;
        case 0x29b77cu: goto label_29b77c;
        case 0x29b780u: goto label_29b780;
        case 0x29b784u: goto label_29b784;
        case 0x29b788u: goto label_29b788;
        case 0x29b78cu: goto label_29b78c;
        case 0x29b790u: goto label_29b790;
        case 0x29b794u: goto label_29b794;
        case 0x29b798u: goto label_29b798;
        case 0x29b79cu: goto label_29b79c;
        case 0x29b7a0u: goto label_29b7a0;
        case 0x29b7a4u: goto label_29b7a4;
        case 0x29b7a8u: goto label_29b7a8;
        case 0x29b7acu: goto label_29b7ac;
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7b4u: goto label_29b7b4;
        case 0x29b7b8u: goto label_29b7b8;
        case 0x29b7bcu: goto label_29b7bc;
        case 0x29b7c0u: goto label_29b7c0;
        case 0x29b7c4u: goto label_29b7c4;
        case 0x29b7c8u: goto label_29b7c8;
        case 0x29b7ccu: goto label_29b7cc;
        case 0x29b7d0u: goto label_29b7d0;
        case 0x29b7d4u: goto label_29b7d4;
        case 0x29b7d8u: goto label_29b7d8;
        case 0x29b7dcu: goto label_29b7dc;
        case 0x29b7e0u: goto label_29b7e0;
        case 0x29b7e4u: goto label_29b7e4;
        case 0x29b7e8u: goto label_29b7e8;
        case 0x29b7ecu: goto label_29b7ec;
        case 0x29b7f0u: goto label_29b7f0;
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b7f8u: goto label_29b7f8;
        case 0x29b7fcu: goto label_29b7fc;
        case 0x29b800u: goto label_29b800;
        case 0x29b804u: goto label_29b804;
        case 0x29b808u: goto label_29b808;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b810u: goto label_29b810;
        case 0x29b814u: goto label_29b814;
        case 0x29b818u: goto label_29b818;
        case 0x29b81cu: goto label_29b81c;
        case 0x29b820u: goto label_29b820;
        case 0x29b824u: goto label_29b824;
        case 0x29b828u: goto label_29b828;
        case 0x29b82cu: goto label_29b82c;
        case 0x29b830u: goto label_29b830;
        case 0x29b834u: goto label_29b834;
        case 0x29b838u: goto label_29b838;
        case 0x29b83cu: goto label_29b83c;
        case 0x29b840u: goto label_29b840;
        case 0x29b844u: goto label_29b844;
        case 0x29b848u: goto label_29b848;
        case 0x29b84cu: goto label_29b84c;
        case 0x29b850u: goto label_29b850;
        case 0x29b854u: goto label_29b854;
        case 0x29b858u: goto label_29b858;
        case 0x29b85cu: goto label_29b85c;
        case 0x29b860u: goto label_29b860;
        case 0x29b864u: goto label_29b864;
        case 0x29b868u: goto label_29b868;
        case 0x29b86cu: goto label_29b86c;
        case 0x29b870u: goto label_29b870;
        case 0x29b874u: goto label_29b874;
        case 0x29b878u: goto label_29b878;
        case 0x29b87cu: goto label_29b87c;
        case 0x29b880u: goto label_29b880;
        case 0x29b884u: goto label_29b884;
        case 0x29b888u: goto label_29b888;
        case 0x29b88cu: goto label_29b88c;
        case 0x29b890u: goto label_29b890;
        case 0x29b894u: goto label_29b894;
        case 0x29b898u: goto label_29b898;
        case 0x29b89cu: goto label_29b89c;
        case 0x29b8a0u: goto label_29b8a0;
        case 0x29b8a4u: goto label_29b8a4;
        case 0x29b8a8u: goto label_29b8a8;
        case 0x29b8acu: goto label_29b8ac;
        case 0x29b8b0u: goto label_29b8b0;
        case 0x29b8b4u: goto label_29b8b4;
        case 0x29b8b8u: goto label_29b8b8;
        case 0x29b8bcu: goto label_29b8bc;
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8c4u: goto label_29b8c4;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8ccu: goto label_29b8cc;
        case 0x29b8d0u: goto label_29b8d0;
        case 0x29b8d4u: goto label_29b8d4;
        case 0x29b8d8u: goto label_29b8d8;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8e0u: goto label_29b8e0;
        case 0x29b8e4u: goto label_29b8e4;
        case 0x29b8e8u: goto label_29b8e8;
        case 0x29b8ecu: goto label_29b8ec;
        case 0x29b8f0u: goto label_29b8f0;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b8f8u: goto label_29b8f8;
        case 0x29b8fcu: goto label_29b8fc;
        case 0x29b900u: goto label_29b900;
        case 0x29b904u: goto label_29b904;
        case 0x29b908u: goto label_29b908;
        case 0x29b90cu: goto label_29b90c;
        case 0x29b910u: goto label_29b910;
        case 0x29b914u: goto label_29b914;
        case 0x29b918u: goto label_29b918;
        case 0x29b91cu: goto label_29b91c;
        case 0x29b920u: goto label_29b920;
        case 0x29b924u: goto label_29b924;
        case 0x29b928u: goto label_29b928;
        case 0x29b92cu: goto label_29b92c;
        case 0x29b930u: goto label_29b930;
        case 0x29b934u: goto label_29b934;
        case 0x29b938u: goto label_29b938;
        case 0x29b93cu: goto label_29b93c;
        case 0x29b940u: goto label_29b940;
        case 0x29b944u: goto label_29b944;
        case 0x29b948u: goto label_29b948;
        case 0x29b94cu: goto label_29b94c;
        case 0x29b950u: goto label_29b950;
        case 0x29b954u: goto label_29b954;
        case 0x29b958u: goto label_29b958;
        case 0x29b95cu: goto label_29b95c;
        case 0x29b960u: goto label_29b960;
        case 0x29b964u: goto label_29b964;
        case 0x29b968u: goto label_29b968;
        case 0x29b96cu: goto label_29b96c;
        case 0x29b970u: goto label_29b970;
        case 0x29b974u: goto label_29b974;
        case 0x29b978u: goto label_29b978;
        case 0x29b97cu: goto label_29b97c;
        case 0x29b980u: goto label_29b980;
        case 0x29b984u: goto label_29b984;
        case 0x29b988u: goto label_29b988;
        case 0x29b98cu: goto label_29b98c;
        case 0x29b990u: goto label_29b990;
        case 0x29b994u: goto label_29b994;
        case 0x29b998u: goto label_29b998;
        case 0x29b99cu: goto label_29b99c;
        case 0x29b9a0u: goto label_29b9a0;
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9a8u: goto label_29b9a8;
        case 0x29b9acu: goto label_29b9ac;
        case 0x29b9b0u: goto label_29b9b0;
        case 0x29b9b4u: goto label_29b9b4;
        case 0x29b9b8u: goto label_29b9b8;
        case 0x29b9bcu: goto label_29b9bc;
        case 0x29b9c0u: goto label_29b9c0;
        case 0x29b9c4u: goto label_29b9c4;
        case 0x29b9c8u: goto label_29b9c8;
        case 0x29b9ccu: goto label_29b9cc;
        case 0x29b9d0u: goto label_29b9d0;
        case 0x29b9d4u: goto label_29b9d4;
        case 0x29b9d8u: goto label_29b9d8;
        case 0x29b9dcu: goto label_29b9dc;
        case 0x29b9e0u: goto label_29b9e0;
        case 0x29b9e4u: goto label_29b9e4;
        case 0x29b9e8u: goto label_29b9e8;
        case 0x29b9ecu: goto label_29b9ec;
        default: return;
    }

label_29b6d0:
    // 0x29b6d0: 0x34bd3  .word       0x00034BD3                   # mtlo        $zero # 00034BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b6d4:
    // 0x29b6d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b6d8:
    // 0x29b6d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b6dc:
    // 0x29b6dc: 0x0  nop
    ctx->pc = 0x29b6dcu;
    // NOP
label_29b6e0:
    // 0x29b6e0: 0x34bd7  .word       0x00034BD7                   # dsrav       $t1, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b6e4:
    // 0x29b6e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6e8:
    // 0x29b6e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6ec:
    // 0x29b6ec: 0x0  nop
    ctx->pc = 0x29b6ecu;
    // NOP
label_29b6f0:
    // 0x29b6f0: 0x34bd8  .word       0x00034BD8                   # mult        $t1, $zero, $v1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b6f4:
    // 0x29b6f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6f8:
    // 0x29b6f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6fc:
    // 0x29b6fc: 0x0  nop
    ctx->pc = 0x29b6fcu;
    // NOP
label_29b700:
    // 0x29b700: 0x34bd9  .word       0x00034BD9                   # multu       $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b700u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b704:
    // 0x29b704: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b704u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b708:
    // 0x29b708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b70c:
    // 0x29b70c: 0x0  nop
    ctx->pc = 0x29b70cu;
    // NOP
label_29b710:
    // 0x29b710: 0x34bdd  .word       0x00034BDD                   # dmultu      $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B710 raw=0x00034BDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b714:
    // 0x29b714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b718:
    // 0x29b718: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b71c:
    // 0x29b71c: 0x0  nop
    ctx->pc = 0x29b71cu;
    // NOP
label_29b720:
    // 0x29b720: 0x34be1  .word       0x00034BE1                   # addu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b724:
    // 0x29b724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b728:
    // 0x29b728: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b72c:
    // 0x29b72c: 0x0  nop
    ctx->pc = 0x29b72cu;
    // NOP
label_29b730:
    // 0x29b730: 0x34be2  .word       0x00034BE2                   # neg         $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b730u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_29b734:
    // 0x29b734: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B734 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b738:
    // 0x29b738: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b73c:
    // 0x29b73c: 0x0  nop
    ctx->pc = 0x29b73cu;
    // NOP
label_29b740:
    // 0x29b740: 0x34be3  .word       0x00034BE3                   # negu        $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b744:
    // 0x29b744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b748:
    // 0x29b748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b74c:
    // 0x29b74c: 0x0  nop
    ctx->pc = 0x29b74cu;
    // NOP
label_29b750:
    // 0x29b750: 0x34be7  .word       0x00034BE7                   # nor         $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b754:
    // 0x29b754: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b758:
    // 0x29b758: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b758u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b75c:
    // 0x29b75c: 0x0  nop
    ctx->pc = 0x29b75cu;
    // NOP
label_29b760:
    // 0x29b760: 0x34beb  .word       0x00034BEB                   # sltu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b760u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b764:
    // 0x29b764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b768:
    // 0x29b768: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b76c:
    // 0x29b76c: 0x0  nop
    ctx->pc = 0x29b76cu;
    // NOP
label_29b770:
    // 0x29b770: 0x34bec  .word       0x00034BEC                   # dadd        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b770u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29b774:
    // 0x29b774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b774u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B774 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b778:
    // 0x29b778: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b778u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b77c:
    // 0x29b77c: 0x0  nop
    ctx->pc = 0x29b77cu;
    // NOP
label_29b780:
    // 0x29b780: 0x34bed  .word       0x00034BED                   # daddu       $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29b784:
    // 0x29b784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b788:
    // 0x29b788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b78c:
    // 0x29b78c: 0x0  nop
    ctx->pc = 0x29b78cu;
    // NOP
label_29b790:
    // 0x29b790: 0x34bf1  tgeu        $zero, $v1, 303
    ctx->pc = 0x29b790u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b794:
    // 0x29b794: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b794u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b798:
    // 0x29b798: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b79c:
    // 0x29b79c: 0x0  nop
    ctx->pc = 0x29b79cu;
    // NOP
label_29b7a0:
    // 0x29b7a0: 0x34bf5  .word       0x00034BF5                   # INVALID     $zero, $v1, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B7A0 raw=0x00034BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7a4:
    // 0x29b7a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7a8:
    // 0x29b7a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7ac:
    // 0x29b7ac: 0x0  nop
    ctx->pc = 0x29b7acu;
    // NOP
label_29b7b0:
    // 0x29b7b0: 0x34bf6  tne         $zero, $v1, 303
    ctx->pc = 0x29b7b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b7b4:
    // 0x29b7b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7b8:
    // 0x29b7b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7bc:
    // 0x29b7bc: 0x0  nop
    ctx->pc = 0x29b7bcu;
    // NOP
label_29b7c0:
    // 0x29b7c0: 0x34bf7  .word       0x00034BF7                   # INVALID     $zero, $v1, 0x4BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B7C0 raw=0x00034BF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7c4:
    // 0x29b7c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b7c8:
    // 0x29b7c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b7cc:
    // 0x29b7cc: 0x0  nop
    ctx->pc = 0x29b7ccu;
    // NOP
label_29b7d0:
    // 0x29b7d0: 0x34bfb  dsra        $t1, $v1, 15
    ctx->pc = 0x29b7d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 15);
label_29b7d4:
    // 0x29b7d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b7d8:
    // 0x29b7d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b7dc:
    // 0x29b7dc: 0x0  nop
    ctx->pc = 0x29b7dcu;
    // NOP
label_29b7e0:
    // 0x29b7e0: 0x34bff  dsra32      $t1, $v1, 15
    ctx->pc = 0x29b7e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 15));
label_29b7e4:
    // 0x29b7e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7e8:
    // 0x29b7e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7ec:
    // 0x29b7ec: 0x0  nop
    ctx->pc = 0x29b7ecu;
    // NOP
label_29b7f0:
    // 0x29b7f0: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x29b7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_29b7f4:
    // 0x29b7f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7f8:
    // 0x29b7f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7fc:
    // 0x29b7fc: 0x0  nop
    ctx->pc = 0x29b7fcu;
    // NOP
label_29b800:
    // 0x29b800: 0x34c01  .word       0x00034C01                   # INVALID     $zero, $v1, 0x4C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B800 raw=0x00034C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b804:
    // 0x29b804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b808:
    // 0x29b808: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b80c:
    // 0x29b80c: 0x0  nop
    ctx->pc = 0x29b80cu;
    // NOP
label_29b810:
    // 0x29b810: 0x34c05  .word       0x00034C05                   # INVALID     $zero, $v1, 0x4C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B810 raw=0x00034C05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b814:
    // 0x29b814: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b814u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b818:
    // 0x29b818: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b818u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b81c:
    // 0x29b81c: 0x0  nop
    ctx->pc = 0x29b81cu;
    // NOP
label_29b820:
    // 0x29b820: 0x34c09  .word       0x00034C09                   # jalr        $t1, $zero # 00030400 <InstrIdType: CPU_SPECIAL>
label_29b824:
    if (ctx->pc == 0x29B824u) {
        ctx->pc = 0x29B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B820u;
        // 0x29b824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B828u;
        goto label_29b828;
    }
    ctx->pc = 0x29B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B828u);
        ctx->pc = 0x29B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B820u;
        // 0x29b824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B820u, 0x29B828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B828u;
label_29b828:
    // 0x29b828: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b828u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b82c:
    // 0x29b82c: 0x0  nop
    ctx->pc = 0x29b82cu;
    // NOP
label_29b830:
    // 0x29b830: 0x34c0a  .word       0x00034C0A                   # movz        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b830u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b834:
    // 0x29b834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B834 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b838:
    // 0x29b838: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b838u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b83c:
    // 0x29b83c: 0x0  nop
    ctx->pc = 0x29b83cu;
    // NOP
label_29b840:
    // 0x29b840: 0x34c0b  .word       0x00034C0B                   # movn        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b840u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b844:
    // 0x29b844: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b844u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b848:
    // 0x29b848: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b84c:
    // 0x29b84c: 0x0  nop
    ctx->pc = 0x29b84cu;
    // NOP
label_29b850:
    // 0x29b850: 0x34c0f  .word       0x00034C0F                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b854:
    // 0x29b854: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b858:
    // 0x29b858: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b858u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b85c:
    // 0x29b85c: 0x0  nop
    ctx->pc = 0x29b85cu;
    // NOP
label_29b860:
    // 0x29b860: 0x34c13  .word       0x00034C13                   # mtlo        $zero # 00034C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b860u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b864:
    // 0x29b864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B864 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b868:
    // 0x29b868: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b868u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b86c:
    // 0x29b86c: 0x0  nop
    ctx->pc = 0x29b86cu;
    // NOP
label_29b870:
    // 0x29b870: 0x34c14  .word       0x00034C14                   # dsllv       $t1, $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_29b874:
    // 0x29b874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B874 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b878:
    // 0x29b878: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b878u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b87c:
    // 0x29b87c: 0x0  nop
    ctx->pc = 0x29b87cu;
    // NOP
label_29b880:
    // 0x29b880: 0x34c15  .word       0x00034C15                   # INVALID     $zero, $v1, 0x4C15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B880 raw=0x00034C15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b884:
    // 0x29b884: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b884u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b888:
    // 0x29b888: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b88c:
    // 0x29b88c: 0x0  nop
    ctx->pc = 0x29b88cu;
    // NOP
label_29b890:
    // 0x29b890: 0x34c19  .word       0x00034C19                   # multu       $zero, $v1 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b890u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b894:
    // 0x29b894: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b894u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b898:
    // 0x29b898: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b898u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b89c:
    // 0x29b89c: 0x0  nop
    ctx->pc = 0x29b89cu;
    // NOP
label_29b8a0:
    // 0x29b8a0: 0x34c1d  .word       0x00034C1D                   # dmultu      $zero, $v1 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B8A0 raw=0x00034C1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8a4:
    // 0x29b8a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8a8:
    // 0x29b8a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8ac:
    // 0x29b8ac: 0x0  nop
    ctx->pc = 0x29b8acu;
    // NOP
label_29b8b0:
    // 0x29b8b0: 0x34c1e  .word       0x00034C1E                   # ddiv        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29B8B0 raw=0x00034C1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8b4:
    // 0x29b8b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8b8:
    // 0x29b8b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8bc:
    // 0x29b8bc: 0x0  nop
    ctx->pc = 0x29b8bcu;
    // NOP
label_29b8c0:
    // 0x29b8c0: 0x34c1f  .word       0x00034C1F                   # ddivu       $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B8C0 raw=0x00034C1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8c4:
    // 0x29b8c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b8c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b8c8:
    // 0x29b8c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b8cc:
    // 0x29b8cc: 0x0  nop
    ctx->pc = 0x29b8ccu;
    // NOP
label_29b8d0:
    // 0x29b8d0: 0x34c23  .word       0x00034C23                   # negu        $t1, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b8d4:
    // 0x29b8d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b8d8:
    // 0x29b8d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b8dc:
    // 0x29b8dc: 0x0  nop
    ctx->pc = 0x29b8dcu;
    // NOP
label_29b8e0:
    // 0x29b8e0: 0x34c27  .word       0x00034C27                   # nor         $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8e0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b8e4:
    // 0x29b8e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8e8:
    // 0x29b8e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8ec:
    // 0x29b8ec: 0x0  nop
    ctx->pc = 0x29b8ecu;
    // NOP
label_29b8f0:
    // 0x29b8f0: 0x34c28  .word       0x00034C28                   # mfsa        $t1 # 00030400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b8f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_29b8f4:
    // 0x29b8f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b8f8:
    // 0x29b8f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8fc:
    // 0x29b8fc: 0x0  nop
    ctx->pc = 0x29b8fcu;
    // NOP
label_29b900:
    // 0x29b900: 0x34c29  .word       0x00034C29                   # mtsa        $zero # 00034C00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b900u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29b904:
    // 0x29b904: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b904u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b908:
    // 0x29b908: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b908u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b90c:
    // 0x29b90c: 0x0  nop
    ctx->pc = 0x29b90cu;
    // NOP
label_29b910:
    // 0x29b910: 0x34c2d  .word       0x00034C2D                   # daddu       $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29b914:
    // 0x29b914: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b914u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b918:
    // 0x29b918: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b918u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b91c:
    // 0x29b91c: 0x0  nop
    ctx->pc = 0x29b91cu;
    // NOP
label_29b920:
    // 0x29b920: 0x34c31  tgeu        $zero, $v1, 304
    ctx->pc = 0x29b920u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b924:
    // 0x29b924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b924u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B924 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b928:
    // 0x29b928: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b92c:
    // 0x29b92c: 0x0  nop
    ctx->pc = 0x29b92cu;
    // NOP
label_29b930:
    // 0x29b930: 0x34c32  tlt         $zero, $v1, 304
    ctx->pc = 0x29b930u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b934:
    // 0x29b934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B934 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b938:
    // 0x29b938: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b938u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b93c:
    // 0x29b93c: 0x0  nop
    ctx->pc = 0x29b93cu;
    // NOP
label_29b940:
    // 0x29b940: 0x34c33  tltu        $zero, $v1, 304
    ctx->pc = 0x29b940u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b944:
    // 0x29b944: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b948:
    // 0x29b948: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b94c:
    // 0x29b94c: 0x0  nop
    ctx->pc = 0x29b94cu;
    // NOP
label_29b950:
    // 0x29b950: 0x34c37  .word       0x00034C37                   # INVALID     $zero, $v1, 0x4C37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B950 raw=0x00034C37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b954:
    // 0x29b954: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b958:
    // 0x29b958: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b958u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b95c:
    // 0x29b95c: 0x0  nop
    ctx->pc = 0x29b95cu;
    // NOP
label_29b960:
    // 0x29b960: 0x34c3b  dsra        $t1, $v1, 16
    ctx->pc = 0x29b960u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 16);
label_29b964:
    // 0x29b964: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b964u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B964 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b968:
    // 0x29b968: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b96c:
    // 0x29b96c: 0x0  nop
    ctx->pc = 0x29b96cu;
    // NOP
label_29b970:
    // 0x29b970: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x29b970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
label_29b974:
    // 0x29b974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b974u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B974 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b978:
    // 0x29b978: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b97c:
    // 0x29b97c: 0x0  nop
    ctx->pc = 0x29b97cu;
    // NOP
label_29b980:
    // 0x29b980: 0x34c3d  .word       0x00034C3D                   # INVALID     $zero, $v1, 0x4C3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B980 raw=0x00034C3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b984:
    // 0x29b984: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b988:
    // 0x29b988: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b988u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b98c:
    // 0x29b98c: 0x0  nop
    ctx->pc = 0x29b98cu;
    // NOP
label_29b990:
    // 0x29b990: 0x34c41  .word       0x00034C41                   # INVALID     $zero, $v1, 0x4C41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B990 raw=0x00034C41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b994:
    // 0x29b994: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b998:
    // 0x29b998: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b99c:
    // 0x29b99c: 0x0  nop
    ctx->pc = 0x29b99cu;
    // NOP
label_29b9a0:
    // 0x29b9a0: 0x34c45  .word       0x00034C45                   # INVALID     $zero, $v1, 0x4C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B9A0 raw=0x00034C45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b9a4:
    // 0x29b9a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b9a8:
    // 0x29b9a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9ac:
    // 0x29b9ac: 0x0  nop
    ctx->pc = 0x29b9acu;
    // NOP
label_29b9b0:
    // 0x29b9b0: 0x34c46  .word       0x00034C46                   # srlv        $t1, $v1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b9b4:
    // 0x29b9b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b9b8:
    // 0x29b9b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9bc:
    // 0x29b9bc: 0x0  nop
    ctx->pc = 0x29b9bcu;
    // NOP
label_29b9c0:
    // 0x29b9c0: 0x34c47  .word       0x00034C47                   # srav        $t1, $v1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b9c4:
    // 0x29b9c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b9c8:
    // 0x29b9c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b9cc:
    // 0x29b9cc: 0x0  nop
    ctx->pc = 0x29b9ccu;
    // NOP
label_29b9d0:
    // 0x29b9d0: 0x34c4b  .word       0x00034C4B                   # movn        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b9d4:
    // 0x29b9d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b9d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b9d8:
    // 0x29b9d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b9dc:
    // 0x29b9dc: 0x0  nop
    ctx->pc = 0x29b9dcu;
    // NOP
label_29b9e0:
    // 0x29b9e0: 0x34c4f  .word       0x00034C4F                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b9e4:
    // 0x29b9e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b9e8:
    // 0x29b9e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9ec:
    // 0x29b9ec: 0x0  nop
    ctx->pc = 0x29b9ecu;
    // NOP
    ctx->pc = 0x29b9f0u;
}
