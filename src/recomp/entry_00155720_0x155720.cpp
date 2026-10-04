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

// Function: entry_00155720
// Address: 0x155720 - 0x155790
void entry_00155720_0x155720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155720_0x155720");
#endif

    switch (ctx->pc) {
        case 0x155750u: goto label_155750;
        case 0x15577cu: goto label_15577c;
        default: break;
    }

    ctx->pc = 0x155720u;

    // 0x155720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155724: 0x1860fff5  blez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x155724u;
    {
        const bool branch_taken_0x155724 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x155728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155724u;
        // 0x155728: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155724) {
            ctx->pc = 0x1556FCu;
            return;
        }
    }
    ctx->pc = 0x15572Cu;
    // 0x15572c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155730: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155734: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x155738: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x15573c: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
    // 0x155740: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x155744: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x155744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
    // 0x155748: 0xc066f34  jal         func_19BCD0
    ctx->pc = 0x155748u;
    SET_GPR_U32(ctx, 31, 0x155750u);
    ctx->pc = 0x15574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155748u;
    // 0x15574c: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCD0u, 0x155748u, 0x155750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155750u;
label_155750:
    // 0x155750: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155754: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155758: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x15575c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x15575cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x155760: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155760u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x155764: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x155764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
    // 0x155768: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x15576c: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
    // 0x155770: 0x24e7b9f0  addiu       $a3, $a3, -0x4610
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949360));
    // 0x155774: 0xc066f64  jal         func_19BD90
    ctx->pc = 0x155774u;
    SET_GPR_U32(ctx, 31, 0x15577Cu);
    ctx->pc = 0x155778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155774u;
    // 0x155778: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD90u, 0x155774u, 0x15577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15577Cu;
label_15577c:
    // 0x15577c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155780: 0x3e00008  jr          $ra
    ctx->pc = 0x155780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155780u;
        // 0x155784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155788u;
    // 0x155788: 0x0  nop
    ctx->pc = 0x155788u;
    // NOP
    // 0x15578c: 0x0  nop
    ctx->pc = 0x15578cu;
    // NOP
    ctx->pc = 0x155790u;
}
