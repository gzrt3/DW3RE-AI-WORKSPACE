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

// Function: entry_0015732c
// Address: 0x15732c - 0x157348
void entry_0015732c_0x15732c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015732c_0x15732c");
#endif

    ctx->pc = 0x15732cu;

    // 0x15732c: 0x0  nop
    ctx->pc = 0x15732cu;
    // NOP
    // 0x157330: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x157330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x157334: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x157334u;
    {
        const bool branch_taken_0x157334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157334u;
        // 0x157338: 0x95100  sll         $t2, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157334) {
            ctx->pc = 0x157374u;
            return;
        }
    }
    ctx->pc = 0x15733Cu;
    // 0x15733c: 0x95880  sll         $t3, $t1, 2
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x157340: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x157344: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x157344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->pc = 0x157348u;
}
