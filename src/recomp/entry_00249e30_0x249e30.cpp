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

// Function: entry_00249e30
// Address: 0x249e30 - 0x249e74
void entry_00249e30_0x249e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249e30_0x249e30");
#endif

    ctx->pc = 0x249e30u;

    // 0x249e30: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249e34: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x249e38: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249E3Cu;
    {
        const bool branch_taken_0x249e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E3Cu;
        // 0x249e40: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e3c) {
            ctx->pc = 0x249E74u;
            return;
        }
    }
    ctx->pc = 0x249E44u;
    // 0x249e44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e48: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e4c: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x249e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e54: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e58: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x249e58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e60: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e64: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x249e64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e6c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e70: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x249e70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249e74u;
}
