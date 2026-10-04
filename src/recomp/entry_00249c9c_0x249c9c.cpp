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

// Function: entry_00249c9c
// Address: 0x249c9c - 0x249ce8
void entry_00249c9c_0x249c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249c9c_0x249c9c");
#endif

    ctx->pc = 0x249c9cu;

    // 0x249c9c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249ca0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249ca4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x249ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x249ca8: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x249cac: 0xe11821  addu        $v1, $a3, $at
    ctx->pc = 0x249cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249cb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249CB0u;
    {
        const bool branch_taken_0x249cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CB0u;
        // 0x249cb4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cb0) {
            ctx->pc = 0x249CE8u;
            return;
        }
    }
    ctx->pc = 0x249CB8u;
    // 0x249cb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249cbc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249cc0: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x249cc4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249cc8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249ccc: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249cccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x249cd0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249cd4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249cd8: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x249cdc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249ce0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249ce4: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249ce8u;
}
