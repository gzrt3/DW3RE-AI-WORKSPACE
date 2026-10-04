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

// Function: FUN_00231da0
// Address: 0x231da0 - 0x231dd8
void FUN_00231da0_0x231da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231da0_0x231da0");
#endif

    ctx->pc = 0x231da0u;

    // 0x231da0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x231da4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231da8: 0x8c428004  lw          $v0, -0x7FFC($v0)
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934532)));
    // 0x231dac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x231db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x231db4: 0x8c638008  lw          $v1, -0x7FF8($v1)
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934536)));
    // 0x231db8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x231db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231dbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231DBCu;
    {
        const bool branch_taken_0x231dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dbc) {
            ctx->pc = 0x231DD8u;
            return;
        }
    }
    ctx->pc = 0x231DC4u;
    // 0x231dc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x231dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x231dcc: 0x8c638000  lw          $v1, -0x8000($v1)
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934528)));
    // 0x231dd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x231dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x231dd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x231dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x231dd8u;
}
