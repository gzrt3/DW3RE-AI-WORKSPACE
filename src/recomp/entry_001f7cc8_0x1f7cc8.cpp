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

// Function: entry_001f7cc8
// Address: 0x1f7cc8 - 0x1f7cf0
void entry_001f7cc8_0x1f7cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7cc8_0x1f7cc8");
#endif

    ctx->pc = 0x1f7cc8u;

    // 0x1f7cc8: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f7ccc: 0x19400008  blez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7CCCu;
    {
        const bool branch_taken_0x1f7ccc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1F7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CCCu;
        // 0x1f7cd0: 0x252e0008  addiu       $t6, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ccc) {
            ctx->pc = 0x1F7CF0u;
            return;
        }
    }
    ctx->pc = 0x1F7CD4u;
    // 0x1f7cd4: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x1f7cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1f7cd8: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7CD8u;
    {
        const bool branch_taken_0x1f7cd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cd8) {
            ctx->pc = 0x1F7CF0u;
            return;
        }
    }
    ctx->pc = 0x1F7CE0u;
    // 0x1f7ce0: 0x2549fff8  addiu       $t1, $t2, -0x8
    ctx->pc = 0x1f7ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x1f7ce4: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1f7ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1f7ce8: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1f7ce8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1f7cec: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1f7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x1f7cf0u;
}
