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

// Function: entry_0016d608
// Address: 0x16d608 - 0x16d624
void entry_0016d608_0x16d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d608_0x16d608");
#endif

    ctx->pc = 0x16d608u;

    // 0x16d608: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d60c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d610: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x16d614: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D614u;
    {
        const bool branch_taken_0x16d614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D614u;
        // 0x16d618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d614) {
            ctx->pc = 0x16D624u;
            return;
        }
    }
    ctx->pc = 0x16D61Cu;
    // 0x16d61c: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16D61Cu;
    SET_GPR_U32(ctx, 31, 0x16D624u);
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16D61Cu, 0x16D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D624u;
}
