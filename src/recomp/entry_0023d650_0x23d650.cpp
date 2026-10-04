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

// Function: entry_0023d650
// Address: 0x23d650 - 0x23d660
void entry_0023d650_0x23d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d650_0x23d650");
#endif

    ctx->pc = 0x23d650u;

    // 0x23d650: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D650u;
    {
        const bool branch_taken_0x23d650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D650u;
        // 0x23d654: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d650) {
            ctx->pc = 0x23D660u;
            return;
        }
    }
    ctx->pc = 0x23D658u;
    // 0x23d658: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D658u;
    {
        const bool branch_taken_0x23d658 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d658) {
            ctx->pc = 0x23D68Cu;
            return;
        }
    }
    ctx->pc = 0x23D660u;
}
