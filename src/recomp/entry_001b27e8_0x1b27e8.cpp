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

// Function: entry_001b27e8
// Address: 0x1b27e8 - 0x1b2810
void entry_001b27e8_0x1b27e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b27e8_0x1b27e8");
#endif

    ctx->pc = 0x1b27e8u;

    // 0x1b27e8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b27e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b27ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B27ECu;
    {
        const bool branch_taken_0x1b27ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27ECu;
        // 0x1b27f0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27ec) {
            ctx->pc = 0x1B2810u;
            return;
        }
    }
    ctx->pc = 0x1B27F4u;
    // 0x1b27f4: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1b27f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x1b27f8: 0x0  nop
    ctx->pc = 0x1b27f8u;
    // NOP
    // 0x1b27fc: 0x0  nop
    ctx->pc = 0x1b27fcu;
    // NOP
    // 0x1b2800: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b2800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x1b2804: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1B2804u;
    {
        const bool branch_taken_0x1b2804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2804u;
        // 0x1b2808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2804) {
            ctx->pc = 0x1B2BC0u;
            return;
        }
    }
    ctx->pc = 0x1B280Cu;
    // 0x1b280c: 0x0  nop
    ctx->pc = 0x1b280cu;
    // NOP
    ctx->pc = 0x1b2810u;
}
