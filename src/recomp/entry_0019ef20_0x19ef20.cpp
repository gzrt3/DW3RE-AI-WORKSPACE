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

// Function: entry_0019ef20
// Address: 0x19ef20 - 0x19ef50
void entry_0019ef20_0x19ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef20_0x19ef20");
#endif

    ctx->pc = 0x19ef20u;

    // 0x19ef20: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x19EF20u;
    {
        const bool branch_taken_0x19ef20 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF20u;
        // 0x19ef24: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef20) {
            ctx->pc = 0x19EF54u;
            return;
        }
    }
    ctx->pc = 0x19EF28u;
    // 0x19ef28: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x19ef28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x19ef2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ef30: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x19ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x19ef34: 0x91823  negu        $v1, $t1
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x19ef38: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19ef3c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x19ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ef40: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x19ef40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ef44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EF44u;
    {
        const bool branch_taken_0x19ef44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF44u;
        // 0x19ef48: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef44) {
            ctx->pc = 0x19EF50u;
            return;
        }
    }
    ctx->pc = 0x19EF4Cu;
    // 0x19ef4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x19ef50u;
}
