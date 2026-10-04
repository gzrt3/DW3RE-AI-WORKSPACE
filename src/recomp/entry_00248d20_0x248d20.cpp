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

// Function: entry_00248d20
// Address: 0x248d20 - 0x248d4c
void entry_00248d20_0x248d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248d20_0x248d20");
#endif

    ctx->pc = 0x248d20u;

    // 0x248d20: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248d20u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248d24: 0x330c07ff  andi        $t4, $t8, 0x7FF
    ctx->pc = 0x248d24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2047);
    // 0x248d28: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248D28u;
    {
        const bool branch_taken_0x248d28 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D28u;
        // 0x248d2c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d28) {
            ctx->pc = 0x248D8Cu;
            return;
        }
    }
    ctx->pc = 0x248D30u;
    // 0x248d30: 0x316407ff  andi        $a0, $t3, 0x7FF
    ctx->pc = 0x248d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x248d34: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248d38: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248d3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248d40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248D40u;
    {
        const bool branch_taken_0x248d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D40u;
        // 0x248d44: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d40) {
            ctx->pc = 0x248D4Cu;
            return;
        }
    }
    ctx->pc = 0x248D48u;
    // 0x248d48: 0x25cef800  addiu       $t6, $t6, -0x800
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965248));
    ctx->pc = 0x248d4cu;
}
