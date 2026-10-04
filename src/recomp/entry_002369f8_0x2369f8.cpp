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

// Function: entry_002369f8
// Address: 0x2369f8 - 0x236a20
void entry_002369f8_0x2369f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002369f8_0x2369f8");
#endif

    switch (ctx->pc) {
        case 0x236a00u: goto label_236a00;
        default: break;
    }

    ctx->pc = 0x2369f8u;

    // 0x2369f8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2369F8u;
    SET_GPR_U32(ctx, 31, 0x236A00u);
    ctx->pc = 0x2369FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369F8u;
    // 0x2369fc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2369F8u, 0x236A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A00u;
label_236a00:
    // 0x236a00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236a18: 0x3e00008  jr          $ra
    ctx->pc = 0x236A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A18u;
        // 0x236a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A20u;
}
