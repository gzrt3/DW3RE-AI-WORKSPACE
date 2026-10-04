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

// Function: FUN_00115890
// Address: 0x115890 - 0x1159b0
void FUN_00115890_0x115890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115890_0x115890");
#endif

    switch (ctx->pc) {
        case 0x115928u: goto label_115928;
        case 0x115934u: goto label_115934;
        case 0x115940u: goto label_115940;
        case 0x115948u: goto label_115948;
        case 0x115958u: goto label_115958;
        case 0x115964u: goto label_115964;
        case 0x11599cu: goto label_11599c;
        case 0x1159a4u: goto label_1159a4;
        case 0x1159acu: goto label_1159ac;
        default: break;
    }

    ctx->pc = 0x115890u;

    // 0x115890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115894: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x115894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x115898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11589c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x11589cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1158a0: 0x9026490d  lbu         $a2, 0x490D($at)
    ctx->pc = 0x1158a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x33490Du));
    // 0x1158a4: 0x24a5f9e0  addiu       $a1, $a1, -0x620
    ctx->pc = 0x1158a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965728));
    // 0x1158a8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1158ac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1158acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1158b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1158b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1158b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1158b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1158bc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1158bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1158c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1158c4: 0xaf8580d8  sw          $a1, -0x7F28($gp)
    ctx->pc = 0x1158c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 5));
    // 0x1158c8: 0xaf8480dc  sw          $a0, -0x7F24($gp)
    ctx->pc = 0x1158c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 4));
    // 0x1158cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1158CCu;
    {
        const bool branch_taken_0x1158cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158CCu;
        // 0x1158d0: 0xaf8380e0  sw          $v1, -0x7F20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158cc) {
            ctx->pc = 0x11591Cu;
            goto label_11591c;
        }
    }
    ctx->pc = 0x1158D4u;
    // 0x1158d4: 0x8f8380d8  lw          $v1, -0x7F28($gp)
    ctx->pc = 0x1158d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x1158d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1158D8u;
    {
        const bool branch_taken_0x1158d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1158DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158D8u;
        // 0x1158dc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158d8) {
            ctx->pc = 0x1158E8u;
            goto label_1158e8;
        }
    }
    ctx->pc = 0x1158E0u;
    // 0x1158e0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1158e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1158e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1158e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1158e8:
    // 0x1158e8: 0x8f8380dc  lw          $v1, -0x7F24($gp)
    ctx->pc = 0x1158e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    // 0x1158ec: 0xaf8280d8  sw          $v0, -0x7F28($gp)
    ctx->pc = 0x1158ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 2));
    // 0x1158f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1158F0u;
    {
        const bool branch_taken_0x1158f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F0u;
        // 0x1158f4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158f0) {
            ctx->pc = 0x115900u;
            goto label_115900;
        }
    }
    ctx->pc = 0x1158F8u;
    // 0x1158f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1158fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1158fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_115900:
    // 0x115900: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x115900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x115904: 0xaf8280dc  sw          $v0, -0x7F24($gp)
    ctx->pc = 0x115904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 2));
    // 0x115908: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115908u;
    {
        const bool branch_taken_0x115908 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115908u;
        // 0x11590c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115908) {
            ctx->pc = 0x115918u;
            goto label_115918;
        }
    }
    ctx->pc = 0x115910u;
    // 0x115910: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x115910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115914: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_115918:
    // 0x115918: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x115918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_11591c:
    // 0x11591c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x115920: 0xc044a9c  jal         func_112A70
    ctx->pc = 0x115920u;
    SET_GPR_U32(ctx, 31, 0x115928u);
    ctx->pc = 0x115924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115920u;
    // 0x115924: 0x24842470  addiu       $a0, $a0, 0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A70u, 0x115920u, 0x115928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115928u;
label_115928:
    // 0x115928: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x115928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x11592c: 0xc044bf4  jal         func_112FD0
    ctx->pc = 0x11592Cu;
    SET_GPR_U32(ctx, 31, 0x115934u);
    ctx->pc = 0x115930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11592Cu;
    // 0x115930: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112FD0u, 0x11592Cu, 0x115934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115934u;
label_115934:
    // 0x115934: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x115934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x115938: 0xc0456d4  jal         func_115B50
    ctx->pc = 0x115938u;
    SET_GPR_U32(ctx, 31, 0x115940u);
    ctx->pc = 0x11593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115938u;
    // 0x11593c: 0x24843c00  addiu       $a0, $a0, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B50u, 0x115938u, 0x115940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115940u;
label_115940:
    // 0x115940: 0xc045b68  jal         func_116DA0
    ctx->pc = 0x115940u;
    SET_GPR_U32(ctx, 31, 0x115948u);
    ctx->pc = 0x116DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116DA0u, 0x115940u, 0x115948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115948u;
label_115948:
    // 0x115948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11594c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11594cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115950: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x115954: 0x24632210  addiu       $v1, $v1, 0x2210
    ctx->pc = 0x115954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8720));
label_115958:
    // 0x115958: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x115958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11595c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11595cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115960: 0xace00200  sw          $zero, 0x200($a3)
    ctx->pc = 0x115960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 512), GPR_U32(ctx, 0));
label_115964:
    // 0x115964: 0x0  nop
    ctx->pc = 0x115964u;
    // NOP
    // 0x115968: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x115968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x11596c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115970: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x115970u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x115974: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x115974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x115978: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x11597c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11597Cu;
    {
        const bool branch_taken_0x11597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11597c) {
            ctx->pc = 0x115964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115964;
        }
    }
    ctx->pc = 0x115984u;
    // 0x115984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x115984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x115988: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11598c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11598Cu;
    {
        const bool branch_taken_0x11598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11598Cu;
        // 0x115990: 0x24c60204  addiu       $a2, $a2, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11598c) {
            ctx->pc = 0x115958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115958;
        }
    }
    ctx->pc = 0x115994u;
    // 0x115994: 0xc08c274  jal         func_2309D0
    ctx->pc = 0x115994u;
    SET_GPR_U32(ctx, 31, 0x11599Cu);
    ctx->pc = 0x2309D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2309D0u, 0x115994u, 0x11599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11599Cu;
label_11599c:
    // 0x11599c: 0xc05446c  jal         func_1511B0
    ctx->pc = 0x11599Cu;
    SET_GPR_U32(ctx, 31, 0x1159A4u);
    ctx->pc = 0x1511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511B0u, 0x11599Cu, 0x1159A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159A4u;
label_1159a4:
    // 0x1159a4: 0xc0655bc  jal         func_1956F0
    ctx->pc = 0x1159A4u;
    SET_GPR_U32(ctx, 31, 0x1159ACu);
    ctx->pc = 0x1956F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1956F0u, 0x1159A4u, 0x1159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159ACu;
label_1159ac:
    // 0x1159ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1159acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1159b0u;
}
