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

// Function: FUN_00167eb0
// Address: 0x167eb0 - 0x167eec
void FUN_00167eb0_0x167eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167eb0_0x167eb0");
#endif

    switch (ctx->pc) {
        case 0x167ec0u: goto label_167ec0;
        case 0x167ed0u: goto label_167ed0;
        default: break;
    }

    ctx->pc = 0x167eb0u;

    // 0x167eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167eb8: 0xc042090  jal         func_108240
    ctx->pc = 0x167EB8u;
    SET_GPR_U32(ctx, 31, 0x167EC0u);
    ctx->pc = 0x167EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167EB8u;
    // 0x167ebc: 0x240403d0  addiu       $a0, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x167EB8u, 0x167EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167EC0u;
label_167ec0:
    // 0x167ec0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167EC0u;
    {
        const bool branch_taken_0x167ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EC0u;
        // 0x167ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ec0) {
            ctx->pc = 0x167EE4u;
            goto label_167ee4;
        }
    }
    ctx->pc = 0x167EC8u;
    // 0x167ec8: 0xc059f94  jal         func_167E50
    ctx->pc = 0x167EC8u;
    SET_GPR_U32(ctx, 31, 0x167ED0u);
    ctx->pc = 0x167E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167E50u, 0x167EC8u, 0x167ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167ED0u;
label_167ed0:
    // 0x167ed0: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x167ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x167ed4: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x167ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x167ed8: 0xa4800052  sh          $zero, 0x52($a0)
    ctx->pc = 0x167ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x167edc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x167EDCu;
    {
        const bool branch_taken_0x167edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EDCu;
        // 0x167ee0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167edc) {
            ctx->pc = 0x167EE8u;
            goto label_167ee8;
        }
    }
    ctx->pc = 0x167EE4u;
label_167ee4:
    // 0x167ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167ee8:
    // 0x167ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x167eecu;
}
