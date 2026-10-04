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

// Function: entry_001c00f4
// Address: 0x1c00f4 - 0x1c0108
void entry_001c00f4_0x1c00f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c00f4_0x1c00f4");
#endif

    ctx->pc = 0x1c00f4u;

    // 0x1c00f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c00f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C00F8u;
    {
        const bool branch_taken_0x1c00f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c00f8) {
            ctx->pc = 0x1C0108u;
            return;
        }
    }
    ctx->pc = 0x1C0100u;
    // 0x1c0100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0100u;
    {
        const bool branch_taken_0x1c0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0100) {
            ctx->pc = 0x1C0110u;
            return;
        }
    }
    ctx->pc = 0x1C0108u;
}
