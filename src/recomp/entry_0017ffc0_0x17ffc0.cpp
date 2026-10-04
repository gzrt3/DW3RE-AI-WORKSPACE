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

// Function: entry_0017ffc0
// Address: 0x17ffc0 - 0x180170
void entry_0017ffc0_0x17ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ffc0_0x17ffc0");
#endif

    switch (ctx->pc) {
        case 0x17ffe0u: goto label_17ffe0;
        case 0x17ffe8u: goto label_17ffe8;
        case 0x17fff0u: goto label_17fff0;
        case 0x180014u: goto label_180014;
        case 0x18001cu: goto label_18001c;
        case 0x180038u: goto label_180038;
        case 0x180040u: goto label_180040;
        case 0x180048u: goto label_180048;
        case 0x180050u: goto label_180050;
        case 0x18005cu: goto label_18005c;
        case 0x180064u: goto label_180064;
        case 0x18006cu: goto label_18006c;
        case 0x180074u: goto label_180074;
        case 0x18007cu: goto label_18007c;
        case 0x180084u: goto label_180084;
        case 0x1800d0u: goto label_1800d0;
        case 0x1800dcu: goto label_1800dc;
        case 0x1800e4u: goto label_1800e4;
        case 0x1800ecu: goto label_1800ec;
        case 0x1800f4u: goto label_1800f4;
        case 0x1800fcu: goto label_1800fc;
        case 0x180108u: goto label_180108;
        case 0x180110u: goto label_180110;
        case 0x180118u: goto label_180118;
        case 0x180120u: goto label_180120;
        case 0x180128u: goto label_180128;
        case 0x180130u: goto label_180130;
        case 0x18013cu: goto label_18013c;
        case 0x180144u: goto label_180144;
        case 0x18014cu: goto label_18014c;
        default: break;
    }

    ctx->pc = 0x17ffc0u;

    // 0x17ffc0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x17ffc4: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x17ffc8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ffcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ffd0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17FFD0u;
    {
        const bool branch_taken_0x17ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD0u;
        // 0x17ffd4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd0) {
            ctx->pc = 0x17FF74u;
            return;
        }
    }
    ctx->pc = 0x17FFD8u;
    // 0x17ffd8: 0xc0669a2  jal         func_19A688
    ctx->pc = 0x17FFD8u;
    SET_GPR_U32(ctx, 31, 0x17FFE0u);
    ctx->pc = 0x17FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFD8u;
    // 0x17ffdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A688u, 0x17FFD8u, 0x17FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFE0u;
label_17ffe0:
    // 0x17ffe0: 0xc06614e  jal         func_198538
    ctx->pc = 0x17FFE0u;
    SET_GPR_U32(ctx, 31, 0x17FFE8u);
    ctx->pc = 0x198538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x17FFE0u, 0x17FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFE8u;
label_17ffe8:
    // 0x17ffe8: 0xc066998  jal         func_19A660
    ctx->pc = 0x17FFE8u;
    SET_GPR_U32(ctx, 31, 0x17FFF0u);
    ctx->pc = 0x17FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFE8u;
    // 0x17ffec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x17FFE8u, 0x17FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFF0u;
label_17fff0:
    // 0x17fff0: 0xaf8287a4  sw          $v0, -0x785C($gp)
    ctx->pc = 0x17fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936484), GPR_U32(ctx, 2));
    // 0x17fff4: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x17fff4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x17fff8: 0x8f8587a4  lw          $a1, -0x785C($gp)
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x17fffc: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180000: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x180000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180004: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x180008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18000c: 0xc06005c  jal         func_180170
    ctx->pc = 0x18000Cu;
    SET_GPR_U32(ctx, 31, 0x180014u);
    ctx->pc = 0x180010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18000Cu;
    // 0x180010: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x18000Cu, 0x180014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180014u;
label_180014:
    // 0x180014: 0xc0810ac  jal         func_2042B0
    ctx->pc = 0x180014u;
    SET_GPR_U32(ctx, 31, 0x18001Cu);
    ctx->pc = 0x2042B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2042B0u, 0x180014u, 0x18001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18001Cu;
label_18001c:
    // 0x18001c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x180020: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180024: 0xff8087b8  sd          $zero, -0x7848($gp)
    ctx->pc = 0x180024u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936504), GPR_U64(ctx, 0));
    // 0x180028: 0xff8087d0  sd          $zero, -0x7830($gp)
    ctx->pc = 0x180028u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 0));
    // 0x18002c: 0xff8087c8  sd          $zero, -0x7838($gp)
    ctx->pc = 0x18002cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 0));
    // 0x180030: 0xc05c2c4  jal         func_170B10
    ctx->pc = 0x180030u;
    SET_GPR_U32(ctx, 31, 0x180038u);
    ctx->pc = 0x180034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180030u;
    // 0x180034: 0xff8087c0  sd          $zero, -0x7840($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B10u, 0x180030u, 0x180038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180038u;
label_180038:
    // 0x180038: 0xc08fd64  jal         func_23F590
    ctx->pc = 0x180038u;
    SET_GPR_U32(ctx, 31, 0x180040u);
    ctx->pc = 0x23F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F590u, 0x180038u, 0x180040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180040u;
label_180040:
    // 0x180040: 0xc05bfb0  jal         func_16FEC0
    ctx->pc = 0x180040u;
    SET_GPR_U32(ctx, 31, 0x180048u);
    ctx->pc = 0x180044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180040u;
    // 0x180044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x180040u, 0x180048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180048u;
label_180048:
    // 0x180048: 0xc08d108  jal         func_234420
    ctx->pc = 0x180048u;
    SET_GPR_U32(ctx, 31, 0x180050u);
    ctx->pc = 0x234420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234420u, 0x180048u, 0x180050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180050u;
label_180050:
    // 0x180050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180054: 0xc06641a  jal         func_199068
    ctx->pc = 0x180054u;
    SET_GPR_U32(ctx, 31, 0x18005Cu);
    ctx->pc = 0x180058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180054u;
    // 0x180058: 0xaf8087d8  sw          $zero, -0x7828($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x180054u, 0x18005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18005Cu;
label_18005c:
    // 0x18005c: 0xc06641a  jal         func_199068
    ctx->pc = 0x18005Cu;
    SET_GPR_U32(ctx, 31, 0x180064u);
    ctx->pc = 0x180060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18005Cu;
    // 0x180060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x18005Cu, 0x180064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180064u;
label_180064:
    // 0x180064: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x180064u;
    SET_GPR_U32(ctx, 31, 0x18006Cu);
    ctx->pc = 0x180068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180064u;
    // 0x180068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x180064u, 0x18006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18006Cu;
label_18006c:
    // 0x18006c: 0xc06e068  jal         func_1B81A0
    ctx->pc = 0x18006Cu;
    SET_GPR_U32(ctx, 31, 0x180074u);
    ctx->pc = 0x1B81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81A0u, 0x18006Cu, 0x180074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180074u;
label_180074:
    // 0x180074: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x180074u;
    SET_GPR_U32(ctx, 31, 0x18007Cu);
    ctx->pc = 0x180078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180074u;
    // 0x180078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x180074u, 0x18007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18007Cu;
label_18007c:
    // 0x18007c: 0xc06641a  jal         func_199068
    ctx->pc = 0x18007Cu;
    SET_GPR_U32(ctx, 31, 0x180084u);
    ctx->pc = 0x180080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18007Cu;
    // 0x180080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x18007Cu, 0x180084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180084u;
label_180084:
    // 0x180084: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x180084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x180088: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x18008c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18008cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x180090: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x180094: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x180094u;
    runtime->Store32(rdram, ctx, 0x70003FFCu, GPR_U32(ctx, 3));
    // 0x180098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18009c: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x18009cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
    // 0x1800a0: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x1800a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x1800a4: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x1800a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
    // 0x1800a8: 0x24840610  addiu       $a0, $a0, 0x610
    ctx->pc = 0x1800a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    // 0x1800ac: 0xaf808800  sw          $zero, -0x7800($gp)
    ctx->pc = 0x1800acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 0));
    // 0x1800b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1800b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b4: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x1800b4u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1800b8: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1800b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x1800bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1800bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1800c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1800c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1800c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1800c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1800c8: 0xc08d118  jal         func_234460
    ctx->pc = 0x1800C8u;
    SET_GPR_U32(ctx, 31, 0x1800D0u);
    ctx->pc = 0x1800CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800C8u;
    // 0x1800cc: 0xaf828804  sw          $v0, -0x77FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234460u, 0x1800C8u, 0x1800D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800D0u;
label_1800d0:
    // 0x1800d0: 0xaf8287e0  sw          $v0, -0x7820($gp)
    ctx->pc = 0x1800d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
    // 0x1800d4: 0xc0694da  jal         func_1A5368
    ctx->pc = 0x1800D4u;
    SET_GPR_U32(ctx, 31, 0x1800DCu);
    ctx->pc = 0x1800D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800D4u;
    // 0x1800d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x1800D4u, 0x1800DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800DCu;
label_1800dc:
    // 0x1800dc: 0xc05c43c  jal         func_1710F0
    ctx->pc = 0x1800DCu;
    SET_GPR_U32(ctx, 31, 0x1800E4u);
    ctx->pc = 0x1710F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1710F0u, 0x1800DCu, 0x1800E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800E4u;
label_1800e4:
    // 0x1800e4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1800E4u;
    SET_GPR_U32(ctx, 31, 0x1800ECu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1800E4u, 0x1800ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800ECu;
label_1800ec:
    // 0x1800ec: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1800ECu;
    SET_GPR_U32(ctx, 31, 0x1800F4u);
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1800ECu, 0x1800F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800F4u;
label_1800f4:
    // 0x1800f4: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1800F4u;
    SET_GPR_U32(ctx, 31, 0x1800FCu);
    ctx->pc = 0x1800F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800F4u;
    // 0x1800f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1800F4u, 0x1800FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800FCu;
label_1800fc:
    // 0x1800fc: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x1800fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
    // 0x180100: 0xc069218  jal         func_1A4860
    ctx->pc = 0x180100u;
    SET_GPR_U32(ctx, 31, 0x180108u);
    ctx->pc = 0x180104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180100u;
    // 0x180104: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x180100u, 0x180108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180108u;
label_180108:
    // 0x180108: 0xc05c230  jal         func_1708C0
    ctx->pc = 0x180108u;
    SET_GPR_U32(ctx, 31, 0x180110u);
    ctx->pc = 0x1708C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1708C0u, 0x180108u, 0x180110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180110u;
label_180110:
    // 0x180110: 0xc041538  jal         func_1054E0
    ctx->pc = 0x180110u;
    SET_GPR_U32(ctx, 31, 0x180118u);
    ctx->pc = 0x1054E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054E0u, 0x180110u, 0x180118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180118u;
label_180118:
    // 0x180118: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x180118u;
    SET_GPR_U32(ctx, 31, 0x180120u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x180118u, 0x180120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180120u;
label_180120:
    // 0x180120: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x180120u;
    SET_GPR_U32(ctx, 31, 0x180128u);
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x180120u, 0x180128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180128u;
label_180128:
    // 0x180128: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x180128u;
    SET_GPR_U32(ctx, 31, 0x180130u);
    ctx->pc = 0x18012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180128u;
    // 0x18012c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x180128u, 0x180130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180130u;
label_180130:
    // 0x180130: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x180130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
    // 0x180134: 0xc069218  jal         func_1A4860
    ctx->pc = 0x180134u;
    SET_GPR_U32(ctx, 31, 0x18013Cu);
    ctx->pc = 0x180138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180134u;
    // 0x180138: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x180134u, 0x18013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18013Cu;
label_18013c:
    // 0x18013c: 0xc05c230  jal         func_1708C0
    ctx->pc = 0x18013Cu;
    SET_GPR_U32(ctx, 31, 0x180144u);
    ctx->pc = 0x1708C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1708C0u, 0x18013Cu, 0x180144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180144u;
label_180144:
    // 0x180144: 0xc041538  jal         func_1054E0
    ctx->pc = 0x180144u;
    SET_GPR_U32(ctx, 31, 0x18014Cu);
    ctx->pc = 0x1054E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054E0u, 0x180144u, 0x18014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18014Cu;
label_18014c:
    // 0x18014c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180150: 0xaf8387a0  sw          $v1, -0x7860($gp)
    ctx->pc = 0x180150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936480), GPR_U32(ctx, 3));
    // 0x180154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18015c: 0x3e00008  jr          $ra
    ctx->pc = 0x18015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18015Cu;
        // 0x180160: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180164u;
    // 0x180164: 0x0  nop
    ctx->pc = 0x180164u;
    // NOP
    // 0x180168: 0x0  nop
    ctx->pc = 0x180168u;
    // NOP
    // 0x18016c: 0x0  nop
    ctx->pc = 0x18016cu;
    // NOP
    ctx->pc = 0x180170u;
}
