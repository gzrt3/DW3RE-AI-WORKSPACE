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

// Function: entry_0024a0ac
// Address: 0x24a0ac - 0x24a0f8
void entry_0024a0ac_0x24a0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a0ac_0x24a0ac");
#endif

    ctx->pc = 0x24a0acu;

    // 0x24a0ac: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a0b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a0b4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x24a0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24a0b8: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x24a0bc: 0xe11821  addu        $v1, $a3, $at
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A0C0u;
    {
        const bool branch_taken_0x24a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C0u;
        // 0x24a0c4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0c0) {
            ctx->pc = 0x24A0F8u;
            return;
        }
    }
    ctx->pc = 0x24A0C8u;
    // 0x24a0c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0cc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0d0: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a0d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0d8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0dc: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a0e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0e4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0e8: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a0ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0f0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0f4: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a0f8u;
}
