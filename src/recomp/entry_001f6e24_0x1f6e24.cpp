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

// Function: entry_001f6e24
// Address: 0x1f6e24 - 0x1f6e54
void entry_001f6e24_0x1f6e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e24_0x1f6e24");
#endif

    ctx->pc = 0x1f6e24u;

    // 0x1f6e24: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1f6e28: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f6e2c: 0x14660011  bne         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6E2Cu;
    {
        const bool branch_taken_0x1f6e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1f6e2c) {
            ctx->pc = 0x1F6E74u;
            return;
        }
    }
    ctx->pc = 0x1F6E34u;
    // 0x1f6e34: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1f6e38: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6e40: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x1f6e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f6e44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6E44u;
    {
        const bool branch_taken_0x1f6e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e44) {
            ctx->pc = 0x1F6E54u;
            return;
        }
    }
    ctx->pc = 0x1F6E4Cu;
    // 0x1f6e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6E4Cu;
    {
        const bool branch_taken_0x1f6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E4Cu;
        // 0x1f6e50: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e4c) {
            ctx->pc = 0x1F6E5Cu;
            return;
        }
    }
    ctx->pc = 0x1F6E54u;
}
