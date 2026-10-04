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

// Function: entry_0010e870
// Address: 0x10e870 - 0x10e908
void entry_0010e870_0x10e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e870_0x10e870");
#endif

    ctx->pc = 0x10e870u;

label_10e870:
    // 0x10e870: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e870u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e874: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10e878: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e87c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e880: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x10e880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x10e884: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e888: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e88c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e890: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x10e890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x10e894: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e894u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e898: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e89c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8a0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x10e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x10e8a4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8a8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8ac: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8b0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x10e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x10e8b4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8b8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8bc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8c0: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x10e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x10e8c4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8c8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8cc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8d0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x10e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x10e8d4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8d8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8dc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8e0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x10e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x10e8e4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8e8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8ec: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8f0: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x10e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x10e8f4: 0x1880ffde  blez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x10E8F4u;
    {
        const bool branch_taken_0x10e8f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8F4u;
        // 0x10e8f8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8f4) {
            ctx->pc = 0x10E870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e870;
        }
    }
    ctx->pc = 0x10E8FCu;
    // 0x10e8fc: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x10e8fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e900: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E900u;
    {
        const bool branch_taken_0x10e900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E900u;
        // 0x10e904: 0x44880  sll         $t1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e900) {
            ctx->pc = 0x10E928u;
            return;
        }
    }
    ctx->pc = 0x10E908u;
}
