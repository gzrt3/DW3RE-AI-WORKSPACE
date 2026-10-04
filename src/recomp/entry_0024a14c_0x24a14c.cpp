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

// Function: entry_0024a14c
// Address: 0x24a14c - 0x24a198
void entry_0024a14c_0x24a14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a14c_0x24a14c");
#endif

    ctx->pc = 0x24a14cu;

    // 0x24a14c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a150: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a154: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a158: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x24a15c: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a160: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A160u;
    {
        const bool branch_taken_0x24a160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A160u;
        // 0x24a164: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a160) {
            ctx->pc = 0x24A198u;
            return;
        }
    }
    ctx->pc = 0x24A168u;
    // 0x24a168: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a16c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a170: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a170u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a174: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a178: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a17c: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a180: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a184: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a188: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a188u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a18c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a190: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a190u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a194: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a194u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a198u;
}
