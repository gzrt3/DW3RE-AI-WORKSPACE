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

// Function: entry_002260e8
// Address: 0x2260e8 - 0x226134
void entry_002260e8_0x2260e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002260e8_0x2260e8");
#endif

    ctx->pc = 0x2260e8u;

    // 0x2260e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2260ec: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2260f0: 0x24424920  addiu       $v0, $v0, 0x4920
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18720));
    // 0x2260f4: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x2260f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x2260f8: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x334974u));
    // 0x2260fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226100: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33496Cu));
    // 0x226104: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x226108: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22610c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226114: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226118: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22611c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226120: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226124: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x226128: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22612c: 0xc05da58  jal         func_176960
    ctx->pc = 0x22612Cu;
    SET_GPR_U32(ctx, 31, 0x226134u);
    ctx->pc = 0x226130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22612Cu;
    // 0x226130: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x22612Cu, 0x226134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226134u;
}
