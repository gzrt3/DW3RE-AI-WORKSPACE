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

// Function: entry_00195fe4
// Address: 0x195fe4 - 0x195ff4
void entry_00195fe4_0x195fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195fe4_0x195fe4");
#endif

    ctx->pc = 0x195fe4u;

    // 0x195fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195FE4u;
    {
        const bool branch_taken_0x195fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195fe4) {
            ctx->pc = 0x195FF4u;
            return;
        }
    }
    ctx->pc = 0x195FECu;
    // 0x195fec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x195FECu;
    {
        const bool branch_taken_0x195fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x2484ffd7  addiu       $a0, $a0, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fec) {
            ctx->pc = 0x196020u;
            return;
        }
    }
    ctx->pc = 0x195FF4u;
}
