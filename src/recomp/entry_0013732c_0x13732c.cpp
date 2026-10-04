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

// Function: entry_0013732c
// Address: 0x13732c - 0x137348
void entry_0013732c_0x13732c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013732c_0x13732c");
#endif

    ctx->pc = 0x13732cu;

    // 0x13732c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137330: 0x9422a3e6  lhu         $v0, -0x5C1A($at)
    ctx->pc = 0x137330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x30A3E6u));
    // 0x137334: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137334u;
    {
        const bool branch_taken_0x137334 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x137338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137334u;
        // 0x137338: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137334) {
            ctx->pc = 0x137348u;
            return;
        }
    }
    ctx->pc = 0x13733Cu;
    // 0x13733c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137340u;
    {
        const bool branch_taken_0x137340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137340u;
        // 0x137344: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137340) {
            ctx->pc = 0x137360u;
            return;
        }
    }
    ctx->pc = 0x137348u;
}
