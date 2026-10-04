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

// Function: entry_0021a8a0
// Address: 0x21a8a0 - 0x21a8f4
void entry_0021a8a0_0x21a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a8a0_0x21a8a0");
#endif

    switch (ctx->pc) {
        case 0x21a8a8u: goto label_21a8a8;
        case 0x21a8b0u: goto label_21a8b0;
        default: break;
    }

    ctx->pc = 0x21a8a0u;

    // 0x21a8a0: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21A8A0u;
    SET_GPR_U32(ctx, 31, 0x21A8A8u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21A8A0u, 0x21A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8A8u;
label_21a8a8:
    // 0x21a8a8: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21A8A8u;
    SET_GPR_U32(ctx, 31, 0x21A8B0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21A8A8u, 0x21A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8B0u;
label_21a8b0:
    // 0x21a8b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21a8b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a8b8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21a8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21a8bc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a8c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a8c4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21a8c8: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a8cc: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21a8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21a8d0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21a8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a8d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a8e0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8E0u;
    {
        const bool branch_taken_0x21a8e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8E0u;
        // 0x21a8e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8e0) {
            ctx->pc = 0x21A8F4u;
            return;
        }
    }
    ctx->pc = 0x21A8E8u;
    // 0x21a8e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a8ec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8ECu;
    {
        const bool branch_taken_0x21a8ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a8ec) {
            ctx->pc = 0x21A900u;
            return;
        }
    }
    ctx->pc = 0x21A8F4u;
}
