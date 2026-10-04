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

// Function: entry_0029b5ec
// Address: 0x29b5ec - 0x29b61c
void entry_0029b5ec_0x29b5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b5ec_0x29b5ec");
#endif

    ctx->pc = 0x29b5ecu;

    // 0x29b5ec: 0x0  nop
    ctx->pc = 0x29b5ecu;
    // NOP
    // 0x29b5f0: 0x34bb0  tge         $zero, $v1, 302
    ctx->pc = 0x29b5f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b5f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b5f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b5fc: 0x0  nop
    ctx->pc = 0x29b5fcu;
    // NOP
    // 0x29b600: 0x34bb1  tgeu        $zero, $v1, 302
    ctx->pc = 0x29b600u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b604: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b604u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b608: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b608u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b60c: 0x0  nop
    ctx->pc = 0x29b60cu;
    // NOP
    // 0x29b610: 0x34bb5  .word       0x00034BB5                   # INVALID     $zero, $v1, 0x4BB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b610u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B610 raw=0x00034BB5"); /* MITIGATED MMI/COP0 */
    // 0x29b614: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b618: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    ctx->pc = 0x29b61cu;
}
