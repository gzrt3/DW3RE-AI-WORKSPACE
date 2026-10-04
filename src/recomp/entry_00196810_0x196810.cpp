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

// Function: entry_00196810
// Address: 0x196810 - 0x196840
void entry_00196810_0x196810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196810_0x196810");
#endif

    ctx->pc = 0x196810u;

    // 0x196810: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x196814: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x196818: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19681c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19681cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196820: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x196824: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x196828: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x19682c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x196830: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x196834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x196838: 0x3e00008  jr          $ra
    ctx->pc = 0x196838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196840u;
}
