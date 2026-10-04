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

// Function: entry_00146180
// Address: 0x146180 - 0x1461a4
void entry_00146180_0x146180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146180_0x146180");
#endif

    switch (ctx->pc) {
        case 0x146194u: goto label_146194;
        case 0x14619cu: goto label_14619c;
        default: break;
    }

    ctx->pc = 0x146180u;

    // 0x146180: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x146184: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x146184u;
    {
        const bool branch_taken_0x146184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x146188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146184u;
        // 0x146188: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146184) {
            ctx->pc = 0x1461A4u;
            return;
        }
    }
    ctx->pc = 0x14618Cu;
    // 0x14618c: 0xc059e84  jal         func_167A10
    ctx->pc = 0x14618Cu;
    SET_GPR_U32(ctx, 31, 0x146194u);
    ctx->pc = 0x146190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14618Cu;
    // 0x146190: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x14618Cu, 0x146194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146194u;
label_146194:
    // 0x146194: 0xc059e84  jal         func_167A10
    ctx->pc = 0x146194u;
    SET_GPR_U32(ctx, 31, 0x14619Cu);
    ctx->pc = 0x146198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146194u;
    // 0x146198: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x146194u, 0x14619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14619Cu;
label_14619c:
    // 0x14619c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14619Cu;
    {
        const bool branch_taken_0x14619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14619c) {
            ctx->pc = 0x1461E0u;
            return;
        }
    }
    ctx->pc = 0x1461A4u;
}
