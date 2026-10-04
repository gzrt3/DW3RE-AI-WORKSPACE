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

// Function: FUN_00202250
// Address: 0x202250 - 0x2023e0
void FUN_00202250_0x202250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202250_0x202250");
#endif

    switch (ctx->pc) {
        case 0x2022bcu: goto label_2022bc;
        case 0x2022ccu: goto label_2022cc;
        case 0x2022e4u: goto label_2022e4;
        case 0x202324u: goto label_202324;
        default: break;
    }

    ctx->pc = 0x202250u;

    // 0x202250: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x202250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x202254: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x202258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20225c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202260: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x202260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202264: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x202264u;
    {
        const bool branch_taken_0x202264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202264u;
        // 0x202268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202264) {
            ctx->pc = 0x2023D0u;
            goto label_2023d0;
        }
    }
    ctx->pc = 0x20226Cu;
    // 0x20226c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x20226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x202270: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202270u;
        // 0x202274: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202270) {
            ctx->pc = 0x202380u;
            goto label_202380;
        }
    }
    ctx->pc = 0x202278u;
    // 0x202278: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20227c: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x20227Cu;
    {
        const bool branch_taken_0x20227c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20227Cu;
        // 0x202280: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20227c) {
            ctx->pc = 0x20233Cu;
            goto label_20233c;
        }
    }
    ctx->pc = 0x202284u;
    // 0x202284: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x202284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x202288: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x202288u;
    {
        const bool branch_taken_0x202288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202288u;
        // 0x20228c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202288) {
            ctx->pc = 0x2022D8u;
            goto label_2022d8;
        }
    }
    ctx->pc = 0x202290u;
    // 0x202290: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x202290u;
    {
        const bool branch_taken_0x202290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x202290) {
            ctx->pc = 0x2022B0u;
            goto label_2022b0;
        }
    }
    ctx->pc = 0x202298u;
    // 0x202298: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202298u;
    {
        const bool branch_taken_0x202298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202298) {
            ctx->pc = 0x2022A8u;
            goto label_2022a8;
        }
    }
    ctx->pc = 0x2022A0u;
    // 0x2022a0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2022A0u;
    {
        const bool branch_taken_0x2022a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A0u;
        // 0x2022a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022a0) {
            ctx->pc = 0x2023DCu;
            goto label_2023dc;
        }
    }
    ctx->pc = 0x2022A8u;
label_2022a8:
    // 0x2022a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2022A8u;
    {
        const bool branch_taken_0x2022a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A8u;
        // 0x2022ac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022a8) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2022B0u;
label_2022b0:
    // 0x2022b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2022b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2022b4: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2022B4u;
    SET_GPR_U32(ctx, 31, 0x2022BCu);
    ctx->pc = 0x2022B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022B4u;
    // 0x2022b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2022B4u, 0x2022BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022BCu;
label_2022bc:
    // 0x2022bc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2022bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2022c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2022c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2022c4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x2022C4u;
    SET_GPR_U32(ctx, 31, 0x2022CCu);
    ctx->pc = 0x2022C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022C4u;
    // 0x2022c8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x2022C4u, 0x2022CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022CCu;
label_2022cc:
    // 0x2022cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2022ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2022d0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2022D0u;
    {
        const bool branch_taken_0x2022d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D0u;
        // 0x2022d4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022d0) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2022D8u;
label_2022d8:
    // 0x2022d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2022d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2022dc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2022DCu;
    SET_GPR_U32(ctx, 31, 0x2022E4u);
    ctx->pc = 0x2022E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022DCu;
    // 0x2022e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2022DCu, 0x2022E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022E4u;
label_2022e4:
    // 0x2022e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2022e8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2022ec: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2022ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x2022f0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2022f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2022f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2022f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2022f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2022fc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202300: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x202304: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202308: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20230c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20230cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202314: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x202314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x202318: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x20231c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x20231Cu;
    SET_GPR_U32(ctx, 31, 0x202324u);
    ctx->pc = 0x202320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20231Cu;
    // 0x202320: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x20231Cu, 0x202324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202324u;
label_202324:
    // 0x202324: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20232c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202330: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x202330u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x202334: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x202334u;
    {
        const bool branch_taken_0x202334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202334u;
        // 0x202338: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202334) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x20233Cu;
label_20233c:
    // 0x20233c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20233cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x202340: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x202340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x202344: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x202344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x202348: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20234c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202350: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x202354: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x202358: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20235c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202360: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x202364: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202368: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20236c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20236cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x202370: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x202370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x202374: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x202374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x202378: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x202378u;
    {
        const bool branch_taken_0x202378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202378u;
        // 0x20237c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202378) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x202380u;
label_202380:
    // 0x202380: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x202384: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x202384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x202388: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20238c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x20238cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
    // 0x202390: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x202394: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x202398: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20239c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2023a0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2023a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2023a4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2023a8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2023ac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2023b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2023b4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2023b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2023b8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2023b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2023bc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2023bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
    // 0x2023c0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
    // 0x2023c4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x2023c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x2023c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2023C8u;
    {
        const bool branch_taken_0x2023c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023C8u;
        // 0x2023cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023c8) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2023D0u;
label_2023d0:
    // 0x2023d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2023d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2023d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2023d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2023d8:
    // 0x2023d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2023d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2023dc:
    // 0x2023dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2023dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2023e0u;
}
