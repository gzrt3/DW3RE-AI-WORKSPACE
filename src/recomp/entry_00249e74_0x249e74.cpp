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

// Function: entry_00249e74
// Address: 0x249e74 - 0x249ec0
void entry_00249e74_0x249e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249e74_0x249e74");
#endif

    ctx->pc = 0x249e74u;

    // 0x249e74: 0x0  nop
    ctx->pc = 0x249e74u;
    // NOP
    // 0x249e78: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249e7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e80: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x249e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x249e84: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e88) {
            ctx->pc = 0x249EC0u;
            return;
        }
    }
    ctx->pc = 0x249E90u;
    // 0x249e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e94: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e98: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249e98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249ea0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249ea4: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x249ea8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249eac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249eb0: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x249eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249eb8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249ebc: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249ec0u;
}
