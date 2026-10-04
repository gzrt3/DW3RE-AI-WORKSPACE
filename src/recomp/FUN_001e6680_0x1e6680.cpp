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

// Function: FUN_001e6680
// Address: 0x1e6680 - 0x1e67b4
void FUN_001e6680_0x1e6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6680_0x1e6680");
#endif

    switch (ctx->pc) {
        case 0x1e6694u: goto label_1e6694;
        case 0x1e669cu: goto label_1e669c;
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6764u: goto label_1e6764;
        case 0x1e676cu: goto label_1e676c;
        case 0x1e6774u: goto label_1e6774;
        default: break;
    }

    ctx->pc = 0x1e6680u;

    // 0x1e6680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e668c: 0xc07b18c  jal         func_1EC630
    ctx->pc = 0x1E668Cu;
    SET_GPR_U32(ctx, 31, 0x1E6694u);
    ctx->pc = 0x1E6690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E668Cu;
    // 0x1e6690: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC630u, 0x1E668Cu, 0x1E6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6694u;
label_1e6694:
    // 0x1e6694: 0xc07a1dc  jal         func_1E8770
    ctx->pc = 0x1E6694u;
    SET_GPR_U32(ctx, 31, 0x1E669Cu);
    ctx->pc = 0x1E8770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8770u, 0x1E6694u, 0x1E669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E669Cu;
label_1e669c:
    // 0x1e669c: 0x8f838df0  lw          $v1, -0x7210($gp)
    ctx->pc = 0x1e669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938096)));
    // 0x1e66a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e66a4: 0x8f848e40  lw          $a0, -0x71C0($gp)
    ctx->pc = 0x1e66a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1e66a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e66ac: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E66ACu;
    {
        const bool branch_taken_0x1e66ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66ACu;
        // 0x1e66b0: 0xaf838df0  sw          $v1, -0x7210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66ac) {
            ctx->pc = 0x1E66F0u;
            goto label_1e66f0;
        }
    }
    ctx->pc = 0x1E66B4u;
    // 0x1e66b4: 0x8f828e38  lw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
    // 0x1e66b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e66bc: 0x28410108  slti        $at, $v0, 0x108
    ctx->pc = 0x1e66bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x1e66c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E66C0u;
    {
        const bool branch_taken_0x1e66c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66c0) {
            ctx->pc = 0x1E66D0u;
            goto label_1e66d0;
        }
    }
    ctx->pc = 0x1E66C8u;
    // 0x1e66c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E66C8u;
    {
        const bool branch_taken_0x1e66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66C8u;
        // 0x1e66cc: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66c8) {
            ctx->pc = 0x1E66D8u;
            goto label_1e66d8;
        }
    }
    ctx->pc = 0x1E66D0u;
label_1e66d0:
    // 0x1e66d0: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1e66d4: 0xaf828e38  sw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
label_1e66d8:
    // 0x1e66d8: 0x28420108  slti        $v0, $v0, 0x108
    ctx->pc = 0x1e66d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x1e66dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E66DCu;
    {
        const bool branch_taken_0x1e66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e66dc) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66E4u;
    // 0x1e66e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e66e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E66E8u;
    {
        const bool branch_taken_0x1e66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66E8u;
        // 0x1e66ec: 0xaf828e40  sw          $v0, -0x71C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66e8) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66F0u;
label_1e66f0:
    // 0x1e66f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e66f4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E66F4u;
    {
        const bool branch_taken_0x1e66f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e66f4) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66FCu;
    // 0x1e66fc: 0x8f828e38  lw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
    // 0x1e6700: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e6704: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e6704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6708: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e6708u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e670c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E670Cu;
    {
        const bool branch_taken_0x1e670c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E670Cu;
        // 0x1e6710: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e670c) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E6714u;
    // 0x1e6714: 0xaf808e40  sw          $zero, -0x71C0($gp)
    ctx->pc = 0x1e6714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 0));
label_1e6718:
    // 0x1e6718: 0x8f828e58  lw          $v0, -0x71A8($gp)
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1e671c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E671Cu;
    {
        const bool branch_taken_0x1e671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e671c) {
            ctx->pc = 0x1E6754u;
            goto label_1e6754;
        }
    }
    ctx->pc = 0x1E6724u;
    // 0x1e6724: 0x8f828e50  lw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1e6728: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1e6728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1e672c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E672Cu;
    {
        const bool branch_taken_0x1e672c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e672c) {
            ctx->pc = 0x1E6754u;
            goto label_1e6754;
        }
    }
    ctx->pc = 0x1E6734u;
    // 0x1e6734: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e6734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e6738: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1e6738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1e673c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E673Cu;
    {
        const bool branch_taken_0x1e673c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e673c) {
            ctx->pc = 0x1E674Cu;
            goto label_1e674c;
        }
    }
    ctx->pc = 0x1E6744u;
    // 0x1e6744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6744u;
    {
        const bool branch_taken_0x1e6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6744u;
        // 0x1e6748: 0xaf828e50  sw          $v0, -0x71B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6744) {
            ctx->pc = 0x1E6754u;
            goto label_1e6754;
        }
    }
    ctx->pc = 0x1E674Cu;
label_1e674c:
    // 0x1e674c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6750: 0xaf828e50  sw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
label_1e6754:
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
}
