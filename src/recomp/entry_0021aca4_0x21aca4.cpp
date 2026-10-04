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

// Function: entry_0021aca4
// Address: 0x21aca4 - 0x21add8
void entry_0021aca4_0x21aca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aca4_0x21aca4");
#endif

    switch (ctx->pc) {
        case 0x21acc0u: goto label_21acc0;
        case 0x21acc8u: goto label_21acc8;
        case 0x21ad68u: goto label_21ad68;
        case 0x21ada4u: goto label_21ada4;
        case 0x21adacu: goto label_21adac;
        case 0x21adb4u: goto label_21adb4;
        case 0x21adbcu: goto label_21adbc;
        case 0x21adc4u: goto label_21adc4;
        default: break;
    }

    ctx->pc = 0x21aca4u;

    // 0x21aca4: 0x0  nop
    ctx->pc = 0x21aca4u;
    // NOP
    // 0x21aca8: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21aca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21acac: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21acb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21acb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21ACB8u;
    SET_GPR_U32(ctx, 31, 0x21ACC0u);
    ctx->pc = 0x21ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACB8u;
    // 0x21acbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21ACB8u, 0x21ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACC0u;
label_21acc0:
    // 0x21acc0: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21ACC0u;
    SET_GPR_U32(ctx, 31, 0x21ACC8u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21ACC0u, 0x21ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACC8u;
label_21acc8:
    // 0x21acc8: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21accc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21ACCCu;
    {
        const bool branch_taken_0x21accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21accc) {
            ctx->pc = 0x21AD68u;
            goto label_21ad68;
        }
    }
    ctx->pc = 0x21ACD4u;
    // 0x21acd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21acd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21acd8: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21acdc: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21acdcu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21ace0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ace4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21ace8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21acec: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21acf0: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21acf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21acf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21acf8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21acfc: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21ad00: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21ad00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21ad04: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21ad08: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21ad0c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21ad10: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ad14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21ad18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ad18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad1c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21ad20: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21ad24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ad24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad28: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21ad2c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21ad30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21ad34: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21ad38: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21ad38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21ad3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad40: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21ad40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21ad44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21ad48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21ad4c: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21ad50: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21ad50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21ad54: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21ad54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21ad58: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21ad58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21ad5c: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21ad5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21ad60: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21AD60u;
    SET_GPR_U32(ctx, 31, 0x21AD68u);
    ctx->pc = 0x21AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD60u;
    // 0x21ad64: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21AD60u, 0x21AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD68u;
label_21ad68:
    // 0x21ad68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21ad6c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21ad70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21ad74: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21ad78: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21ad7c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ad80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ad84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad88: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21ad8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ad90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21ad94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ad98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ad9c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21AD9Cu;
    SET_GPR_U32(ctx, 31, 0x21ADA4u);
    ctx->pc = 0x21ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD9Cu;
    // 0x21ada0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21AD9Cu, 0x21ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADA4u;
label_21ada4:
    // 0x21ada4: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21ADA4u;
    SET_GPR_U32(ctx, 31, 0x21ADACu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21ADA4u, 0x21ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADACu;
label_21adac:
    // 0x21adac: 0xc04e120  jal         func_138480
    ctx->pc = 0x21ADACu;
    SET_GPR_U32(ctx, 31, 0x21ADB4u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21ADACu, 0x21ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADB4u;
label_21adb4:
    // 0x21adb4: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21ADB4u;
    SET_GPR_U32(ctx, 31, 0x21ADBCu);
    ctx->pc = 0x21ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ADB4u;
    // 0x21adb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21ADB4u, 0x21ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADBCu;
label_21adbc:
    // 0x21adbc: 0xc060258  jal         func_180960
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21ADBCu, 0x21ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADC4u;
label_21adc4:
    // 0x21adc4: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21adc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ADC8u;
    {
        const bool branch_taken_0x21adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21adc8) {
            ctx->pc = 0x21ADD8u;
            return;
        }
    }
    ctx->pc = 0x21ADD0u;
    // 0x21add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21add4: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21add4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
    ctx->pc = 0x21add8u;
}
