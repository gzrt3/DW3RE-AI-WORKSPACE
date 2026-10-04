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

// Function: entry_0023ca00
// Address: 0x23ca00 - 0x23ca18
void entry_0023ca00_0x23ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ca00_0x23ca00");
#endif

    ctx->pc = 0x23ca00u;

    // 0x23ca00: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23ca00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ca04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ca04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ca08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ca0c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA0Cu;
        // 0x23ca10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CA14u;
    // 0x23ca14: 0x0  nop
    ctx->pc = 0x23ca14u;
    // NOP
    ctx->pc = 0x23ca18u;
}
