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

// Function: FUN_0016d900
// Address: 0x16d900 - 0x16d910
void FUN_0016d900_0x16d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d900_0x16d900");
#endif

    ctx->pc = 0x16d900u;

    // 0x16d900: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16d904: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D904u;
    {
        const bool branch_taken_0x16d904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D904u;
        // 0x16d908: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d904) {
            ctx->pc = 0x16D910u;
            return;
        }
    }
    ctx->pc = 0x16D90Cu;
    // 0x16d90c: 0xaf838700  sw          $v1, -0x7900($gp)
    ctx->pc = 0x16d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 3));
    ctx->pc = 0x16d910u;
}
