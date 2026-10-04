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

// Function: entry_001e6754
// Address: 0x1e6754 - 0x1e6bac
void entry_001e6754_0x1e6754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6754_0x1e6754");
#endif

    switch (ctx->pc) {
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6764u: goto label_1e6764;
        case 0x1e676cu: goto label_1e676c;
        case 0x1e6774u: goto label_1e6774;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67fcu: goto label_1e67fc;
        case 0x1e6934u: goto label_1e6934;
        case 0x1e69a4u: goto label_1e69a4;
        case 0x1e69d4u: goto label_1e69d4;
        case 0x1e69f0u: goto label_1e69f0;
        case 0x1e69f8u: goto label_1e69f8;
        case 0x1e6a00u: goto label_1e6a00;
        case 0x1e6a08u: goto label_1e6a08;
        case 0x1e6ad8u: goto label_1e6ad8;
        case 0x1e6b4cu: goto label_1e6b4c;
        case 0x1e6b68u: goto label_1e6b68;
        case 0x1e6b70u: goto label_1e6b70;
        case 0x1e6b78u: goto label_1e6b78;
        case 0x1e6b80u: goto label_1e6b80;
        case 0x1e6b88u: goto label_1e6b88;
        case 0x1e6b90u: goto label_1e6b90;
        case 0x1e6b98u: goto label_1e6b98;
        default: break;
    }

    ctx->pc = 0x1e6754u;

    // 0x1e6754: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x1E6754u;
    SET_GPR_U32(ctx, 31, 0x1E675Cu);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x1E6754u, 0x1E675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E675Cu;
label_1e675c:
    // 0x1e675c: 0xc07b230  jal         func_1EC8C0
    ctx->pc = 0x1E675Cu;
    SET_GPR_U32(ctx, 31, 0x1E6764u);
    ctx->pc = 0x1EC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8C0u, 0x1E675Cu, 0x1E6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6764u;
label_1e6764:
    // 0x1e6764: 0xc07ab54  jal         func_1EAD50
    ctx->pc = 0x1E6764u;
    SET_GPR_U32(ctx, 31, 0x1E676Cu);
    ctx->pc = 0x1EAD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD50u, 0x1E6764u, 0x1E676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E676Cu;
label_1e676c:
    // 0x1e676c: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x1E676Cu;
    SET_GPR_U32(ctx, 31, 0x1E6774u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E676Cu, 0x1E6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6774u;
label_1e6774:
    // 0x1e6774: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e6774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6778: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e677c: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1e677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x1e6780: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e6784: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e6788: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
    // 0x1e678c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e678cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e6790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6798: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1e679c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e67a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e67a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e67a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e67ac: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E67ACu;
    SET_GPR_U32(ctx, 31, 0x1E67B4u);
    ctx->pc = 0x1E67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67ACu;
    // 0x1e67b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E67ACu, 0x1E67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67B4u;
label_1e67b4:
    // 0x1e67b4: 0x8f828e2c  lw          $v0, -0x71D4($gp)
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
    // 0x1e67b8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1E67B8u;
    {
        const bool branch_taken_0x1e67b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e67b8) {
            ctx->pc = 0x1E6934u;
            goto label_1e6934;
        }
    }
    ctx->pc = 0x1E67C0u;
    // 0x1e67c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e67c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e67c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e67c8: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e67cc: 0x27858e30  addiu       $a1, $gp, -0x71D0
    ctx->pc = 0x1e67ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
    // 0x1e67d0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e67d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e67d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e67d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e67d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e67dc: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1e67e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e67e4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1e67e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1e67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e67ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e67ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e67f0: 0x0  nop
    ctx->pc = 0x1e67f0u;
    // NOP
    // 0x1e67f4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1e67f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e67f8: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_1e67fc:
    // 0x1e67fc: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e67fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
    // 0x1e6800: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1e6800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e6804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e6808: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e680c: 0x28470010  slti        $a3, $v0, 0x10
    ctx->pc = 0x1e680cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e6810: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1e6810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1e6814: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1e6818: 0xa4c80088  sh          $t0, 0x88($a2)
    ctx->pc = 0x1e6818u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 136), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e681c: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
    // 0x1e6820: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1e6824: 0xa4c8008a  sh          $t0, 0x8A($a2)
    ctx->pc = 0x1e6824u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 138), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e6828: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e6828u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
    // 0x1e682c: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
    // 0x1e6830: 0xa4c800a0  sh          $t0, 0xA0($a2)
    ctx->pc = 0x1e6830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 160), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e6834: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
    // 0x1e6838: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1e683c: 0xa4c800a2  sh          $t0, 0xA2($a2)
    ctx->pc = 0x1e683cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 162), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e6840: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
    // 0x1e6844: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1e6848: 0xa4c800b8  sh          $t0, 0xB8($a2)
    ctx->pc = 0x1e6848u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 184), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e684c: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e684cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
    // 0x1e6850: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
    // 0x1e6854: 0xa4c800ba  sh          $t0, 0xBA($a2)
    ctx->pc = 0x1e6854u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 186), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e6858: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e6858u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
    // 0x1e685c: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e685cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
    // 0x1e6860: 0xa4c800d0  sh          $t0, 0xD0($a2)
    ctx->pc = 0x1e6860u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 208), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e6864: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
    // 0x1e6868: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
    // 0x1e686c: 0xa4c800d2  sh          $t0, 0xD2($a2)
    ctx->pc = 0x1e686cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 210), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e6870: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e6870u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12496)));
    // 0x1e6874: 0xa0c80080  sb          $t0, 0x80($a2)
    ctx->pc = 0x1e6874u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e6878: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e687c: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D4u));
    // 0x1e6880: 0xa0c80081  sb          $t0, 0x81($a2)
    ctx->pc = 0x1e6880u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 129), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e6884: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e6888: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e6888u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D8u));
    // 0x1e688c: 0xa0c80082  sb          $t0, 0x82($a2)
    ctx->pc = 0x1e688cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 130), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e6890: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e6894: 0xa0ca0083  sb          $t2, 0x83($a2)
    ctx->pc = 0x1e6894u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 10));
    // 0x1e6898: 0xacc90084  sw          $t1, 0x84($a2)
    ctx->pc = 0x1e6898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 9));
    // 0x1e689c: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e689cu;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D0u));
    // 0x1e68a0: 0xa0c80098  sb          $t0, 0x98($a2)
    ctx->pc = 0x1e68a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 152), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68a4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e68a8: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D4u));
    // 0x1e68ac: 0xa0c80099  sb          $t0, 0x99($a2)
    ctx->pc = 0x1e68acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 153), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68b0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e68b4: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D8u));
    // 0x1e68b8: 0xa0c8009a  sb          $t0, 0x9A($a2)
    ctx->pc = 0x1e68b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 154), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68bc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e68c0: 0xa0ca009b  sb          $t2, 0x9B($a2)
    ctx->pc = 0x1e68c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 10));
    // 0x1e68c4: 0xacc9009c  sw          $t1, 0x9C($a2)
    ctx->pc = 0x1e68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 9));
    // 0x1e68c8: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D0u));
    // 0x1e68cc: 0xa0c800b0  sb          $t0, 0xB0($a2)
    ctx->pc = 0x1e68ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 176), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68d0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e68d4: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e68d4u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D4u));
    // 0x1e68d8: 0xa0c800b1  sb          $t0, 0xB1($a2)
    ctx->pc = 0x1e68d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 177), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68dc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e68e0: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D8u));
    // 0x1e68e4: 0xa0c800b2  sb          $t0, 0xB2($a2)
    ctx->pc = 0x1e68e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 178), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68e8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e68ec: 0xa0c000b3  sb          $zero, 0xB3($a2)
    ctx->pc = 0x1e68ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e68f0: 0xacc900b4  sw          $t1, 0xB4($a2)
    ctx->pc = 0x1e68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 9));
    // 0x1e68f4: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D0u));
    // 0x1e68f8: 0xa0c800c8  sb          $t0, 0xC8($a2)
    ctx->pc = 0x1e68f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 200), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e68fc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e6900: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e6900u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D4u));
    // 0x1e6904: 0xa0c800c9  sb          $t0, 0xC9($a2)
    ctx->pc = 0x1e6904u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 201), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e6908: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e690c: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4B30D8u));
    // 0x1e6910: 0xa0c800ca  sb          $t0, 0xCA($a2)
    ctx->pc = 0x1e6910u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 202), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e6914: 0xa0c000cb  sb          $zero, 0xCB($a2)
    ctx->pc = 0x1e6914u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6918: 0x14e0ffb8  bnez        $a3, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1E6918u;
    {
        const bool branch_taken_0x1e6918 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6918u;
        // 0x1e691c: 0xacc900cc  sw          $t1, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6918) {
            ctx->pc = 0x1E67FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e67fc;
        }
    }
    ctx->pc = 0x1E6920u;
    // 0x1e6920: 0x240600d1  addiu       $a2, $zero, 0xD1
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x1e6924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e692c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E692Cu;
    SET_GPR_U32(ctx, 31, 0x1E6934u);
    ctx->pc = 0x1E6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E692Cu;
    // 0x1e6930: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E692Cu, 0x1E6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6934u;
label_1e6934:
    // 0x1e6934: 0x8f828e10  lw          $v0, -0x71F0($gp)
    ctx->pc = 0x1e6934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938128)));
    // 0x1e6938: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E6938u;
    {
        const bool branch_taken_0x1e6938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6938) {
            ctx->pc = 0x1E69F0u;
            goto label_1e69f0;
        }
    }
    ctx->pc = 0x1E6940u;
    // 0x1e6940: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e6940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6944: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e6948: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e694c: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x1e6950: 0x27848e18  addiu       $a0, $gp, -0x71E8
    ctx->pc = 0x1e6950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
    // 0x1e6954: 0x8f838e08  lw          $v1, -0x71F8($gp)
    ctx->pc = 0x1e6954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    // 0x1e6958: 0x24422e30  addiu       $v0, $v0, 0x2E30
    ctx->pc = 0x1e6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11824));
    // 0x1e695c: 0x254a1e00  addiu       $t2, $t2, 0x1E00
    ctx->pc = 0x1e695cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7680));
    // 0x1e6960: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1e6964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e696c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e696cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6970: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1e6970u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e6974: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e6974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e6978: 0x14b8021  addu        $s0, $t2, $t3
    ctx->pc = 0x1e6978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1e697c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e6980: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6984: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x1e6984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x1e6988: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x1e6988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x1e698c: 0x8f838e0c  lw          $v1, -0x71F4($gp)
    ctx->pc = 0x1e698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938124)));
    // 0x1e6990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6998: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e6998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e699c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E699Cu;
    SET_GPR_U32(ctx, 31, 0x1E69A4u);
    ctx->pc = 0x1E69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E699Cu;
    // 0x1e69a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E699Cu, 0x1E69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69A4u;
label_1e69a4:
    // 0x1e69a4: 0x8f838e0c  lw          $v1, -0x71F4($gp)
    ctx->pc = 0x1e69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938124)));
    // 0x1e69a8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e69ac: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1e69acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
    // 0x1e69b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e69b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69b4: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x1e69b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x1e69b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e69b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e69bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e69c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e69c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e69c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e69cc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E69CCu;
    SET_GPR_U32(ctx, 31, 0x1E69D4u);
    ctx->pc = 0x1E69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69CCu;
    // 0x1e69d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E69CCu, 0x1E69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69D4u;
label_1e69d4:
    // 0x1e69d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e69d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e69d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69dc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e69dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e69e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e69e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e69e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69e8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E69E8u;
    SET_GPR_U32(ctx, 31, 0x1E69F0u);
    ctx->pc = 0x1E69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69E8u;
    // 0x1e69ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E69E8u, 0x1E69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69F0u;
label_1e69f0:
    // 0x1e69f0: 0xc079be8  jal         func_1E6FA0
    ctx->pc = 0x1E69F0u;
    SET_GPR_U32(ctx, 31, 0x1E69F8u);
    ctx->pc = 0x1E6FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6FA0u, 0x1E69F0u, 0x1E69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69F8u;
label_1e69f8:
    // 0x1e69f8: 0xc079f80  jal         func_1E7E00
    ctx->pc = 0x1E69F8u;
    SET_GPR_U32(ctx, 31, 0x1E6A00u);
    ctx->pc = 0x1E7E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E00u, 0x1E69F8u, 0x1E6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A00u;
label_1e6a00:
    // 0x1e6a00: 0xc079af4  jal         func_1E6BD0
    ctx->pc = 0x1E6A00u;
    SET_GPR_U32(ctx, 31, 0x1E6A08u);
    ctx->pc = 0x1E6BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BD0u, 0x1E6A00u, 0x1E6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A08u;
label_1e6a08:
    // 0x1e6a08: 0x8f828e40  lw          $v0, -0x71C0($gp)
    ctx->pc = 0x1e6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1e6a0c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E6A0Cu;
    {
        const bool branch_taken_0x1e6a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a0c) {
            ctx->pc = 0x1E6AD8u;
            goto label_1e6ad8;
        }
    }
    ctx->pc = 0x1E6A14u;
    // 0x1e6a14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e6a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6a18: 0x878b8e38  lh          $t3, -0x71C8($gp)
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938168)));
    // 0x1e6a1c: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e6a20: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x1e6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x1e6a24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e6a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e6a28: 0x27858e48  addiu       $a1, $gp, -0x71B8
    ctx->pc = 0x1e6a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938184));
    // 0x1e6a2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6a30: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x1e6a34: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1e6a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1e6a38: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e6a3c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e6a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e6a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a44: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x1e6a44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
    // 0x1e6a48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a4c: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x1e6a4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x1e6a50: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1e6a50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1e6a54: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1e6a54u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1e6a58: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x1e6a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x1e6a5c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1e6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1e6a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6a68: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x1e6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1e6a6c: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x1e6a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
    // 0x1e6a70: 0x878b8e38  lh          $t3, -0x71C8($gp)
    ctx->pc = 0x1e6a70u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938168)));
    // 0x1e6a74: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1e6a74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1e6a78: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x1e6a78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x1e6a7c: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x1e6a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x1e6a80: 0x8f8b8e3c  lw          $t3, -0x71C4($gp)
    ctx->pc = 0x1e6a80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
    // 0x1e6a84: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x1e6a84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e6a88: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1e6a8c: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x1e6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1e6a90: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x1e6a90u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e6a94: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1e6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1e6a98: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x1e6a98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e6a9c: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x1e6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
    // 0x1e6aa0: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x1e6aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
    // 0x1e6aa4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6aa8: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x1e6aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
    // 0x1e6aac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e6ab0: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x1e6ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e6ab4: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x1e6ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
    // 0x1e6ab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e6ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e6abc: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x1e6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
    // 0x1e6ac0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e6ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e6ac4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e6ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e6ac8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e6ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1e6acc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e6ad0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E6AD0u;
    SET_GPR_U32(ctx, 31, 0x1E6AD8u);
    ctx->pc = 0x1E6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AD0u;
    // 0x1e6ad4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E6AD0u, 0x1E6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AD8u;
label_1e6ad8:
    // 0x1e6ad8: 0x8f828e58  lw          $v0, -0x71A8($gp)
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1e6adc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E6ADCu;
    {
        const bool branch_taken_0x1e6adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6adc) {
            ctx->pc = 0x1E6B68u;
            goto label_1e6b68;
        }
    }
    ctx->pc = 0x1E6AE4u;
    // 0x1e6ae4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e6ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6ae8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1e6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1e6aec: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e6af0: 0x27838e60  addiu       $v1, $gp, -0x71A0
    ctx->pc = 0x1e6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
    // 0x1e6af4: 0x83828e50  lb          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1e6af8: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1e6af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x1e6afc: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e6afcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1e6b00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e6b04: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1e6b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e6b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6b0c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6b10: 0xa2220083  sb          $v0, 0x83($s1)
    ctx->pc = 0x1e6b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6b14: 0x8f828e50  lw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1e6b18: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e6b1c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6B1Cu;
    {
        const bool branch_taken_0x1e6b1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B1Cu;
        // 0x1e6b20: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b1c) {
            ctx->pc = 0x1E6B2Cu;
            goto label_1e6b2c;
        }
    }
    ctx->pc = 0x1E6B24u;
    // 0x1e6b24: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1e6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x1e6b28: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1e6b28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1e6b2c:
    // 0x1e6b2c: 0xa222014b  sb          $v0, 0x14B($s1)
    ctx->pc = 0x1e6b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 331), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6b30: 0xa222013b  sb          $v0, 0x13B($s1)
    ctx->pc = 0x1e6b30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 315), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6b34: 0x83828e50  lb          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6b34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1e6b38: 0xa2220273  sb          $v0, 0x273($s1)
    ctx->pc = 0x1e6b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 627), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6b3c: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x1e6b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6b40: 0x8f848e54  lw          $a0, -0x71AC($gp)
    ctx->pc = 0x1e6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938196)));
    // 0x1e6b44: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1E6B44u;
    SET_GPR_U32(ctx, 31, 0x1E6B4Cu);
    ctx->pc = 0x1E6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B44u;
    // 0x1e6b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1E6B44u, 0x1E6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B4Cu;
label_1e6b4c:
    // 0x1e6b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b54: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x1e6b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e6b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b60: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E6B60u;
    SET_GPR_U32(ctx, 31, 0x1E6B68u);
    ctx->pc = 0x1E6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B60u;
    // 0x1e6b64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E6B60u, 0x1E6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B68u;
label_1e6b68:
    // 0x1e6b68: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x1E6B68u;
    SET_GPR_U32(ctx, 31, 0x1E6B70u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x1E6B68u, 0x1E6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B70u;
label_1e6b70:
    // 0x1e6b70: 0xc07b1bc  jal         func_1EC6F0
    ctx->pc = 0x1E6B70u;
    SET_GPR_U32(ctx, 31, 0x1E6B78u);
    ctx->pc = 0x1EC6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6F0u, 0x1E6B70u, 0x1E6B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B78u;
label_1e6b78:
    // 0x1e6b78: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1E6B78u;
    SET_GPR_U32(ctx, 31, 0x1E6B80u);
    ctx->pc = 0x1EACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACF0u, 0x1E6B78u, 0x1E6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B80u;
label_1e6b80:
    // 0x1e6b80: 0xc04e120  jal         func_138480
    ctx->pc = 0x1E6B80u;
    SET_GPR_U32(ctx, 31, 0x1E6B88u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1E6B80u, 0x1E6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B88u;
label_1e6b88:
    // 0x1e6b88: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1E6B88u;
    SET_GPR_U32(ctx, 31, 0x1E6B90u);
    ctx->pc = 0x1E6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B88u;
    // 0x1e6b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E6B88u, 0x1E6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B90u;
label_1e6b90:
    // 0x1e6b90: 0xc060258  jal         func_180960
    ctx->pc = 0x1E6B90u;
    SET_GPR_U32(ctx, 31, 0x1E6B98u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E6B90u, 0x1E6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B98u;
label_1e6b98:
    // 0x1e6b98: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x1e6b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6B9Cu;
    {
        const bool branch_taken_0x1e6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b9c) {
            ctx->pc = 0x1E6BACu;
            return;
        }
    }
    ctx->pc = 0x1E6BA4u;
    // 0x1e6ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6ba8: 0xaf828e94  sw          $v0, -0x716C($gp)
    ctx->pc = 0x1e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938260), GPR_U32(ctx, 2));
    ctx->pc = 0x1e6bacu;
}
