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

// Function: FUN_001a13d0
// Address: 0x1a13d0 - 0x1a14cc
void FUN_001a13d0_0x1a13d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a13d0_0x1a13d0");
#endif

    switch (ctx->pc) {
        case 0x1a141cu: goto label_1a141c;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1484u: goto label_1a1484;
        case 0x1a14b8u: goto label_1a14b8;
        default: break;
    }

    ctx->pc = 0x1a13d0u;

    // 0x1a13d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a13d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a13d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a13dc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a13dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1a13e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a13e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a13e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a13e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a13ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a13f0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3));
    // 0x1a13f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a13f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A13F8u;
    {
        const bool branch_taken_0x1a13f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F8u;
        // 0x1a13fc: 0x3411ffff  ori         $s1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13f8) {
            ctx->pc = 0x1A1408u;
            goto label_1a1408;
        }
    }
    ctx->pc = 0x1A1400u;
    // 0x1a1400: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1A1400u;
    {
        const bool branch_taken_0x1a1400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1400u;
        // 0x1a1404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1400) {
            ctx->pc = 0x1A14C0u;
            goto label_1a14c0;
        }
    }
    ctx->pc = 0x1A1408u;
label_1a1408:
    // 0x1a1408: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a1408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a140c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A140Cu;
    {
        const bool branch_taken_0x1a140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a140c) {
            ctx->pc = 0x1A147Cu;
            goto label_1a147c;
        }
    }
    ctx->pc = 0x1A1414u;
    // 0x1a1414: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A1414u;
    SET_GPR_U32(ctx, 31, 0x1A141Cu);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A1414u, 0x1A141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A141Cu;
label_1a141c:
    // 0x1a141c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1424: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a1424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1a1428: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a142c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a142cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x1a1430: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a1430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1a1434: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a1434u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 17));
    // 0x1a1438: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a143c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1a1440: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a1440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a1444: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A1444u;
    SET_GPR_U32(ctx, 31, 0x1A144Cu);
    ctx->pc = 0x1A1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1444u;
    // 0x1a1448: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A1444u, 0x1A144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A144Cu;
label_1a144c:
    // 0x1a144c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1450: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1a1454: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1458: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1a1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1a145c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a1460: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a1464: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a1468: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1a1468u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1a146c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a146cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a1470: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1a1470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1a1474: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1474u;
    {
        const bool branch_taken_0x1a1474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1474u;
        // 0x1a1478: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1474) {
            ctx->pc = 0x1A14BCu;
            goto label_1a14bc;
        }
    }
    ctx->pc = 0x1A147Cu;
label_1a147c:
    // 0x1a147c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A147Cu;
    SET_GPR_U32(ctx, 31, 0x1A1484u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A147Cu, 0x1A1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1484u;
label_1a1484:
    // 0x1a1484: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1488: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a148c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1a1490: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1494: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a1494u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x1a1498: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a1498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1a149c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a149cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a14a0: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a14a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a14a8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a14a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1a14ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a14acu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4));
    // 0x1a14b0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A14B0u;
    SET_GPR_U32(ctx, 31, 0x1A14B8u);
    ctx->pc = 0x1A14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14B0u;
    // 0x1a14b4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A14B0u, 0x1A14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14B8u;
label_1a14b8:
    // 0x1a14b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a14bc:
    // 0x1a14bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a14bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a14c0:
    // 0x1a14c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a14c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a14c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a14c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a14c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a14c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a14ccu;
}
