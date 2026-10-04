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

// Function: entry_0020fe74
// Address: 0x20fe74 - 0x20fea0
void entry_0020fe74_0x20fe74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fe74_0x20fe74");
#endif

    ctx->pc = 0x20fe74u;

label_20fe74:
    // 0x20fe74: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fe78: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x20fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20fe7c: 0xdc231888  ld          $v1, 0x1888($at)
    ctx->pc = 0x20fe7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x20fe80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20fe80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20fe84: 0x462814  dsllv       $a1, $a2, $v0
    ctx->pc = 0x20fe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x20fe88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fe8c: 0x28820025  slti        $v0, $a0, 0x25
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x20fe90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20fe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20fe94: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fe98: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20FE98u;
    {
        const bool branch_taken_0x20fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE98u;
        // 0x20fe9c: 0xfc231888  sd          $v1, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe98) {
            ctx->pc = 0x20FE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fe74;
        }
    }
    ctx->pc = 0x20FEA0u;
}
