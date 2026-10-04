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

// Function: entry_0017d3f4
// Address: 0x17d3f4 - 0x17d410
void entry_0017d3f4_0x17d3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d3f4_0x17d3f4");
#endif

    ctx->pc = 0x17d3f4u;

    // 0x17d3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3FCu;
        // 0x17d400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D404u;
    // 0x17d404: 0x0  nop
    ctx->pc = 0x17d404u;
    // NOP
    // 0x17d408: 0x0  nop
    ctx->pc = 0x17d408u;
    // NOP
    // 0x17d40c: 0x0  nop
    ctx->pc = 0x17d40cu;
    // NOP
    ctx->pc = 0x17d410u;
}
