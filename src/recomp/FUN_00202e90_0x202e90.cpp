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

// Function: FUN_00202e90
// Address: 0x202e90 - 0x203328
void FUN_00202e90_0x202e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202e90_0x202e90");
#endif

    switch (ctx->pc) {
        case 0x202ee8u: goto label_202ee8;
        case 0x202ef0u: goto label_202ef0;
        case 0x202f04u: goto label_202f04;
        case 0x202f14u: goto label_202f14;
        case 0x202f38u: goto label_202f38;
        case 0x202f40u: goto label_202f40;
        case 0x202f58u: goto label_202f58;
        case 0x202f68u: goto label_202f68;
        case 0x202f80u: goto label_202f80;
        case 0x202f88u: goto label_202f88;
        case 0x202fa0u: goto label_202fa0;
        case 0x202fdcu: goto label_202fdc;
        case 0x203090u: goto label_203090;
        case 0x2030d0u: goto label_2030d0;
        case 0x203190u: goto label_203190;
        case 0x2031dcu: goto label_2031dc;
        case 0x203228u: goto label_203228;
        case 0x20324cu: goto label_20324c;
        case 0x203254u: goto label_203254;
        case 0x2032b8u: goto label_2032b8;
        default: break;
    }

    ctx->pc = 0x202e90u;

    // 0x202e90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x202e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x202e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202ea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ea4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202ea8: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x202ea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x202eac: 0x1020011c  beqz        $at, . + 4 + (0x11C << 2)
    ctx->pc = 0x202EACu;
    {
        const bool branch_taken_0x202eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EACu;
        // 0x202eb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202eac) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202EB4u;
    // 0x202eb4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x202eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x202ebc: 0x2484dea0  addiu       $a0, $a0, -0x2160
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958752));
    // 0x202ec0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202ec4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x202ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202ec8: 0x600008  jr          $v1
    ctx->pc = 0x202EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202ED0u: goto label_202ed0;
            case 0x202EF8u: goto label_202ef8;
            case 0x202F20u: goto label_202f20;
            case 0x202F4Cu: goto label_202f4c;
            case 0x202F94u: goto label_202f94;
            case 0x202FF0u: goto label_202ff0;
            case 0x203034u: goto label_203034;
            case 0x203084u: goto label_203084;
            case 0x2030E4u: goto label_2030e4;
            case 0x20312Cu: goto label_20312c;
            case 0x203184u: goto label_203184;
            case 0x203260u: goto label_203260;
            case 0x2032A8u: goto label_2032a8;
            case 0x20330Cu: goto label_20330c;
            case 0x203318u: goto label_203318;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x202ED0u;
label_202ed0:
    // 0x202ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ed8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x202edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ee0: 0xc08104c  jal         func_204130
    ctx->pc = 0x202EE0u;
    SET_GPR_U32(ctx, 31, 0x202EE8u);
    ctx->pc = 0x202EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EE0u;
    // 0x202ee4: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x202EE0u, 0x202EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EE8u;
label_202ee8:
    // 0x202ee8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x202EE8u;
    SET_GPR_U32(ctx, 31, 0x202EF0u);
    ctx->pc = 0x202EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EE8u;
    // 0x202eec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x202EE8u, 0x202EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EF0u;
label_202ef0:
    // 0x202ef0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x202EF0u;
    {
        const bool branch_taken_0x202ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EF0u;
        // 0x202ef4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ef0) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202EF8u;
label_202ef8:
    // 0x202ef8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x202efc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x202EFCu;
    SET_GPR_U32(ctx, 31, 0x202F04u);
    ctx->pc = 0x202F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EFCu;
    // 0x202f00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x202EFCu, 0x202F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F04u;
label_202f04:
    // 0x202f04: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x202f08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202f0c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x202F0Cu;
    SET_GPR_U32(ctx, 31, 0x202F14u);
    ctx->pc = 0x202F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F0Cu;
    // 0x202f10: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x202F0Cu, 0x202F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F14u;
label_202f14:
    // 0x202f14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202f18: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x202F18u;
    {
        const bool branch_taken_0x202f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F18u;
        // 0x202f1c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f18) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202F20u;
label_202f20:
    // 0x202f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f24: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x202f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x202f28: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x202f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f30: 0xc08104c  jal         func_204130
    ctx->pc = 0x202F30u;
    SET_GPR_U32(ctx, 31, 0x202F38u);
    ctx->pc = 0x202F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F30u;
    // 0x202f34: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x202F30u, 0x202F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F38u;
label_202f38:
    // 0x202f38: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x202F38u;
    SET_GPR_U32(ctx, 31, 0x202F40u);
    ctx->pc = 0x202F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F38u;
    // 0x202f3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x202F38u, 0x202F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F40u;
label_202f40:
    // 0x202f40: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x202f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x202f44: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x202F44u;
    {
        const bool branch_taken_0x202f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F44u;
        // 0x202f48: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f44) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202F4Cu;
label_202f4c:
    // 0x202f4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x202f50: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x202F50u;
    SET_GPR_U32(ctx, 31, 0x202F58u);
    ctx->pc = 0x202F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F50u;
    // 0x202f54: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x202F50u, 0x202F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F58u;
label_202f58:
    // 0x202f58: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x202f5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202f60: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x202F60u;
    SET_GPR_U32(ctx, 31, 0x202F68u);
    ctx->pc = 0x202F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F60u;
    // 0x202f64: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x202F60u, 0x202F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F68u;
label_202f68:
    // 0x202f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f6c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x202f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x202f70: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x202f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f78: 0xc08104c  jal         func_204130
    ctx->pc = 0x202F78u;
    SET_GPR_U32(ctx, 31, 0x202F80u);
    ctx->pc = 0x202F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F78u;
    // 0x202f7c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x202F78u, 0x202F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F80u;
label_202f80:
    // 0x202f80: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x202F80u;
    SET_GPR_U32(ctx, 31, 0x202F88u);
    ctx->pc = 0x202F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F80u;
    // 0x202f84: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x202F80u, 0x202F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F88u;
label_202f88:
    // 0x202f88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x202f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x202f8c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x202F8Cu;
    {
        const bool branch_taken_0x202f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F8Cu;
        // 0x202f90: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f8c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202F94u;
label_202f94:
    // 0x202f94: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x202f98: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x202F98u;
    SET_GPR_U32(ctx, 31, 0x202FA0u);
    ctx->pc = 0x202F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F98u;
    // 0x202f9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x202F98u, 0x202FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FA0u;
label_202fa0:
    // 0x202fa0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x202fa4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x202fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x202fa8: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x202fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x202fac: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x202facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x202fb0: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x202fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x202fb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202fb8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x202fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202fbc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x202fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x202fc0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202fc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x202fc8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202fd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x202fd4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x202FD4u;
    SET_GPR_U32(ctx, 31, 0x202FDCu);
    ctx->pc = 0x202FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FD4u;
    // 0x202fd8: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x202FD4u, 0x202FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FDCu;
label_202fdc:
    // 0x202fdc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x202fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202fe4: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x202fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x202fe8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x202FE8u;
    {
        const bool branch_taken_0x202fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE8u;
        // 0x202fec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe8) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202FF0u;
label_202ff0:
    // 0x202ff0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x202ff4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x202ff8: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x202ffc: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    // 0x203000: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203004: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203008: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20300c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20300cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x203010: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x203014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x203018: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x203018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20301c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x203020: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x203020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x203024: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x203024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x203028: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
    // 0x20302c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x20302Cu;
    {
        const bool branch_taken_0x20302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20302Cu;
        // 0x203030: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20302c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203034u;
label_203034:
    // 0x203034: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203038: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x20303c: 0x8c28f468  lw          $t0, -0xB98($at)
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x57F468u));
    // 0x203040: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x203044: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    // 0x203048: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
    // 0x20304c: 0x240403c4  addiu       $a0, $zero, 0x3C4
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x203050: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203054: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x203054u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x203058: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20305c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20305cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x203060: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x203064: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x203068: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20306c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x203070: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x203070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x203074: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x203074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x203078: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
    // 0x20307c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x20307Cu;
    {
        const bool branch_taken_0x20307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20307c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203084u;
label_203084:
    // 0x203084: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x203084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x203088: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x203088u;
    SET_GPR_U32(ctx, 31, 0x203090u);
    ctx->pc = 0x20308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203088u;
    // 0x20308c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x203088u, 0x203090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203090u;
label_203090:
    // 0x203090: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203094: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x203094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x203098: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x203098u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x20309c: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2030a0: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2030a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x2030a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2030a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2030a8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2030a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2030ac: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2030acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2030b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2030b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2030b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2030b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2030b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2030b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2030bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2030bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2030c0: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x2030c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
    // 0x2030c4: 0x24620098  addiu       $v0, $v1, 0x98
    ctx->pc = 0x2030c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x2030c8: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x2030C8u;
    SET_GPR_U32(ctx, 31, 0x2030D0u);
    ctx->pc = 0x2030CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030C8u;
    // 0x2030cc: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x2030C8u, 0x2030D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030D0u;
label_2030d0:
    // 0x2030d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2030d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2030d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2030d8: 0xac23f474  sw          $v1, -0xB8C($at)
    ctx->pc = 0x2030d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x2030dc: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2030DCu;
    {
        const bool branch_taken_0x2030dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030DCu;
        // 0x2030e0: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030dc) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x2030E4u;
label_2030e4:
    // 0x2030e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2030e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2030e8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2030e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2030ec: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x2030ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x57F468u));
    // 0x2030f0: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x2030f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x2030f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2030f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2030f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2030f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2030fc: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x2030fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x203100: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203104: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203104u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x203108: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20310c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x203110: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203114: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x203118: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x203118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x20311c: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x20311cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
    // 0x203120: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203120u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x203124: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x203124u;
    {
        const bool branch_taken_0x203124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203124u;
        // 0x203128: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203124) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x20312Cu;
label_20312c:
    // 0x20312c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203130: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x203134: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x57F468u));
    // 0x203138: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x203138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x20313c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x203140: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x203140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x203144: 0x3465acb8  ori         $a1, $v1, 0xACB8
    ctx->pc = 0x203144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44216);
    // 0x203148: 0x24c64440  addiu       $a2, $a2, 0x4440
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17472));
    // 0x20314c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203150: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x203150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203154: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x203154u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x203158: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20315c: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x20315cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x203160: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x203164: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x203164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x203168: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x203168u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20316c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20316cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x203170: 0xace600ac  sw          $a2, 0xAC($a3)
    ctx->pc = 0x203170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 6));
    // 0x203174: 0xace500a8  sw          $a1, 0xA8($a3)
    ctx->pc = 0x203174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 5));
    // 0x203178: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x20317c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x20317Cu;
    {
        const bool branch_taken_0x20317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20317Cu;
        // 0x203180: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20317c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203184u;
label_203184:
    // 0x203184: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x203184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x203188: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x203188u;
    SET_GPR_U32(ctx, 31, 0x203190u);
    ctx->pc = 0x20318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203188u;
    // 0x20318c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x203188u, 0x203190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203190u;
label_203190:
    // 0x203190: 0x8e02048c  lw          $v0, 0x48C($s0)
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x203194: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x203194u;
    {
        const bool branch_taken_0x203194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203194u;
        // 0x203198: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203194) {
            ctx->pc = 0x2031ECu;
            goto label_2031ec;
        }
    }
    ctx->pc = 0x20319Cu;
    // 0x20319c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2031a0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2031a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2031a4: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x2031a8: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2031ac: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2031acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x2031b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2031b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2031b4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2031b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2031b8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2031bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2031c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2031c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2031c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2031c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2031cc: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x2031ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x2031d0: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x2031d4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x2031D4u;
    SET_GPR_U32(ctx, 31, 0x2031DCu);
    ctx->pc = 0x2031D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2031D4u;
    // 0x2031d8: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x2031D4u, 0x2031DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031DCu;
label_2031dc:
    // 0x2031dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2031e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2031e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2031E4u;
    {
        const bool branch_taken_0x2031e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031E4u;
        // 0x2031e8: 0xac22f474  sw          $v0, -0xB8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e4) {
            ctx->pc = 0x203234u;
            goto label_203234;
        }
    }
    ctx->pc = 0x2031ECu;
label_2031ec:
    // 0x2031ec: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2031f0: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x2031f4: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2031f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2031f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2031fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2031fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x203200: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203204: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203208: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x203208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20320c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203210: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x203214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203218: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x203218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x20321c: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x203220: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x203220u;
    SET_GPR_U32(ctx, 31, 0x203228u);
    ctx->pc = 0x203224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203220u;
    // 0x203224: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x203220u, 0x203228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203228u;
label_203228:
    // 0x203228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20322c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203230: 0xac22f474  sw          $v0, -0xB8C($at)
    ctx->pc = 0x203230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
label_203234:
    // 0x203234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203238: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x203238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20323c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x203240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203244: 0xc08104c  jal         func_204130
    ctx->pc = 0x203244u;
    SET_GPR_U32(ctx, 31, 0x20324Cu);
    ctx->pc = 0x203248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203244u;
    // 0x203248: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203244u, 0x20324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20324Cu;
label_20324c:
    // 0x20324c: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x20324Cu;
    SET_GPR_U32(ctx, 31, 0x203254u);
    ctx->pc = 0x203250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20324Cu;
    // 0x203250: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x20324Cu, 0x203254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203254u;
label_203254:
    // 0x203254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203258: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x203258u;
    {
        const bool branch_taken_0x203258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203258u;
        // 0x20325c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203258) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203260u;
label_203260:
    // 0x203260: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203264: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x203268: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x203268u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x57F468u));
    // 0x20326c: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x203270: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203274: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203278: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x203278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20327c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203280: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x203284: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203288: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x203288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20328c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20328cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203290: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x203294: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x203294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x203298: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x203298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x20329c: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x20329cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x2032a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2032A0u;
    {
        const bool branch_taken_0x2032a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A0u;
        // 0x2032a4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032a0) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x2032A8u;
label_2032a8:
    // 0x2032a8: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x2032ac: 0x8f8590f4  lw          $a1, -0x6F0C($gp)
    ctx->pc = 0x2032acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x2032b0: 0xc083ce8  jal         func_20F3A0
    ctx->pc = 0x2032B0u;
    SET_GPR_U32(ctx, 31, 0x2032B8u);
    ctx->pc = 0x2032B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032B0u;
    // 0x2032b4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F3A0u, 0x2032B0u, 0x2032B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032B8u;
label_2032b8:
    // 0x2032b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2032bc: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x2032c0: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x2032c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x57F468u));
    // 0x2032c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2032c8: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x2032c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
    // 0x2032cc: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x2032d0: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x2032d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2032d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2032d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2032dc: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2032e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2032e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2032e4: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2032e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2032e8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2032e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2032ec: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2032ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2032f0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2032f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2032f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2032f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2032f8: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2032f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
    // 0x2032fc: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2032fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
    // 0x203300: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x203304: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203304u;
    {
        const bool branch_taken_0x203304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203304u;
        // 0x203308: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203304) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x20330Cu;
label_20330c:
    // 0x20330c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203310: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203310u;
    {
        const bool branch_taken_0x203310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203310u;
        // 0x203314: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203310) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203318u;
label_203318:
    // 0x203318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x203318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20331c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x20331cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_203320:
    // 0x203320: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x203320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x203324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x203328u;
}
