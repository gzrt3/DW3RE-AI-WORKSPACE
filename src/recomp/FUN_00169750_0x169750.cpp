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

// Function: FUN_00169750
// Address: 0x169750 - 0x16977c
void FUN_00169750_0x169750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169750_0x169750");
#endif

    switch (ctx->pc) {
        case 0x169750u: goto label_169750;
        case 0x169754u: goto label_169754;
        case 0x169758u: goto label_169758;
        case 0x16975cu: goto label_16975c;
        case 0x169760u: goto label_169760;
        case 0x169764u: goto label_169764;
        case 0x169768u: goto label_169768;
        case 0x16976cu: goto label_16976c;
        case 0x169770u: goto label_169770;
        case 0x169774u: goto label_169774;
        case 0x169778u: goto label_169778;
        default: break;
    }

    ctx->pc = 0x169750u;

label_169750:
    // 0x169750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169754:
    // 0x169754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169758:
    // 0x169758: 0x8f8286e4  lw          $v0, -0x791C($gp)
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
label_16975c:
    // 0x16975c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_169760:
    if (ctx->pc == 0x169760u) {
        ctx->pc = 0x169764u;
        goto label_169764;
    }
    ctx->pc = 0x16975Cu;
    {
        const bool branch_taken_0x16975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16975c) {
            ctx->pc = 0x169774u;
            goto label_169774;
        }
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x40f809  jalr        $v0
label_169768:
    if (ctx->pc == 0x169768u) {
        ctx->pc = 0x16976Cu;
        goto label_16976c;
    }
    ctx->pc = 0x169764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16976Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169764u, 0x16976Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16976Cu;
label_16976c:
    // 0x16976c: 0x10000003  b           . + 4 + (0x3 << 2)
label_169770:
    if (ctx->pc == 0x169770u) {
        ctx->pc = 0x169770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16976Cu;
        // 0x169770: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169774u;
        goto label_169774;
    }
    ctx->pc = 0x16976Cu;
    {
        const bool branch_taken_0x16976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16976Cu;
        // 0x169770: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16976c) {
            ctx->pc = 0x16977Cu;
            return;
        }
    }
    ctx->pc = 0x169774u;
label_169774:
    // 0x169774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169778:
    // 0x169778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16977cu;
}
