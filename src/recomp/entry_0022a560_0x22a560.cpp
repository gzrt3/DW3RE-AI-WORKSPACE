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

// Function: entry_0022a560
// Address: 0x22a560 - 0x22a580
void entry_0022a560_0x22a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a560_0x22a560");
#endif

    ctx->pc = 0x22a560u;

    // 0x22a560: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22a560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22a564: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x22a564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22a568: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22A568u;
    {
        const bool branch_taken_0x22a568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A568u;
        // 0x22a56c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a568) {
            ctx->pc = 0x22A4FCu;
            return;
        }
    }
    ctx->pc = 0x22A570u;
    // 0x22a570: 0x3e00008  jr          $ra
    ctx->pc = 0x22A570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A578u;
    // 0x22a578: 0x0  nop
    ctx->pc = 0x22a578u;
    // NOP
    // 0x22a57c: 0x0  nop
    ctx->pc = 0x22a57cu;
    // NOP
    ctx->pc = 0x22a580u;
}
