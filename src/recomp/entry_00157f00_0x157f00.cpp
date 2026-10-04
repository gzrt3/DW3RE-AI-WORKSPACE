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

// Function: entry_00157f00
// Address: 0x157f00 - 0x157fe0
void entry_00157f00_0x157f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f00_0x157f00");
#endif

    switch (ctx->pc) {
        case 0x157f08u: goto label_157f08;
        case 0x157f18u: goto label_157f18;
        case 0x157f2cu: goto label_157f2c;
        case 0x157f4cu: goto label_157f4c;
        case 0x157f5cu: goto label_157f5c;
        case 0x157f64u: goto label_157f64;
        case 0x157f6cu: goto label_157f6c;
        case 0x157fa4u: goto label_157fa4;
        case 0x157fc4u: goto label_157fc4;
        case 0x157fd0u: goto label_157fd0;
        case 0x157fd8u: goto label_157fd8;
        default: break;
    }

    ctx->pc = 0x157f00u;

    // 0x157f00: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x157F00u;
    SET_GPR_U32(ctx, 31, 0x157F08u);
    ctx->pc = 0x157F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F00u;
    // 0x157f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x157F00u, 0x157F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F08u;
label_157f08:
    // 0x157f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f0c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x157f10: 0xc078388  jal         func_1E0E20
    ctx->pc = 0x157F10u;
    SET_GPR_U32(ctx, 31, 0x157F18u);
    ctx->pc = 0x157F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F10u;
    // 0x157f14: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E20u, 0x157F10u, 0x157F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F18u;
label_157f18:
    // 0x157f18: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x157F18u;
    {
        const bool branch_taken_0x157f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f18) {
            ctx->pc = 0x157FFCu;
            return;
        }
    }
    ctx->pc = 0x157F20u;
    // 0x157f20: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x157f24: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x157F24u;
    SET_GPR_U32(ctx, 31, 0x157F2Cu);
    ctx->pc = 0x157F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F24u;
    // 0x157f28: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x157F24u, 0x157F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F2Cu;
label_157f2c:
    // 0x157f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157f34: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x157f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157f38: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x157f3c: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x157f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x157f40: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x157f44: 0xc079258  jal         func_1E4960
    ctx->pc = 0x157F44u;
    SET_GPR_U32(ctx, 31, 0x157F4Cu);
    ctx->pc = 0x157F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F44u;
    // 0x157f48: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4960u, 0x157F44u, 0x157F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F4Cu;
label_157f4c:
    // 0x157f4c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x157F4Cu;
    {
        const bool branch_taken_0x157f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f4c) {
            ctx->pc = 0x157FFCu;
            return;
        }
    }
    ctx->pc = 0x157F54u;
    // 0x157f54: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157F54u;
    SET_GPR_U32(ctx, 31, 0x157F5Cu);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157F54u, 0x157F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F5Cu;
label_157f5c:
    // 0x157f5c: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157F5Cu;
    SET_GPR_U32(ctx, 31, 0x157F64u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157F5Cu, 0x157F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F64u;
label_157f64:
    // 0x157f64: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157F64u;
    SET_GPR_U32(ctx, 31, 0x157F6Cu);
    ctx->pc = 0x157F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F64u;
    // 0x157f68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157F64u, 0x157F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F6Cu;
label_157f6c:
    // 0x157f6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157f70: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F70u;
    {
        const bool branch_taken_0x157f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F70u;
        // 0x157f74: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f70) {
            ctx->pc = 0x157F80u;
            goto label_157f80;
        }
    }
    ctx->pc = 0x157F78u;
    // 0x157f78: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157F78u;
    {
        const bool branch_taken_0x157f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157f78) {
            ctx->pc = 0x157FACu;
            goto label_157fac;
        }
    }
    ctx->pc = 0x157F80u;
label_157f80:
    // 0x157f80: 0x83a20044  lb          $v0, 0x44($sp)
    ctx->pc = 0x157f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x157f84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157f88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157f8c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157f90: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157f94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f98: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x157f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x157f9c: 0xc056690  jal         func_159A40
    ctx->pc = 0x157F9Cu;
    SET_GPR_U32(ctx, 31, 0x157FA4u);
    ctx->pc = 0x157FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F9Cu;
    // 0x157fa0: 0xa0224af6  sb          $v0, 0x4AF6($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x157F9Cu, 0x157FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FA4u;
label_157fa4:
    // 0x157fa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157FA4u;
    {
        const bool branch_taken_0x157fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FA4u;
        // 0x157fa8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fa4) {
            ctx->pc = 0x157FC8u;
            goto label_157fc8;
        }
    }
    ctx->pc = 0x157FACu;
label_157fac:
    // 0x157fac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157fb0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x157fb4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157fb8: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x157fbc: 0xc056690  jal         func_159A40
    ctx->pc = 0x157FBCu;
    SET_GPR_U32(ctx, 31, 0x157FC4u);
    ctx->pc = 0x157FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FBCu;
    // 0x157fc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x157FBCu, 0x157FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_157fc8:
    // 0x157fc8: 0xc0568c0  jal         func_15A300
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FC8u;
    // 0x157fcc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A300u, 0x157FC8u, 0x157FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0xc05139c  jal         func_144E70
    ctx->pc = 0x157FD0u;
    SET_GPR_U32(ctx, 31, 0x157FD8u);
    ctx->pc = 0x157FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FD0u;
    // 0x157fd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E70u, 0x157FD0u, 0x157FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD8u;
label_157fd8:
    // 0x157fd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157FD8u;
    {
        const bool branch_taken_0x157fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fd8) {
            ctx->pc = 0x157FFCu;
            return;
        }
    }
    ctx->pc = 0x157FE0u;
}
