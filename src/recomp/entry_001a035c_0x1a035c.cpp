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

// Function: entry_001a035c
// Address: 0x1a035c - 0x1a0374
void entry_001a035c_0x1a035c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a035c_0x1a035c");
#endif

    ctx->pc = 0x1a035cu;

    // 0x1a035c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1a035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1a0360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0364: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0364u;
    {
        const bool branch_taken_0x1a0364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0364u;
        // 0x1a0368: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0364) {
            ctx->pc = 0x1A0374u;
            return;
        }
    }
    ctx->pc = 0x1A036Cu;
    // 0x1a036c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0370: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1a0370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    ctx->pc = 0x1a0374u;
}
