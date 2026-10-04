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

// Function: FUN_00226a20
// Address: 0x226a20 - 0x226a9c
void FUN_00226a20_0x226a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226a20_0x226a20");
#endif

    switch (ctx->pc) {
        case 0x226a80u: goto label_226a80;
        default: break;
    }

    ctx->pc = 0x226a20u;

    // 0x226a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226a24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226a2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226a30: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x226A30u;
    {
        const bool branch_taken_0x226a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A30u;
        // 0x226a34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a30) {
            ctx->pc = 0x226A88u;
            goto label_226a88;
        }
    }
    ctx->pc = 0x226A38u;
    // 0x226a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226a3c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226A3Cu;
    {
        const bool branch_taken_0x226a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A3Cu;
        // 0x226a40: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a3c) {
            ctx->pc = 0x226A64u;
            goto label_226a64;
        }
    }
    ctx->pc = 0x226A44u;
    // 0x226a44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x226A44u;
    {
        const bool branch_taken_0x226a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226a44) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226A4Cu;
    // 0x226a4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x226A4Cu;
    {
        const bool branch_taken_0x226a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A4Cu;
        // 0x226a50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a4c) {
            ctx->pc = 0x226A98u;
            goto label_226a98;
        }
    }
    ctx->pc = 0x226A54u;
label_226a54:
    // 0x226a54: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x226a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226a58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x226a5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x226A5Cu;
    {
        const bool branch_taken_0x226a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A5Cu;
        // 0x226a60: 0xa0224911  sb          $v0, 0x4911($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18705), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a5c) {
            ctx->pc = 0x226A94u;
            goto label_226a94;
        }
    }
    ctx->pc = 0x226A64u;
label_226a64:
    // 0x226a64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226a68: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x226a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x226a6c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226A6Cu;
    {
        const bool branch_taken_0x226a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226a6c) {
            ctx->pc = 0x226A94u;
            goto label_226a94;
        }
    }
    ctx->pc = 0x226A74u;
    // 0x226a74: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x226a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x226a78: 0xc084b84  jal         func_212E10
    ctx->pc = 0x226A78u;
    SET_GPR_U32(ctx, 31, 0x226A80u);
    ctx->pc = 0x226A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A78u;
    // 0x226a7c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212E10u, 0x226A78u, 0x226A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A80u;
label_226a80:
    // 0x226a80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226A80u;
    {
        const bool branch_taken_0x226a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226a80) {
            ctx->pc = 0x226A94u;
            goto label_226a94;
        }
    }
    ctx->pc = 0x226A88u;
label_226a88:
    // 0x226a88: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x226a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226a8c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x226a90: 0xa0224912  sb          $v0, 0x4912($at)
    ctx->pc = 0x226a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x334912u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334912u, _value); } while (0);
label_226a94:
    // 0x226a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226a98:
    // 0x226a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226a9cu;
}
