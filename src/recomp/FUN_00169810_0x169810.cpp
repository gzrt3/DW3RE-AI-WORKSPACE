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

// Function: FUN_00169810
// Address: 0x169810 - 0x16984c
void FUN_00169810_0x169810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169810_0x169810");
#endif

    switch (ctx->pc) {
        case 0x169824u: goto label_169824;
        case 0x169838u: goto label_169838;
        case 0x169840u: goto label_169840;
        default: break;
    }

    ctx->pc = 0x169810u;

    // 0x169810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16981c: 0xc06c1da  jal         func_1B0768
    ctx->pc = 0x16981Cu;
    SET_GPR_U32(ctx, 31, 0x169824u);
    ctx->pc = 0x169820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16981Cu;
    // 0x169820: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0768u, 0x16981Cu, 0x169824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169824u;
label_169824:
    // 0x169824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169828: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169828u;
    {
        const bool branch_taken_0x169828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169828u;
        // 0x16982c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169828) {
            ctx->pc = 0x169844u;
            goto label_169844;
        }
    }
    ctx->pc = 0x169830u;
    // 0x169830: 0xc05b420  jal         func_16D080
    ctx->pc = 0x169830u;
    SET_GPR_U32(ctx, 31, 0x169838u);
    ctx->pc = 0x169834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169830u;
    // 0x169834: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x169830u, 0x169838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169838u;
label_169838:
    // 0x169838: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x169838u;
    SET_GPR_U32(ctx, 31, 0x169840u);
    ctx->pc = 0x16983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169838u;
    // 0x16983c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x169838u, 0x169840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169840u;
label_169840:
    // 0x169840: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x169840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169844:
    // 0x169844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16984cu;
}
