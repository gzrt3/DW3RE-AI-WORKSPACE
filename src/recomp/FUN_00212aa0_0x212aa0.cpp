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

// Function: FUN_00212aa0
// Address: 0x212aa0 - 0x212bc0
void FUN_00212aa0_0x212aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212aa0_0x212aa0");
#endif

    switch (ctx->pc) {
        case 0x212abcu: goto label_212abc;
        case 0x212ae0u: goto label_212ae0;
        case 0x212b00u: goto label_212b00;
        case 0x212b28u: goto label_212b28;
        case 0x212b38u: goto label_212b38;
        case 0x212b54u: goto label_212b54;
        case 0x212b64u: goto label_212b64;
        case 0x212b74u: goto label_212b74;
        case 0x212b84u: goto label_212b84;
        case 0x212b94u: goto label_212b94;
        case 0x212ba4u: goto label_212ba4;
        case 0x212bb4u: goto label_212bb4;
        default: break;
    }

    ctx->pc = 0x212aa0u;

    // 0x212aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x212aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212ab0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x212ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x212ab4: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x212AB4u;
    SET_GPR_U32(ctx, 31, 0x212ABCu);
    ctx->pc = 0x212AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AB4u;
    // 0x212ab8: 0x26104920  addiu       $s0, $s0, 0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x212AB4u, 0x212ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ABCu;
label_212abc:
    // 0x212abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ac0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212AC0u;
    {
        const bool branch_taken_0x212ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC0u;
        // 0x212ac4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ac0) {
            ctx->pc = 0x212AD0u;
            goto label_212ad0;
        }
    }
    ctx->pc = 0x212AC8u;
    // 0x212ac8: 0x16240007  bne         $s1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212AC8u;
    {
        const bool branch_taken_0x212ac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x212ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC8u;
        // 0x212acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ac8) {
            ctx->pc = 0x212AE8u;
            goto label_212ae8;
        }
    }
    ctx->pc = 0x212AD0u;
label_212ad0:
    // 0x212ad0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212ad4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x212ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x212ad8: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212AD8u;
    SET_GPR_U32(ctx, 31, 0x212AE0u);
    ctx->pc = 0x212ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AD8u;
    // 0x212adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212AD8u, 0x212AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AE0u;
label_212ae0:
    // 0x212ae0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x212AE0u;
    {
        const bool branch_taken_0x212ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE0u;
        // 0x212ae4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae0) {
            ctx->pc = 0x212BC0u;
            return;
        }
    }
    ctx->pc = 0x212AE8u;
label_212ae8:
    // 0x212ae8: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212AE8u;
    {
        const bool branch_taken_0x212ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE8u;
        // 0x212aec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae8) {
            ctx->pc = 0x212B08u;
            goto label_212b08;
        }
    }
    ctx->pc = 0x212AF0u;
    // 0x212af0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212af4: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
    // 0x212af8: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212AF8u;
    SET_GPR_U32(ctx, 31, 0x212B00u);
    ctx->pc = 0x212AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF8u;
    // 0x212afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212AF8u, 0x212B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B00u;
label_212b00:
    // 0x212b00: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x212B00u;
    {
        const bool branch_taken_0x212b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b00) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B08u;
label_212b08:
    // 0x212b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212b0c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212B0Cu;
    {
        const bool branch_taken_0x212b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b0c) {
            ctx->pc = 0x212B44u;
            goto label_212b44;
        }
    }
    ctx->pc = 0x212B14u;
    // 0x212b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212b18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212b1c: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x334900u));
    // 0x212b20: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212B20u;
    SET_GPR_U32(ctx, 31, 0x212B28u);
    ctx->pc = 0x212B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B20u;
    // 0x212b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212B20u, 0x212B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B28u;
label_212b28:
    // 0x212b28: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x212B28u;
    {
        const bool branch_taken_0x212b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b28) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B30u;
    // 0x212b30: 0xc07aebc  jal         func_1EBAF0
    ctx->pc = 0x212B30u;
    SET_GPR_U32(ctx, 31, 0x212B38u);
    ctx->pc = 0x1EBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBAF0u, 0x212B30u, 0x212B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B38u;
label_212b38:
    // 0x212b38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212b3c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x212B3Cu;
    {
        const bool branch_taken_0x212b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B3Cu;
        // 0x212b40: 0xac22ccd4  sw          $v0, -0x332C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b3c) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B44u;
label_212b44:
    // 0x212b44: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212B44u;
    {
        const bool branch_taken_0x212b44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x212b44) {
            ctx->pc = 0x212B6Cu;
            goto label_212b6c;
        }
    }
    ctx->pc = 0x212B4Cu;
    // 0x212b4c: 0xc08a614  jal         func_229850
    ctx->pc = 0x212B4Cu;
    SET_GPR_U32(ctx, 31, 0x212B54u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x212B4Cu, 0x212B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B54u;
label_212b54:
    // 0x212b54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b5c: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212B5Cu;
    SET_GPR_U32(ctx, 31, 0x212B64u);
    ctx->pc = 0x212B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B5Cu;
    // 0x212b60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212B5Cu, 0x212B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B64u;
label_212b64:
    // 0x212b64: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x212B64u;
    {
        const bool branch_taken_0x212b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b64) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B6Cu;
label_212b6c:
    // 0x212b6c: 0xc051338  jal         func_144CE0
    ctx->pc = 0x212B6Cu;
    SET_GPR_U32(ctx, 31, 0x212B74u);
    ctx->pc = 0x144CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CE0u, 0x212B6Cu, 0x212B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B74u;
label_212b74:
    // 0x212b74: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b7c: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212B7Cu;
    SET_GPR_U32(ctx, 31, 0x212B84u);
    ctx->pc = 0x212B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B7Cu;
    // 0x212b80: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212B7Cu, 0x212B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B84u;
label_212b84:
    // 0x212b84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212B84u;
    {
        const bool branch_taken_0x212b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B84u;
        // 0x212b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b84) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B8Cu;
    // 0x212b8c: 0xc051350  jal         func_144D40
    ctx->pc = 0x212B8Cu;
    SET_GPR_U32(ctx, 31, 0x212B94u);
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212B8Cu, 0x212B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B94u;
label_212b94:
    // 0x212b94: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212b9c: 0xc051350  jal         func_144D40
    ctx->pc = 0x212B9Cu;
    SET_GPR_U32(ctx, 31, 0x212BA4u);
    ctx->pc = 0x212BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B9Cu;
    // 0x212ba0: 0xac22ccd8  sw          $v0, -0x3328($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212B9Cu, 0x212BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BA4u;
label_212ba4:
    // 0x212ba4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212ba8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x212ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212bac: 0xc051350  jal         func_144D40
    ctx->pc = 0x212BACu;
    SET_GPR_U32(ctx, 31, 0x212BB4u);
    ctx->pc = 0x212BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BACu;
    // 0x212bb0: 0xac22ccdc  sw          $v0, -0x3324($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212BACu, 0x212BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BB4u;
label_212bb4:
    // 0x212bb4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212bb8: 0xac22cce0  sw          $v0, -0x3320($at)
    ctx->pc = 0x212bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x29CCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CCE0u, _value); } while (0);
label_212bbc:
    // 0x212bbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x212bc0u;
}
