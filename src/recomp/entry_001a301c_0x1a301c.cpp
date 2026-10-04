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

// Function: entry_001a301c
// Address: 0x1a301c - 0x1a30a8
void entry_001a301c_0x1a301c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a301c_0x1a301c");
#endif

    switch (ctx->pc) {
        case 0x1a302cu: goto label_1a302c;
        default: break;
    }

    ctx->pc = 0x1a301cu;

    // 0x1a301c: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1a301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a3020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3024: 0xc0680bc  jal         func_1A02F0
    ctx->pc = 0x1A3024u;
    SET_GPR_U32(ctx, 31, 0x1A302Cu);
    ctx->pc = 0x1A3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3024u;
    // 0x1a3028: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02F0u, 0x1A3024u, 0x1A302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A302Cu;
label_1a302c:
    // 0x1a302c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a3030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3034: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3034u;
    {
        const bool branch_taken_0x1a3034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3034) {
            ctx->pc = 0x1A3038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3034u;
            // 0x1a3038: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A303Cu;
    // 0x1a303c: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A303Cu;
    {
        const bool branch_taken_0x1a303c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a303c) {
            ctx->pc = 0x1A3040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A303Cu;
            // 0x1a3040: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A3044u;
    // 0x1a3044: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a3044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a3048: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a304c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a304cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1a3050: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1a3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1a3054:
    // 0x1a3054: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a3058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a305c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a305cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a3060: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a3064: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3064u;
    {
        const bool branch_taken_0x1a3064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3064u;
        // 0x1a3068: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3064) {
            ctx->pc = 0x1A3088u;
            goto label_1a3088;
        }
    }
    ctx->pc = 0x1A306Cu;
    // 0x1a306c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a3070: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a3074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a3078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a307c: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1a307cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x1a3080: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a3080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a3084: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a3084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3088:
    // 0x1a3088: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a308c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a308cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3094: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a309c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A309Cu;
        // 0x1a30a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A30A4u;
    // 0x1a30a4: 0x0  nop
    ctx->pc = 0x1a30a4u;
    // NOP
    ctx->pc = 0x1a30a8u;
}
