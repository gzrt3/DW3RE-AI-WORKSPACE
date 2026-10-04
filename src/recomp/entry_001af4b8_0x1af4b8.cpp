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

// Function: entry_001af4b8
// Address: 0x1af4b8 - 0x1af508
void entry_001af4b8_0x1af4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af4b8_0x1af4b8");
#endif

    switch (ctx->pc) {
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af4d4u: goto label_1af4d4;
        case 0x1af4dcu: goto label_1af4dc;
        case 0x1af4e4u: goto label_1af4e4;
        case 0x1af4f4u: goto label_1af4f4;
        default: break;
    }

    ctx->pc = 0x1af4b8u;

    // 0x1af4b8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af4bc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af4c0: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1AF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4C0u;
    // 0x1af4c4: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AF4C0u, 0x1AF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4C8u;
label_1af4c8:
    // 0x1af4c8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af4cc: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AF4CCu;
    SET_GPR_U32(ctx, 31, 0x1AF4D4u);
    ctx->pc = 0x1AF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4CCu;
    // 0x1af4d0: 0x8c6472ac  lw          $a0, 0x72AC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AF4CCu, 0x1AF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4D4u;
label_1af4d4:
    // 0x1af4d4: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AF4D4u;
    SET_GPR_U32(ctx, 31, 0x1AF4DCu);
    ctx->pc = 0x1AF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4D4u;
    // 0x1af4d8: 0x8e0472a0  lw          $a0, 0x72A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AF4D4u, 0x1AF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4DCu;
label_1af4dc:
    // 0x1af4dc: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1AF4DCu;
    SET_GPR_U32(ctx, 31, 0x1AF4E4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1AF4DCu, 0x1AF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4E4u;
label_1af4e4:
    // 0x1af4e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1af4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1af4e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4ec: 0xc069b2c  jal         func_1A6CB0
    ctx->pc = 0x1AF4ECu;
    SET_GPR_U32(ctx, 31, 0x1AF4F4u);
    ctx->pc = 0x1AF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4ECu;
    // 0x1af4f0: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CB0u, 0x1AF4ECu, 0x1AF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4F4u;
label_1af4f4:
    // 0x1af4f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF4F4u;
    {
        const bool branch_taken_0x1af4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4F4u;
        // 0x1af4f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4f4) {
            ctx->pc = 0x1AF508u;
            return;
        }
    }
    ctx->pc = 0x1AF4FCu;
    // 0x1af4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af500: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1AF500u;
    ctx->pc = 0x1AF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF500u;
    // 0x1af504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF508u;
}
