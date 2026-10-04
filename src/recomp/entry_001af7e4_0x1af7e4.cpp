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

// Function: entry_001af7e4
// Address: 0x1af7e4 - 0x1af7fc
void entry_001af7e4_0x1af7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af7e4_0x1af7e4");
#endif

    ctx->pc = 0x1af7e4u;

    // 0x1af7e4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1af7e8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF7E8u;
    {
        const bool branch_taken_0x1af7e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E8u;
        // 0x1af7ec: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7e8) {
            ctx->pc = 0x1AF7FCu;
            return;
        }
    }
    ctx->pc = 0x1AF7F0u;
    // 0x1af7f0: 0x26a25fc0  addiu       $v0, $s5, 0x5FC0
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
    // 0x1af7f4: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1af7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af7f8: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    ctx->pc = 0x1af7fcu;
}
