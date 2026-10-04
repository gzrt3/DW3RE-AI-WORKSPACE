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

// Function: FUN_0020efe0
// Address: 0x20efe0 - 0x20f06c
void FUN_0020efe0_0x20efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020efe0_0x20efe0");
#endif

    switch (ctx->pc) {
        case 0x20effcu: goto label_20effc;
        case 0x20f014u: goto label_20f014;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f044u: goto label_20f044;
        case 0x20f05cu: goto label_20f05c;
        default: break;
    }

    ctx->pc = 0x20efe0u;

    // 0x20efe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20efe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20efe8: 0x8f84919c  lw          $a0, -0x6E64($gp)
    ctx->pc = 0x20efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
    // 0x20efec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EFECu;
    {
        const bool branch_taken_0x20efec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20efec) {
            ctx->pc = 0x20F000u;
            goto label_20f000;
        }
    }
    ctx->pc = 0x20EFF4u;
    // 0x20eff4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20EFF4u;
    SET_GPR_U32(ctx, 31, 0x20EFFCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20EFF4u, 0x20EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFFCu;
label_20effc:
    // 0x20effc: 0xaf80919c  sw          $zero, -0x6E64($gp)
    ctx->pc = 0x20effcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939036), GPR_U32(ctx, 0));
label_20f000:
    // 0x20f000: 0x8f849198  lw          $a0, -0x6E68($gp)
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20f004: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F004u;
    {
        const bool branch_taken_0x20f004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f004) {
            ctx->pc = 0x20F018u;
            goto label_20f018;
        }
    }
    ctx->pc = 0x20F00Cu;
    // 0x20f00c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F00Cu;
    SET_GPR_U32(ctx, 31, 0x20F014u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F00Cu, 0x20F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F014u;
label_20f014:
    // 0x20f014: 0xaf809198  sw          $zero, -0x6E68($gp)
    ctx->pc = 0x20f014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 0));
label_20f018:
    // 0x20f018: 0x8f8491a4  lw          $a0, -0x6E5C($gp)
    ctx->pc = 0x20f018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x20f01c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F01Cu;
    {
        const bool branch_taken_0x20f01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f01c) {
            ctx->pc = 0x20F030u;
            goto label_20f030;
        }
    }
    ctx->pc = 0x20F024u;
    // 0x20f024: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F024u;
    SET_GPR_U32(ctx, 31, 0x20F02Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F024u, 0x20F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F02Cu;
label_20f02c:
    // 0x20f02c: 0xaf8091a4  sw          $zero, -0x6E5C($gp)
    ctx->pc = 0x20f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939044), GPR_U32(ctx, 0));
label_20f030:
    // 0x20f030: 0x8f849188  lw          $a0, -0x6E78($gp)
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x20f034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20F048u;
            goto label_20f048;
        }
    }
    ctx->pc = 0x20F03Cu;
    // 0x20f03c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F03Cu;
    SET_GPR_U32(ctx, 31, 0x20F044u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F03Cu, 0x20F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F044u;
label_20f044:
    // 0x20f044: 0xaf809188  sw          $zero, -0x6E78($gp)
    ctx->pc = 0x20f044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 0));
label_20f048:
    // 0x20f048: 0x8f8491a0  lw          $a0, -0x6E60($gp)
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
    // 0x20f04c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F04Cu;
    {
        const bool branch_taken_0x20f04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F04Cu;
        // 0x20f050: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f04c) {
            ctx->pc = 0x20F064u;
            goto label_20f064;
        }
    }
    ctx->pc = 0x20F054u;
    // 0x20f054: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F054u;
    SET_GPR_U32(ctx, 31, 0x20F05Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F054u, 0x20F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F05Cu;
label_20f05c:
    // 0x20f05c: 0xaf8091a0  sw          $zero, -0x6E60($gp)
    ctx->pc = 0x20f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 0));
    // 0x20f060: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x20f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_20f064:
    // 0x20f064: 0xaf838288  sw          $v1, -0x7D78($gp)
    ctx->pc = 0x20f064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 3));
    // 0x20f068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x20f06cu;
}
