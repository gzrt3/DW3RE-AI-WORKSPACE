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

// Function: entry_00110eb0
// Address: 0x110eb0 - 0x110ec8
void entry_00110eb0_0x110eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110eb0_0x110eb0");
#endif

    ctx->pc = 0x110eb0u;

    // 0x110eb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EB0u;
    {
        const bool branch_taken_0x110eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB0u;
        // 0x110eb4: 0xe83021  addu        $a2, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb0) {
            ctx->pc = 0x110EC8u;
            return;
        }
    }
    ctx->pc = 0x110EB8u;
    // 0x110eb8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110ebc: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x110ebcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110ec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110EC0u;
    {
        const bool branch_taken_0x110ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EC0u;
        // 0x110ec4: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ec0) {
            ctx->pc = 0x110ED0u;
            return;
        }
    }
    ctx->pc = 0x110EC8u;
}
