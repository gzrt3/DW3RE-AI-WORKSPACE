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

// Function: entry_0022f360
// Address: 0x22f360 - 0x22f398
void entry_0022f360_0x22f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f360_0x22f360");
#endif

    switch (ctx->pc) {
        case 0x22f368u: goto label_22f368;
        case 0x22f378u: goto label_22f378;
        case 0x22f388u: goto label_22f388;
        case 0x22f390u: goto label_22f390;
        default: break;
    }

    ctx->pc = 0x22f360u;

    // 0x22f360: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F360u;
    SET_GPR_U32(ctx, 31, 0x22F368u);
    ctx->pc = 0x22F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F360u;
    // 0x22f364: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F360u, 0x22F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F368u;
label_22f368:
    // 0x22f368: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22F368u;
    {
        const bool branch_taken_0x22f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F368u;
        // 0x22f36c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f368) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F370u;
    // 0x22f370: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F370u;
    SET_GPR_U32(ctx, 31, 0x22F378u);
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F370u, 0x22F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F378u;
label_22f378:
    // 0x22f378: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x22F378u;
    {
        const bool branch_taken_0x22f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F378u;
        // 0x22f37c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f378) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F380u;
    // 0x22f380: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F380u;
    SET_GPR_U32(ctx, 31, 0x22F388u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F380u, 0x22F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F388u;
label_22f388:
    // 0x22f388: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F388u;
    SET_GPR_U32(ctx, 31, 0x22F390u);
    ctx->pc = 0x22F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F388u;
    // 0x22f38c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F388u, 0x22F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F390u;
label_22f390:
    // 0x22f390: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x22F390u;
    {
        const bool branch_taken_0x22f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f390) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F398u;
}
