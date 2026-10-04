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

// Function: entry_0016457c
// Address: 0x16457c - 0x164598
void entry_0016457c_0x16457c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016457c_0x16457c");
#endif

    ctx->pc = 0x16457cu;

    // 0x16457c: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x164580: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164584: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164588: 0x8f83865c  lw          $v1, -0x79A4($gp)
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x16458c: 0x8f858658  lw          $a1, -0x79A8($gp)
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x164590: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164590u;
        // 0x164594: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164590) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x164598u;
}
