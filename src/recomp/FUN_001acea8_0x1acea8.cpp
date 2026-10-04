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

// Function: FUN_001acea8
// Address: 0x1acea8 - 0x1acee0
void FUN_001acea8_0x1acea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acea8_0x1acea8");
#endif

    switch (ctx->pc) {
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1acedcu: goto label_1acedc;
        default: break;
    }

    ctx->pc = 0x1acea8u;

    // 0x1acea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aceb0: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x1ACEB0u;
    SET_GPR_U32(ctx, 31, 0x1ACEB8u);
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x1ACEB0u, 0x1ACEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEB8u;
label_1aceb8:
    // 0x1aceb8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1aceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1acebc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACEBCu;
    {
        const bool branch_taken_0x1acebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1acebc) {
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACEC4u;
    // 0x1acec4: 0xc06b3ba  jal         func_1ACEE8
    ctx->pc = 0x1ACEC4u;
    SET_GPR_U32(ctx, 31, 0x1ACECCu);
    ctx->pc = 0x1ACEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACEE8u, 0x1ACEC4u, 0x1ACECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACECCu;
label_1acecc:
    // 0x1acecc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACECCu;
    {
        const bool branch_taken_0x1acecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACECCu;
        // 0x1aced0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acecc) {
            ctx->pc = 0x1ACEE0u;
            return;
        }
    }
    ctx->pc = 0x1ACED4u;
label_1aced4:
    // 0x1aced4: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x1ACED4u;
    SET_GPR_U32(ctx, 31, 0x1ACEDCu);
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x1ACED4u, 0x1ACEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1acee0u;
}
