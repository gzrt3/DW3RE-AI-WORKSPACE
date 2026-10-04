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

// Function: entry_001b4e90
// Address: 0x1b4e90 - 0x1b4eb8
void entry_001b4e90_0x1b4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4e90_0x1b4e90");
#endif

    ctx->pc = 0x1b4e90u;

    // 0x1b4e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4e98: 0x0  nop
    ctx->pc = 0x1b4e98u;
    // NOP
    // 0x1b4e9c: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x1b4e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ea0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ea4: 0x0  nop
    ctx->pc = 0x1b4ea4u;
    // NOP
    // 0x1b4ea8: 0x0  nop
    ctx->pc = 0x1b4ea8u;
    // NOP
    // 0x1b4eac: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4eacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1b4eb0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B4EB0u;
    {
        const bool branch_taken_0x1b4eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB0u;
        // 0x1b4eb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4eb0) {
            ctx->pc = 0x1B4F14u;
            return;
        }
    }
    ctx->pc = 0x1B4EB8u;
}
