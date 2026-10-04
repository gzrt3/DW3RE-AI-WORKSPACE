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

// Function: FUN_00236c30
// Address: 0x236c30 - 0x236c7c
void FUN_00236c30_0x236c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236c30_0x236c30");
#endif

    switch (ctx->pc) {
        case 0x236c58u: goto label_236c58;
        case 0x236c68u: goto label_236c68;
        default: break;
    }

    ctx->pc = 0x236c30u;

    // 0x236c30: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x236c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x236c34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236c44: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x236c48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236C48u;
    {
        const bool branch_taken_0x236c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C48u;
        // 0x236c4c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c48) {
            ctx->pc = 0x236C60u;
            goto label_236c60;
        }
    }
    ctx->pc = 0x236C50u;
    // 0x236c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x236C50u;
    {
        const bool branch_taken_0x236c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C50u;
        // 0x236c54: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c50) {
            ctx->pc = 0x236C70u;
            goto label_236c70;
        }
    }
    ctx->pc = 0x236C58u;
label_236c58:
    // 0x236c58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236C58u;
    {
        const bool branch_taken_0x236c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C58u;
        // 0x236c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c58) {
            ctx->pc = 0x236C70u;
            goto label_236c70;
        }
    }
    ctx->pc = 0x236C60u;
label_236c60:
    // 0x236c60: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x236C60u;
    SET_GPR_U32(ctx, 31, 0x236C68u);
    ctx->pc = 0x236C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C60u;
    // 0x236c64: 0x2624b2e8  addiu       $a0, $s1, -0x4D18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x236C60u, 0x236C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C68u;
label_236c68:
    // 0x236c68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x236C68u;
    {
        const bool branch_taken_0x236c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C68u;
        // 0x236c6c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c68) {
            ctx->pc = 0x236C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236c58;
        }
    }
    ctx->pc = 0x236C70u;
label_236c70:
    // 0x236c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x236c7cu;
}
