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

// Function: FUN_002043c0
// Address: 0x2043c0 - 0x20459c
void FUN_002043c0_0x2043c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002043c0_0x2043c0");
#endif

    switch (ctx->pc) {
        case 0x20443cu: goto label_20443c;
        case 0x204450u: goto label_204450;
        case 0x20446cu: goto label_20446c;
        case 0x20447cu: goto label_20447c;
        case 0x2044f0u: goto label_2044f0;
        case 0x204500u: goto label_204500;
        case 0x204518u: goto label_204518;
        case 0x204530u: goto label_204530;
        case 0x204548u: goto label_204548;
        case 0x204558u: goto label_204558;
        default: break;
    }

    ctx->pc = 0x2043c0u;

    // 0x2043c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2043c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2043c4: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2043c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x2043c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2043c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2043cc: 0x24e7f700  addiu       $a3, $a3, -0x900
    ctx->pc = 0x2043ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964992));
    // 0x2043d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2043d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2043d4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2043d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2043d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2043e0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2043e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2043e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2043e8: 0x450c0  sll         $t2, $a0, 3
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2043ec: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2043f0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2043f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2043f4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2043f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2043f8: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2043fc: 0x10a6001d  beq         $a1, $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2043FCu;
    {
        const bool branch_taken_0x2043fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x204400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043FCu;
        // 0x204400: 0xe84821  addu        $t1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043fc) {
            ctx->pc = 0x204474u;
            goto label_204474;
        }
    }
    ctx->pc = 0x204404u;
    // 0x204404: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x204404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204408: 0x10a60013  beq         $a1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x204408u;
    {
        const bool branch_taken_0x204408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x20440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204408u;
        // 0x20440c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204408) {
            ctx->pc = 0x204458u;
            goto label_204458;
        }
    }
    ctx->pc = 0x204410u;
    // 0x204410: 0x10a6000c  beq         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x204410u;
    {
        const bool branch_taken_0x204410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x204410) {
            ctx->pc = 0x204444u;
            goto label_204444;
        }
    }
    ctx->pc = 0x204418u;
    // 0x204418: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204418u;
    {
        const bool branch_taken_0x204418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204418) {
            ctx->pc = 0x204428u;
            goto label_204428;
        }
    }
    ctx->pc = 0x204420u;
    // 0x204420: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x204420u;
    {
        const bool branch_taken_0x204420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204420u;
        // 0x204424: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204420) {
            ctx->pc = 0x204484u;
            goto label_204484;
        }
    }
    ctx->pc = 0x204428u;
label_204428:
    // 0x204428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20442c: 0x25260484  addiu       $a2, $t1, 0x484
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1156));
    // 0x204430: 0x25270488  addiu       $a3, $t1, 0x488
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1160));
    // 0x204434: 0xc06c6c0  jal         func_1B1B00
    ctx->pc = 0x204434u;
    SET_GPR_U32(ctx, 31, 0x20443Cu);
    ctx->pc = 0x204438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204434u;
    // 0x204438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B00u, 0x204434u, 0x20443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20443Cu;
label_20443c:
    // 0x20443c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20443Cu;
    {
        const bool branch_taken_0x20443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20443Cu;
        // 0x204440: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20443c) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204444u;
label_204444:
    // 0x204444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204448: 0xc06c51c  jal         func_1B1470
    ctx->pc = 0x204448u;
    SET_GPR_U32(ctx, 31, 0x204450u);
    ctx->pc = 0x20444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204448u;
    // 0x20444c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1470u, 0x204448u, 0x204450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204450u;
label_204450:
    // 0x204450: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x204450u;
    {
        const bool branch_taken_0x204450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204450u;
        // 0x204454: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204450) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204458u;
label_204458:
    // 0x204458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20445c: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x204460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204464: 0xc06c73c  jal         func_1B1CF0
    ctx->pc = 0x204464u;
    SET_GPR_U32(ctx, 31, 0x20446Cu);
    ctx->pc = 0x204468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204464u;
    // 0x204468: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1CF0u, 0x204464u, 0x20446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20446Cu;
label_20446c:
    // 0x20446c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x20446Cu;
    {
        const bool branch_taken_0x20446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20446Cu;
        // 0x204470: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20446c) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204474u;
label_204474:
    // 0x204474: 0xc06c800  jal         func_1B2000
    ctx->pc = 0x204474u;
    SET_GPR_U32(ctx, 31, 0x20447Cu);
    ctx->pc = 0x204478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204474u;
    // 0x204478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2000u, 0x204474u, 0x20447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20447Cu;
label_20447c:
    // 0x20447c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x20447Cu;
    {
        const bool branch_taken_0x20447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20447Cu;
        // 0x204480: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20447c) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x1443823  subu        $a3, $t2, $a0
    ctx->pc = 0x204484u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x204488: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20448c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x204490: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x204494: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x204494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    // 0x204498: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204498u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20449c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x20449cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2044a0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2044a4: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x2044a8: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2044ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2044b0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2044b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2044b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2044b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2044bc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2044BCu;
    {
        const bool branch_taken_0x2044bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044BCu;
        // 0x2044c0: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044bc) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x2044C4u;
    // 0x2044c4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2044c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2044cc: 0x24c6dff0  addiu       $a2, $a2, -0x2010
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959088));
    // 0x2044d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2044d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2044d8: 0xa00008  jr          $a1
    ctx->pc = 0x2044D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2044E0u: goto label_2044e0;
            case 0x2044F8u: goto label_2044f8;
            case 0x204508u: goto label_204508;
            case 0x204520u: goto label_204520;
            case 0x204538u: goto label_204538;
            case 0x204550u: goto label_204550;
            case 0x20455Cu: goto label_20455c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2044e4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2044e8: 0xc06c4d2  jal         func_1B1348
    ctx->pc = 0x2044E8u;
    SET_GPR_U32(ctx, 31, 0x2044F0u);
    ctx->pc = 0x2044ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044E8u;
    // 0x2044ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1348u, 0x2044E8u, 0x2044F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044F0u;
label_2044f0:
    // 0x2044f0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2044F0u;
    {
        const bool branch_taken_0x2044f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F0u;
        // 0x2044f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044f0) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x2044F8u;
label_2044f8:
    // 0x2044f8: 0xc06c52a  jal         func_1B14A8
    ctx->pc = 0x2044F8u;
    SET_GPR_U32(ctx, 31, 0x204500u);
    ctx->pc = 0x2044FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044F8u;
    // 0x2044fc: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14A8u, 0x2044F8u, 0x204500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204500u;
label_204500:
    // 0x204500: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x204500u;
    {
        const bool branch_taken_0x204500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204500u;
        // 0x204504: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204500) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204508u;
label_204508:
    // 0x204508: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20450c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x204510: 0xc06c558  jal         func_1B1560
    ctx->pc = 0x204510u;
    SET_GPR_U32(ctx, 31, 0x204518u);
    ctx->pc = 0x204514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204510u;
    // 0x204514: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x204510u, 0x204518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204518u;
label_204518:
    // 0x204518: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x204518u;
    {
        const bool branch_taken_0x204518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204518u;
        // 0x20451c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204518) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204520u;
label_204520:
    // 0x204520: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x204520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x204524: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x204524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x204528: 0xc06c5b2  jal         func_1B16C8
    ctx->pc = 0x204528u;
    SET_GPR_U32(ctx, 31, 0x204530u);
    ctx->pc = 0x20452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204528u;
    // 0x20452c: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B16C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B16C8u, 0x204528u, 0x204530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204530u;
label_204530:
    // 0x204530: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204530u;
    {
        const bool branch_taken_0x204530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204530u;
        // 0x204534: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204530) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204538u;
label_204538:
    // 0x204538: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x20453c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x204540: 0xc06c5f8  jal         func_1B17E0
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 31, 0x204548u);
    ctx->pc = 0x204544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204540u;
    // 0x204544: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B17E0u, 0x204540u, 0x204548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204548u;
label_204548:
    // 0x204548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204548u;
    {
        const bool branch_taken_0x204548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204548u;
        // 0x20454c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204548) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204550u;
label_204550:
    // 0x204550: 0xc06c87a  jal         func_1B21E8
    ctx->pc = 0x204550u;
    SET_GPR_U32(ctx, 31, 0x204558u);
    ctx->pc = 0x204554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204550u;
    // 0x204554: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B21E8u, 0x204550u, 0x204558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204558u;
label_204558:
    // 0x204558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20455c:
    // 0x20455c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20455Cu;
    {
        const bool branch_taken_0x20455c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20455c) {
            ctx->pc = 0x204574u;
            goto label_204574;
        }
    }
    ctx->pc = 0x204564u;
    // 0x204564: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x204564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x204568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20456c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20456Cu;
    {
        const bool branch_taken_0x20456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20456Cu;
        // 0x204570: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20456c) {
            ctx->pc = 0x204598u;
            goto label_204598;
        }
    }
    ctx->pc = 0x204574u;
label_204574:
    // 0x204574: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x204574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x204578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20457c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x204580: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x204580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x204584: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204584u;
    {
        const bool branch_taken_0x204584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x204584) {
            ctx->pc = 0x204598u;
            goto label_204598;
        }
    }
    ctx->pc = 0x20458Cu;
    // 0x20458c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x204590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204594: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_204598:
    // 0x204598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x20459cu;
}
