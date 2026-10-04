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

// Function: FUN_001bafa0
// Address: 0x1bafa0 - 0x1bb1c0
void FUN_001bafa0_0x1bafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bafa0_0x1bafa0");
#endif

    switch (ctx->pc) {
        case 0x1bb0d4u: goto label_1bb0d4;
        case 0x1bb0ecu: goto label_1bb0ec;
        case 0x1bb0fcu: goto label_1bb0fc;
        default: break;
    }

    ctx->pc = 0x1bafa0u;

    // 0x1bafa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bafa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bafa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bafa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bafac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bafacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bafb0: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x1bafb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x1bafb4: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1BAFB4u;
    {
        const bool branch_taken_0x1bafb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFB4u;
        // 0x1bafb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafb4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BAFBCu;
    // 0x1bafbc: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bafc0: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x1bafc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1bafc4: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1BAFC4u;
    {
        const bool branch_taken_0x1bafc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafc4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BAFCCu;
    // 0x1bafcc: 0x91050012  lbu         $a1, 0x12($t0)
    ctx->pc = 0x1bafccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x1bafd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bafd4: 0x14a30079  bne         $a1, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1BAFD4u;
    {
        const bool branch_taken_0x1bafd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bafd4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BAFDCu;
    // 0x1bafdc: 0x92270034  lbu         $a3, 0x34($s1)
    ctx->pc = 0x1bafdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1bafe0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1bafe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x1bafe4: 0x91050011  lbu         $a1, 0x11($t0)
    ctx->pc = 0x1bafe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x1bafe8: 0x24c625ad  addiu       $a2, $a2, 0x25AD
    ctx->pc = 0x1bafe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9645));
    // 0x1bafec: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bafecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1baff0: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x1baff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1baff4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1baff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1baff8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1baff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1baffc: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1baffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1bb000: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1bb004: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bb008: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1bb00c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1bb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bb010: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bb010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1bb014: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bb018: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bb018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb01c: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1BB01Cu;
    {
        const bool branch_taken_0x1bb01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb01c) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB024u;
    // 0x1bb024: 0x91050015  lbu         $a1, 0x15($t0)
    ctx->pc = 0x1bb024u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 21)));
    // 0x1bb028: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb02c: 0x10a30063  beq         $a1, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1BB02Cu;
    {
        const bool branch_taken_0x1bb02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB02Cu;
        // 0x1bb030: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb02c) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB034u;
    // 0x1bb034: 0x10a30061  beq         $a1, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1BB034u;
    {
        const bool branch_taken_0x1bb034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb034) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB03Cu;
    // 0x1bb03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb040: 0x10a3005e  beq         $a1, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1BB040u;
    {
        const bool branch_taken_0x1bb040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb040) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB048u;
    // 0x1bb048: 0x9228003f  lbu         $t0, 0x3F($s1)
    ctx->pc = 0x1bb048u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x1bb04c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1bb04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x1bb050: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x1bb054: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x1bb058: 0x24c624b0  addiu       $a2, $a2, 0x24B0
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9392));
    // 0x1bb05c: 0x246324b1  addiu       $v1, $v1, 0x24B1
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9393));
    // 0x1bb060: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1bb064: 0x24a524b8  addiu       $a1, $a1, 0x24B8
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9400));
    // 0x1bb068: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bb06c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1bb070: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bb070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1bb074: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bb078: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1bb07c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bb07cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb080: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1bb080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1bb084: 0x9227003f  lbu         $a3, 0x3F($s1)
    ctx->pc = 0x1bb084u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x1bb088: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1bb08c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1bb090: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bb094: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bb098: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bb098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb09c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bb0a0: 0x9227003f  lbu         $a3, 0x3F($s1)
    ctx->pc = 0x1bb0a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x1bb0a4: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1bb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
    // 0x1bb0a8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1bb0ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1bb0b0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1bb0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bb0b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bb0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bb0b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb0bc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1bb0bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1bb0c0: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C0u;
        // 0x1bb0c4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB0C8u;
    // 0x1bb0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0cc: 0xc0444e4  jal         func_111390
    ctx->pc = 0x1BB0CCu;
    SET_GPR_U32(ctx, 31, 0x1BB0D4u);
    ctx->pc = 0x1BB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0CCu;
    // 0x1bb0d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111390u, 0x1BB0CCu, 0x1BB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0D4u;
label_1bb0d4:
    // 0x1bb0d4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1BB0D4u;
    {
        const bool branch_taken_0x1bb0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0D4u;
        // 0x1bb0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0d4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB0DCu;
    // 0x1bb0dc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1bb0e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb0e4: 0xc0444e4  jal         func_111390
    ctx->pc = 0x1BB0E4u;
    SET_GPR_U32(ctx, 31, 0x1BB0ECu);
    ctx->pc = 0x1BB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0E4u;
    // 0x1bb0e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111390u, 0x1BB0E4u, 0x1BB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0ECu;
label_1bb0ec:
    // 0x1bb0ec: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BB0ECu;
    {
        const bool branch_taken_0x1bb0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0ec) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB0F4u;
    // 0x1bb0f4: 0xc052cd4  jal         func_14B350
    ctx->pc = 0x1BB0F4u;
    SET_GPR_U32(ctx, 31, 0x1BB0FCu);
    ctx->pc = 0x1BB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0F4u;
    // 0x1bb0f8: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B350u, 0x1BB0F4u, 0x1BB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0FCu;
label_1bb0fc:
    // 0x1bb0fc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1bb0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb100: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1bb104: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x1bb104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x1bb108: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1bb108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1bb10c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1bb110: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bb114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb118: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1bb118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1bb11c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1bb11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1bb120: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1bb120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb124: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1bb124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1bb128: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1bb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1bb12c: 0x83a80038  lb          $t0, 0x38($sp)
    ctx->pc = 0x1bb12cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bb130: 0xa2280026  sb          $t0, 0x26($s1)
    ctx->pc = 0x1bb130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bb134: 0xa2280022  sb          $t0, 0x22($s1)
    ctx->pc = 0x1bb134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bb138: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb13c: 0xa2280027  sb          $t0, 0x27($s1)
    ctx->pc = 0x1bb13cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bb140: 0xa2280023  sb          $t0, 0x23($s1)
    ctx->pc = 0x1bb140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bb144: 0xa2200037  sb          $zero, 0x37($s1)
    ctx->pc = 0x1bb144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb148: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb14c: 0x91090010  lbu         $t1, 0x10($t0)
    ctx->pc = 0x1bb14cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1bb150: 0x850a0008  lh          $t2, 0x8($t0)
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1bb154: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1bb158: 0xa4040  sll         $t0, $t2, 1
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1bb15c: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x1bb15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bb160: 0x0  nop
    ctx->pc = 0x1bb160u;
    // NOP
    // 0x1bb164: 0x0  nop
    ctx->pc = 0x1bb164u;
    // NOP
    // 0x1bb168: 0x3810  mfhi        $a3
    ctx->pc = 0x1bb168u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1bb16c: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1bb170: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bb170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1bb174: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1bb174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bb178: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1bb17c: 0xa6270030  sh          $a3, 0x30($s1)
    ctx->pc = 0x1bb17cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x1bb180: 0xa6270032  sh          $a3, 0x32($s1)
    ctx->pc = 0x1bb180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 7));
    // 0x1bb184: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1bb184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb188: 0x84e70008  lh          $a3, 0x8($a3)
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bb18c: 0xa627002e  sh          $a3, 0x2E($s1)
    ctx->pc = 0x1bb18cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 7));
    // 0x1bb190: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb194: 0x90e70010  lbu         $a3, 0x10($a3)
    ctx->pc = 0x1bb194u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1bb198: 0xa227002a  sb          $a3, 0x2A($s1)
    ctx->pc = 0x1bb198u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 7));
    // 0x1bb19c: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x1bb19cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bb1a0: 0xa6260040  sh          $a2, 0x40($s1)
    ctx->pc = 0x1bb1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x1bb1a4: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x1bb1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb1a8: 0xa220003d  sb          $zero, 0x3D($s1)
    ctx->pc = 0x1bb1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb1ac: 0xa2250039  sb          $a1, 0x39($s1)
    ctx->pc = 0x1bb1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bb1b0: 0xa224003c  sb          $a0, 0x3C($s1)
    ctx->pc = 0x1bb1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bb1b4: 0xa220003b  sb          $zero, 0x3B($s1)
    ctx->pc = 0x1bb1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb1b8: 0xa223003a  sb          $v1, 0x3A($s1)
    ctx->pc = 0x1bb1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 3));
label_1bb1bc:
    // 0x1bb1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bb1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1bb1c0u;
}
