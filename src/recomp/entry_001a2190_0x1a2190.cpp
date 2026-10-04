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

// Function: entry_001a2190
// Address: 0x1a2190 - 0x1a21b8
void entry_001a2190_0x1a2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2190_0x1a2190");
#endif

    switch (ctx->pc) {
        case 0x1a2198u: goto label_1a2198;
        default: break;
    }

    ctx->pc = 0x1a2190u;

    // 0x1a2190: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A2190u;
    SET_GPR_U32(ctx, 31, 0x1A2198u);
    ctx->pc = 0x1A2194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2190u;
    // 0x1a2194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A2190u, 0x1A2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2198u;
label_1a2198:
    // 0x1a2198: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A2198u;
    {
        const bool branch_taken_0x1a2198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2198u;
        // 0x1a219c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2198) {
            ctx->pc = 0x1A2180u;
            return;
        }
    }
    ctx->pc = 0x1A21A0u;
    // 0x1a21a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a21a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a21a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a21a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a21a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a21ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A21ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21ACu;
        // 0x1a21b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A21B4u;
    // 0x1a21b4: 0x0  nop
    ctx->pc = 0x1a21b4u;
    // NOP
    ctx->pc = 0x1a21b8u;
}
