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

// Function: entry_001644ec
// Address: 0x1644ec - 0x164504
void entry_001644ec_0x1644ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644ec_0x1644ec");
#endif

    ctx->pc = 0x1644ecu;

    // 0x1644ec: 0x0  nop
    ctx->pc = 0x1644ecu;
    // NOP
    // 0x1644f0: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x1644f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1644f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1644F4u;
    {
        const bool branch_taken_0x1644f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1644F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F4u;
        // 0x1644f8: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f4) {
            ctx->pc = 0x164504u;
            return;
        }
    }
    ctx->pc = 0x1644FCu;
    // 0x1644fc: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1644FCu;
    {
        const bool branch_taken_0x1644fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644FCu;
        // 0x164500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644fc) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164504u;
}
