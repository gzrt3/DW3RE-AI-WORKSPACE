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

// Function: entry_0023d6a0
// Address: 0x23d6a0 - 0x23d7f0
void entry_0023d6a0_0x23d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d6a0_0x23d6a0");
#endif

    switch (ctx->pc) {
        case 0x23d6c4u: goto label_23d6c4;
        case 0x23d6d8u: goto label_23d6d8;
        case 0x23d6e8u: goto label_23d6e8;
        case 0x23d728u: goto label_23d728;
        default: break;
    }

    ctx->pc = 0x23d6a0u;

    // 0x23d6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23d6a4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x23d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x23d6a8: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23d6ac: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x23d6b0: 0x57a00a  movz        $s4, $v0, $s7
    ctx->pc = 0x23d6b0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x23d6b4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23d6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6bc: 0xc06d9fe  jal         func_1B67F8
    ctx->pc = 0x23D6BCu;
    SET_GPR_U32(ctx, 31, 0x23D6C4u);
    ctx->pc = 0x23D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6BCu;
    // 0x23d6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67F8u, 0x23D6BCu, 0x23D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6C4u;
label_23d6c4:
    // 0x23d6c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6c8: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x23d6c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d6cc: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x23d6ccu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x23d6d0: 0xc06d89e  jal         func_1B6278
    ctx->pc = 0x23D6D0u;
    SET_GPR_U32(ctx, 31, 0x23D6D8u);
    ctx->pc = 0x23D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6D0u;
    // 0x23d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6278u, 0x23D6D0u, 0x23D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6D8u;
label_23d6d8:
    // 0x23d6d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23d6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23D6E0u;
    {
        const bool branch_taken_0x23d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6E0u;
        // 0x23d6e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6e0) {
            ctx->pc = 0x23D738u;
            goto label_23d738;
        }
    }
    ctx->pc = 0x23D6E8u;
label_23d6e8:
    // 0x23d6e8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x23d6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x23d6ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23D6ECu;
    {
        const bool branch_taken_0x23d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d6ec) {
            ctx->pc = 0x23D778u;
            goto label_23d778;
        }
    }
    ctx->pc = 0x23D6F4u;
    // 0x23d6f4: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D6F4u;
    {
        const bool branch_taken_0x23d6f4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x23D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6F4u;
        // 0x23d6f8: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6f4) {
            ctx->pc = 0x23D718u;
            goto label_23d718;
        }
    }
    ctx->pc = 0x23D6FCu;
    // 0x23d6fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23D6FCu;
    {
        const bool branch_taken_0x23d6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6fc) {
            ctx->pc = 0x23D700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6FCu;
            // 0x23d700: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D730u;
            goto label_23d730;
        }
    }
    ctx->pc = 0x23D704u;
    // 0x23d704: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D704u;
    {
        const bool branch_taken_0x23d704 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x23D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D704u;
        // 0x23d708: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d704) {
            ctx->pc = 0x23D720u;
            goto label_23d720;
        }
    }
    ctx->pc = 0x23D70Cu;
    // 0x23d70c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x23d70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23d710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D710u;
    {
        const bool branch_taken_0x23d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d710) {
            ctx->pc = 0x23D720u;
            goto label_23d720;
        }
    }
    ctx->pc = 0x23D718u;
label_23d718:
    // 0x23d718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D718u;
    {
        const bool branch_taken_0x23d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D718u;
        // 0x23d71c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d718) {
            ctx->pc = 0x23D730u;
            goto label_23d730;
        }
    }
    ctx->pc = 0x23D720u;
label_23d720:
    // 0x23d720: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x23D720u;
    SET_GPR_U32(ctx, 31, 0x23D728u);
    ctx->pc = 0x23D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D720u;
    // 0x23d724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x23D720u, 0x23D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D728u;
label_23d728:
    // 0x23d728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23d728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d72c: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x23d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_23d730:
    // 0x23d730: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d730u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d734: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d738:
    // 0x23d738: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x23d73c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x23d740: 0x9084e1f1  lbu         $a0, -0x1E0F($a0)
    ctx->pc = 0x23d740u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959601)));
    // 0x23d744: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x23d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x23d748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D748u;
    {
        const bool branch_taken_0x23d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D748u;
        // 0x23d74c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d748) {
            ctx->pc = 0x23D758u;
            goto label_23d758;
        }
    }
    ctx->pc = 0x23D750u;
    // 0x23d750: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x23D750u;
    {
        const bool branch_taken_0x23d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D750u;
        // 0x23d754: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d750) {
            ctx->pc = 0x23D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6e8;
        }
    }
    ctx->pc = 0x23D758u;
label_23d758:
    // 0x23d758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D758u;
    {
        const bool branch_taken_0x23d758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D758u;
        // 0x23d75c: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d758) {
            ctx->pc = 0x23D778u;
            goto label_23d778;
        }
    }
    ctx->pc = 0x23D760u;
    // 0x23d760: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x23d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x23d764: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x23d764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23d768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d76c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x23D76Cu;
    {
        const bool branch_taken_0x23d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D76Cu;
        // 0x23d770: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d76c) {
            ctx->pc = 0x23D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6e8;
        }
    }
    ctx->pc = 0x23D774u;
    // 0x23d774: 0x0  nop
    ctx->pc = 0x23d774u;
    // NOP
label_23d778:
    // 0x23d778: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x23D778u;
    {
        const bool branch_taken_0x23d778 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x23D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D778u;
        // 0x23d77c: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d778) {
            ctx->pc = 0x23D7A8u;
            goto label_23d7a8;
        }
    }
    ctx->pc = 0x23D780u;
    // 0x23d780: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23d784: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x23d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x23d788: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23d78c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x23d78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x23d790: 0x77280a  movz        $a1, $v1, $s7
    ctx->pc = 0x23d790u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x23d794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d798: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x23d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x23d79c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23D79Cu;
    {
        const bool branch_taken_0x23d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D79Cu;
        // 0x23d7a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d79c) {
            ctx->pc = 0x23D7ACu;
            goto label_23d7ac;
        }
    }
    ctx->pc = 0x23D7A4u;
    // 0x23d7a4: 0x0  nop
    ctx->pc = 0x23d7a4u;
    // NOP
label_23d7a8:
    // 0x23d7a8: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x23d7a8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_23d7ac:
    // 0x23d7ac: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D7ACu;
    {
        const bool branch_taken_0x23d7ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ACu;
        // 0x23d7b0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7ac) {
            ctx->pc = 0x23D7BCu;
            goto label_23d7bc;
        }
    }
    ctx->pc = 0x23D7B4u;
    // 0x23d7b4: 0x46a80b  movn        $s5, $v0, $a2
    ctx->pc = 0x23d7b4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x23d7b8: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x23d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_23d7bc:
    // 0x23d7bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23d7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d7c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23d7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23d7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d7c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d7cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23d7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23d7d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23d7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d7d4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23d7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23d7d8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23d7d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d7dc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23d7dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23d7e0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x23d7e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d7e4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x23d7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23d7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23D7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7E8u;
        // 0x23d7ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D7F0u;
}
