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

// Function: entry_00115f18
// Address: 0x115f18 - 0x115f30
void entry_00115f18_0x115f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f18_0x115f18");
#endif

    ctx->pc = 0x115f18u;

    // 0x115f18: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115F18u;
    {
        const bool branch_taken_0x115f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x115f18) {
            ctx->pc = 0x115F30u;
            return;
        }
    }
    ctx->pc = 0x115F20u;
    // 0x115f20: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x115f24: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x115f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f28: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x115F28u;
    {
        const bool branch_taken_0x115f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F28u;
        // 0x115f2c: 0x261067b0  addiu       $s0, $s0, 0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f28) {
            ctx->pc = 0x11600Cu;
            return;
        }
    }
    ctx->pc = 0x115F30u;
}
