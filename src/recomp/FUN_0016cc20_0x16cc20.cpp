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

// Function: FUN_0016cc20
// Address: 0x16cc20 - 0x16cc64
void FUN_0016cc20_0x16cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016cc20_0x16cc20");
#endif

    switch (ctx->pc) {
        case 0x16cc5cu: goto label_16cc5c;
        default: break;
    }

    ctx->pc = 0x16cc20u;

    // 0x16cc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16cc24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16cc2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cc30: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16cc34: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CC34u;
    {
        const bool branch_taken_0x16cc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC34u;
        // 0x16cc38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc34) {
            ctx->pc = 0x16CC4Cu;
            goto label_16cc4c;
        }
    }
    ctx->pc = 0x16CC3Cu;
    // 0x16cc3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cc40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CC40u;
    {
        const bool branch_taken_0x16cc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC40u;
        // 0x16cc44: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc40) {
            ctx->pc = 0x16CC54u;
            goto label_16cc54;
        }
    }
    ctx->pc = 0x16CC48u;
    // 0x16cc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cc4c:
    // 0x16cc4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16CC4Cu;
    {
        const bool branch_taken_0x16cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC4Cu;
        // 0x16cc50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc4c) {
            ctx->pc = 0x16CC6Cu;
            return;
        }
    }
    ctx->pc = 0x16CC54u;
label_16cc54:
    // 0x16cc54: 0xc08d3be  jal         func_234EF8
    ctx->pc = 0x16CC54u;
    SET_GPR_U32(ctx, 31, 0x16CC5Cu);
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x16CC54u, 0x16CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC5Cu;
label_16cc5c:
    // 0x16cc5c: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x16cc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16cc64u;
}
