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

// Function: FUN_001164b0
// Address: 0x1164b0 - 0x116534
void FUN_001164b0_0x1164b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001164b0_0x1164b0");
#endif

    ctx->pc = 0x1164b0u;

    // 0x1164b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1164b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1164b4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1164b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1164b8: 0x9027490d  lbu         $a3, 0x490D($at)
    ctx->pc = 0x1164b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x33490Du));
    // 0x1164bc: 0x24c6f9e0  addiu       $a2, $a2, -0x620
    ctx->pc = 0x1164bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965728));
    // 0x1164c0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1164c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1164c4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1164c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1164c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1164c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1164cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1164ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1164d0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1164d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1164d4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1164d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1164d8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1164d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1164dc: 0xaf8680d8  sw          $a2, -0x7F28($gp)
    ctx->pc = 0x1164dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 6));
    // 0x1164e0: 0xaf8580dc  sw          $a1, -0x7F24($gp)
    ctx->pc = 0x1164e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 5));
    // 0x1164e4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1164E4u;
    {
        const bool branch_taken_0x1164e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164E4u;
        // 0x1164e8: 0xaf8480e0  sw          $a0, -0x7F20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164e4) {
            ctx->pc = 0x116534u;
            return;
        }
    }
    ctx->pc = 0x1164ECu;
    // 0x1164ec: 0x8f8480d8  lw          $a0, -0x7F28($gp)
    ctx->pc = 0x1164ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x1164f0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1164F0u;
    {
        const bool branch_taken_0x1164f0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1164F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164F0u;
        // 0x1164f4: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164f0) {
            ctx->pc = 0x116500u;
            goto label_116500;
        }
    }
    ctx->pc = 0x1164F8u;
    // 0x1164f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1164f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1164fc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1164fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_116500:
    // 0x116500: 0x8f8480dc  lw          $a0, -0x7F24($gp)
    ctx->pc = 0x116500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    // 0x116504: 0xaf8380d8  sw          $v1, -0x7F28($gp)
    ctx->pc = 0x116504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 3));
    // 0x116508: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116508u;
    {
        const bool branch_taken_0x116508 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116508u;
        // 0x11650c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116508) {
            ctx->pc = 0x116518u;
            goto label_116518;
        }
    }
    ctx->pc = 0x116510u;
    // 0x116510: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x116510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116514: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x116514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_116518:
    // 0x116518: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x116518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x11651c: 0xaf8380dc  sw          $v1, -0x7F24($gp)
    ctx->pc = 0x11651cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 3));
    // 0x116520: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116520u;
    {
        const bool branch_taken_0x116520 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x116524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116520u;
        // 0x116524: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116520) {
            ctx->pc = 0x116530u;
            goto label_116530;
        }
    }
    ctx->pc = 0x116528u;
    // 0x116528: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x116528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11652c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x11652cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_116530:
    // 0x116530: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x116530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    ctx->pc = 0x116534u;
}
