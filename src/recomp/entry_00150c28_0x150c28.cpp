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

// Function: entry_00150c28
// Address: 0x150c28 - 0x150c38
void entry_00150c28_0x150c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c28_0x150c28");
#endif

    ctx->pc = 0x150c28u;

    // 0x150c28: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x150c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c2c: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x150c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150C30u;
    {
        const bool branch_taken_0x150c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C30u;
        // 0x150c34: 0xc4c00150  lwc1        $f0, 0x150($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c30) {
            ctx->pc = 0x150C48u;
            return;
        }
    }
    ctx->pc = 0x150C38u;
}
