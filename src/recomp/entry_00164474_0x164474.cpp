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

// Function: entry_00164474
// Address: 0x164474 - 0x16448c
void entry_00164474_0x164474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164474_0x164474");
#endif

    ctx->pc = 0x164474u;

    // 0x164474: 0x0  nop
    ctx->pc = 0x164474u;
    // NOP
    // 0x164478: 0x28e2012c  slti        $v0, $a3, 0x12C
    ctx->pc = 0x164478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x16447c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16447Cu;
    {
        const bool branch_taken_0x16447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16447Cu;
        // 0x164480: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16447c) {
            ctx->pc = 0x16448Cu;
            return;
        }
    }
    ctx->pc = 0x164484u;
    // 0x164484: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x164484u;
    {
        const bool branch_taken_0x164484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164484u;
        // 0x164488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164484) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x16448Cu;
}
