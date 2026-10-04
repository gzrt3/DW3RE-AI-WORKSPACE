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

// Function: FUN_00231ea8
// Address: 0x231ea8 - 0x231ebc
void FUN_00231ea8_0x231ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231ea8_0x231ea8");
#endif

    ctx->pc = 0x231ea8u;

    // 0x231ea8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x231ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x231eac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231eb0: 0x8c428004  lw          $v0, -0x7FFC($v0)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934532)));
    // 0x231eb4: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x231eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x231eb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x231eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231ebcu;
}
