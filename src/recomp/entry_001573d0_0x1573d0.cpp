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

// Function: entry_001573d0
// Address: 0x1573d0 - 0x1573f8
void entry_001573d0_0x1573d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001573d0_0x1573d0");
#endif

    ctx->pc = 0x1573d0u;

label_1573d0:
    // 0x1573d0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1573d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1573d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1573d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1573d8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1573d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1573dc: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1573e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573e4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1573e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1573e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1573ec: 0x29a30004  slti        $v1, $t5, 0x4
    ctx->pc = 0x1573ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1573f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1573F0u;
    {
        const bool branch_taken_0x1573f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573F0u;
        // 0x1573f4: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573f0) {
            ctx->pc = 0x1573D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573d0;
        }
    }
    ctx->pc = 0x1573F8u;
}
