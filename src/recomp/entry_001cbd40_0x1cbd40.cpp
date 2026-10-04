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

// Function: entry_001cbd40
// Address: 0x1cbd40 - 0x1cbd68
void entry_001cbd40_0x1cbd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd40_0x1cbd40");
#endif

    ctx->pc = 0x1cbd40u;

    // 0x1cbd40: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbd44: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x1cbd48: 0x664023  subu        $t0, $v1, $a2
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cbd4c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cbd50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbd50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd54: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1cbd54u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd58: 0x0  nop
    ctx->pc = 0x1cbd58u;
    // NOP
    // 0x1cbd5c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x1cbd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x1cbd60: 0x2a070029  slti        $a3, $s0, 0x29
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1cbd64: 0x24c64cd0  addiu       $a2, $a2, 0x4CD0
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19664));
    ctx->pc = 0x1cbd68u;
}
