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

// Function: entry_00248c30
// Address: 0x248c30 - 0x248c5c
void entry_00248c30_0x248c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248c30_0x248c30");
#endif

    ctx->pc = 0x248c30u;

    // 0x248c30: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248c30u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248c34: 0x330c0fff  andi        $t4, $t8, 0xFFF
    ctx->pc = 0x248c34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4095);
    // 0x248c38: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248C38u;
    {
        const bool branch_taken_0x248c38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C38u;
        // 0x248c3c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c38) {
            ctx->pc = 0x248C9Cu;
            return;
        }
    }
    ctx->pc = 0x248C40u;
    // 0x248c40: 0x31640fff  andi        $a0, $t3, 0xFFF
    ctx->pc = 0x248c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4095);
    // 0x248c44: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248c48: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248c4c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248c50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248C50u;
    {
        const bool branch_taken_0x248c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C50u;
        // 0x248c54: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c50) {
            ctx->pc = 0x248C5Cu;
            return;
        }
    }
    ctx->pc = 0x248C58u;
    // 0x248c58: 0x25cef000  addiu       $t6, $t6, -0x1000
    ctx->pc = 0x248c58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294963200));
    ctx->pc = 0x248c5cu;
}
