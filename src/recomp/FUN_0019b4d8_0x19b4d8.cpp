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

// Function: FUN_0019b4d8
// Address: 0x19b4d8 - 0x19b510
void FUN_0019b4d8_0x19b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b4d8_0x19b4d8");
#endif

    switch (ctx->pc) {
        case 0x19b4f0u: goto label_19b4f0;
        default: break;
    }

    ctx->pc = 0x19b4d8u;

    // 0x19b4d8: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x19B4D8u;
    {
        const bool branch_taken_0x19b4d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D8u;
        // 0x19b4dc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4d8) {
            ctx->pc = 0x19B510u;
            return;
        }
    }
    ctx->pc = 0x19B4E0u;
    // 0x19b4e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x19b4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x19b4e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b4e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19b4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x19b4ec: 0x0  nop
    ctx->pc = 0x19b4ecu;
    // NOP
label_19b4f0:
    // 0x19b4f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b4f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19b4f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19b4fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19b500: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19b504: 0x14e6fffa  bne         $a3, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4f0;
        }
    }
    ctx->pc = 0x19B50Cu;
    // 0x19b50c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19b510u;
}
