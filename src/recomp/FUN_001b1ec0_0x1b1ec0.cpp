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

// Function: FUN_001b1ec0
// Address: 0x1b1ec0 - 0x1b1ff8
void FUN_001b1ec0_0x1b1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1ec0_0x1b1ec0");
#endif

    switch (ctx->pc) {
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f40u: goto label_1b1f40;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1fb0u: goto label_1b1fb0;
        case 0x1b1fd0u: goto label_1b1fd0;
        default: break;
    }

    ctx->pc = 0x1b1ec0u;

    // 0x1b1ec0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b1ec4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1ec8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1b1ecc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b1ed0: 0x24576200  addiu       $s7, $v0, 0x6200
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b1ed4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b1ed8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b1ed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1edc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b1ee0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ee4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b1ee8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b1ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1eec: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b1ef0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b1ef4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b1ef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1efc: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1b1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1f00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1F00u;
    {
        const bool branch_taken_0x1b1f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F00u;
        // 0x1b1f04: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f00) {
            ctx->pc = 0x1B1F10u;
            goto label_1b1f10;
        }
    }
    ctx->pc = 0x1B1F08u;
    // 0x1b1f08: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1B1F08u;
    {
        const bool branch_taken_0x1b1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F08u;
        // 0x1b1f0c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f08) {
            ctx->pc = 0x1B1FD4u;
            goto label_1b1fd4;
        }
    }
    ctx->pc = 0x1B1F10u;
label_1b1f10:
    // 0x1b1f10: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1f10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b1f14: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1F14u;
    SET_GPR_U32(ctx, 31, 0x1B1F1Cu);
    ctx->pc = 0x1B1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F14u;
    // 0x1b1f18: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1F14u, 0x1B1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F1Cu;
label_1b1f1c:
    // 0x1b1f1c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B1F1Cu;
    {
        const bool branch_taken_0x1b1f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F1Cu;
        // 0x1b1f20: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f1c) {
            ctx->pc = 0x1B1FD4u;
            goto label_1b1fd4;
        }
    }
    ctx->pc = 0x1B1F24u;
    // 0x1b1f24: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1F24u;
    {
        const bool branch_taken_0x1b1f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f24) {
            ctx->pc = 0x1B1F38u;
            goto label_1b1f38;
        }
    }
    ctx->pc = 0x1B1F2Cu;
    // 0x1b1f2c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b1f30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1F30u;
    {
        const bool branch_taken_0x1b1f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F30u;
        // 0x1b1f34: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f30) {
            ctx->pc = 0x1B1F48u;
            goto label_1b1f48;
        }
    }
    ctx->pc = 0x1B1F38u;
label_1b1f38:
    // 0x1b1f38: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1F38u;
    SET_GPR_U32(ctx, 31, 0x1B1F40u);
    ctx->pc = 0x1B1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F38u;
    // 0x1b1f3c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1F38u, 0x1B1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F40u;
label_1b1f40:
    // 0x1b1f40: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1F40u;
    {
        const bool branch_taken_0x1b1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F40u;
        // 0x1b1f44: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f40) {
            ctx->pc = 0x1B1FD4u;
            goto label_1b1fd4;
        }
    }
    ctx->pc = 0x1B1F48u;
label_1b1f48:
    // 0x1b1f48: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b1f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f4c: 0x245162b0  addiu       $s1, $v0, 0x62B0
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b1f50: 0x261067c0  addiu       $s0, $s0, 0x67C0
    ctx->pc = 0x1b1f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26560));
    // 0x1b1f54: 0xac5362b0  sw          $s3, 0x62B0($v0)
    ctx->pc = 0x1b1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 19));
    // 0x1b1f58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f5c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1b1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1b1f60: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b1f64: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1b1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x1b1f68: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x1B1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F68u;
    // 0x1b1f6c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B1F68u, 0x1B1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f74: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b1f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1f78: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1F78u;
    SET_GPR_U32(ctx, 31, 0x1B1F80u);
    ctx->pc = 0x1B1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F78u;
    // 0x1b1f7c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1F78u, 0x1B1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F80u;
label_1b1f80:
    // 0x1b1f80: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f84: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b1f88: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1b1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1b1f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f94: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1f98: 0x256b1e38  addiu       $t3, $t3, 0x1E38
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7736));
    // 0x1b1f9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1fa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1fa4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b1fa8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1FA8u;
    SET_GPR_U32(ctx, 31, 0x1B1FB0u);
    ctx->pc = 0x1B1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FA8u;
    // 0x1b1fac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1FA8u, 0x1B1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FB0u;
label_1b1fb0:
    // 0x1b1fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1FB4u;
    {
        const bool branch_taken_0x1b1fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FB4u;
        // 0x1b1fb8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fb4) {
            ctx->pc = 0x1B1FC8u;
            goto label_1b1fc8;
        }
    }
    ctx->pc = 0x1B1FBCu;
    // 0x1b1fbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1fc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1FC0u;
    {
        const bool branch_taken_0x1b1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc0) {
            ctx->pc = 0x1B1FD0u;
            goto label_1b1fd0;
        }
    }
    ctx->pc = 0x1B1FC8u;
label_1b1fc8:
    // 0x1b1fc8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC8u;
    // 0x1b1fcc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1FC8u, 0x1B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FD0u;
label_1b1fd0:
    // 0x1b1fd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fd4:
    // 0x1b1fd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1fd8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b1fd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1fdc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1fdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1fe0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1fe4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1fe8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1fec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1ff0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1ff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b1ff8u;
}
