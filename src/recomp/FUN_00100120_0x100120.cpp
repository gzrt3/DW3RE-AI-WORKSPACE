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

// Function: FUN_00100120
// Address: 0x100120 - 0x100154
void FUN_00100120_0x100120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100120_0x100120");
#endif

    switch (ctx->pc) {
        case 0x100134u: goto label_100134;
        case 0x10014cu: goto label_10014c;
        default: break;
    }

    ctx->pc = 0x100120u;

    // 0x100120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100124: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100124u;
    {
        const bool branch_taken_0x100124 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x100128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100124u;
        // 0x100128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100124) {
            ctx->pc = 0x10013Cu;
            goto label_10013c;
        }
    }
    ctx->pc = 0x10012Cu;
    // 0x10012c: 0xc06db82  jal         func_1B6E08
    ctx->pc = 0x10012Cu;
    SET_GPR_U32(ctx, 31, 0x100134u);
    ctx->pc = 0x1B6E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E08u, 0x10012Cu, 0x100134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100134u;
label_100134:
    // 0x100134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100134u;
    {
        const bool branch_taken_0x100134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100134u;
        // 0x100138: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100134) {
            ctx->pc = 0x100154u;
            return;
        }
    }
    ctx->pc = 0x10013Cu;
label_10013c:
    // 0x10013c: 0x4187a  dsrl        $v1, $a0, 1
    ctx->pc = 0x10013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 1);
    // 0x100140: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x100140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x100144: 0xc06db82  jal         func_1B6E08
    ctx->pc = 0x100144u;
    SET_GPR_U32(ctx, 31, 0x10014Cu);
    ctx->pc = 0x100148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100144u;
    // 0x100148: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E08u, 0x100144u, 0x10014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10014Cu;
label_10014c:
    // 0x10014c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x10014cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x100150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x100154u;
}
