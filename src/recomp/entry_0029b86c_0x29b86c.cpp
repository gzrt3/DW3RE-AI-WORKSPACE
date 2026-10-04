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

// Function: entry_0029b86c
// Address: 0x29b86c - 0x29b8d4
void entry_0029b86c_0x29b86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b86c_0x29b86c");
#endif

    ctx->pc = 0x29b86cu;

    // 0x29b86c: 0x0  nop
    ctx->pc = 0x29b86cu;
    // NOP
    // 0x29b870: 0x34c14  .word       0x00034C14                   # dsllv       $t1, $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
    // 0x29b874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b874u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B874 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b878: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b878u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b87c: 0x0  nop
    ctx->pc = 0x29b87cu;
    // NOP
    // 0x29b880: 0x34c15  .word       0x00034C15                   # INVALID     $zero, $v1, 0x4C15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b880u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B880 raw=0x00034C15"); /* MITIGATED MMI/COP0 */
    // 0x29b884: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b884u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b888: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b88c: 0x0  nop
    ctx->pc = 0x29b88cu;
    // NOP
    // 0x29b890: 0x34c19  .word       0x00034C19                   # multu       $zero, $v1 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b890u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x29b894: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b894u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b898: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b898u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b89c: 0x0  nop
    ctx->pc = 0x29b89cu;
    // NOP
    // 0x29b8a0: 0x34c1d  .word       0x00034C1D                   # dmultu      $zero, $v1 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B8A0 raw=0x00034C1D"); /* MITIGATED MMI/COP0 */
    // 0x29b8a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b8a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b8ac: 0x0  nop
    ctx->pc = 0x29b8acu;
    // NOP
    // 0x29b8b0: 0x34c1e  .word       0x00034C1E                   # ddiv        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29B8B0 raw=0x00034C1E"); /* MITIGATED MMI/COP0 */
    // 0x29b8b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b8b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b8bc: 0x0  nop
    ctx->pc = 0x29b8bcu;
    // NOP
    // 0x29b8c0: 0x34c1f  .word       0x00034C1F                   # ddivu       $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B8C0 raw=0x00034C1F"); /* MITIGATED MMI/COP0 */
    // 0x29b8c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b8c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b8c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b8cc: 0x0  nop
    ctx->pc = 0x29b8ccu;
    // NOP
    // 0x29b8d0: 0x34c23  .word       0x00034C23                   # negu        $t1, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    ctx->pc = 0x29b8d4u;
}
