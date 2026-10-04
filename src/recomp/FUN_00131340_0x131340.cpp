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

// Function: FUN_00131340
// Address: 0x131340 - 0x131430
void FUN_00131340_0x131340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131340_0x131340");
#endif

    switch (ctx->pc) {
        case 0x1313d8u: goto label_1313d8;
        default: break;
    }

    ctx->pc = 0x131340u;

    // 0x131340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131344: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x131344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x131348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13134c: 0x28c1001e  slti        $at, $a2, 0x1E
    ctx->pc = 0x13134cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x131350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13135c: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x13135cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x131360: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x131360u;
    {
        const bool branch_taken_0x131360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131360u;
        // 0x131364: 0x2610a044  addiu       $s0, $s0, -0x5FBC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942788));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131360) {
            ctx->pc = 0x13142Cu;
            goto label_13142c;
        }
    }
    ctx->pc = 0x131368u;
    // 0x131368: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13136c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x13136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x131370: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x131370u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x131374: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x131374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x131378: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x131378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13137c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x13137cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x131380: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x131380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x131384: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131388: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x131388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13138c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13138Cu;
    {
        const bool branch_taken_0x13138c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13138Cu;
        // 0x131390: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13138c) {
            ctx->pc = 0x1313CCu;
            goto label_1313cc;
        }
    }
    ctx->pc = 0x131394u;
    // 0x131394: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x131394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x131398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13139c: 0x90640242  lbu         $a0, 0x242($v1)
    ctx->pc = 0x13139cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 578)));
    // 0x1313a0: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x1313a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1313a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1313A4u;
    {
        const bool branch_taken_0x1313a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1313a4) {
            ctx->pc = 0x1313CCu;
            goto label_1313cc;
        }
    }
    ctx->pc = 0x1313ACu;
    // 0x1313ac: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x1313acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1313b0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1313B0u;
    {
        const bool branch_taken_0x1313b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1313B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313B0u;
        // 0x1313b4: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313b0) {
            ctx->pc = 0x1313CCu;
            goto label_1313cc;
        }
    }
    ctx->pc = 0x1313B8u;
    // 0x1313b8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1313B8u;
    {
        const bool branch_taken_0x1313b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1313b8) {
            ctx->pc = 0x1313CCu;
            goto label_1313cc;
        }
    }
    ctx->pc = 0x1313C0u;
    // 0x1313c0: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x1313c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1313c4: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1313C4u;
    {
        const bool branch_taken_0x1313c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1313c4) {
            ctx->pc = 0x13142Cu;
            goto label_13142c;
        }
    }
    ctx->pc = 0x1313CCu;
label_1313cc:
    // 0x1313cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1313ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313d0: 0xc08f2da  jal         func_23CB68
    ctx->pc = 0x1313D0u;
    SET_GPR_U32(ctx, 31, 0x1313D8u);
    ctx->pc = 0x1313D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313D0u;
    // 0x1313d4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CB68u, 0x1313D0u, 0x1313D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313D8u;
label_1313d8:
    // 0x1313d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1313d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313dc: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1313DCu;
    {
        const bool branch_taken_0x1313dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313DCu;
        // 0x1313e0: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313dc) {
            ctx->pc = 0x13142Cu;
            goto label_13142c;
        }
    }
    ctx->pc = 0x1313E4u;
    // 0x1313e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1313E4u;
    {
        const bool branch_taken_0x1313e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313e4) {
            ctx->pc = 0x1313F4u;
            goto label_1313f4;
        }
    }
    ctx->pc = 0x1313ECu;
    // 0x1313ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1313ECu;
    {
        const bool branch_taken_0x1313ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313ECu;
        // 0x1313f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313ec) {
            ctx->pc = 0x1313F8u;
            goto label_1313f8;
        }
    }
    ctx->pc = 0x1313F4u;
label_1313f4:
    // 0x1313f4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1313f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1313f8:
    // 0x1313f8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1313f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1313fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1313fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131400: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x131400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x131404: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x131404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x131408: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x131408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x13140c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131410: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x131410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x131414: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x131414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x131418: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x131418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13141c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131420: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x131420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x131424: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x131424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x131428: 0xa211000f  sb          $s1, 0xF($s0)
    ctx->pc = 0x131428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 17));
label_13142c:
    // 0x13142c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x131430u;
}
