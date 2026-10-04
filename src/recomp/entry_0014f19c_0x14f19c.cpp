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

// Function: entry_0014f19c
// Address: 0x14f19c - 0x14f1a8
void entry_0014f19c_0x14f19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f19c_0x14f19c");
#endif

    ctx->pc = 0x14f19cu;

    // 0x14f19c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f1a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14F1A0u;
    {
        const bool branch_taken_0x14f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1A0u;
        // 0x14f1a4: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1a0) {
            ctx->pc = 0x14F1E8u;
            return;
        }
    }
    ctx->pc = 0x14F1A8u;
}
