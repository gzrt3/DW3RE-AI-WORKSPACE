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

// Function: entry_0016ba7c
// Address: 0x16ba7c - 0x16ba98
void entry_0016ba7c_0x16ba7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba7c_0x16ba7c");
#endif

    ctx->pc = 0x16ba7cu;

    // 0x16ba7c: 0x8f8386f4  lw          $v1, -0x790C($gp)
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x16ba80: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x16ba84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA84u;
        // 0x16ba88: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BA98u;
            return;
        }
    }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0xaf848728  sw          $a0, -0x78D8($gp)
    ctx->pc = 0x16ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 4));
    // 0x16ba90: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16BA90u;
    {
        const bool branch_taken_0x16ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA90u;
        // 0x16ba94: 0xac201eb0  sw          $zero, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba90) {
            ctx->pc = 0x16BBA0u;
            return;
        }
    }
    ctx->pc = 0x16BA98u;
}
