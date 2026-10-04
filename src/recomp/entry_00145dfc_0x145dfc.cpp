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

// Function: entry_00145dfc
// Address: 0x145dfc - 0x145e38
void entry_00145dfc_0x145dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145dfc_0x145dfc");
#endif

    switch (ctx->pc) {
        case 0x145e04u: goto label_145e04;
        case 0x145e14u: goto label_145e14;
        case 0x145e20u: goto label_145e20;
        case 0x145e30u: goto label_145e30;
        default: break;
    }

    ctx->pc = 0x145dfcu;

    // 0x145dfc: 0xc065614  jal         func_195850
    ctx->pc = 0x145DFCu;
    SET_GPR_U32(ctx, 31, 0x145E04u);
    ctx->pc = 0x195850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195850u, 0x145DFCu, 0x145E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E04u;
label_145e04:
    // 0x145e04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x145E04u;
    {
        const bool branch_taken_0x145e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e04) {
            ctx->pc = 0x145E38u;
            return;
        }
    }
    ctx->pc = 0x145E0Cu;
    // 0x145e0c: 0xc041500  jal         func_105400
    ctx->pc = 0x145E0Cu;
    SET_GPR_U32(ctx, 31, 0x145E14u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x145E0Cu, 0x145E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E14u;
label_145e14:
    // 0x145e14: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145e18: 0xc0414ac  jal         func_1052B0
    ctx->pc = 0x145E18u;
    SET_GPR_U32(ctx, 31, 0x145E20u);
    ctx->pc = 0x145E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E18u;
    // 0x145e1c: 0x30440010  andi        $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052B0u, 0x145E18u, 0x145E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E20u;
label_145e20:
    // 0x145e20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145E20u;
    {
        const bool branch_taken_0x145e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e20) {
            ctx->pc = 0x145E38u;
            return;
        }
    }
    ctx->pc = 0x145E28u;
    // 0x145e28: 0xc055610  jal         func_155840
    ctx->pc = 0x145E28u;
    SET_GPR_U32(ctx, 31, 0x145E30u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145E28u, 0x145E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E30u;
label_145e30:
    // 0x145e30: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x145E30u;
    {
        const bool branch_taken_0x145e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E30u;
        // 0x145e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e30) {
            ctx->pc = 0x1460D4u;
            return;
        }
    }
    ctx->pc = 0x145E38u;
}
