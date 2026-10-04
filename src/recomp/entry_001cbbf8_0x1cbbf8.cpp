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

// Function: entry_001cbbf8
// Address: 0x1cbbf8 - 0x1cbc24
void entry_001cbbf8_0x1cbbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbbf8_0x1cbbf8");
#endif

    ctx->pc = 0x1cbbf8u;

    // 0x1cbbf8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbbfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc00: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x1cbc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbc0c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbc10: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbc14: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc1c: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBC24u);
    ctx->pc = 0x1CBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC1Cu;
    // 0x1cbc20: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBC1Cu, 0x1CBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC24u;
}
