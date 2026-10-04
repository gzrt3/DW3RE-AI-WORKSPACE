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

// Function: entry_00248b40
// Address: 0x248b40 - 0x248b6c
void entry_00248b40_0x248b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248b40_0x248b40");
#endif

    ctx->pc = 0x248b40u;

    // 0x248b40: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248b40u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248b44: 0x330c1fff  andi        $t4, $t8, 0x1FFF
    ctx->pc = 0x248b44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)8191);
    // 0x248b48: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248B48u;
    {
        const bool branch_taken_0x248b48 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B48u;
        // 0x248b4c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b48) {
            ctx->pc = 0x248BACu;
            return;
        }
    }
    ctx->pc = 0x248B50u;
    // 0x248b50: 0x31641fff  andi        $a0, $t3, 0x1FFF
    ctx->pc = 0x248b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8191);
    // 0x248b54: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248b58: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248b5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248b60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248B60u;
    {
        const bool branch_taken_0x248b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B60u;
        // 0x248b64: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b60) {
            ctx->pc = 0x248B6Cu;
            return;
        }
    }
    ctx->pc = 0x248B68u;
    // 0x248b68: 0x25cee000  addiu       $t6, $t6, -0x2000
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294959104));
    ctx->pc = 0x248b6cu;
}
