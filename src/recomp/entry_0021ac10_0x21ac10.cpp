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

// Function: entry_0021ac10
// Address: 0x21ac10 - 0x21ac64
void entry_0021ac10_0x21ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ac10_0x21ac10");
#endif

    switch (ctx->pc) {
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac20u: goto label_21ac20;
        default: break;
    }

    ctx->pc = 0x21ac10u;

    // 0x21ac10: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21AC10u;
    SET_GPR_U32(ctx, 31, 0x21AC18u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21AC10u, 0x21AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC18u;
label_21ac18:
    // 0x21ac18: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21AC18u;
    SET_GPR_U32(ctx, 31, 0x21AC20u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21AC18u, 0x21AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC20u;
label_21ac20:
    // 0x21ac20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21ac24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21ac28: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21ac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21ac2c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21ac30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21ac34: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21ac38: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21ac38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21ac3c: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ac40: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21ac44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ac48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21ac4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ac50: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AC50u;
    {
        const bool branch_taken_0x21ac50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC50u;
        // 0x21ac54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac50) {
            ctx->pc = 0x21AC64u;
            return;
        }
    }
    ctx->pc = 0x21AC58u;
    // 0x21ac58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ac5c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AC5Cu;
    {
        const bool branch_taken_0x21ac5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ac5c) {
            ctx->pc = 0x21AC70u;
            return;
        }
    }
    ctx->pc = 0x21AC64u;
}
