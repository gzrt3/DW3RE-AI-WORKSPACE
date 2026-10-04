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

// Function: entry_00157348
// Address: 0x157348 - 0x157374
void entry_00157348_0x157348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157348_0x157348");
#endif

    ctx->pc = 0x157348u;

label_157348:
    // 0x157348: 0x10b2021  addu        $a0, $t0, $t3
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x15734c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x15734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157350: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x157354: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x157358: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x15735c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x15735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157360: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x157364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157368: 0x123202a  slt         $a0, $t1, $v1
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15736c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15736Cu;
    {
        const bool branch_taken_0x15736c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15736Cu;
        // 0x157370: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15736c) {
            ctx->pc = 0x157348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157348;
        }
    }
    ctx->pc = 0x157374u;
}
