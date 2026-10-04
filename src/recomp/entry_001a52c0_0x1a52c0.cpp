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

// Function: entry_001a52c0
// Address: 0x1a52c0 - 0x1a5300
void entry_001a52c0_0x1a52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a52c0_0x1a52c0");
#endif

    ctx->pc = 0x1a52c0u;

    // 0x1a52c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a52c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A52CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A52D4u;
    // 0x1a52d4: 0x0  nop
    ctx->pc = 0x1a52d4u;
    // NOP
    // 0x1a52d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a52dc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1a52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x1a52e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a52e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a52e4: 0x806946c  j           func_1A51B0
    ctx->pc = 0x1A52E4u;
    ctx->pc = 0x1A52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52E4u;
    // 0x1a52e8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A51B0u;
    FUN_001a51b0_0x1a51b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A52ECu;
    // 0x1a52ec: 0x0  nop
    ctx->pc = 0x1a52ecu;
    // NOP
    // 0x1a52f0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1a52f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a52f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a52f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5300u;
}
