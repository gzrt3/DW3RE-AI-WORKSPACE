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

// Function: FUN_00236d40
// Address: 0x236d40 - 0x236d94
void FUN_00236d40_0x236d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236d40_0x236d40");
#endif

    switch (ctx->pc) {
        case 0x236d60u: goto label_236d60;
        case 0x236d70u: goto label_236d70;
        case 0x236d88u: goto label_236d88;
        default: break;
    }

    ctx->pc = 0x236d40u;

    // 0x236d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d4c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236d58: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236D58u;
    SET_GPR_U32(ctx, 31, 0x236D60u);
    ctx->pc = 0x236D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D58u;
    // 0x236d5c: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236D58u, 0x236D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D60u;
label_236d60:
    // 0x236d60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236D60u;
    {
        const bool branch_taken_0x236d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D60u;
        // 0x236d64: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d60) {
            ctx->pc = 0x236D8Cu;
            goto label_236d8c;
        }
    }
    ctx->pc = 0x236D68u;
    // 0x236d68: 0xc08db0c  jal         func_236C30
    ctx->pc = 0x236D68u;
    SET_GPR_U32(ctx, 31, 0x236D70u);
    ctx->pc = 0x236D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D68u;
    // 0x236d6c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C30u, 0x236D68u, 0x236D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D70u;
label_236d70:
    // 0x236d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d74: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x236D74u;
    {
        const bool branch_taken_0x236d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D74u;
        // 0x236d78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d74) {
            ctx->pc = 0x236D80u;
            goto label_236d80;
        }
    }
    ctx->pc = 0x236D7Cu;
    // 0x236d7c: 0x8c50b280  lw          $s0, -0x4D80($v0)
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947456)));
label_236d80:
    // 0x236d80: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236D80u;
    SET_GPR_U32(ctx, 31, 0x236D88u);
    ctx->pc = 0x236D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D80u;
    // 0x236d84: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236D80u, 0x236D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D88u;
label_236d88:
    // 0x236d88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d8c:
    // 0x236d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x236d94u;
}
