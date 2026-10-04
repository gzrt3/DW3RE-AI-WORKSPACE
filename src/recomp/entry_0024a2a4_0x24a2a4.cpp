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

// Function: entry_0024a2a4
// Address: 0x24a2a4 - 0x24a2f0
void entry_0024a2a4_0x24a2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a2a4_0x24a2a4");
#endif

    ctx->pc = 0x24a2a4u;

    // 0x24a2a4: 0x0  nop
    ctx->pc = 0x24a2a4u;
    // NOP
    // 0x24a2a8: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a2ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2b0: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x24a2b4: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A2B8u;
    {
        const bool branch_taken_0x24a2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2B8u;
        // 0x24a2bc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2b8) {
            ctx->pc = 0x24A2F0u;
            return;
        }
    }
    ctx->pc = 0x24A2C0u;
    // 0x24a2c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2c4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2c8: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a2cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2d0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2d4: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a2d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2e0: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a2e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2ec: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a2f0u;
}
