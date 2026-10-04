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

// Function: FUN_00196840
// Address: 0x196840 - 0x196870
void FUN_00196840_0x196840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196840_0x196840");
#endif

    switch (ctx->pc) {
        case 0x196840u: goto label_196840;
        case 0x196844u: goto label_196844;
        case 0x196848u: goto label_196848;
        case 0x19684cu: goto label_19684c;
        case 0x196850u: goto label_196850;
        case 0x196854u: goto label_196854;
        case 0x196858u: goto label_196858;
        case 0x19685cu: goto label_19685c;
        case 0x196860u: goto label_196860;
        case 0x196864u: goto label_196864;
        case 0x196868u: goto label_196868;
        case 0x19686cu: goto label_19686c;
        default: break;
    }

    ctx->pc = 0x196840u;

label_196840:
    // 0x196840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196844:
    // 0x196844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196848:
    // 0x196848: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x196848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19684c:
    // 0x19684c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_196850:
    if (ctx->pc == 0x196850u) {
        ctx->pc = 0x196854u;
        goto label_196854;
    }
    ctx->pc = 0x19684Cu;
    {
        const bool branch_taken_0x19684c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19684c) {
            ctx->pc = 0x19686Cu;
            goto label_19686c;
        }
    }
    ctx->pc = 0x196854u;
label_196854:
    // 0x196854: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x196854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196858:
    // 0x196858: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_19685c:
    if (ctx->pc == 0x19685Cu) {
        ctx->pc = 0x196860u;
        goto label_196860;
    }
    ctx->pc = 0x196858u;
    {
        const bool branch_taken_0x196858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x196858) {
            ctx->pc = 0x19686Cu;
            goto label_19686c;
        }
    }
    ctx->pc = 0x196860u;
label_196860:
    // 0x196860: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x196860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_196864:
    // 0x196864: 0xc0f809  jalr        $a2
label_196868:
    if (ctx->pc == 0x196868u) {
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196864u;
        // 0x196868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19686Cu;
        goto label_19686c;
    }
    ctx->pc = 0x196864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19686Cu);
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196864u;
        // 0x196868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196864u, 0x19686Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19686Cu;
label_19686c:
    // 0x19686c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x196870u;
}
