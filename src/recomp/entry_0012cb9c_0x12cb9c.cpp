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

// Function: entry_0012cb9c
// Address: 0x12cb9c - 0x12cbb4
void entry_0012cb9c_0x12cb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb9c_0x12cb9c");
#endif

    ctx->pc = 0x12cb9cu;

    // 0x12cb9c: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x12cb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cba0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBA0u;
    {
        const bool branch_taken_0x12cba0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBA0u;
        // 0x12cba4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cba0) {
            ctx->pc = 0x12CBB4u;
            return;
        }
    }
    ctx->pc = 0x12CBA8u;
    // 0x12cba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12CBACu;
    {
        const bool branch_taken_0x12cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBACu;
        // 0x12cbb0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbac) {
            ctx->pc = 0x12CBCCu;
            return;
        }
    }
    ctx->pc = 0x12CBB4u;
}
