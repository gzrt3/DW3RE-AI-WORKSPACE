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

// Function: entry_0016787c
// Address: 0x16787c - 0x167894
void entry_0016787c_0x16787c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016787c_0x16787c");
#endif

    ctx->pc = 0x16787cu;

    // 0x16787c: 0x0  nop
    ctx->pc = 0x16787cu;
    // NOP
    // 0x167880: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x167884: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167884u;
    {
        const bool branch_taken_0x167884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167884u;
        // 0x167888: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167884) {
            ctx->pc = 0x167894u;
            return;
        }
    }
    ctx->pc = 0x16788Cu;
    // 0x16788c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16788Cu;
    {
        const bool branch_taken_0x16788c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16788c) {
            ctx->pc = 0x1678ACu;
            return;
        }
    }
    ctx->pc = 0x167894u;
}
