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

// Function: entry_001ce64c
// Address: 0x1ce64c - 0x1ce670
void entry_001ce64c_0x1ce64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce64c_0x1ce64c");
#endif

    ctx->pc = 0x1ce64cu;

    // 0x1ce64c: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1ce64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ce650: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE650u;
    {
        const bool branch_taken_0x1ce650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce650) {
            ctx->pc = 0x1CE670u;
            return;
        }
    }
    ctx->pc = 0x1CE658u;
    // 0x1ce658: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1ce658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce65c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce664: 0x0  nop
    ctx->pc = 0x1ce664u;
    // NOP
    // 0x1ce668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce66c: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x1ce66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    ctx->pc = 0x1ce670u;
}
