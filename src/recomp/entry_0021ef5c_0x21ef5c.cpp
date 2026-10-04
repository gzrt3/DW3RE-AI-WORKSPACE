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

// Function: entry_0021ef5c
// Address: 0x21ef5c - 0x21ef74
void entry_0021ef5c_0x21ef5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ef5c_0x21ef5c");
#endif

    ctx->pc = 0x21ef5cu;

    // 0x21ef5c: 0x0  nop
    ctx->pc = 0x21ef5cu;
    // NOP
    // 0x21ef60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21ef60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21ef64: 0x130182a  slt         $v1, $t1, $s0
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21ef68: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x21ef68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x21ef6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x21EF6Cu;
    {
        const bool branch_taken_0x21ef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF6Cu;
        // 0x21ef70: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef6c) {
            ctx->pc = 0x21EF40u;
            return;
        }
    }
    ctx->pc = 0x21EF74u;
}
