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

// Function: entry_0024a260
// Address: 0x24a260 - 0x24a2a4
void entry_0024a260_0x24a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a260_0x24a260");
#endif

    ctx->pc = 0x24a260u;

    // 0x24a260: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a264: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x24a268: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a26c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A26Cu;
    {
        const bool branch_taken_0x24a26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A26Cu;
        // 0x24a270: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a26c) {
            ctx->pc = 0x24A2A4u;
            return;
        }
    }
    ctx->pc = 0x24A274u;
    // 0x24a274: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a278: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a27c: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a280: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a284: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a288: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a288u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a28c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a290: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a294: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a294u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a298: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a29c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2a0: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a2a4u;
}
