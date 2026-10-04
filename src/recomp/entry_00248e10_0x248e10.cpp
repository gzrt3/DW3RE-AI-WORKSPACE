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

// Function: entry_00248e10
// Address: 0x248e10 - 0x248e3c
void entry_00248e10_0x248e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248e10_0x248e10");
#endif

    ctx->pc = 0x248e10u;

    // 0x248e10: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248e10u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248e14: 0x330c03ff  andi        $t4, $t8, 0x3FF
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1023);
    // 0x248e18: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248E18u;
    {
        const bool branch_taken_0x248e18 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E18u;
        // 0x248e1c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e18) {
            ctx->pc = 0x248E7Cu;
            return;
        }
    }
    ctx->pc = 0x248E20u;
    // 0x248e20: 0x316403ff  andi        $a0, $t3, 0x3FF
    ctx->pc = 0x248e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1023);
    // 0x248e24: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248e28: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248e2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248e30: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248E30u;
    {
        const bool branch_taken_0x248e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E30u;
        // 0x248e34: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e30) {
            ctx->pc = 0x248E3Cu;
            return;
        }
    }
    ctx->pc = 0x248E38u;
    // 0x248e38: 0x25cefc00  addiu       $t6, $t6, -0x400
    ctx->pc = 0x248e38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966272));
    ctx->pc = 0x248e3cu;
}
