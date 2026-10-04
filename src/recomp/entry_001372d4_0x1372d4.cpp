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

// Function: entry_001372d4
// Address: 0x1372d4 - 0x1372ec
void entry_001372d4_0x1372d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001372d4_0x1372d4");
#endif

    ctx->pc = 0x1372d4u;

    // 0x1372d4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1372d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1372d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1372D8u;
    {
        const bool branch_taken_0x1372d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372D8u;
        // 0x1372dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372d8) {
            ctx->pc = 0x1372ECu;
            return;
        }
    }
    ctx->pc = 0x1372E0u;
    // 0x1372e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1372e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1372e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1372E4u;
    {
        const bool branch_taken_0x1372e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372E4u;
        // 0x1372e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372e4) {
            ctx->pc = 0x137304u;
            return;
        }
    }
    ctx->pc = 0x1372ECu;
}
