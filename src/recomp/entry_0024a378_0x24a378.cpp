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

// Function: entry_0024a378
// Address: 0x24a378 - 0x24a3bc
void entry_0024a378_0x24a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a378_0x24a378");
#endif

    ctx->pc = 0x24a378u;

    // 0x24a378: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a37c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x24a380: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a384: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A384u;
    {
        const bool branch_taken_0x24a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a384) {
            ctx->pc = 0x24A3BCu;
            return;
        }
    }
    ctx->pc = 0x24A38Cu;
    // 0x24a38c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a390: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a390u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a394: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a398: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a39c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3a0: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3a8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3ac: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3b4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3b8: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a3bcu;
}
