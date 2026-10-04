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

// Function: entry_001b567c
// Address: 0x1b567c - 0x1b56b4
void entry_001b567c_0x1b567c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b567c_0x1b567c");
#endif

    ctx->pc = 0x1b567cu;

    // 0x1b567c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b5680: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5684: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b5684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b5688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b568c: 0x9042b2b0  lbu         $v0, -0x4D50($v0)
    ctx->pc = 0x1b568cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947504)));
    // 0x1b5690: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b5694: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b5698: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5698u;
    {
        const bool branch_taken_0x1b5698 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5698u;
        // 0x1b569c: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5698) {
            ctx->pc = 0x1B56B4u;
            return;
        }
    }
    ctx->pc = 0x1B56A0u;
    // 0x1b56a0: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b56a4: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b56a8: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b56a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b56ac: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b56acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b56b0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b56b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x1b56b4u;
}
