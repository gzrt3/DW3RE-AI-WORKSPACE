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

// Function: entry_00249f48
// Address: 0x249f48 - 0x249f8c
void entry_00249f48_0x249f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249f48_0x249f48");
#endif

    ctx->pc = 0x249f48u;

    // 0x249f48: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249f4c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x249f50: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249F54u;
    {
        const bool branch_taken_0x249f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F54u;
        // 0x249f58: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f54) {
            ctx->pc = 0x249F8Cu;
            return;
        }
    }
    ctx->pc = 0x249F5Cu;
    // 0x249f5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f60: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f64: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x249f64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f6c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f70: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x249f70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f78: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f7c: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x249f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f88: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x249f88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249f8cu;
}
