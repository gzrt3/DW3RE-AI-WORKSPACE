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

// Function: entry_00247064
// Address: 0x247064 - 0x2470c0
void entry_00247064_0x247064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247064_0x247064");
#endif

    switch (ctx->pc) {
        case 0x247084u: goto label_247084;
        case 0x2470b0u: goto label_2470b0;
        default: break;
    }

    ctx->pc = 0x247064u;

    // 0x247064: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x247064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x247068: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x247068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24706c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247070: 0xe4801084  swc1        $f0, 0x1084($a0)
    ctx->pc = 0x247070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4228), bits); }
    // 0x247074: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x247074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x247078: 0x8c841080  lw          $a0, 0x1080($a0)
    ctx->pc = 0x247078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
    // 0x24707c: 0xc18d864  jal         func_636190
    ctx->pc = 0x24707Cu;
    SET_GPR_U32(ctx, 31, 0x247084u);
    ctx->pc = 0x247080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24707Cu;
    // 0x247080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636190u, 0x24707Cu, 0x247084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247084u;
label_247084:
    // 0x247084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247088: 0x3e00008  jr          $ra
    ctx->pc = 0x247088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247088u;
        // 0x24708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247090u;
    // 0x247090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247098: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24709c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2470a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2470a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2470a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470a8: 0xc18f690  jal         func_63DA40
    ctx->pc = 0x2470A8u;
    SET_GPR_U32(ctx, 31, 0x2470B0u);
    ctx->pc = 0x2470ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470A8u;
    // 0x2470ac: 0x24471060  addiu       $a3, $v0, 0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DA40u, 0x2470A8u, 0x2470B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B0u;
label_2470b0:
    // 0x2470b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2470b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2470B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470BCu;
    // 0x2470bc: 0x0  nop
    ctx->pc = 0x2470bcu;
    // NOP
    ctx->pc = 0x2470c0u;
}
