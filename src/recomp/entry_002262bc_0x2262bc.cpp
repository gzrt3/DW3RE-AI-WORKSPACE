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

// Function: entry_002262bc
// Address: 0x2262bc - 0x2262e0
void entry_002262bc_0x2262bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002262bc_0x2262bc");
#endif

    ctx->pc = 0x2262bcu;

    // 0x2262bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2262bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2262c0: 0x2902004a  slti        $v0, $t0, 0x4A
    ctx->pc = 0x2262c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x2262c4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2262C4u;
    {
        const bool branch_taken_0x2262c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262C4u;
        // 0x2262c8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262c4) {
            ctx->pc = 0x226220u;
            return;
        }
    }
    ctx->pc = 0x2262CCu;
    // 0x2262cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2262ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2262D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2262D8u;
    // 0x2262d8: 0x0  nop
    ctx->pc = 0x2262d8u;
    // NOP
    // 0x2262dc: 0x0  nop
    ctx->pc = 0x2262dcu;
    // NOP
    ctx->pc = 0x2262e0u;
}
