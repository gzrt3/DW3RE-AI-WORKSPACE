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

// Function: entry_0021b278
// Address: 0x21b278 - 0x21b2cc
void entry_0021b278_0x21b278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b278_0x21b278");
#endif

    switch (ctx->pc) {
        case 0x21b280u: goto label_21b280;
        case 0x21b288u: goto label_21b288;
        default: break;
    }

    ctx->pc = 0x21b278u;

    // 0x21b278: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21B278u;
    SET_GPR_U32(ctx, 31, 0x21B280u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21B278u, 0x21B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B280u;
label_21b280:
    // 0x21b280: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21B280u;
    SET_GPR_U32(ctx, 31, 0x21B288u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21B280u, 0x21B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B288u;
label_21b288:
    // 0x21b288: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21b28c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b290: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21b294: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21b298u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b29c: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21b2a0: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21b2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21b2a4: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b2a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b2b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b2b8: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B2B8u;
    {
        const bool branch_taken_0x21b2b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b8) {
            ctx->pc = 0x21B2CCu;
            return;
        }
    }
    ctx->pc = 0x21B2C0u;
    // 0x21b2c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b2c4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B2C4u;
    {
        const bool branch_taken_0x21b2c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b2c4) {
            ctx->pc = 0x21B2D8u;
            return;
        }
    }
    ctx->pc = 0x21B2CCu;
}
