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

// Function: entry_001b4db8
// Address: 0x1b4db8 - 0x1b4dd0
void entry_001b4db8_0x1b4db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4db8_0x1b4db8");
#endif

    ctx->pc = 0x1b4db8u;

    // 0x1b4db8: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x1b4dbc: 0xc440b264  lwc1        $f0, -0x4D9C($v0)
    ctx->pc = 0x1b4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4dc0: 0xc461b274  lwc1        $f1, -0x4D8C($v1)
    ctx->pc = 0x1b4dc0u;
    { uint32_t bits = FAST_READ32(0x2CB274u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b4dc8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1B4DC8u;
    {
        const bool branch_taken_0x1b4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DC8u;
        // 0x1b4dcc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dc8) {
            ctx->pc = 0x1B4FF0u;
            return;
        }
    }
    ctx->pc = 0x1B4DD0u;
}
