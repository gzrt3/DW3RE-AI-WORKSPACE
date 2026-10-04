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

// Function: entry_0024a1d4
// Address: 0x24a1d4 - 0x24a220
void entry_0024a1d4_0x24a1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a1d4_0x24a1d4");
#endif

    ctx->pc = 0x24a1d4u;

    // 0x24a1d4: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a1d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a1dc: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a1e0: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x24a1e4: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a1e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E8u;
        // 0x24a1ec: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A220u;
            return;
        }
    }
    ctx->pc = 0x24A1F0u;
    // 0x24a1f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a1f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a1f8: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a1fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a200: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a200u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a204: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a208: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a20c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a210: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a214: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a218: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a218u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a21c: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a220u;
}
