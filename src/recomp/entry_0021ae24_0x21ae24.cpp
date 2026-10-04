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

// Function: entry_0021ae24
// Address: 0x21ae24 - 0x21ae34
void entry_0021ae24_0x21ae24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ae24_0x21ae24");
#endif

    ctx->pc = 0x21ae24u;

    // 0x21ae24: 0xaf90927c  sw          $s0, -0x6D84($gp)
    ctx->pc = 0x21ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 16));
    // 0x21ae28: 0xaf9092ac  sw          $s0, -0x6D54($gp)
    ctx->pc = 0x21ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 16));
    // 0x21ae2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21AE2Cu;
    {
        const bool branch_taken_0x21ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE2Cu;
        // 0x21ae30: 0xaf8092a8  sw          $zero, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae2c) {
            ctx->pc = 0x21AE7Cu;
            return;
        }
    }
    ctx->pc = 0x21AE34u;
}
