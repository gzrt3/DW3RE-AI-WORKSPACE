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

// Function: entry_00249f8c
// Address: 0x249f8c - 0x249fd8
void entry_00249f8c_0x249f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249f8c_0x249f8c");
#endif

    ctx->pc = 0x249f8cu;

    // 0x249f8c: 0x0  nop
    ctx->pc = 0x249f8cu;
    // NOP
    // 0x249f90: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249f94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f98: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x249f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x249f9c: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249FA0u;
    {
        const bool branch_taken_0x249fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA0u;
        // 0x249fa4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa0) {
            ctx->pc = 0x249FD8u;
            return;
        }
    }
    ctx->pc = 0x249FA8u;
    // 0x249fa8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249facu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fb0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x249fb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fb8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fbc: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x249fc0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fc4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fc8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x249fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fd0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fd4: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249fd8u;
}
