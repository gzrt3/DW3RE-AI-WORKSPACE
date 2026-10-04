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

// Function: entry_0023ab68
// Address: 0x23ab68 - 0x23ab80
void entry_0023ab68_0x23ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ab68_0x23ab68");
#endif

    ctx->pc = 0x23ab68u;

    // 0x23ab68: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x23ab6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB70u;
    {
        const bool branch_taken_0x23ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB70u;
        // 0x23ab74: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab70) {
            ctx->pc = 0x23AB80u;
            return;
        }
    }
    ctx->pc = 0x23AB78u;
    // 0x23ab78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23ab7c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x23ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    ctx->pc = 0x23ab80u;
}
