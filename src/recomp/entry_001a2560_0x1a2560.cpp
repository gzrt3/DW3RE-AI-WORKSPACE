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

// Function: entry_001a2560
// Address: 0x1a2560 - 0x1a2570
void entry_001a2560_0x1a2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2560_0x1a2560");
#endif

    ctx->pc = 0x1a2560u;

    // 0x1a2560: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2560u;
    {
        const bool branch_taken_0x1a2560 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2560u;
        // 0x1a2564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2560) {
            ctx->pc = 0x1A2570u;
            return;
        }
    }
    ctx->pc = 0x1A2568u;
    // 0x1a2568: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2568u;
    SET_GPR_U32(ctx, 31, 0x1A2570u);
    ctx->pc = 0x1A256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2568u;
    // 0x1a256c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2568u, 0x1A2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2570u;
}
