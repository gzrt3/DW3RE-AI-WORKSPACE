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

// Function: FUN_001afc28
// Address: 0x1afc28 - 0x1afc8c
void FUN_001afc28_0x1afc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afc28_0x1afc28");
#endif

    switch (ctx->pc) {
        case 0x1afc50u: goto label_1afc50;
        case 0x1afc58u: goto label_1afc58;
        case 0x1afc60u: goto label_1afc60;
        case 0x1afc68u: goto label_1afc68;
        case 0x1afc84u: goto label_1afc84;
        default: break;
    }

    ctx->pc = 0x1afc28u;

    // 0x1afc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1afc2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1afc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1afc30: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AFC30u;
    {
        const bool branch_taken_0x1afc30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC30u;
        // 0x1afc34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc30) {
            ctx->pc = 0x1AFC78u;
            goto label_1afc78;
        }
    }
    ctx->pc = 0x1AFC38u;
    // 0x1afc38: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afc3c: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287290u));
    // 0x1afc40: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC40u;
    {
        const bool branch_taken_0x1afc40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC40u;
        // 0x1afc44: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc40) {
            ctx->pc = 0x1AFC50u;
            goto label_1afc50;
        }
    }
    ctx->pc = 0x1AFC48u;
    // 0x1afc48: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFC48u;
    SET_GPR_U32(ctx, 31, 0x1AFC50u);
    ctx->pc = 0x1AFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC48u;
    // 0x1afc4c: 0x2484aa38  addiu       $a0, $a0, -0x55C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFC48u, 0x1AFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC50u;
label_1afc50:
    // 0x1afc50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC50u;
    {
        const bool branch_taken_0x1afc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC50u;
        // 0x1afc54: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc50) {
            ctx->pc = 0x1AFC60u;
            goto label_1afc60;
        }
    }
    ctx->pc = 0x1AFC58u;
label_1afc58:
    // 0x1afc58: 0xc06bc12  jal         func_1AF048
    ctx->pc = 0x1AFC58u;
    SET_GPR_U32(ctx, 31, 0x1AFC60u);
    ctx->pc = 0x1AFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC58u;
    // 0x1afc5c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF048u, 0x1AFC58u, 0x1AFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC60u;
label_1afc60:
    // 0x1afc60: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFC60u;
    SET_GPR_U32(ctx, 31, 0x1AFC68u);
    ctx->pc = 0x1AFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC60u;
    // 0x1afc64: 0x26048cc8  addiu       $a0, $s0, -0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFC60u, 0x1AFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC68u;
label_1afc68:
    // 0x1afc68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AFC68u;
    {
        const bool branch_taken_0x1afc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC68u;
        // 0x1afc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc68) {
            ctx->pc = 0x1AFC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFC70u;
    // 0x1afc70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC70u;
    {
        const bool branch_taken_0x1afc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC70u;
        // 0x1afc74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc70) {
            ctx->pc = 0x1AFC88u;
            goto label_1afc88;
        }
    }
    ctx->pc = 0x1AFC78u;
label_1afc78:
    // 0x1afc78: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1afc7c: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC84u);
    ctx->pc = 0x1AFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC7Cu;
    // 0x1afc80: 0x24848cc8  addiu       $a0, $a0, -0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFC7Cu, 0x1AFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC84u;
label_1afc84:
    // 0x1afc84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1afc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afc88:
    // 0x1afc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1afc8cu;
}
