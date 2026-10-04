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

// Function: entry_00227f5c
// Address: 0x227f5c - 0x228000
void entry_00227f5c_0x227f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227f5c_0x227f5c");
#endif

    switch (ctx->pc) {
        case 0x227facu: goto label_227fac;
        case 0x227fb8u: goto label_227fb8;
        case 0x227fc4u: goto label_227fc4;
        case 0x227fdcu: goto label_227fdc;
        case 0x227fe4u: goto label_227fe4;
        default: break;
    }

    ctx->pc = 0x227f5cu;

label_227f5c:
    // 0x227f5c: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x227f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x227f60: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x227f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x227f64: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x227f64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x227f68: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x227f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x227f6c: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x227f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x227f70: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x227f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x227f74: 0xad050020  sw          $a1, 0x20($t0)
    ctx->pc = 0x227f74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 5));
    // 0x227f78: 0xad050030  sw          $a1, 0x30($t0)
    ctx->pc = 0x227f78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 5));
    // 0x227f7c: 0xad050040  sw          $a1, 0x40($t0)
    ctx->pc = 0x227f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 5));
    // 0x227f80: 0xad050050  sw          $a1, 0x50($t0)
    ctx->pc = 0x227f80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 5));
    // 0x227f84: 0xad050060  sw          $a1, 0x60($t0)
    ctx->pc = 0x227f84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 5));
    // 0x227f88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x227F88u;
    {
        const bool branch_taken_0x227f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F88u;
        // 0x227f8c: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f88) {
            ctx->pc = 0x227F5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227f5c;
        }
    }
    ctx->pc = 0x227F90u;
    // 0x227f90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x227f94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x227f98: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
    // 0x227f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227fa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227fa4: 0xc041738  jal         func_105CE0
    ctx->pc = 0x227FA4u;
    SET_GPR_U32(ctx, 31, 0x227FACu);
    ctx->pc = 0x227FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FA4u;
    // 0x227fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x227FA4u, 0x227FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FACu;
label_227fac:
    // 0x227fac: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x227facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x227fb0: 0xc070080  jal         func_1C0200
    ctx->pc = 0x227FB0u;
    SET_GPR_U32(ctx, 31, 0x227FB8u);
    ctx->pc = 0x227FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FB0u;
    // 0x227fb4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x227FB0u, 0x227FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FB8u;
label_227fb8:
    // 0x227fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fbc: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x227FBCu;
    SET_GPR_U32(ctx, 31, 0x227FC4u);
    ctx->pc = 0x227FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FBCu;
    // 0x227fc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x227FBCu, 0x227FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FC4u;
label_227fc4:
    // 0x227fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fc8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x227fcc: 0x24849a70  addiu       $a0, $a0, -0x6590
    ctx->pc = 0x227fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941296));
    // 0x227fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x227fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fd4: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x227FD4u;
    SET_GPR_U32(ctx, 31, 0x227FDCu);
    ctx->pc = 0x227FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FD4u;
    // 0x227fd8: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x227FD4u, 0x227FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FDCu;
label_227fdc:
    // 0x227fdc: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x227FDCu;
    SET_GPR_U32(ctx, 31, 0x227FE4u);
    ctx->pc = 0x227FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FDCu;
    // 0x227fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x227FDCu, 0x227FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FE4u;
label_227fe4:
    // 0x227fe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227fec: 0x3e00008  jr          $ra
    ctx->pc = 0x227FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FECu;
        // 0x227ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FF4u;
    // 0x227ff4: 0x0  nop
    ctx->pc = 0x227ff4u;
    // NOP
    // 0x227ff8: 0x0  nop
    ctx->pc = 0x227ff8u;
    // NOP
    // 0x227ffc: 0x0  nop
    ctx->pc = 0x227ffcu;
    // NOP
    ctx->pc = 0x228000u;
}
