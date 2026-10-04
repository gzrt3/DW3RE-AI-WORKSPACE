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

// Function: entry_00219f58
// Address: 0x219f58 - 0x219f70
void entry_00219f58_0x219f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f58_0x219f58");
#endif

    ctx->pc = 0x219f58u;

    // 0x219f58: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F58u;
    {
        const bool branch_taken_0x219f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x219f58) {
            ctx->pc = 0x219F70u;
            return;
        }
    }
    ctx->pc = 0x219F60u;
    // 0x219f60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x219f64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219F90u;
            return;
        }
    }
    ctx->pc = 0x219F70u;
}
