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

// Function: entry_00143cf4
// Address: 0x143cf4 - 0x143d10
void entry_00143cf4_0x143cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143cf4_0x143cf4");
#endif

    ctx->pc = 0x143cf4u;

    // 0x143cf4: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x143cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x143cf8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x143cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143cfc: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x143CFCu;
    {
        const bool branch_taken_0x143cfc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x143D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CFCu;
        // 0x143d00: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cfc) {
            ctx->pc = 0x143D10u;
            return;
        }
    }
    ctx->pc = 0x143D04u;
    // 0x143d04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x143d04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143D08u;
    {
        const bool branch_taken_0x143d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D08u;
        // 0x143d0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d08) {
            ctx->pc = 0x143D28u;
            return;
        }
    }
    ctx->pc = 0x143D10u;
}
