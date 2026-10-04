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

// Function: entry_00167894
// Address: 0x167894 - 0x1678ac
void entry_00167894_0x167894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167894_0x167894");
#endif

    ctx->pc = 0x167894u;

    // 0x167894: 0x0  nop
    ctx->pc = 0x167894u;
    // NOP
    // 0x167898: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x167898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x16789c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16789Cu;
    {
        const bool branch_taken_0x16789c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16789Cu;
        // 0x1678a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16789c) {
            ctx->pc = 0x16791Cu;
            return;
        }
    }
    ctx->pc = 0x1678A4u;
    // 0x1678a4: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1678A4u;
    {
        const bool branch_taken_0x1678a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1678a4) {
            ctx->pc = 0x16791Cu;
            return;
        }
    }
    ctx->pc = 0x1678ACu;
}
