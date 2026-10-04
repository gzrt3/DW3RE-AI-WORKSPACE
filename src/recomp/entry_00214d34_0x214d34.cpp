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

// Function: entry_00214d34
// Address: 0x214d34 - 0x214d6c
void entry_00214d34_0x214d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214d34_0x214d34");
#endif

    ctx->pc = 0x214d34u;

    // 0x214d34: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x214d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x214d38: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x214d3c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x214d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x214d40: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x214d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x214d44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x214D44u;
    {
        const bool branch_taken_0x214d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D44u;
        // 0x214d48: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d44) {
            ctx->pc = 0x214D6Cu;
            return;
        }
    }
    ctx->pc = 0x214D4Cu;
    // 0x214d4c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x214D4Cu;
    {
        const bool branch_taken_0x214d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x214D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D4Cu;
        // 0x214d50: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d4c) {
            ctx->pc = 0x214D60u;
            goto label_214d60;
        }
    }
    ctx->pc = 0x214D54u;
    // 0x214d54: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x214d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x214d58: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x214D58u;
    {
        const bool branch_taken_0x214d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x214d58) {
            ctx->pc = 0x214D6Cu;
            return;
        }
    }
    ctx->pc = 0x214D60u;
label_214d60:
    // 0x214d60: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x214d64: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x214d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x214d68: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x214d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    ctx->pc = 0x214d6cu;
}
