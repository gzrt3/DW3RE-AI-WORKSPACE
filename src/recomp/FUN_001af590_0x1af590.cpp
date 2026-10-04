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

// Function: FUN_001af590
// Address: 0x1af590 - 0x1af5c4
void FUN_001af590_0x1af590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af590_0x1af590");
#endif

    switch (ctx->pc) {
        case 0x1af590u: goto label_1af590;
        case 0x1af594u: goto label_1af594;
        case 0x1af598u: goto label_1af598;
        case 0x1af59cu: goto label_1af59c;
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5a4u: goto label_1af5a4;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5acu: goto label_1af5ac;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5b4u: goto label_1af5b4;
        case 0x1af5b8u: goto label_1af5b8;
        case 0x1af5bcu: goto label_1af5bc;
        case 0x1af5c0u: goto label_1af5c0;
        default: break;
    }

    ctx->pc = 0x1af590u;

label_1af590:
    // 0x1af590: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af594:
    // 0x1af594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1af598:
    // 0x1af598: 0x8c455f44  lw          $a1, 0x5F44($v0)
    ctx->pc = 0x1af598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24388)));
label_1af59c:
    // 0x1af59c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1af5a0:
    if (ctx->pc == 0x1AF5A0u) {
        ctx->pc = 0x1AF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF59Cu;
        // 0x1af5a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5A4u;
        goto label_1af5a4;
    }
    ctx->pc = 0x1AF59Cu;
    {
        const bool branch_taken_0x1af59c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF59Cu;
        // 0x1af5a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af59c) {
            ctx->pc = 0x1AF5C0u;
            goto label_1af5c0;
        }
    }
    ctx->pc = 0x1AF5A4u;
label_1af5a4:
    // 0x1af5a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af5a8:
    // 0x1af5a8: 0x8c4372a4  lw          $v1, 0x72A4($v0)
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29348)));
label_1af5ac:
    // 0x1af5ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1af5b0:
    if (ctx->pc == 0x1AF5B0u) {
        ctx->pc = 0x1AF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ACu;
        // 0x1af5b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5B4u;
        goto label_1af5b4;
    }
    ctx->pc = 0x1AF5ACu;
    {
        const bool branch_taken_0x1af5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ACu;
        // 0x1af5b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5ac) {
            ctx->pc = 0x1AF5C4u;
            return;
        }
    }
    ctx->pc = 0x1AF5B4u;
label_1af5b4:
    // 0x1af5b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af5b8:
    // 0x1af5b8: 0xa0f809  jalr        $a1
label_1af5bc:
    if (ctx->pc == 0x1AF5BCu) {
        ctx->pc = 0x1AF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B8u;
        // 0x1af5bc: 0x8c445f48  lw          $a0, 0x5F48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5C0u;
        goto label_1af5c0;
    }
    ctx->pc = 0x1AF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AF5C0u);
        ctx->pc = 0x1AF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B8u;
        // 0x1af5bc: 0x8c445f48  lw          $a0, 0x5F48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24392)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF5B8u, 0x1AF5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF5C0u;
label_1af5c0:
    // 0x1af5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1af5c4u;
}
