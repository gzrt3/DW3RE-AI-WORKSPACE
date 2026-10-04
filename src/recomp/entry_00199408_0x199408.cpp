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

// Function: entry_00199408
// Address: 0x199408 - 0x199600
void entry_00199408_0x199408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199408_0x199408");
#endif

    switch (ctx->pc) {
        case 0x1994dcu: goto label_1994dc;
        default: break;
    }

    ctx->pc = 0x199408u;

    // 0x199408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19940c: 0x3e00008  jr          $ra
    ctx->pc = 0x19940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19940Cu;
        // 0x199410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199414u;
    // 0x199414: 0x0  nop
    ctx->pc = 0x199414u;
    // NOP
    // 0x199418: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x19941c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x199420: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x199424: 0x76c03  sra         $t5, $a3, 16
    ctx->pc = 0x199424u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 7), 16));
    // 0x199428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19942c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19942cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x199430: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x199434: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x199434u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x199438: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x199438u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x19943c: 0x66403  sra         $t4, $a2, 16
    ctx->pc = 0x19943cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 16));
    // 0x199440: 0x87c03  sra         $t7, $t0, 16
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 8), 16));
    // 0x199444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199448: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x199448u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x19944c: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
    // 0x199450: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x199450u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x199454: 0xb4403  sra         $t0, $t3, 16
    ctx->pc = 0x199454u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
    // 0x199458: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x199458u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19945c: 0x2da2003b  sltiu       $v0, $t5, 0x3B
    ctx->pc = 0x19945cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x199460: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x199460u;
    {
        const bool branch_taken_0x199460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199460u;
        // 0x199464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199460) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x199468u;
    // 0x199468: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x19946c: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x19946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x199470: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x199474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19947c: 0x800008  jr          $a0
    ctx->pc = 0x19947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199484u: goto label_199484;
            case 0x199490u: goto label_199490;
            case 0x1994A4u: goto label_1994a4;
            case 0x1994B0u: goto label_1994b0;
            case 0x1994BCu: goto label_1994bc;
            case 0x1994C4u: goto label_1994c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19947Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199484u;
label_199484:
    // 0x199484: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x199484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199488: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x199488u;
    {
        const bool branch_taken_0x199488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199488u;
        // 0x19948c: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199488) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x199490u;
label_199490:
    // 0x199490: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x199490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199494: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x199494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x199498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19949c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19949Cu;
    {
        const bool branch_taken_0x19949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19949Cu;
        // 0x1994a0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19949c) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994A4u;
label_1994a4:
    // 0x1994a4: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1994a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1994a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1994A8u;
    {
        const bool branch_taken_0x1994a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994A8u;
        // 0x1994ac: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994a8) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994B0u;
label_1994b0:
    // 0x1994b0: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1994b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1994b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1994B4u;
    {
        const bool branch_taken_0x1994b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994B4u;
        // 0x1994b8: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994b4) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994BCu;
label_1994bc:
    // 0x1994bc: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1994bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1994c0: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x1994c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_1994c4:
    // 0x1994c4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1994c8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1994c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1994cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1994CCu;
    {
        const bool branch_taken_0x1994cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994CCu;
        // 0x1994d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994cc) {
            ctx->pc = 0x1994E4u;
            goto label_1994e4;
        }
    }
    ctx->pc = 0x1994D4u;
    // 0x1994d4: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1994D4u;
    SET_GPR_U32(ctx, 31, 0x1994DCu);
    ctx->pc = 0x1994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994D4u;
    // 0x1994d8: 0x24849c60  addiu       $a0, $a0, -0x63A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1994D4u, 0x1994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994DCu;
label_1994dc:
    // 0x1994dc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1994DCu;
    {
        const bool branch_taken_0x1994dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994DCu;
        // 0x1994e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994dc) {
            ctx->pc = 0x1995F0u;
            goto label_1995f0;
        }
    }
    ctx->pc = 0x1994E4u;
label_1994e4:
    // 0x1994e4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1994e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1994e8: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x1994e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x1994ec: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x1994ecu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
    // 0x1994f0: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1994f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1994f4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1994f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1994f8: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x1994f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x1994fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1994fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x199500: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x199500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x199504: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x199508: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x199508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x19950c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19950cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x199510: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x199510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x199514: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x199514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x199518: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x199518u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x19951c: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x19951cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x199520: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x199520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x199524: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x199524u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x199528: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x199528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19952c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19952cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x199530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199534: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x199534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x199538: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x199538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x19953c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19953cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x199540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199544: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x199544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x199548: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19954c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x199550: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x199550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x199554: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x199554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x199558: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x199558u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
    // 0x19955c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x19955cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x199560: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x199564: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x199564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x199568: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x199568u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
    // 0x19956c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x199570: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x199570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x199574: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x199574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x199578: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x199578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19957c: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x19957cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x199580: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x199580u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
    // 0x199584: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x199584u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x199588: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x199588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x19958c: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x19958cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x199590: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x199590u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x199594: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x199594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x199598: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x199598u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x19959c: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x19959cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
    // 0x1995a0: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
    // 0x1995a4: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x1995a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x1995a8: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x1995a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x1995ac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1995acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1995b0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1995b4: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x1995b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1995b8: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x1995b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1995bc: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x1995bcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
    // 0x1995c0: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x1995c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x1995c4: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x1995c4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x1995c8: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x1995c8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
    // 0x1995cc: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x1995ccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x1995d0: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x1995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x1995d4: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x1995d4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x1995d8: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x1995d8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
    // 0x1995dc: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x1995dcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
    // 0x1995e0: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x1995e0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
    // 0x1995e4: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x1995e4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x1995e8: 0xf  sync
    ctx->pc = 0x1995e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1995ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1995f0:
    // 0x1995f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1995f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1995f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1995F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995F4u;
        // 0x1995f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1995F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1995FCu;
    // 0x1995fc: 0x0  nop
    ctx->pc = 0x1995fcu;
    // NOP
    ctx->pc = 0x199600u;
}
