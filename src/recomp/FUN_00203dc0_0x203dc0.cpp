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

// Function: FUN_00203dc0
// Address: 0x203dc0 - 0x203e04
void FUN_00203dc0_0x203dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203dc0_0x203dc0");
#endif

    switch (ctx->pc) {
        case 0x203dd4u: goto label_203dd4;
        case 0x203de4u: goto label_203de4;
        case 0x203decu: goto label_203dec;
        case 0x203dfcu: goto label_203dfc;
        default: break;
    }

    ctx->pc = 0x203dc0u;

    // 0x203dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203dcc: 0xc070e28  jal         func_1C38A0
    ctx->pc = 0x203DCCu;
    SET_GPR_U32(ctx, 31, 0x203DD4u);
    ctx->pc = 0x203DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DCCu;
    // 0x203dd0: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38A0u, 0x203DCCu, 0x203DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DD4u;
label_203dd4:
    // 0x203dd4: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203DD4u;
    {
        const bool branch_taken_0x203dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x203DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DD4u;
        // 0x203dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dd4) {
            ctx->pc = 0x203DF4u;
            goto label_203df4;
        }
    }
    ctx->pc = 0x203DDCu;
    // 0x203ddc: 0xc070de0  jal         func_1C3780
    ctx->pc = 0x203DDCu;
    SET_GPR_U32(ctx, 31, 0x203DE4u);
    ctx->pc = 0x1C3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3780u, 0x203DDCu, 0x203DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DE4u;
label_203de4:
    // 0x203de4: 0xc070e60  jal         func_1C3980
    ctx->pc = 0x203DE4u;
    SET_GPR_U32(ctx, 31, 0x203DECu);
    ctx->pc = 0x203DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DE4u;
    // 0x203de8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3980u, 0x203DE4u, 0x203DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DECu;
label_203dec:
    // 0x203dec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203DECu;
    {
        const bool branch_taken_0x203dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DECu;
        // 0x203df0: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dec) {
            ctx->pc = 0x203E00u;
            goto label_203e00;
        }
    }
    ctx->pc = 0x203DF4u;
label_203df4:
    // 0x203df4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x203DF4u;
    SET_GPR_U32(ctx, 31, 0x203DFCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x203DF4u, 0x203DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DFCu;
label_203dfc:
    // 0x203dfc: 0xaf8090f0  sw          $zero, -0x6F10($gp)
    ctx->pc = 0x203dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
label_203e00:
    // 0x203e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x203e04u;
}
