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

// Function: FUN_001af0b0
// Address: 0x1af0b0 - 0x1af104
void FUN_001af0b0_0x1af0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af0b0_0x1af0b0");
#endif

    switch (ctx->pc) {
        case 0x1af0ccu: goto label_1af0cc;
        case 0x1af0dcu: goto label_1af0dc;
        case 0x1af0f4u: goto label_1af0f4;
        default: break;
    }

    ctx->pc = 0x1af0b0u;

    // 0x1af0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af0b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1af0b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af0c4: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x1AF0C4u;
    SET_GPR_U32(ctx, 31, 0x1AF0CCu);
    ctx->pc = 0x1AF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0C4u;
    // 0x1af0c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x1AF0C4u, 0x1AF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0CCu;
label_1af0cc:
    // 0x1af0cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF0CCu;
    {
        const bool branch_taken_0x1af0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0CCu;
        // 0x1af0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0cc) {
            ctx->pc = 0x1AF0F8u;
            goto label_1af0f8;
        }
    }
    ctx->pc = 0x1AF0D4u;
    // 0x1af0d4: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1AF0D4u;
    SET_GPR_U32(ctx, 31, 0x1AF0DCu);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1AF0D4u, 0x1AF0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0DCu;
label_1af0dc:
    // 0x1af0dc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1af0e0: 0x8c705f40  lw          $s0, 0x5F40($v1)
    ctx->pc = 0x1af0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x375F40u));
    // 0x1af0e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF0E4u;
    {
        const bool branch_taken_0x1af0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0E4u;
        // 0x1af0e8: 0xac715f40  sw          $s1, 0x5F40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24384), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0e4) {
            ctx->pc = 0x1AF0F4u;
            goto label_1af0f4;
        }
    }
    ctx->pc = 0x1AF0ECu;
    // 0x1af0ec: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1AF0ECu;
    SET_GPR_U32(ctx, 31, 0x1AF0F4u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1AF0ECu, 0x1AF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0F4u;
label_1af0f4:
    // 0x1af0f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af0f8:
    // 0x1af0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af0fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1af0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1af104u;
}
