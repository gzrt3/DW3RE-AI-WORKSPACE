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

// Function: entry_0020ffa8
// Address: 0x20ffa8 - 0x20ffcc
void entry_0020ffa8_0x20ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ffa8_0x20ffa8");
#endif

    ctx->pc = 0x20ffa8u;

label_20ffa8:
    // 0x20ffa8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ffac: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x20ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x20ffb0: 0x8c231880  lw          $v1, 0x1880($at)
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
    // 0x20ffb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ffb8: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x20ffb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x20ffbc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20ffc0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ffc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20FFC4u;
    {
        const bool branch_taken_0x20ffc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFC4u;
        // 0x20ffc8: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffc4) {
            ctx->pc = 0x20FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ffa8;
        }
    }
    ctx->pc = 0x20FFCCu;
}
