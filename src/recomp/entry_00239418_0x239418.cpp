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

// Function: entry_00239418
// Address: 0x239418 - 0x239458
void entry_00239418_0x239418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239418_0x239418");
#endif

    ctx->pc = 0x239418u;

    // 0x239418: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x239418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23941c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23941cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23942c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23942cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239430: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x239430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239434: 0x3e00008  jr          $ra
    ctx->pc = 0x239434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239434u;
        // 0x239438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23943Cu;
    // 0x23943c: 0x0  nop
    ctx->pc = 0x23943cu;
    // NOP
    // 0x239440: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x239440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x239444: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x239448: 0x9042e1f1  lbu         $v0, -0x1E0F($v0)
    ctx->pc = 0x239448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959601)));
    // 0x23944c: 0x3e00008  jr          $ra
    ctx->pc = 0x23944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23944Cu;
        // 0x239450: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239454u;
    // 0x239454: 0x0  nop
    ctx->pc = 0x239454u;
    // NOP
    ctx->pc = 0x239458u;
}
