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

// Function: entry_001c1b58
// Address: 0x1c1b58 - 0x1c1b6c
void entry_001c1b58_0x1c1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b58_0x1c1b58");
#endif

    ctx->pc = 0x1c1b58u;

    // 0x1c1b58: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1b5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B5Cu;
        // 0x1c1b60: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1B6Cu;
            return;
        }
    }
    ctx->pc = 0x1C1B64u;
    // 0x1c1b64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1b68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1c1b6cu;
}
