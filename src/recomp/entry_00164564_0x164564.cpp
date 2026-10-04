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

// Function: entry_00164564
// Address: 0x164564 - 0x16457c
void entry_00164564_0x164564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164564_0x164564");
#endif

    ctx->pc = 0x164564u;

    // 0x164564: 0x0  nop
    ctx->pc = 0x164564u;
    // NOP
    // 0x164568: 0x28c200c8  slti        $v0, $a2, 0xC8
    ctx->pc = 0x164568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x16456c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16456c) {
            ctx->pc = 0x16457Cu;
            return;
        }
    }
    ctx->pc = 0x164574u;
    // 0x164574: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x164574u;
    {
        const bool branch_taken_0x164574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164574u;
        // 0x164578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164574) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x16457Cu;
}
