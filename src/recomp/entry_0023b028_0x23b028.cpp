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

// Function: entry_0023b028
// Address: 0x23b028 - 0x23b044
void entry_0023b028_0x23b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b028_0x23b028");
#endif

    ctx->pc = 0x23b028u;

label_23b028:
    // 0x23b028: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x23b028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x23b02c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x23b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23b030: 0x0  nop
    ctx->pc = 0x23b030u;
    // NOP
    // 0x23b034: 0x0  nop
    ctx->pc = 0x23b034u;
    // NOP
    // 0x23b038: 0x0  nop
    ctx->pc = 0x23b038u;
    // NOP
    // 0x23b03c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B03Cu;
    {
        const bool branch_taken_0x23b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B03Cu;
        // 0x23b040: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b03c) {
            ctx->pc = 0x23B028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b028;
        }
    }
    ctx->pc = 0x23B044u;
}
