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

// Function: entry_001ec838
// Address: 0x1ec838 - 0x1ec880
void entry_001ec838_0x1ec838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec838_0x1ec838");
#endif

    ctx->pc = 0x1ec838u;

label_1ec838:
    // 0x1ec838: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1ec838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec83c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1ec83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1ec840: 0xa0e30083  sb          $v1, 0x83($a3)
    ctx->pc = 0x1ec840u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec844: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1ec844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec848: 0xa0e30123  sb          $v1, 0x123($a3)
    ctx->pc = 0x1ec848u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec84c: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x1ec84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
    // 0x1ec850: 0xa0e301c3  sb          $v1, 0x1C3($a3)
    ctx->pc = 0x1ec850u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 451), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec854: 0xa0e30263  sb          $v1, 0x263($a3)
    ctx->pc = 0x1ec854u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 611), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec858: 0xa0e30303  sb          $v1, 0x303($a3)
    ctx->pc = 0x1ec858u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 771), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec85c: 0xa0e303a3  sb          $v1, 0x3A3($a3)
    ctx->pc = 0x1ec85cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 931), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec860: 0xa0e30443  sb          $v1, 0x443($a3)
    ctx->pc = 0x1ec860u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1091), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec864: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EC864u;
    {
        const bool branch_taken_0x1ec864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0xa0e304e3  sb          $v1, 0x4E3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1251), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec864) {
            ctx->pc = 0x1EC838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec838;
        }
    }
    ctx->pc = 0x1EC86Cu;
    // 0x1ec86c: 0x2901000d  slti        $at, $t0, 0xD
    ctx->pc = 0x1ec86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1ec870: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC870u;
    {
        const bool branch_taken_0x1ec870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC870u;
        // 0x1ec874: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec870) {
            ctx->pc = 0x1EC8A0u;
            return;
        }
    }
    ctx->pc = 0x1EC878u;
    // 0x1ec878: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ec87c: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->pc = 0x1ec880u;
}
