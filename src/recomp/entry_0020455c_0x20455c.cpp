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

// Function: entry_0020455c
// Address: 0x20455c - 0x204574
void entry_0020455c_0x20455c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020455c_0x20455c");
#endif

    ctx->pc = 0x20455cu;

    // 0x20455c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20455Cu;
    {
        const bool branch_taken_0x20455c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20455c) {
            ctx->pc = 0x204574u;
            return;
        }
    }
    ctx->pc = 0x204564u;
    // 0x204564: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x204564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x204568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20456c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20456Cu;
    {
        const bool branch_taken_0x20456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20456Cu;
        // 0x204570: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20456c) {
            ctx->pc = 0x204598u;
            return;
        }
    }
    ctx->pc = 0x204574u;
}
