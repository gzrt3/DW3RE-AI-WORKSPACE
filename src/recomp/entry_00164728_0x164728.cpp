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

// Function: entry_00164728
// Address: 0x164728 - 0x164778
void entry_00164728_0x164728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164728_0x164728");
#endif

    ctx->pc = 0x164728u;

    // 0x164728: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x164728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16472c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x164730: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x164730u;
    {
        const bool branch_taken_0x164730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x164734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164730u;
        // 0x164734: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164730) {
            ctx->pc = 0x1647C0u;
            return;
        }
    }
    ctx->pc = 0x164738u;
    // 0x164738: 0x10a4001e  beq         $a1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x164738u;
    {
        const bool branch_taken_0x164738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x164738) {
            ctx->pc = 0x1647B4u;
            return;
        }
    }
    ctx->pc = 0x164740u;
    // 0x164740: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x164740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164744: 0x10a40018  beq         $a1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x164744u;
    {
        const bool branch_taken_0x164744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x164748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164744u;
        // 0x164748: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164744) {
            ctx->pc = 0x1647A8u;
            return;
        }
    }
    ctx->pc = 0x16474Cu;
    // 0x16474c: 0x10a40013  beq         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16474Cu;
    {
        const bool branch_taken_0x16474c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x16474c) {
            ctx->pc = 0x16479Cu;
            return;
        }
    }
    ctx->pc = 0x164754u;
    // 0x164754: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164758: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x164758u;
    {
        const bool branch_taken_0x164758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164758u;
        // 0x16475c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164758) {
            ctx->pc = 0x164790u;
            return;
        }
    }
    ctx->pc = 0x164760u;
    // 0x164760: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164760u;
    {
        const bool branch_taken_0x164760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x164760) {
            ctx->pc = 0x164784u;
            return;
        }
    }
    ctx->pc = 0x164768u;
    // 0x164768: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164768u;
    {
        const bool branch_taken_0x164768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x164768) {
            ctx->pc = 0x164778u;
            return;
        }
    }
    ctx->pc = 0x164770u;
    // 0x164770: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x164770u;
    {
        const bool branch_taken_0x164770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164770) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164778u;
}
