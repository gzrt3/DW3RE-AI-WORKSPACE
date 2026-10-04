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

// Function: entry_00136994
// Address: 0x136994 - 0x1369d0
void entry_00136994_0x136994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136994_0x136994");
#endif

    switch (ctx->pc) {
        case 0x13699cu: goto label_13699c;
        case 0x1369acu: goto label_1369ac;
        case 0x1369b4u: goto label_1369b4;
        default: break;
    }

    ctx->pc = 0x136994u;

    // 0x136994: 0xc04d1e0  jal         func_134780
    ctx->pc = 0x136994u;
    SET_GPR_U32(ctx, 31, 0x13699Cu);
    ctx->pc = 0x134780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134780u, 0x136994u, 0x13699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13699Cu;
label_13699c:
    // 0x13699c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1369a0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1369a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1369a4: 0xc04daa8  jal         func_136AA0
    ctx->pc = 0x1369A4u;
    SET_GPR_U32(ctx, 31, 0x1369ACu);
    ctx->pc = 0x1369A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369A4u;
    // 0x1369a8: 0xa022a3ea  sb          $v0, -0x5C16($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943722), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AA0u, 0x1369A4u, 0x1369ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369ACu;
label_1369ac:
    // 0x1369ac: 0xc05a620  jal         func_169880
    ctx->pc = 0x1369ACu;
    SET_GPR_U32(ctx, 31, 0x1369B4u);
    ctx->pc = 0x1369B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369ACu;
    // 0x1369b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169880u, 0x1369ACu, 0x1369B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369B4u;
label_1369b4:
    // 0x1369b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1369b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1369b8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1369b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1369bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1369BCu;
    {
        const bool branch_taken_0x1369bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1369C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369BCu;
        // 0x1369c0: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369bc) {
            ctx->pc = 0x1369D0u;
            return;
        }
    }
    ctx->pc = 0x1369C4u;
    // 0x1369c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1369c8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1369C8u;
    {
        const bool branch_taken_0x1369c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1369c8) {
            ctx->pc = 0x1369F0u;
            return;
        }
    }
    ctx->pc = 0x1369D0u;
}
