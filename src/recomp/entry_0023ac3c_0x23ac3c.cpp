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

// Function: entry_0023ac3c
// Address: 0x23ac3c - 0x23ac50
void entry_0023ac3c_0x23ac3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ac3c_0x23ac3c");
#endif

    ctx->pc = 0x23ac3cu;

    // 0x23ac3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC3Cu;
    {
        const bool branch_taken_0x23ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC3Cu;
        // 0x23ac40: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac3c) {
            ctx->pc = 0x23AC50u;
            return;
        }
    }
    ctx->pc = 0x23AC44u;
    // 0x23ac44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x23ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x23ac48: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x23ac4c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x23ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x23ac50u;
}
