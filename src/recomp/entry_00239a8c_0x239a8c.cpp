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

// Function: entry_00239a8c
// Address: 0x239a8c - 0x239ab8
void entry_00239a8c_0x239a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239a8c_0x239a8c");
#endif

    ctx->pc = 0x239a8cu;

    // 0x239a8c: 0x27c40c58  addiu       $a0, $fp, 0xC58
    ctx->pc = 0x239a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3160));
    // 0x239a90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239a94: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x239a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239a98: 0x16300007  bne         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239A98u;
    {
        const bool branch_taken_0x239a98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x239A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A98u;
        // 0x239a9c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a98) {
            ctx->pc = 0x239AB8u;
            return;
        }
    }
    ctx->pc = 0x239AA0u;
    // 0x239aa0: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x239aa4: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x239aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x239aa8: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x239aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x239aac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x239AACu;
    {
        const bool branch_taken_0x239aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AACu;
        // 0x239ab0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aac) {
            ctx->pc = 0x239BBCu;
            return;
        }
    }
    ctx->pc = 0x239AB4u;
    // 0x239ab4: 0x0  nop
    ctx->pc = 0x239ab4u;
    // NOP
    ctx->pc = 0x239ab8u;
}
