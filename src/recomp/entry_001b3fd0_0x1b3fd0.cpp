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

// Function: entry_001b3fd0
// Address: 0x1b3fd0 - 0x1b3ff0
void entry_001b3fd0_0x1b3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3fd0_0x1b3fd0");
#endif

    ctx->pc = 0x1b3fd0u;

    // 0x1b3fd0: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x1b3fd4: 0x3c013e90  lui         $at, 0x3E90
    ctx->pc = 0x1b3fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16016 << 16));
    // 0x1b3fd8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b3fdc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b3fe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE0u;
        // 0x1b3fe4: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B3FF0u;
            return;
        }
    }
    ctx->pc = 0x1B3FE8u;
    // 0x1b3fe8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3fec: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1b3fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    ctx->pc = 0x1b3ff0u;
}
