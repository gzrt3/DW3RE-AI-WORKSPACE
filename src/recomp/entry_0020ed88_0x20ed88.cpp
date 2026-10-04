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

// Function: entry_0020ed88
// Address: 0x20ed88 - 0x20eda0
void entry_0020ed88_0x20ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ed88_0x20ed88");
#endif

    ctx->pc = 0x20ed88u;

    // 0x20ed88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20ed8c: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x20ED8Cu;
    {
        const bool branch_taken_0x20ed8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x20ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED8Cu;
        // 0x20ed90: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed8c) {
            ctx->pc = 0x20EDA0u;
            return;
        }
    }
    ctx->pc = 0x20ED94u;
    // 0x20ed94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20ED94u;
    {
        const bool branch_taken_0x20ed94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ed94) {
            ctx->pc = 0x20EDA0u;
            return;
        }
    }
    ctx->pc = 0x20ED9Cu;
    // 0x20ed9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20eda0u;
}
