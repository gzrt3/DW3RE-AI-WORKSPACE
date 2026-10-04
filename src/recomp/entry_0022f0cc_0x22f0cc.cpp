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

// Function: entry_0022f0cc
// Address: 0x22f0cc - 0x22f0e0
void entry_0022f0cc_0x22f0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f0cc_0x22f0cc");
#endif

    ctx->pc = 0x22f0ccu;

    // 0x22f0cc: 0x0  nop
    ctx->pc = 0x22f0ccu;
    // NOP
    // 0x22f0d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22f0d4: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x22f0d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x22f0d8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x22F0D8u;
    {
        const bool branch_taken_0x22f0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D8u;
        // 0x22f0dc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0d8) {
            ctx->pc = 0x22EFC0u;
            return;
        }
    }
    ctx->pc = 0x22F0E0u;
}
