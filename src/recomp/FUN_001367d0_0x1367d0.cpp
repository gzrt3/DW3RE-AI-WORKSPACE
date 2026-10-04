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

// Function: FUN_001367d0
// Address: 0x1367d0 - 0x136924
void FUN_001367d0_0x1367d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001367d0_0x1367d0");
#endif

    switch (ctx->pc) {
        case 0x13681cu: goto label_13681c;
        case 0x1368a4u: goto label_1368a4;
        case 0x1368d8u: goto label_1368d8;
        case 0x1368fcu: goto label_1368fc;
        case 0x136920u: goto label_136920;
        default: break;
    }

    ctx->pc = 0x1367d0u;

    // 0x1367d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1367d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1367d4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1367d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1367d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1367d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1367dc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1367dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1367e0: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1367e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1367e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1367e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1367e8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1367E8u;
    {
        const bool branch_taken_0x1367e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367E8u;
        // 0x1367ec: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367e8) {
            ctx->pc = 0x136814u;
            goto label_136814;
        }
    }
    ctx->pc = 0x1367F0u;
    // 0x1367f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1367f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1367f4: 0x9024a3ea  lbu         $a0, -0x5C16($at)
    ctx->pc = 0x1367f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
    // 0x1367f8: 0x14830049  bne         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1367F8u;
    {
        const bool branch_taken_0x1367f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1367f8) {
            ctx->pc = 0x136920u;
            goto label_136920;
        }
    }
    ctx->pc = 0x136800u;
    // 0x136800: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136804: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136808: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x136808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13680c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136810: 0xac22a3e0  sw          $v0, -0x5C20($at)
    ctx->pc = 0x136810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
label_136814:
    // 0x136814: 0xc04e198  jal         func_138660
    ctx->pc = 0x136814u;
    SET_GPR_U32(ctx, 31, 0x13681Cu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x136814u, 0x13681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13681Cu;
label_13681c:
    // 0x13681c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13681Cu;
    {
        const bool branch_taken_0x13681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13681c) {
            ctx->pc = 0x136858u;
            goto label_136858;
        }
    }
    ctx->pc = 0x136824u;
    // 0x136824: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136828: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13682c: 0x9024a3eb  lbu         $a0, -0x5C15($at)
    ctx->pc = 0x13682cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A3EBu));
    // 0x136830: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136830u;
    {
        const bool branch_taken_0x136830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x136834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136830u;
        // 0x136834: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136830) {
            ctx->pc = 0x136844u;
            goto label_136844;
        }
    }
    ctx->pc = 0x136838u;
    // 0x136838: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13683c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13683Cu;
    {
        const bool branch_taken_0x13683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13683Cu;
        // 0x136840: 0xa020a3eb  sb          $zero, -0x5C15($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294943723), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13683c) {
            ctx->pc = 0x136858u;
            goto label_136858;
        }
    }
    ctx->pc = 0x136844u;
label_136844:
    // 0x136844: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136844u;
    {
        const bool branch_taken_0x136844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136844) {
            ctx->pc = 0x136858u;
            goto label_136858;
        }
    }
    ctx->pc = 0x13684Cu;
    // 0x13684c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136850: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136854: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x136854u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
label_136858:
    // 0x136858: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13685c: 0x8c25a3e0  lw          $a1, -0x5C20($at)
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136860: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x136860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x136864: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x136864u;
    {
        const bool branch_taken_0x136864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136864u;
        // 0x136868: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136864) {
            ctx->pc = 0x136920u;
            goto label_136920;
        }
    }
    ctx->pc = 0x13686Cu;
    // 0x13686c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136870: 0x9024a3eb  lbu         $a0, -0x5C15($at)
    ctx->pc = 0x136870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943723)));
    // 0x136874: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x136874u;
    {
        const bool branch_taken_0x136874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x136878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136874u;
        // 0x136878: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136874) {
            ctx->pc = 0x136920u;
            goto label_136920;
        }
    }
    ctx->pc = 0x13687Cu;
    // 0x13687c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x13687Cu;
    {
        const bool branch_taken_0x13687c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13687c) {
            ctx->pc = 0x136904u;
            goto label_136904;
        }
    }
    ctx->pc = 0x136884u;
    // 0x136884: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x136884u;
    {
        const bool branch_taken_0x136884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x136888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136884u;
        // 0x136888: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136884) {
            ctx->pc = 0x1368C8u;
            goto label_1368c8;
        }
    }
    ctx->pc = 0x13688Cu;
    // 0x13688c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13688Cu;
    {
        const bool branch_taken_0x13688c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13688c) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136894u;
    // 0x136894: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x136894u;
    {
        const bool branch_taken_0x136894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136894u;
        // 0x136898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136894) {
            ctx->pc = 0x136924u;
            return;
        }
    }
    ctx->pc = 0x13689Cu;
label_13689c:
    // 0x13689c: 0xc04d238  jal         func_1348E0
    ctx->pc = 0x13689Cu;
    SET_GPR_U32(ctx, 31, 0x1368A4u);
    ctx->pc = 0x1348E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E0u, 0x13689Cu, 0x1368A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368A4u;
label_1368a4:
    // 0x1368a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1368a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1368ac: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1368acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1368b0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368b4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1368b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1368b8: 0xa024a3ea  sb          $a0, -0x5C16($at)
    ctx->pc = 0x1368b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x30A3EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EAu, _value); } while (0);
    // 0x1368bc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1368C0u;
    {
        const bool branch_taken_0x1368c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368C0u;
        // 0x1368c4: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368c0) {
            ctx->pc = 0x136920u;
            goto label_136920;
        }
    }
    ctx->pc = 0x1368C8u;
label_1368c8:
    // 0x1368c8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1368c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1368cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1368ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1368d0: 0xc04e188  jal         func_138620
    ctx->pc = 0x1368D0u;
    SET_GPR_U32(ctx, 31, 0x1368D8u);
    ctx->pc = 0x1368D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368D0u;
    // 0x1368d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1368D0u, 0x1368D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368D8u;
label_1368d8:
    // 0x1368d8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1368dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1368e0: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x1368e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1368e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1368e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1368ec: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x1368ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
    // 0x1368f0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368f4: 0xc04d39c  jal         func_134E70
    ctx->pc = 0x1368F4u;
    SET_GPR_U32(ctx, 31, 0x1368FCu);
    ctx->pc = 0x1368F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368F4u;
    // 0x1368f8: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E70u, 0x1368F4u, 0x1368FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368FCu;
label_1368fc:
    // 0x1368fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1368FCu;
    {
        const bool branch_taken_0x1368fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368fc) {
            ctx->pc = 0x136920u;
            goto label_136920;
        }
    }
    ctx->pc = 0x136904u;
label_136904:
    // 0x136904: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x136904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x136908: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136908u;
    {
        const bool branch_taken_0x136908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136908) {
            ctx->pc = 0x136920u;
            goto label_136920;
        }
    }
    ctx->pc = 0x136910u;
    // 0x136910: 0x34a20010  ori         $v0, $a1, 0x10
    ctx->pc = 0x136910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x136914: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136918: 0xc04d39c  jal         func_134E70
    ctx->pc = 0x136918u;
    SET_GPR_U32(ctx, 31, 0x136920u);
    ctx->pc = 0x13691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136918u;
    // 0x13691c: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E70u, 0x136918u, 0x136920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136920u;
label_136920:
    // 0x136920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x136924u;
}
