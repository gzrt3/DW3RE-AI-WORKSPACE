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

// Function: entry_0021b014
// Address: 0x21b014 - 0x21b14c
void entry_0021b014_0x21b014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b014_0x21b014");
#endif

    switch (ctx->pc) {
        case 0x21b030u: goto label_21b030;
        case 0x21b038u: goto label_21b038;
        case 0x21b0d8u: goto label_21b0d8;
        case 0x21b114u: goto label_21b114;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b124u: goto label_21b124;
        case 0x21b12cu: goto label_21b12c;
        case 0x21b134u: goto label_21b134;
        default: break;
    }

    ctx->pc = 0x21b014u;

    // 0x21b014: 0x0  nop
    ctx->pc = 0x21b014u;
    // NOP
    // 0x21b018: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21b018u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21b01c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21b020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b028: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B028u;
    SET_GPR_U32(ctx, 31, 0x21B030u);
    ctx->pc = 0x21B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B028u;
    // 0x21b02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B028u, 0x21B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B030u;
label_21b030:
    // 0x21b030: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21B030u;
    SET_GPR_U32(ctx, 31, 0x21B038u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21B030u, 0x21B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B038u;
label_21b038:
    // 0x21b038: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b03c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21B03Cu;
    {
        const bool branch_taken_0x21b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b03c) {
            ctx->pc = 0x21B0D8u;
            goto label_21b0d8;
        }
    }
    ctx->pc = 0x21B044u;
    // 0x21b044: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b048: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21b04c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b050: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b054: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21b058: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b05c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21b060: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b064: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21b068: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b06c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21b070: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b074: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21b078: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21b07c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21b080: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b084: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b08c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21b090: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21b094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b098: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21b09c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b0a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b0a4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b0a8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21b0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0b0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b0b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b0b8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b0bc: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21b0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b0c0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21b0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b0c4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21b0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b0c8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21b0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21b0cc: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21b0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21b0d0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B0D0u;
    SET_GPR_U32(ctx, 31, 0x21B0D8u);
    ctx->pc = 0x21B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0D0u;
    // 0x21b0d4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B0D0u, 0x21B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0D8u;
label_21b0d8:
    // 0x21b0d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b0dc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b0e4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b0e8: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21b0ec: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b0fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b100: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b108: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b10c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B10Cu;
    SET_GPR_U32(ctx, 31, 0x21B114u);
    ctx->pc = 0x21B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B10Cu;
    // 0x21b110: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B10Cu, 0x21B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B114u;
label_21b114:
    // 0x21b114: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21B114u;
    SET_GPR_U32(ctx, 31, 0x21B11Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21B114u, 0x21B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B11Cu;
label_21b11c:
    // 0x21b11c: 0xc04e120  jal         func_138480
    ctx->pc = 0x21B11Cu;
    SET_GPR_U32(ctx, 31, 0x21B124u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21B11Cu, 0x21B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B124u;
label_21b124:
    // 0x21b124: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21B124u;
    SET_GPR_U32(ctx, 31, 0x21B12Cu);
    ctx->pc = 0x21B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B124u;
    // 0x21b128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21B124u, 0x21B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B12Cu;
label_21b12c:
    // 0x21b12c: 0xc060258  jal         func_180960
    ctx->pc = 0x21B12Cu;
    SET_GPR_U32(ctx, 31, 0x21B134u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21B12Cu, 0x21B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B134u;
label_21b134:
    // 0x21b134: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21b138: 0x1040fe52  beqz        $v0, . + 4 + (-0x1AE << 2)
    ctx->pc = 0x21B138u;
    {
        const bool branch_taken_0x21b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b138) {
            ctx->pc = 0x21AA84u;
            return;
        }
    }
    ctx->pc = 0x21B140u;
    // 0x21b140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b144: 0x1000fe4f  b           . + 4 + (-0x1B1 << 2)
    ctx->pc = 0x21B144u;
    {
        const bool branch_taken_0x21b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B144u;
        // 0x21b148: 0xaf8292c0  sw          $v0, -0x6D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b144) {
            ctx->pc = 0x21AA84u;
            return;
        }
    }
    ctx->pc = 0x21B14Cu;
}
