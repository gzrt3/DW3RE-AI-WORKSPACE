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

// Function: entry_0021cce4
// Address: 0x21cce4 - 0x21ccfc
void entry_0021cce4_0x21cce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cce4_0x21cce4");
#endif

    ctx->pc = 0x21cce4u;

    // 0x21cce4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x21cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x21cce8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CCE8u;
    {
        const bool branch_taken_0x21cce8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE8u;
        // 0x21ccec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cce8) {
            ctx->pc = 0x21CCFCu;
            return;
        }
    }
    ctx->pc = 0x21CCF0u;
    // 0x21ccf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ccf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ccf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21CCF4u;
    {
        const bool branch_taken_0x21ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF4u;
        // 0x21ccf8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccf4) {
            ctx->pc = 0x21CD14u;
            return;
        }
    }
    ctx->pc = 0x21CCFCu;
}
