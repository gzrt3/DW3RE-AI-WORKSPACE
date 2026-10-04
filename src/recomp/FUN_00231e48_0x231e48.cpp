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

// Function: FUN_00231e48
// Address: 0x231e48 - 0x231e84
void FUN_00231e48_0x231e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231e48_0x231e48");
#endif

    ctx->pc = 0x231e48u;

    // 0x231e48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x231e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x231e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x231e54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231e58: 0x8c638004  lw          $v1, -0x7FFC($v1)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934532)));
    // 0x231e5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x231E5Cu;
    {
        const bool branch_taken_0x231e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e5c) {
            ctx->pc = 0x231E9Cu;
            return;
        }
    }
    ctx->pc = 0x231E64u;
    // 0x231e64: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x231e68: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x231e6c: 0x8c848000  lw          $a0, -0x8000($a0)
    ctx->pc = 0x231e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294934528)));
    // 0x231e70: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x231e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x231e74: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x231e78: 0x8ca58008  lw          $a1, -0x7FF8($a1)
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294934536)));
    // 0x231e7c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x231e80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x231e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x231e84u;
}
