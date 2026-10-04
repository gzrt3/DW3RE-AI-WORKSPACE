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

// Function: entry_0029b854
// Address: 0x29b854 - 0x29b86c
void entry_0029b854_0x29b854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b854_0x29b854");
#endif

    ctx->pc = 0x29b854u;

    // 0x29b854: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b858: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b858u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b85c: 0x0  nop
    ctx->pc = 0x29b85cu;
    // NOP
    // 0x29b860: 0x34c13  .word       0x00034C13                   # mtlo        $zero # 00034C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b860u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x29b864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b864u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B864 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b868: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b868u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x29b86cu;
}
