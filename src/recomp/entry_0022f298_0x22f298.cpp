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

// Function: entry_0022f298
// Address: 0x22f298 - 0x22f2a8
void entry_0022f298_0x22f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f298_0x22f298");
#endif

    ctx->pc = 0x22f298u;

    // 0x22f298: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22f29c: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x22f29cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f2a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F2A0u;
    {
        const bool branch_taken_0x22f2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2A0u;
        // 0x22f2a4: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2a0) {
            ctx->pc = 0x22F270u;
            return;
        }
    }
    ctx->pc = 0x22F2A8u;
}
