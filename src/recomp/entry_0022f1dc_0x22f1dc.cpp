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

// Function: entry_0022f1dc
// Address: 0x22f1dc - 0x22f214
void entry_0022f1dc_0x22f1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f1dc_0x22f1dc");
#endif

    switch (ctx->pc) {
        case 0x22f1e4u: goto label_22f1e4;
        case 0x22f1f4u: goto label_22f1f4;
        case 0x22f1fcu: goto label_22f1fc;
        case 0x22f20cu: goto label_22f20c;
        default: break;
    }

    ctx->pc = 0x22f1dcu;

    // 0x22f1dc: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1DCu;
    SET_GPR_U32(ctx, 31, 0x22F1E4u);
    ctx->pc = 0x22F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1DCu;
    // 0x22f1e0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1DCu, 0x22F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1E4u;
label_22f1e4:
    // 0x22f1e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F1E4u;
    {
        const bool branch_taken_0x22f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1e4) {
            ctx->pc = 0x22F260u;
            return;
        }
    }
    ctx->pc = 0x22F1ECu;
    // 0x22f1ec: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F1ECu;
    SET_GPR_U32(ctx, 31, 0x22F1F4u);
    ctx->pc = 0x22F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1ECu;
    // 0x22f1f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F1ECu, 0x22F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1F4u;
label_22f1f4:
    // 0x22f1f4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1F4u;
    SET_GPR_U32(ctx, 31, 0x22F1FCu);
    ctx->pc = 0x22F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1F4u;
    // 0x22f1f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1F4u, 0x22F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1FCu;
label_22f1fc:
    // 0x22f1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F1FCu;
    {
        const bool branch_taken_0x22f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1fc) {
            ctx->pc = 0x22F214u;
            return;
        }
    }
    ctx->pc = 0x22F204u;
    // 0x22f204: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F204u;
    SET_GPR_U32(ctx, 31, 0x22F20Cu);
    ctx->pc = 0x22F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F204u;
    // 0x22f208: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F204u, 0x22F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F20Cu;
label_22f20c:
    // 0x22f20c: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F20Cu;
    SET_GPR_U32(ctx, 31, 0x22F214u);
    ctx->pc = 0x22F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F20Cu;
    // 0x22f210: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F20Cu, 0x22F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F214u;
}
