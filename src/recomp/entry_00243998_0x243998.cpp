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

// Function: entry_00243998
// Address: 0x243998 - 0x2439f0
void entry_00243998_0x243998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243998_0x243998");
#endif

    ctx->pc = 0x243998u;

    // 0x243998: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x24399c: 0x3e00008  jr          $ra
    ctx->pc = 0x24399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439A4u;
    // 0x2439a4: 0x0  nop
    ctx->pc = 0x2439a4u;
    // NOP
    // 0x2439a8: 0x0  nop
    ctx->pc = 0x2439a8u;
    // NOP
    // 0x2439ac: 0x0  nop
    ctx->pc = 0x2439acu;
    // NOP
    // 0x2439b0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2439b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2439b4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2439b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2439b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2439bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2439bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2439c0: 0x244249a5  addiu       $v0, $v0, 0x49A5
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18853));
    // 0x2439c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2439c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2439C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2439CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439C8u;
        // 0x2439cc: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439D0u;
    // 0x2439d0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2439d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2439d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2439d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2439d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2439dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2439dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2439e0: 0x244249a4  addiu       $v0, $v0, 0x49A4
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18852));
    // 0x2439e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2439e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2439e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2439E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2439ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439E8u;
        // 0x2439ec: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439F0u;
}
