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

// Function: entry_0023a6ec
// Address: 0x23a6ec - 0x23a71c
void entry_0023a6ec_0x23a6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a6ec_0x23a6ec");
#endif

    ctx->pc = 0x23a6ecu;

label_23a6ec:
    // 0x23a6ec: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x23a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x23a6f0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x23a6f4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x23a6f8: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a6fc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x23a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x23a700: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A700u;
    {
        const bool branch_taken_0x23a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A700u;
        // 0x23a704: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a700) {
            ctx->pc = 0x23A6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a6ec;
        }
    }
    ctx->pc = 0x23A708u;
    // 0x23a708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A708u;
    {
        const bool branch_taken_0x23a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A708u;
        // 0x23a70c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a708) {
            ctx->pc = 0x23A71Cu;
            return;
        }
    }
    ctx->pc = 0x23A710u;
    // 0x23a710: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23a714: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x23a718: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x23a71cu;
}
