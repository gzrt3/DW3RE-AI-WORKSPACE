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

// Function: entry_001fd65c
// Address: 0x1fd65c - 0x1fd690
void entry_001fd65c_0x1fd65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd65c_0x1fd65c");
#endif

    ctx->pc = 0x1fd65cu;

    // 0x1fd65c: 0x0  nop
    ctx->pc = 0x1fd65cu;
    // NOP
    // 0x1fd660: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1fd660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fd664: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fd664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd668: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fd668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd66c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fd66cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fd670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd67c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd684: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD684u;
        // 0x1fd688: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD68Cu;
    // 0x1fd68c: 0x0  nop
    ctx->pc = 0x1fd68cu;
    // NOP
    ctx->pc = 0x1fd690u;
}
