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

// Function: entry_001aa13c
// Address: 0x1aa13c - 0x1aa180
void entry_001aa13c_0x1aa13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa13c_0x1aa13c");
#endif

    switch (ctx->pc) {
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa164u: goto label_1aa164;
        default: break;
    }

    ctx->pc = 0x1aa13cu;

    // 0x1aa13c: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1AA13Cu;
    SET_GPR_U32(ctx, 31, 0x1AA144u);
    ctx->pc = 0x1AA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA13Cu;
    // 0x1aa140: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1AA13Cu, 0x1AA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA144u;
label_1aa144:
    // 0x1aa144: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1aa148: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1aa148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1aa14c: 0x24634300  addiu       $v1, $v1, 0x4300
    ctx->pc = 0x1aa14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17152));
    // 0x1aa150: 0x8e045c00  lw          $a0, 0x5C00($s0)
    ctx->pc = 0x1aa150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    // 0x1aa154: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1aa154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1aa158: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1aa15c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AA15Cu;
    SET_GPR_U32(ctx, 31, 0x1AA164u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AA15Cu, 0x1AA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA164u;
label_1aa164:
    // 0x1aa164: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aa164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aa168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa16c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aa16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa170: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aa170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa178: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA178u;
        // 0x1aa17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA180u;
}
