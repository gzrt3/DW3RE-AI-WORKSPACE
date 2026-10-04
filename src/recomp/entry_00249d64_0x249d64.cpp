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

// Function: entry_00249d64
// Address: 0x249d64 - 0x249db0
void entry_00249d64_0x249d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249d64_0x249d64");
#endif

    ctx->pc = 0x249d64u;

    // 0x249d64: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249d68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249d6c: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x249d70: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x249d74: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249d78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249D78u;
    {
        const bool branch_taken_0x249d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d78) {
            ctx->pc = 0x249DB0u;
            return;
        }
    }
    ctx->pc = 0x249D80u;
    // 0x249d80: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249d84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249d88: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249d88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x249d8c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249d90: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249d94: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249d94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x249d98: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249d9c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249da0: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249da0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x249da4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249da8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249dac: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249dacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249db0u;
}
