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

// Function: entry_0023b07c
// Address: 0x23b07c - 0x23b0a0
void entry_0023b07c_0x23b07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b07c_0x23b07c");
#endif

    ctx->pc = 0x23b07cu;

    // 0x23b07c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23b080: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x23b084: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x23b084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x23b088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b08c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B0D8u;
            return;
        }
    }
    ctx->pc = 0x23B094u;
    // 0x23b094: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23b098: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23b098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b09c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x23b0a0u;
}
