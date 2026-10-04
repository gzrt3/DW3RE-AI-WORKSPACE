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

// Function: entry_00238c0c
// Address: 0x238c0c - 0x238c58
void entry_00238c0c_0x238c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238c0c_0x238c0c");
#endif

    ctx->pc = 0x238c0cu;

    // 0x238c0c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x238c10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x238c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x238c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x238c18: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x238C18u;
    {
        const bool branch_taken_0x238c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c18) {
            ctx->pc = 0x238C70u;
            return;
        }
    }
    ctx->pc = 0x238C20u;
    // 0x238c20: 0x1560000d  bnez        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x238C20u;
    {
        const bool branch_taken_0x238c20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c20) {
            ctx->pc = 0x238C58u;
            return;
        }
    }
    ctx->pc = 0x238C28u;
    // 0x238c28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238c2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x238c30: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x238c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
    // 0x238c34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x238c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x238c38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238C38u;
    {
        const bool branch_taken_0x238c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238c38) {
            ctx->pc = 0x238C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C38u;
            // 0x238c3c: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C60u;
            return;
        }
    }
    ctx->pc = 0x238C40u;
    // 0x238c40: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x238c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x238c44: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c48: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x238c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x238c4c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x238c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x238c50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238C50u;
    {
        const bool branch_taken_0x238c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c50) {
            ctx->pc = 0x238C6Cu;
            return;
        }
    }
    ctx->pc = 0x238C58u;
}
