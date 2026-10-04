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

// Function: entry_001d4f9c
// Address: 0x1d4f9c - 0x1d4fcc
void entry_001d4f9c_0x1d4f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f9c_0x1d4f9c");
#endif

    ctx->pc = 0x1d4f9cu;

    // 0x1d4f9c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4F9Cu;
    {
        const bool branch_taken_0x1d4f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f9c) {
            ctx->pc = 0x1D4FCCu;
            return;
        }
    }
    ctx->pc = 0x1D4FA4u;
    // 0x1d4fa4: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1d4fa8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d4fac: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x1d4facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x1d4fb0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4fb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d4fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d4fb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4FB8u;
    {
        const bool branch_taken_0x1d4fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fb8) {
            ctx->pc = 0x1D4FCCu;
            return;
        }
    }
    ctx->pc = 0x1D4FC0u;
    // 0x1d4fc0: 0x84a301ae  lh          $v1, 0x1AE($a1)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 430)));
    // 0x1d4fc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4fc8: 0xa4a301ae  sh          $v1, 0x1AE($a1)
    ctx->pc = 0x1d4fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 430), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d4fccu;
}
