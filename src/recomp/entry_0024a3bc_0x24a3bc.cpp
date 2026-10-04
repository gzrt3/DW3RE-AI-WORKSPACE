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

// Function: entry_0024a3bc
// Address: 0x24a3bc - 0x24a408
void entry_0024a3bc_0x24a3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a3bc_0x24a3bc");
#endif

    ctx->pc = 0x24a3bcu;

    // 0x24a3bc: 0x0  nop
    ctx->pc = 0x24a3bcu;
    // NOP
    // 0x24a3c0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a3c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3c8: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x24a3cc: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A3D0u;
    {
        const bool branch_taken_0x24a3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D0u;
        // 0x24a3d4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3d0) {
            ctx->pc = 0x24A408u;
            return;
        }
    }
    ctx->pc = 0x24A3D8u;
    // 0x24a3d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3e0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3ec: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3f8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a400: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a404: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a404u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a408u;
}
