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

// Function: entry_0012cbcc
// Address: 0x12cbcc - 0x12cbe8
void entry_0012cbcc_0x12cbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cbcc_0x12cbcc");
#endif

    ctx->pc = 0x12cbccu;

    // 0x12cbcc: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x12cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbd0: 0x960202f8  lhu         $v0, 0x2F8($s0)
    ctx->pc = 0x12cbd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12cbd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBD4u;
    {
        const bool branch_taken_0x12cbd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBD4u;
        // 0x12cbd8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbd4) {
            ctx->pc = 0x12CBE8u;
            return;
        }
    }
    ctx->pc = 0x12CBDCu;
    // 0x12cbdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cbdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CBE0u;
    {
        const bool branch_taken_0x12cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBE0u;
        // 0x12cbe4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe0) {
            ctx->pc = 0x12CC04u;
            return;
        }
    }
    ctx->pc = 0x12CBE8u;
}
