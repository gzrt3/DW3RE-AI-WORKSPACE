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

// Function: entry_001cbe58
// Address: 0x1cbe58 - 0x1cbe88
void entry_001cbe58_0x1cbe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbe58_0x1cbe58");
#endif

    ctx->pc = 0x1cbe58u;

    // 0x1cbe58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cbe5c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1cbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1cbe60: 0x24844cd0  addiu       $a0, $a0, 0x4CD0
    ctx->pc = 0x1cbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19664));
    // 0x1cbe64: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1cbe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1cbe68: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cbe68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbe6c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBE6Cu;
    {
        const bool branch_taken_0x1cbe6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbe6c) {
            ctx->pc = 0x1CBE88u;
            return;
        }
    }
    ctx->pc = 0x1CBE74u;
    // 0x1cbe74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cbe78: 0x24424ce0  addiu       $v0, $v0, 0x4CE0
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19680));
    // 0x1cbe7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cbe80: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1CBE80u;
    SET_GPR_U32(ctx, 31, 0x1CBE88u);
    ctx->pc = 0x1CBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE80u;
    // 0x1cbe84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1CBE80u, 0x1CBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE88u;
}
