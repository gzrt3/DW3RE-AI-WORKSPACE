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

// Function: entry_0019b07c
// Address: 0x19b07c - 0x19b0f8
void entry_0019b07c_0x19b07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b07c_0x19b07c");
#endif

    ctx->pc = 0x19b07cu;

    // 0x19b07c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b080: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19b080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19b084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b090: 0x3e00008  jr          $ra
    ctx->pc = 0x19B090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B090u;
        // 0x19b094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B098u;
    // 0x19b098: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19b09c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19b09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0a0: 0x3442f520  ori         $v0, $v0, 0xF520
    ctx->pc = 0x19b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x19b0a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x19b0a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B0A8u;
    {
        const bool branch_taken_0x19b0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0A8u;
        // 0x19b0ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0a8) {
            ctx->pc = 0x19B0BCu;
            goto label_19b0bc;
        }
    }
    ctx->pc = 0x19B0B0u;
    // 0x19b0b0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x19b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19b0b4: 0x3442f590  ori         $v0, $v0, 0xF590
    ctx->pc = 0x19b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x19b0b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19b0bc:
    // 0x19b0bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b0c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19b0c4: 0x3463feff  ori         $v1, $v1, 0xFEFF
    ctx->pc = 0x19b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65279);
    // 0x19b0c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x19b0cc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x19b0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19b0d0: 0x3484f590  ori         $a0, $a0, 0xF590
    ctx->pc = 0x19b0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62864);
    // 0x19b0d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x19b0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0D8u;
        // 0x19b0dc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B0E0u;
    // 0x19b0e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b0e4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x19b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x19b0e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19b0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0ECu;
        // 0x19b0f0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B0F4u;
    // 0x19b0f4: 0x0  nop
    ctx->pc = 0x19b0f4u;
    // NOP
    ctx->pc = 0x19b0f8u;
}
