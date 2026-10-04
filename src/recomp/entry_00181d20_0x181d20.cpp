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

// Function: entry_00181d20
// Address: 0x181d20 - 0x181d50
void entry_00181d20_0x181d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181d20_0x181d20");
#endif

    ctx->pc = 0x181d20u;

    // 0x181d20: 0x8f8687a4  lw          $a2, -0x785C($gp)
    ctx->pc = 0x181d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x181d24: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x181d28: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x181d28u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x181d2c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x181d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181d30: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x181d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x181d34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x181d38: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x181d38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x181d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d48: 0x3e00008  jr          $ra
    ctx->pc = 0x181D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D48u;
        // 0x181d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D50u;
}
