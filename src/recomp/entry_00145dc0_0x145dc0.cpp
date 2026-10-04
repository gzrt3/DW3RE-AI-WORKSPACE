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

// Function: entry_00145dc0
// Address: 0x145dc0 - 0x145dfc
void entry_00145dc0_0x145dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145dc0_0x145dc0");
#endif

    switch (ctx->pc) {
        case 0x145dc8u: goto label_145dc8;
        case 0x145dd8u: goto label_145dd8;
        case 0x145de4u: goto label_145de4;
        case 0x145df4u: goto label_145df4;
        default: break;
    }

    ctx->pc = 0x145dc0u;

    // 0x145dc0: 0xc044cfc  jal         func_1133F0
    ctx->pc = 0x145DC0u;
    SET_GPR_U32(ctx, 31, 0x145DC8u);
    ctx->pc = 0x1133F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1133F0u, 0x145DC0u, 0x145DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC8u;
label_145dc8:
    // 0x145dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x145DC8u;
    {
        const bool branch_taken_0x145dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145dc8) {
            ctx->pc = 0x145DFCu;
            return;
        }
    }
    ctx->pc = 0x145DD0u;
    // 0x145dd0: 0xc041500  jal         func_105400
    ctx->pc = 0x145DD0u;
    SET_GPR_U32(ctx, 31, 0x145DD8u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x145DD0u, 0x145DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DD8u;
label_145dd8:
    // 0x145dd8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145ddc: 0xc0414ac  jal         func_1052B0
    ctx->pc = 0x145DDCu;
    SET_GPR_U32(ctx, 31, 0x145DE4u);
    ctx->pc = 0x145DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DDCu;
    // 0x145de0: 0x30440010  andi        $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052B0u, 0x145DDCu, 0x145DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DE4u;
label_145de4:
    // 0x145de4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145DE4u;
    {
        const bool branch_taken_0x145de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145de4) {
            ctx->pc = 0x145DFCu;
            return;
        }
    }
    ctx->pc = 0x145DECu;
    // 0x145dec: 0xc055610  jal         func_155840
    ctx->pc = 0x145DECu;
    SET_GPR_U32(ctx, 31, 0x145DF4u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145DECu, 0x145DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DF4u;
label_145df4:
    // 0x145df4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x145DF4u;
    {
        const bool branch_taken_0x145df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DF4u;
        // 0x145df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145df4) {
            ctx->pc = 0x1460D4u;
            return;
        }
    }
    ctx->pc = 0x145DFCu;
}
