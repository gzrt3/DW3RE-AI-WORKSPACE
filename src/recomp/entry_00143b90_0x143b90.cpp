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

// Function: entry_00143b90
// Address: 0x143b90 - 0x143bb0
void entry_00143b90_0x143b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143b90_0x143b90");
#endif

    ctx->pc = 0x143b90u;

    // 0x143b90: 0xa4a4003e  sh          $a0, 0x3E($a1)
    ctx->pc = 0x143b90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x143b94: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x143b98: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x143b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143b9c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x143B9Cu;
    {
        const bool branch_taken_0x143b9c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x143b9c) {
            ctx->pc = 0x143BB0u;
            return;
        }
    }
    ctx->pc = 0x143BA4u;
    // 0x143ba4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x143ba4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143ba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143BA8u;
    {
        const bool branch_taken_0x143ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BA8u;
        // 0x143bac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ba8) {
            ctx->pc = 0x143BCCu;
            return;
        }
    }
    ctx->pc = 0x143BB0u;
}
