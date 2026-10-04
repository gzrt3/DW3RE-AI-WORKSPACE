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

// Function: entry_0029b8d4
// Address: 0x29b8d4 - 0x29b9e8
void entry_0029b8d4_0x29b8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b8d4_0x29b8d4");
#endif

    ctx->pc = 0x29b8d4u;

    // 0x29b8d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b8d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b8dc: 0x0  nop
    ctx->pc = 0x29b8dcu;
    // NOP
    // 0x29b8e0: 0x34c27  .word       0x00034C27                   # nor         $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8e0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x29b8e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b8e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b8ec: 0x0  nop
    ctx->pc = 0x29b8ecu;
    // NOP
    // 0x29b8f0: 0x34c28  .word       0x00034C28                   # mfsa        $t1 # 00030400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b8f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
    // 0x29b8f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b8f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b8fc: 0x0  nop
    ctx->pc = 0x29b8fcu;
    // NOP
    // 0x29b900: 0x34c29  .word       0x00034C29                   # mtsa        $zero # 00034C00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b900u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x29b904: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b904u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b908: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b908u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b90c: 0x0  nop
    ctx->pc = 0x29b90cu;
    // NOP
    // 0x29b910: 0x34c2d  .word       0x00034C2D                   # daddu       $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
    // 0x29b914: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b914u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b918: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b918u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b91c: 0x0  nop
    ctx->pc = 0x29b91cu;
    // NOP
    // 0x29b920: 0x34c31  tgeu        $zero, $v1, 304
    ctx->pc = 0x29b920u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b924u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B924 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b928: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b92c: 0x0  nop
    ctx->pc = 0x29b92cu;
    // NOP
    // 0x29b930: 0x34c32  tlt         $zero, $v1, 304
    ctx->pc = 0x29b930u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b934u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B934 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b938: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b938u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b93c: 0x0  nop
    ctx->pc = 0x29b93cu;
    // NOP
    // 0x29b940: 0x34c33  tltu        $zero, $v1, 304
    ctx->pc = 0x29b940u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b944: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b948: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b94c: 0x0  nop
    ctx->pc = 0x29b94cu;
    // NOP
    // 0x29b950: 0x34c37  .word       0x00034C37                   # INVALID     $zero, $v1, 0x4C37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B950 raw=0x00034C37"); /* MITIGATED MMI/COP0 */
    // 0x29b954: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b958: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b958u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b95c: 0x0  nop
    ctx->pc = 0x29b95cu;
    // NOP
    // 0x29b960: 0x34c3b  dsra        $t1, $v1, 16
    ctx->pc = 0x29b960u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 16);
    // 0x29b964: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b964u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B964 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b968: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b96c: 0x0  nop
    ctx->pc = 0x29b96cu;
    // NOP
    // 0x29b970: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x29b970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29b974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b974u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B974 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b978: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b97c: 0x0  nop
    ctx->pc = 0x29b97cu;
    // NOP
    // 0x29b980: 0x34c3d  .word       0x00034C3D                   # INVALID     $zero, $v1, 0x4C3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b980u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B980 raw=0x00034C3D"); /* MITIGATED MMI/COP0 */
    // 0x29b984: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b988: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b988u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b98c: 0x0  nop
    ctx->pc = 0x29b98cu;
    // NOP
    // 0x29b990: 0x34c41  .word       0x00034C41                   # INVALID     $zero, $v1, 0x4C41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b990u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B990 raw=0x00034C41"); /* MITIGATED MMI/COP0 */
    // 0x29b994: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b998: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b99c: 0x0  nop
    ctx->pc = 0x29b99cu;
    // NOP
    // 0x29b9a0: 0x34c45  .word       0x00034C45                   # INVALID     $zero, $v1, 0x4C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B9A0 raw=0x00034C45"); /* MITIGATED MMI/COP0 */
    // 0x29b9a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b9a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b9ac: 0x0  nop
    ctx->pc = 0x29b9acu;
    // NOP
    // 0x29b9b0: 0x34c46  .word       0x00034C46                   # srlv        $t1, $v1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b9b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b9b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b9bc: 0x0  nop
    ctx->pc = 0x29b9bcu;
    // NOP
    // 0x29b9c0: 0x34c47  .word       0x00034C47                   # srav        $t1, $v1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b9c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b9c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b9cc: 0x0  nop
    ctx->pc = 0x29b9ccu;
    // NOP
    // 0x29b9d0: 0x34c4b  .word       0x00034C4B                   # movn        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x29b9d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b9d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b9d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b9dc: 0x0  nop
    ctx->pc = 0x29b9dcu;
    // NOP
    // 0x29b9e0: 0x34c4f  .word       0x00034C4F                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29b9e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    ctx->pc = 0x29b9e8u;
}
