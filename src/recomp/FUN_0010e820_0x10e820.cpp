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

// Function: FUN_0010e820
// Address: 0x10e820 - 0x10eac4
void FUN_0010e820_0x10e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e820_0x10e820");
#endif

    switch (ctx->pc) {
        case 0x10e83cu: goto label_10e83c;
        case 0x10e850u: goto label_10e850;
        case 0x10e870u: goto label_10e870;
        case 0x10e908u: goto label_10e908;
        case 0x10e948u: goto label_10e948;
        case 0x10e954u: goto label_10e954;
        case 0x10e960u: goto label_10e960;
        case 0x10e98cu: goto label_10e98c;
        case 0x10e9d4u: goto label_10e9d4;
        case 0x10e9e0u: goto label_10e9e0;
        case 0x10e9ecu: goto label_10e9ec;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea0cu: goto label_10ea0c;
        case 0x10ea14u: goto label_10ea14;
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea24u: goto label_10ea24;
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea3cu: goto label_10ea3c;
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea64u: goto label_10ea64;
        case 0x10ea88u: goto label_10ea88;
        case 0x10ea90u: goto label_10ea90;
        case 0x10ea98u: goto label_10ea98;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa8u: goto label_10eaa8;
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eac0u: goto label_10eac0;
        default: break;
    }

    ctx->pc = 0x10e820u;

    // 0x10e820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e824: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x10e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10e828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10e82c: 0x24050de0  addiu       $a1, $zero, 0xDE0
    ctx->pc = 0x10e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3552));
    // 0x10e830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10e834: 0xc070080  jal         func_1C0200
    ctx->pc = 0x10E834u;
    SET_GPR_U32(ctx, 31, 0x10E83Cu);
    ctx->pc = 0x10E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E834u;
    // 0x10e838: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x10E834u, 0x10E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E83Cu;
label_10e83c:
    // 0x10e83c: 0xaf8284e0  sw          $v0, -0x7B20($gp)
    ctx->pc = 0x10e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935776), GPR_U32(ctx, 2));
    // 0x10e840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10e844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e848: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x10e848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10e84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e850:
    // 0x10e850: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e85c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10e860: 0xa103002f  sb          $v1, 0x2F($t0)
    ctx->pc = 0x10e860u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x10e864: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e868: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x10e868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10e86c: 0xa102002e  sb          $v0, 0x2E($t0)
    ctx->pc = 0x10e86cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 46), (uint8_t)GPR_U32(ctx, 2));
label_10e870:
    // 0x10e870: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e870u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e874: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10e878: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e87c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e880: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x10e880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x10e884: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e888: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e88c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e890: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x10e890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x10e894: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e894u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e898: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e89c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8a0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x10e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x10e8a4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8a8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8ac: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8b0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x10e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x10e8b4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8b8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8bc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8c0: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x10e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x10e8c4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8c8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8cc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8d0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x10e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x10e8d4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8d8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8dc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8e0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x10e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x10e8e4: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e8e8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8ec: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10e8f0: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x10e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x10e8f4: 0x1880ffde  blez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x10E8F4u;
    {
        const bool branch_taken_0x10e8f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8F4u;
        // 0x10e8f8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8f4) {
            ctx->pc = 0x10E870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e870;
        }
    }
    ctx->pc = 0x10E8FCu;
    // 0x10e8fc: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x10e8fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e900: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E900u;
    {
        const bool branch_taken_0x10e900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E900u;
        // 0x10e904: 0x44880  sll         $t1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e900) {
            ctx->pc = 0x10E928u;
            goto label_10e928;
        }
    }
    ctx->pc = 0x10E908u;
label_10e908:
    // 0x10e908: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e90c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10e910: 0x28860009  slti        $a2, $a0, 0x9
    ctx->pc = 0x10e910u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e914: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e918: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e91c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x10e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x10e920: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10E920u;
    {
        const bool branch_taken_0x10e920 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E920u;
        // 0x10e924: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e920) {
            ctx->pc = 0x10E908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e908;
        }
    }
    ctx->pc = 0x10E928u;
label_10e928:
    // 0x10e928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10e92c: 0x28a4004a  slti        $a0, $a1, 0x4A
    ctx->pc = 0x10e92cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x10e930: 0x1480ffc7  bnez        $a0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x10E930u;
    {
        const bool branch_taken_0x10e930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E930u;
        // 0x10e934: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e930) {
            ctx->pc = 0x10E850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e850;
        }
    }
    ctx->pc = 0x10E938u;
    // 0x10e938: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10e93c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10e940: 0xc070080  jal         func_1C0200
    ctx->pc = 0x10E940u;
    SET_GPR_U32(ctx, 31, 0x10E948u);
    ctx->pc = 0x10E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E940u;
    // 0x10e944: 0x34454800  ori         $a1, $v0, 0x4800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18432);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x10E940u, 0x10E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E948u;
label_10e948:
    // 0x10e948: 0xaf8284d0  sw          $v0, -0x7B30($gp)
    ctx->pc = 0x10e948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 2));
    // 0x10e94c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10e94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e954:
    // 0x10e954: 0x8f8284d0  lw          $v0, -0x7B30($gp)
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x10e958: 0xc06ff60  jal         func_1BFD80
    ctx->pc = 0x10E958u;
    SET_GPR_U32(ctx, 31, 0x10E960u);
    ctx->pc = 0x10E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E958u;
    // 0x10e95c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFD80u, 0x10E958u, 0x10E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E960u;
label_10e960:
    // 0x10e960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10e964: 0x26310290  addiu       $s1, $s1, 0x290
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x10e968: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x10e968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x10e96c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10E96Cu;
    {
        const bool branch_taken_0x10e96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e96c) {
            ctx->pc = 0x10E954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e954;
        }
    }
    ctx->pc = 0x10E974u;
    // 0x10e974: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10e978: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x10e978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF0u));
    // 0x10e97c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x10E97Cu;
    {
        const bool branch_taken_0x10e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E97Cu;
        // 0x10e980: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e97c) {
            ctx->pc = 0x10EA2Cu;
            goto label_10ea2c;
        }
    }
    ctx->pc = 0x10E984u;
    // 0x10e984: 0xc06ea8c  jal         func_1BAA30
    ctx->pc = 0x10E984u;
    SET_GPR_U32(ctx, 31, 0x10E98Cu);
    ctx->pc = 0x10E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E984u;
    // 0x10e988: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA30u, 0x10E984u, 0x10E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E98Cu;
label_10e98c:
    // 0x10e98c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10e98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10e990: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x10e994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E994u;
    {
        const bool branch_taken_0x10e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E994u;
        // 0x10e998: 0x9023490d  lbu         $v1, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e994) {
            ctx->pc = 0x10E9B4u;
            goto label_10e9b4;
        }
    }
    ctx->pc = 0x10E99Cu;
    // 0x10e99c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10e9a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10e9a4: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x10e9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e9ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10E9ACu;
    {
        const bool branch_taken_0x10e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9ACu;
        // 0x10e9b0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9ac) {
            ctx->pc = 0x10E9CCu;
            goto label_10e9cc;
        }
    }
    ctx->pc = 0x10E9B4u;
label_10e9b4:
    // 0x10e9b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10e9b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10e9bc: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x10e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x10e9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e9c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e9c8: 0x0  nop
    ctx->pc = 0x10e9c8u;
    // NOP
label_10e9cc:
    // 0x10e9cc: 0xc041738  jal         func_105CE0
    ctx->pc = 0x10E9CCu;
    SET_GPR_U32(ctx, 31, 0x10E9D4u);
    ctx->pc = 0x10E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9CCu;
    // 0x10e9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x10E9CCu, 0x10E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9D4u;
label_10e9d4:
    // 0x10e9d4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x10e9d8: 0xc070080  jal         func_1C0200
    ctx->pc = 0x10E9D8u;
    SET_GPR_U32(ctx, 31, 0x10E9E0u);
    ctx->pc = 0x10E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9D8u;
    // 0x10e9dc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x10E9D8u, 0x10E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9E0u;
label_10e9e0:
    // 0x10e9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9e4: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x10E9E4u;
    SET_GPR_U32(ctx, 31, 0x10E9ECu);
    ctx->pc = 0x10E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9E4u;
    // 0x10e9e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x10E9E4u, 0x10E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9ECu;
label_10e9ec:
    // 0x10e9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x10e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x10e9f4: 0x2484f4c0  addiu       $a0, $a0, -0xB40
    ctx->pc = 0x10e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964416));
    // 0x10e9f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10e9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9fc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x10E9FCu;
    SET_GPR_U32(ctx, 31, 0x10EA04u);
    ctx->pc = 0x10EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9FCu;
    // 0x10ea00: 0x24061900  addiu       $a2, $zero, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x10E9FCu, 0x10EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA04u;
label_10ea04:
    // 0x10ea04: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x10EA04u;
    SET_GPR_U32(ctx, 31, 0x10EA0Cu);
    ctx->pc = 0x10EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA04u;
    // 0x10ea08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x10EA04u, 0x10EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA0Cu;
label_10ea0c:
    // 0x10ea0c: 0xc04419c  jal         func_110670
    ctx->pc = 0x10EA0Cu;
    SET_GPR_U32(ctx, 31, 0x10EA14u);
    ctx->pc = 0x110670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110670u, 0x10EA0Cu, 0x10EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA14u;
label_10ea14:
    // 0x10ea14: 0xc09006c  jal         func_2401B0
    ctx->pc = 0x10EA14u;
    SET_GPR_U32(ctx, 31, 0x10EA1Cu);
    ctx->pc = 0x2401B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401B0u, 0x10EA14u, 0x10EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA1Cu;
label_10ea1c:
    // 0x10ea1c: 0xc0443a0  jal         func_110E80
    ctx->pc = 0x10EA1Cu;
    SET_GPR_U32(ctx, 31, 0x10EA24u);
    ctx->pc = 0x110E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E80u, 0x10EA1Cu, 0x10EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA24u;
label_10ea24:
    // 0x10ea24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10EA24u;
    {
        const bool branch_taken_0x10ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea24) {
            ctx->pc = 0x10EAA0u;
            goto label_10eaa0;
        }
    }
    ctx->pc = 0x10EA2Cu;
label_10ea2c:
    // 0x10ea2c: 0xc043e98  jal         func_10FA60
    ctx->pc = 0x10EA2Cu;
    SET_GPR_U32(ctx, 31, 0x10EA34u);
    ctx->pc = 0x10FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA60u, 0x10EA2Cu, 0x10EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA34u;
label_10ea34:
    // 0x10ea34: 0xc056238  jal         func_1588E0
    ctx->pc = 0x10EA34u;
    SET_GPR_U32(ctx, 31, 0x10EA3Cu);
    ctx->pc = 0x1588E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588E0u, 0x10EA34u, 0x10EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA3Cu;
label_10ea3c:
    // 0x10ea3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea40: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x10ea40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x10ea44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea48: 0xc0442b0  jal         func_110AC0
    ctx->pc = 0x10EA48u;
    SET_GPR_U32(ctx, 31, 0x10EA50u);
    ctx->pc = 0x10EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA48u;
    // 0x10ea4c: 0x9025490c  lbu         $a1, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AC0u, 0x10EA48u, 0x10EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA50u;
label_10ea50:
    // 0x10ea50: 0xc04419c  jal         func_110670
    ctx->pc = 0x10EA50u;
    SET_GPR_U32(ctx, 31, 0x10EA58u);
    ctx->pc = 0x110670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110670u, 0x10EA50u, 0x10EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA58u;
label_10ea58:
    // 0x10ea58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea5c: 0xc087b64  jal         func_21ED90
    ctx->pc = 0x10EA5Cu;
    SET_GPR_U32(ctx, 31, 0x10EA64u);
    ctx->pc = 0x10EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA5Cu;
    // 0x10ea60: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ED90u, 0x10EA5Cu, 0x10EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA64u;
label_10ea64:
    // 0x10ea64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10ea6c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x10ea70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EA70u;
    {
        const bool branch_taken_0x10ea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA70u;
        // 0x10ea74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea70) {
            ctx->pc = 0x10EA88u;
            goto label_10ea88;
        }
    }
    ctx->pc = 0x10EA78u;
    // 0x10ea78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA78u;
    {
        const bool branch_taken_0x10ea78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA78u;
        // 0x10ea7c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea78) {
            ctx->pc = 0x10EA88u;
            goto label_10ea88;
        }
    }
    ctx->pc = 0x10EA80u;
    // 0x10ea80: 0xc043ec4  jal         func_10FB10
    ctx->pc = 0x10EA80u;
    SET_GPR_U32(ctx, 31, 0x10EA88u);
    ctx->pc = 0x10EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA80u;
    // 0x10ea84: 0x90244af2  lbu         $a0, 0x4AF2($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB10u, 0x10EA80u, 0x10EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA88u;
label_10ea88:
    // 0x10ea88: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x10EA88u;
    SET_GPR_U32(ctx, 31, 0x10EA90u);
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x10EA88u, 0x10EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA90u;
label_10ea90:
    // 0x10ea90: 0xc0443a0  jal         func_110E80
    ctx->pc = 0x10EA90u;
    SET_GPR_U32(ctx, 31, 0x10EA98u);
    ctx->pc = 0x110E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E80u, 0x10EA90u, 0x10EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA98u;
label_10ea98:
    // 0x10ea98: 0xc043b50  jal         func_10ED40
    ctx->pc = 0x10EA98u;
    SET_GPR_U32(ctx, 31, 0x10EAA0u);
    ctx->pc = 0x10ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED40u, 0x10EA98u, 0x10EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAA0u;
label_10eaa0:
    // 0x10eaa0: 0xc06eb8c  jal         func_1BAE30
    ctx->pc = 0x10EAA0u;
    SET_GPR_U32(ctx, 31, 0x10EAA8u);
    ctx->pc = 0x1BAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE30u, 0x10EAA0u, 0x10EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAA8u;
label_10eaa8:
    // 0x10eaa8: 0xc0563e0  jal         func_158F80
    ctx->pc = 0x10EAA8u;
    SET_GPR_U32(ctx, 31, 0x10EAB0u);
    ctx->pc = 0x158F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F80u, 0x10EAA8u, 0x10EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAB0u;
label_10eab0:
    // 0x10eab0: 0xc06e620  jal         func_1B9880
    ctx->pc = 0x10EAB0u;
    SET_GPR_U32(ctx, 31, 0x10EAB8u);
    ctx->pc = 0x1B9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9880u, 0x10EAB0u, 0x10EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAB8u;
label_10eab8:
    // 0x10eab8: 0xc043adc  jal         func_10EB70
    ctx->pc = 0x10EAB8u;
    SET_GPR_U32(ctx, 31, 0x10EAC0u);
    ctx->pc = 0x10EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB70u, 0x10EAB8u, 0x10EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAC0u;
label_10eac0:
    // 0x10eac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x10eac4u;
}
