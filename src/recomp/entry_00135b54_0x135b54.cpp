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

// Function: entry_00135b54
// Address: 0x135b54 - 0x135b6c
void entry_00135b54_0x135b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135b54_0x135b54");
#endif

    ctx->pc = 0x135b54u;

    // 0x135b54: 0x0  nop
    ctx->pc = 0x135b54u;
    // NOP
    // 0x135b58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x135b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x135b5c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x135b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x135b60: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x135B60u;
    {
        const bool branch_taken_0x135b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B60u;
        // 0x135b64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b60) {
            ctx->pc = 0x135B30u;
            return;
        }
    }
    ctx->pc = 0x135B68u;
    // 0x135b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x135b6cu;
}
