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

// Function: entry_001ffc54
// Address: 0x1ffc54 - 0x1ffcb0
void entry_001ffc54_0x1ffc54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc54_0x1ffc54");
#endif

    switch (ctx->pc) {
        case 0x1ffc5cu: goto label_1ffc5c;
        case 0x1ffc78u: goto label_1ffc78;
        default: break;
    }

    ctx->pc = 0x1ffc54u;

    // 0x1ffc54: 0xc070a34  jal         func_1C28D0
    ctx->pc = 0x1FFC54u;
    SET_GPR_U32(ctx, 31, 0x1FFC5Cu);
    ctx->pc = 0x1FFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC54u;
    // 0x1ffc58: 0x8f84909c  lw          $a0, -0x6F64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28D0u, 0x1FFC54u, 0x1FFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC5Cu;
label_1ffc5c:
    // 0x1ffc5c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1ffc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ffc60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ffc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc64: 0x240606e0  addiu       $a2, $zero, 0x6E0
    ctx->pc = 0x1ffc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1760));
    // 0x1ffc68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ffc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc70: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1FFC70u;
    SET_GPR_U32(ctx, 31, 0x1FFC78u);
    ctx->pc = 0x1FFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC70u;
    // 0x1ffc74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FFC70u, 0x1FFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC78u;
label_1ffc78:
    // 0x1ffc78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ffc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ffc7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ffc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ffc80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ffc80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ffc84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ffc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ffc88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ffc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ffc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffc90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ffc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffc94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCA0u;
        // 0x1ffca4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFCA8u;
    // 0x1ffca8: 0x0  nop
    ctx->pc = 0x1ffca8u;
    // NOP
    // 0x1ffcac: 0x0  nop
    ctx->pc = 0x1ffcacu;
    // NOP
    ctx->pc = 0x1ffcb0u;
}
