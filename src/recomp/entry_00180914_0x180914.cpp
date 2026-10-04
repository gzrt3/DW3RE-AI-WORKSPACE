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

// Function: entry_00180914
// Address: 0x180914 - 0x180934
void entry_00180914_0x180914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180914_0x180914");
#endif

    switch (ctx->pc) {
        case 0x18091cu: goto label_18091c;
        case 0x180930u: goto label_180930;
        default: break;
    }

    ctx->pc = 0x180914u;

    // 0x180914: 0xc069228  jal         func_1A48A0
    ctx->pc = 0x180914u;
    SET_GPR_U32(ctx, 31, 0x18091Cu);
    ctx->pc = 0x180918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180914u;
    // 0x180918: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48A0u, 0x180914u, 0x18091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18091Cu;
label_18091c:
    // 0x18091c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x180920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180920u;
    {
        const bool branch_taken_0x180920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180920u;
        // 0x180924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180920) {
            ctx->pc = 0x180934u;
            return;
        }
    }
    ctx->pc = 0x180928u;
    // 0x180928: 0xc069214  jal         func_1A4850
    ctx->pc = 0x180928u;
    SET_GPR_U32(ctx, 31, 0x180930u);
    ctx->pc = 0x18092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180928u;
    // 0x18092c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x180928u, 0x180930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180930u;
label_180930:
    // 0x180930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180934u;
}
