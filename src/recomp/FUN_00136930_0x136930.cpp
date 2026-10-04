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

// Function: FUN_00136930
// Address: 0x136930 - 0x136a94
void FUN_00136930_0x136930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136930_0x136930");
#endif

    switch (ctx->pc) {
        case 0x136940u: goto label_136940;
        case 0x136978u: goto label_136978;
        case 0x136980u: goto label_136980;
        case 0x13699cu: goto label_13699c;
        case 0x1369acu: goto label_1369ac;
        case 0x1369b4u: goto label_1369b4;
        case 0x1369e8u: goto label_1369e8;
        case 0x136a0cu: goto label_136a0c;
        case 0x136a14u: goto label_136a14;
        case 0x136a24u: goto label_136a24;
        case 0x136a5cu: goto label_136a5c;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a88u: goto label_136a88;
        case 0x136a90u: goto label_136a90;
        default: break;
    }

    ctx->pc = 0x136930u;

    // 0x136930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136938: 0xc04d9f4  jal         func_1367D0
    ctx->pc = 0x136938u;
    SET_GPR_U32(ctx, 31, 0x136940u);
    ctx->pc = 0x1367D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367D0u, 0x136938u, 0x136940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136940u;
label_136940:
    // 0x136940: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136948: 0x9024a3ea  lbu         $a0, -0x5C16($at)
    ctx->pc = 0x136948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x13694c: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x13694Cu;
    {
        const bool branch_taken_0x13694c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x136950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13694Cu;
        // 0x136950: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13694c) {
            ctx->pc = 0x136A2Cu;
            goto label_136a2c;
        }
    }
    ctx->pc = 0x136954u;
    // 0x136954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136958: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x136958u;
    {
        const bool branch_taken_0x136958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136958) {
            ctx->pc = 0x136A1Cu;
            goto label_136a1c;
        }
    }
    ctx->pc = 0x136960u;
    // 0x136960: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136960u;
    {
        const bool branch_taken_0x136960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136960) {
            ctx->pc = 0x136970u;
            goto label_136970;
        }
    }
    ctx->pc = 0x136968u;
    // 0x136968: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x136968u;
    {
        const bool branch_taken_0x136968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136968u;
        // 0x13696c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136968) {
            ctx->pc = 0x136A94u;
            return;
        }
    }
    ctx->pc = 0x136970u;
label_136970:
    // 0x136970: 0xc04d51c  jal         func_135470
    ctx->pc = 0x136970u;
    SET_GPR_U32(ctx, 31, 0x136978u);
    ctx->pc = 0x135470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135470u, 0x136970u, 0x136978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136978u;
label_136978:
    // 0x136978: 0xc0590dc  jal         func_164370
    ctx->pc = 0x136978u;
    SET_GPR_U32(ctx, 31, 0x136980u);
    ctx->pc = 0x13697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136978u;
    // 0x13697c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x136978u, 0x136980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136980u;
label_136980:
    // 0x136980: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136980u;
    {
        const bool branch_taken_0x136980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136980u;
        // 0x136984: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136980) {
            ctx->pc = 0x136994u;
            goto label_136994;
        }
    }
    ctx->pc = 0x136988u;
    // 0x136988: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x136988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x13698c: 0x24637d10  addiu       $v1, $v1, 0x7D10
    ctx->pc = 0x13698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32016));
    // 0x136990: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x136990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_136994:
    // 0x136994: 0xc04d1e0  jal         func_134780
    ctx->pc = 0x136994u;
    SET_GPR_U32(ctx, 31, 0x13699Cu);
    ctx->pc = 0x134780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134780u, 0x136994u, 0x13699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13699Cu;
label_13699c:
    // 0x13699c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1369a0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1369a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1369a4: 0xc04daa8  jal         func_136AA0
    ctx->pc = 0x1369A4u;
    SET_GPR_U32(ctx, 31, 0x1369ACu);
    ctx->pc = 0x1369A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369A4u;
    // 0x1369a8: 0xa022a3ea  sb          $v0, -0x5C16($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943722), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AA0u, 0x1369A4u, 0x1369ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369ACu;
label_1369ac:
    // 0x1369ac: 0xc05a620  jal         func_169880
    ctx->pc = 0x1369ACu;
    SET_GPR_U32(ctx, 31, 0x1369B4u);
    ctx->pc = 0x1369B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369ACu;
    // 0x1369b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169880u, 0x1369ACu, 0x1369B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369B4u;
label_1369b4:
    // 0x1369b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1369b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1369b8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1369b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1369bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1369BCu;
    {
        const bool branch_taken_0x1369bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1369C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369BCu;
        // 0x1369c0: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369bc) {
            ctx->pc = 0x1369D0u;
            goto label_1369d0;
        }
    }
    ctx->pc = 0x1369C4u;
    // 0x1369c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1369c8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1369C8u;
    {
        const bool branch_taken_0x1369c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1369c8) {
            ctx->pc = 0x1369F0u;
            goto label_1369f0;
        }
    }
    ctx->pc = 0x1369D0u;
label_1369d0:
    // 0x1369d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1369d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369d4: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x1369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
    // 0x1369d8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1369d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1369dc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1369dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1369e0: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x1369E0u;
    SET_GPR_U32(ctx, 31, 0x1369E8u);
    ctx->pc = 0x1369E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369E0u;
    // 0x1369e4: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x1369E0u, 0x1369E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369E8u;
label_1369e8:
    // 0x1369e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1369E8u;
    {
        const bool branch_taken_0x1369e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1369e8) {
            ctx->pc = 0x136A90u;
            goto label_136a90;
        }
    }
    ctx->pc = 0x1369F0u;
label_1369f0:
    // 0x1369f0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1369f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1369f4: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1369f8: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1369f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1369fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1369fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136a00: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136a04: 0xc055e34  jal         func_1578D0
    ctx->pc = 0x136A04u;
    SET_GPR_U32(ctx, 31, 0x136A0Cu);
    ctx->pc = 0x136A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A04u;
    // 0x136a08: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x136A04u, 0x136A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A0Cu;
label_136a0c:
    // 0x136a0c: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x136A0Cu;
    SET_GPR_U32(ctx, 31, 0x136A14u);
    ctx->pc = 0x136A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A0Cu;
    // 0x136a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x136A0Cu, 0x136A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A14u;
label_136a14:
    // 0x136a14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x136A14u;
    {
        const bool branch_taken_0x136a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a14) {
            ctx->pc = 0x136A90u;
            goto label_136a90;
        }
    }
    ctx->pc = 0x136A1Cu;
label_136a1c:
    // 0x136a1c: 0xc04daa8  jal         func_136AA0
    ctx->pc = 0x136A1Cu;
    SET_GPR_U32(ctx, 31, 0x136A24u);
    ctx->pc = 0x136AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AA0u, 0x136A1Cu, 0x136A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A24u;
label_136a24:
    // 0x136a24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x136A24u;
    {
        const bool branch_taken_0x136a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a24) {
            ctx->pc = 0x136A90u;
            goto label_136a90;
        }
    }
    ctx->pc = 0x136A2Cu;
label_136a2c:
    // 0x136a2c: 0x90229fc0  lbu         $v0, -0x6040($at)
    ctx->pc = 0x136a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294942656)));
    // 0x136a30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x136a34: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136a38: 0xa0229fc0  sb          $v0, -0x6040($at)
    ctx->pc = 0x136a38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x309FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC0u, _value); } while (0);
    // 0x136a3c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136a40: 0x90229fc0  lbu         $v0, -0x6040($at)
    ctx->pc = 0x136a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x136a44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x136A44u;
    {
        const bool branch_taken_0x136a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a44) {
            ctx->pc = 0x136A74u;
            goto label_136a74;
        }
    }
    ctx->pc = 0x136A4Cu;
    // 0x136a4c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x136a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136a50: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x136a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x136a54: 0xc04d44c  jal         func_135130
    ctx->pc = 0x136A54u;
    SET_GPR_U32(ctx, 31, 0x136A5Cu);
    ctx->pc = 0x136A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A54u;
    // 0x136a58: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x136A54u, 0x136A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A5Cu;
label_136a5c:
    // 0x136a5c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x136a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x136a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a64: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x136A64u;
    SET_GPR_U32(ctx, 31, 0x136A6Cu);
    ctx->pc = 0x136A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A64u;
    // 0x136a68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x136A64u, 0x136A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136A6Cu;
    {
        const bool branch_taken_0x136a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a6c) {
            ctx->pc = 0x136A90u;
            goto label_136a90;
        }
    }
    ctx->pc = 0x136A74u;
label_136a74:
    // 0x136a74: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136a78: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x136a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x136a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136a80: 0xc04d44c  jal         func_135130
    ctx->pc = 0x136A80u;
    SET_GPR_U32(ctx, 31, 0x136A88u);
    ctx->pc = 0x136A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A80u;
    // 0x136a84: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x136A80u, 0x136A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A88u;
label_136a88:
    // 0x136a88: 0xc04d8b8  jal         func_1362E0
    ctx->pc = 0x136A88u;
    SET_GPR_U32(ctx, 31, 0x136A90u);
    ctx->pc = 0x1362E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362E0u, 0x136A88u, 0x136A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A90u;
label_136a90:
    // 0x136a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x136a94u;
}
