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

// Function: entry_001ec814
// Address: 0x1ec814 - 0x1ec828
void entry_001ec814_0x1ec814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec814_0x1ec814");
#endif

    ctx->pc = 0x1ec814u;

    // 0x1ec814: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1ec818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC818u;
    {
        const bool branch_taken_0x1ec818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec818) {
            ctx->pc = 0x1EC828u;
            return;
        }
    }
    ctx->pc = 0x1EC820u;
    // 0x1ec820: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ec824: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1ec828u;
}
