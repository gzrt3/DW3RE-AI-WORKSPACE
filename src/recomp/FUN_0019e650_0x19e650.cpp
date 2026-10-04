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

// Function: FUN_0019e650
// Address: 0x19e650 - 0x19e774
void FUN_0019e650_0x19e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e650_0x19e650");
#endif

    switch (ctx->pc) {
        case 0x19e688u: goto label_19e688;
        case 0x19e694u: goto label_19e694;
        case 0x19e6b8u: goto label_19e6b8;
        case 0x19e6c8u: goto label_19e6c8;
        case 0x19e6d0u: goto label_19e6d0;
        case 0x19e6dcu: goto label_19e6dc;
        case 0x19e6fcu: goto label_19e6fc;
        default: break;
    }

    ctx->pc = 0x19e650u;

    // 0x19e650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19e654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e658: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19e65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e660: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19e664: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19e664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19e66c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e670: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e674: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19e678: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19e678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e67c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19e680: 0xc067e26  jal         func_19F898
    ctx->pc = 0x19E680u;
    SET_GPR_U32(ctx, 31, 0x19E688u);
    ctx->pc = 0x19E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E680u;
    // 0x19e684: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19E680u, 0x19E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E688u;
label_19e688:
    // 0x19e688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e68c: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19E68Cu;
    SET_GPR_U32(ctx, 31, 0x19E694u);
    ctx->pc = 0x19E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E68Cu;
    // 0x19e690: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19E68Cu, 0x19E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E694u;
label_19e694:
    // 0x19e694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e698: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x19e69c: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x19e69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x19e6a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E6A0u;
    {
        const bool branch_taken_0x19e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A0u;
        // 0x19e6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6a0) {
            ctx->pc = 0x19E6C0u;
            goto label_19e6c0;
        }
    }
    ctx->pc = 0x19E6A8u;
    // 0x19e6a8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x19e6ac: 0x24a5a0c0  addiu       $a1, $a1, -0x5F40
    ctx->pc = 0x19e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942912));
    // 0x19e6b0: 0xc068d1e  jal         func_1A3478
    ctx->pc = 0x19E6B0u;
    SET_GPR_U32(ctx, 31, 0x19E6B8u);
    ctx->pc = 0x19E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6B0u;
    // 0x19e6b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3478u, 0x19E6B0u, 0x19E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6B8u;
label_19e6b8:
    // 0x19e6b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19E6B8u;
    {
        const bool branch_taken_0x19e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6B8u;
        // 0x19e6bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6b8) {
            ctx->pc = 0x19E758u;
            goto label_19e758;
        }
    }
    ctx->pc = 0x19E6C0u;
label_19e6c0:
    // 0x19e6c0: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19E6C0u;
    SET_GPR_U32(ctx, 31, 0x19E6C8u);
    ctx->pc = 0x19E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C0u;
    // 0x19e6c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19E6C0u, 0x19E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6C8u;
label_19e6c8:
    // 0x19e6c8: 0xc067e46  jal         func_19F918
    ctx->pc = 0x19E6C8u;
    SET_GPR_U32(ctx, 31, 0x19E6D0u);
    ctx->pc = 0x19E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C8u;
    // 0x19e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F918u, 0x19E6C8u, 0x19E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6D0u;
label_19e6d0:
    // 0x19e6d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19e6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6d4: 0xc06790e  jal         func_19E438
    ctx->pc = 0x19E6D4u;
    SET_GPR_U32(ctx, 31, 0x19E6DCu);
    ctx->pc = 0x19E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6D4u;
    // 0x19e6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E438u, 0x19E6D4u, 0x19E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6DCu;
label_19e6dc:
    // 0x19e6dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19e6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6e0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x19e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x19e6e4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x19e6e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E6E8u;
    {
        const bool branch_taken_0x19e6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E8u;
        // 0x19e6ec: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6e8) {
            ctx->pc = 0x19E704u;
            goto label_19e704;
        }
    }
    ctx->pc = 0x19E6F0u;
    // 0x19e6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6f4: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x19E6F4u;
    SET_GPR_U32(ctx, 31, 0x19E6FCu);
    ctx->pc = 0x19E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6F4u;
    // 0x19e6f8: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x19E6F4u, 0x19E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6FCu;
label_19e6fc:
    // 0x19e6fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19E6FCu;
    {
        const bool branch_taken_0x19e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6FCu;
        // 0x19e700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6fc) {
            ctx->pc = 0x19E758u;
            goto label_19e758;
        }
    }
    ctx->pc = 0x19E704u;
label_19e704:
    // 0x19e704: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x19e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x19e708: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x19e708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x19e70c: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x19e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x19e710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19e718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e71c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x19e71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19e720: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19e724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19e728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e72c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x19e730: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x19e730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x19e734: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x19e734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
    // 0x19e738: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19e738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19e73c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19e740: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19e740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x19e744: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19e744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19e748: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19e748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19e74c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x19e750: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x19e754: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19e758:
    // 0x19e758: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e75c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19e75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e760: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19e774u;
}
