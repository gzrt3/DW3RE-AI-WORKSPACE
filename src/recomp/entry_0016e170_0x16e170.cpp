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

// Function: entry_0016e170
// Address: 0x16e170 - 0x16e184
void entry_0016e170_0x16e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e170_0x16e170");
#endif

    ctx->pc = 0x16e170u;

    // 0x16e170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e178: 0xaf8386fc  sw          $v1, -0x7904($gp)
    ctx->pc = 0x16e178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 3));
    // 0x16e17c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16E17Cu;
    {
        const bool branch_taken_0x16e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E17Cu;
        // 0x16e180: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e17c) {
            ctx->pc = 0x16E278u;
            return;
        }
    }
    ctx->pc = 0x16E184u;
}
