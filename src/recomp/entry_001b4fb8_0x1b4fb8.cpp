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

// Function: entry_001b4fb8
// Address: 0x1b4fb8 - 0x1b4ff0
void entry_001b4fb8_0x1b4fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4fb8_0x1b4fb8");
#endif

    ctx->pc = 0x1b4fb8u;

    // 0x1b4fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4fc0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b4fc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b4fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b4fc8: 0xc421b268  lwc1        $f1, -0x4D98($at)
    ctx->pc = 0x1b4fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4fcc: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b4fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b4fd0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b4fd4: 0xc422b258  lwc1        $f2, -0x4DA8($at)
    ctx->pc = 0x1b4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4fd8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b4fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b4fdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fe0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x1b4fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x1b4fe4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4FE4u;
    {
        const bool branch_taken_0x1b4fe4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE4u;
        // 0x1b4fe8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe4) {
            ctx->pc = 0x1B4FF0u;
            return;
        }
    }
    ctx->pc = 0x1B4FECu;
    // 0x1b4fec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4fecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1b4ff0u;
}
