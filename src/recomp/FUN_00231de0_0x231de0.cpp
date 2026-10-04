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

// Function: FUN_00231de0
// Address: 0x231de0 - 0x231e04
void FUN_00231de0_0x231de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231de0_0x231de0");
#endif

    ctx->pc = 0x231de0u;

    // 0x231de0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x231de4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x231de8: 0x8ce78008  lw          $a3, -0x7FF8($a3)
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294934536)));
    // 0x231dec: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x231df0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x231df4: 0x8d088004  lw          $t0, -0x7FFC($t0)
    ctx->pc = 0x231df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294934532)));
    // 0x231df8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x231df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x231dfc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x231dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x231e00: 0x8cc68000  lw          $a2, -0x8000($a2)
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294934528)));
    ctx->pc = 0x231e04u;
}
