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

// Function: entry_0010e26c
// Address: 0x10e26c - 0x10e280
void entry_0010e26c_0x10e26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e26c_0x10e26c");
#endif

    ctx->pc = 0x10e26cu;

    // 0x10e26c: 0x0  nop
    ctx->pc = 0x10e26cu;
    // NOP
    // 0x10e270: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10e270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10e274: 0x28e30009  slti        $v1, $a3, 0x9
    ctx->pc = 0x10e274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e278: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10E278u;
    {
        const bool branch_taken_0x10e278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E278u;
        // 0x10e27c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e278) {
            ctx->pc = 0x10E224u;
            return;
        }
    }
    ctx->pc = 0x10E280u;
}
