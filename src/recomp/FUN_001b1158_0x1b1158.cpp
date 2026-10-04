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

// Function: FUN_001b1158
// Address: 0x1b1158 - 0x1b1190
void FUN_001b1158_0x1b1158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1158_0x1b1158");
#endif

    switch (ctx->pc) {
        case 0x1b117cu: goto label_1b117c;
        default: break;
    }

    ctx->pc = 0x1b1158u;

    // 0x1b1158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b115c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1160: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x1b1164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1168: 0x8e048d0c  lw          $a0, -0x72F4($s0)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x288D0Cu));
    // 0x1b116c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B116Cu;
    {
        const bool branch_taken_0x1b116c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b116c) {
            ctx->pc = 0x1B1188u;
            goto label_1b1188;
        }
    }
    ctx->pc = 0x1B1174u;
    // 0x1b1174: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1B1174u;
    SET_GPR_U32(ctx, 31, 0x1B117Cu);
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1B1174u, 0x1B117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B117Cu;
label_1b117c:
    // 0x1b117c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1180: 0xae038d0c  sw          $v1, -0x72F4($s0)
    ctx->pc = 0x1b1180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937868), GPR_U32(ctx, 3));
    // 0x1b1184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1188:
    // 0x1b1188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b118c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b118cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b1190u;
}
