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

// Function: entry_00230ce8
// Address: 0x230ce8 - 0x230d28
void entry_00230ce8_0x230ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230ce8_0x230ce8");
#endif

    switch (ctx->pc) {
        case 0x230cf0u: goto label_230cf0;
        default: break;
    }

    ctx->pc = 0x230ce8u;

    // 0x230ce8: 0xc08c62e  jal         func_2318B8
    ctx->pc = 0x230CE8u;
    SET_GPR_U32(ctx, 31, 0x230CF0u);
    ctx->pc = 0x2318B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318B8u, 0x230CE8u, 0x230CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CF0u;
label_230cf0:
    // 0x230cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230d00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d04: 0x3e00008  jr          $ra
    ctx->pc = 0x230D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D0Cu;
    // 0x230d0c: 0x0  nop
    ctx->pc = 0x230d0cu;
    // NOP
    // 0x230d10: 0x3e00008  jr          $ra
    ctx->pc = 0x230D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D10u;
        // 0x230d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D18u;
    // 0x230d18: 0x3e00008  jr          $ra
    ctx->pc = 0x230D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D18u;
        // 0x230d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D20u;
    // 0x230d20: 0x3e00008  jr          $ra
    ctx->pc = 0x230D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D20u;
        // 0x230d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D28u;
}
