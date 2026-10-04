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

// Function: entry_001febf0
// Address: 0x1febf0 - 0x1fec0c
void entry_001febf0_0x1febf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001febf0_0x1febf0");
#endif

    ctx->pc = 0x1febf0u;

    // 0x1febf0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1febf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1febf8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEBF8u;
    {
        const bool branch_taken_0x1febf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1febf8) {
            ctx->pc = 0x1FEC0Cu;
            return;
        }
    }
    ctx->pc = 0x1FEC00u;
    // 0x1fec00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fec04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FEC04u;
    {
        const bool branch_taken_0x1fec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC04u;
        // 0x1fec08: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec04) {
            ctx->pc = 0x1FEC50u;
            return;
        }
    }
    ctx->pc = 0x1FEC0Cu;
}
