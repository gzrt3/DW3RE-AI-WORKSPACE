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

// Function: entry_0021f63c
// Address: 0x21f63c - 0x21f660
void entry_0021f63c_0x21f63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f63c_0x21f63c");
#endif

    ctx->pc = 0x21f63cu;

    // 0x21f63c: 0x0  nop
    ctx->pc = 0x21f63cu;
    // NOP
    // 0x21f640: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x21f644: 0x29630008  slti        $v1, $t3, 0x8
    ctx->pc = 0x21f644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21f648: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x21F648u;
    {
        const bool branch_taken_0x21f648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F648u;
        // 0x21f64c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f648) {
            ctx->pc = 0x21F59Cu;
            return;
        }
    }
    ctx->pc = 0x21F650u;
    // 0x21f650: 0x3e00008  jr          $ra
    ctx->pc = 0x21F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F658u;
    // 0x21f658: 0x0  nop
    ctx->pc = 0x21f658u;
    // NOP
    // 0x21f65c: 0x0  nop
    ctx->pc = 0x21f65cu;
    // NOP
    ctx->pc = 0x21f660u;
}
