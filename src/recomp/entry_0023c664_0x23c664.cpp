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

// Function: entry_0023c664
// Address: 0x23c664 - 0x23c69c
void entry_0023c664_0x23c664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c664_0x23c664");
#endif

    switch (ctx->pc) {
        case 0x23c698u: goto label_23c698;
        default: break;
    }

    ctx->pc = 0x23c664u;

label_23c664:
    // 0x23c664: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23c668:
    // 0x23c668: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c66c:
    // 0x23c66c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_23c670:
    if (ctx->pc == 0x23C670u) {
        ctx->pc = 0x23C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C66Cu;
        // 0x23c670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C674u;
        goto label_23c674;
    }
    ctx->pc = 0x23C66Cu;
    {
        const bool branch_taken_0x23c66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C66Cu;
        // 0x23c670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c66c) {
            ctx->pc = 0x23C69Cu;
            return;
        }
    }
    ctx->pc = 0x23C674u;
label_23c674:
    // 0x23c674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c678:
    // 0x23c678: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_23c67c:
    if (ctx->pc == 0x23C67Cu) {
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C680u;
        goto label_23c680;
    }
    ctx->pc = 0x23C678u;
    {
        const bool branch_taken_0x23c678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c678) {
            ctx->pc = 0x23C69Cu;
            return;
        }
    }
    ctx->pc = 0x23C680u;
label_23c680:
    // 0x23c680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c684:
    // 0x23c684: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_23c688:
    if (ctx->pc == 0x23C688u) {
        ctx->pc = 0x23C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C684u;
        // 0x23c688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C68Cu;
        goto label_23c68c;
    }
    ctx->pc = 0x23C684u;
    {
        const bool branch_taken_0x23c684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C684u;
        // 0x23c688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c684) {
            ctx->pc = 0x23C69Cu;
            return;
        }
    }
    ctx->pc = 0x23C68Cu;
label_23c68c:
    // 0x23c68c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_23c690:
    // 0x23c690: 0xa0f809  jalr        $a1
label_23c694:
    if (ctx->pc == 0x23C694u) {
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C698u;
        goto label_23c698;
    }
    ctx->pc = 0x23C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23C698u);
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C690u, 0x23C698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C698u;
label_23c698:
    // 0x23c698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23c69cu;
}
