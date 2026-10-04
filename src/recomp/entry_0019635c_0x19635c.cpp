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

// Function: entry_0019635c
// Address: 0x19635c - 0x1965f0
void entry_0019635c_0x19635c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019635c_0x19635c");
#endif

    switch (ctx->pc) {
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196480u: goto label_196480;
        case 0x1964b8u: goto label_1964b8;
        case 0x1964d8u: goto label_1964d8;
        case 0x196510u: goto label_196510;
        case 0x1965acu: goto label_1965ac;
        default: break;
    }

    ctx->pc = 0x19635cu;

    // 0x19635c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196364: 0x3e00008  jr          $ra
    ctx->pc = 0x196364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19636Cu;
    // 0x19636c: 0x0  nop
    ctx->pc = 0x19636cu;
    // NOP
    // 0x196370: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x196374: 0x3e00008  jr          $ra
    ctx->pc = 0x196374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196374u;
        // 0x196378: 0x244298a8  addiu       $v0, $v0, -0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19637Cu;
    // 0x19637c: 0x0  nop
    ctx->pc = 0x19637cu;
    // NOP
    // 0x196380: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x196380u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x196384: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196384u;
    {
        const bool branch_taken_0x196384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x196388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196384u;
        // 0x196388: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196384) {
            ctx->pc = 0x196394u;
            goto label_196394;
        }
    }
    ctx->pc = 0x19638Cu;
    // 0x19638c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x19638Cu;
    {
        const bool branch_taken_0x19638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19638Cu;
        // 0x196390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19638c) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196394u;
label_196394:
    // 0x196394: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196398: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19639c: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x19639Cu;
    {
        const bool branch_taken_0x19639c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x19639c) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963A4u;
    // 0x1963a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1963a8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1963ac: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1963b0: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1963B0u;
    {
        const bool branch_taken_0x1963b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1963b0) {
            ctx->pc = 0x1963BCu;
            goto label_1963bc;
        }
    }
    ctx->pc = 0x1963B8u;
    // 0x1963b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963bc:
    // 0x1963bc: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1963c0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1963c4: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1963C4u;
    {
        const bool branch_taken_0x1963c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1963c4) {
            ctx->pc = 0x1963D0u;
            goto label_1963d0;
        }
    }
    ctx->pc = 0x1963CCu;
    // 0x1963cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963d0:
    // 0x1963d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1963d4: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1963d8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1963D8u;
    {
        const bool branch_taken_0x1963d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1963d8) {
            ctx->pc = 0x196408u;
            goto label_196408;
        }
    }
    ctx->pc = 0x1963E0u;
    // 0x1963e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1963e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1963e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1963E8u;
    {
        const bool branch_taken_0x1963e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963e8) {
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963F0u;
    // 0x1963f0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1963f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1963F4u;
    {
        const bool branch_taken_0x1963f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963f4) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963FCu;
    // 0x1963fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196400:
    // 0x196400: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x196400u;
    {
        const bool branch_taken_0x196400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196400) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196408u;
label_196408:
    // 0x196408: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x196408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19640c:
    // 0x19640c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196410: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x196414: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x196414u;
    {
        const bool branch_taken_0x196414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196414u;
        // 0x196418: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196414) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x19641Cu;
    // 0x19641c: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19641Cu;
    {
        const bool branch_taken_0x19641c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x19641c) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x196424u;
    // 0x196424: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x196424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x196428: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x196428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x19642c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x19642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x196430: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x196430u;
    {
        const bool branch_taken_0x196430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196430u;
        // 0x196434: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196430) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x196438u;
label_196438:
    // 0x196438: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x196438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19643c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x19643cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196440: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x196440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196444: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x196444u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x196448: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196448u;
    {
        const bool branch_taken_0x196448 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x19644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196448u;
        // 0x19644c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196448) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x196450u;
    // 0x196450: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x196450u;
    {
        const bool branch_taken_0x196450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196450) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196458u;
label_196458:
    // 0x196458: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19645c:
    // 0x19645c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196460: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x196460u;
    {
        const bool branch_taken_0x196460 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x196464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196460u;
        // 0x196464: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196460) {
            ctx->pc = 0x1964B8u;
            goto label_1964b8;
        }
    }
    ctx->pc = 0x196468u;
    // 0x196468: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x19646c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x196470: 0x1507fff9  bne         $t0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x196470u;
    {
        const bool branch_taken_0x196470 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x196470) {
            ctx->pc = 0x196458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196458;
        }
    }
    ctx->pc = 0x196478u;
    // 0x196478: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x196478u;
    {
        const bool branch_taken_0x196478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196478u;
        // 0x19647c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196478) {
            ctx->pc = 0x19649Cu;
            goto label_19649c;
        }
    }
    ctx->pc = 0x196480u;
label_196480:
    // 0x196480: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x196484: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x196484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
    // 0x196488: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x196488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19648c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x196490: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x196490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x196494: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x196494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x196498: 0x6445ffd0  daddiu      $a1, $v0, -0x30
    ctx->pc = 0x196498u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_19649c:
    // 0x19649c: 0x0  nop
    ctx->pc = 0x19649cu;
    // NOP
    // 0x1964a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1964a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1964a4: 0x1447fff6  bne         $v0, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1964A4u;
    {
        const bool branch_taken_0x1964a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1964A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A4u;
        // 0x1964a8: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964a4) {
            ctx->pc = 0x196480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196480;
        }
    }
    ctx->pc = 0x1964ACu;
    // 0x1964ac: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1964acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1964b0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B0u;
        // 0x1964b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1964b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964bc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1964bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1964c0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1964c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1964c8: 0x0  nop
    ctx->pc = 0x1964c8u;
    // NOP
    // 0x1964cc: 0x0  nop
    ctx->pc = 0x1964ccu;
    // NOP
    // 0x1964d0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1964D0u;
    {
        const bool branch_taken_0x1964d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1964d0) {
            ctx->pc = 0x1964B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964b8;
        }
    }
    ctx->pc = 0x1964D8u;
label_1964d8:
    // 0x1964d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964dc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1964dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1964e0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1964e4: 0x0  nop
    ctx->pc = 0x1964e4u;
    // NOP
    // 0x1964e8: 0x0  nop
    ctx->pc = 0x1964e8u;
    // NOP
    // 0x1964ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x1964D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964d8;
        }
    }
    ctx->pc = 0x1964F4u;
    // 0x1964f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1964f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1964F8u;
    {
        const bool branch_taken_0x1964f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F8u;
        // 0x1964fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964f8) {
            ctx->pc = 0x196508u;
            goto label_196508;
        }
    }
    ctx->pc = 0x196500u;
    // 0x196500: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x196500u;
    {
        const bool branch_taken_0x196500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196500) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196508u;
label_196508:
    // 0x196508: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x196508u;
    {
        const bool branch_taken_0x196508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196508) {
            ctx->pc = 0x19645Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19645c;
        }
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196514: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196518: 0x14690006  bne         $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x196518u;
    {
        const bool branch_taken_0x196518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x19651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196518u;
        // 0x19651c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196518) {
            ctx->pc = 0x196534u;
            goto label_196534;
        }
    }
    ctx->pc = 0x196520u;
    // 0x196520: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196524: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196524u;
    {
        const bool branch_taken_0x196524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x196524) {
            ctx->pc = 0x196530u;
            goto label_196530;
        }
    }
    ctx->pc = 0x19652Cu;
    // 0x19652c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196530:
    // 0x196530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_196534:
    // 0x196534: 0x0  nop
    ctx->pc = 0x196534u;
    // NOP
    // 0x196538: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19653c: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19653Cu;
    {
        const bool branch_taken_0x19653c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x19653c) {
            ctx->pc = 0x19654Cu;
            goto label_19654c;
        }
    }
    ctx->pc = 0x196544u;
    // 0x196544: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x196544u;
    {
        const bool branch_taken_0x196544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196544u;
        // 0x196548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196544) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x19654Cu;
label_19654c:
    // 0x19654c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196550: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x196550) {
            ctx->pc = 0x19656Cu;
            goto label_19656c;
        }
    }
    ctx->pc = 0x196558u;
    // 0x196558: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x196558u;
    {
        const bool branch_taken_0x196558 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x196558) {
            ctx->pc = 0x196564u;
            goto label_196564;
        }
    }
    ctx->pc = 0x196560u;
    // 0x196560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196564:
    // 0x196564: 0x0  nop
    ctx->pc = 0x196564u;
    // NOP
    // 0x196568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19656c:
    // 0x19656c: 0x0  nop
    ctx->pc = 0x19656cu;
    // NOP
    // 0x196570: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196574: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x196574u;
    {
        const bool branch_taken_0x196574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x196574) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x19657Cu;
    // 0x19657c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19657Cu;
    {
        const bool branch_taken_0x19657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19657Cu;
        // 0x196580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19657c) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196584u;
label_196584:
    // 0x196584: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x196584u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196588: 0x11060003  beq         $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x196588u;
    {
        const bool branch_taken_0x196588 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x196588) {
            ctx->pc = 0x196598u;
            goto label_196598;
        }
    }
    ctx->pc = 0x196590u;
    // 0x196590: 0x1505000c  bne         $t0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x196590u;
    {
        const bool branch_taken_0x196590 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x196590) {
            ctx->pc = 0x1965C4u;
            goto label_1965c4;
        }
    }
    ctx->pc = 0x196598u;
label_196598:
    // 0x196598: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19659c: 0x1103ffdc  beq         $t0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19659Cu;
    {
        const bool branch_taken_0x19659c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x19659c) {
            ctx->pc = 0x196510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196510;
        }
    }
    ctx->pc = 0x1965A4u;
    // 0x1965a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1965A4u;
    {
        const bool branch_taken_0x1965a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965a4) {
            ctx->pc = 0x1965C4u;
            goto label_1965c4;
        }
    }
    ctx->pc = 0x1965ACu;
label_1965ac:
    // 0x1965ac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1965ACu;
    {
        const bool branch_taken_0x1965ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965ac) {
            ctx->pc = 0x1965BCu;
            goto label_1965bc;
        }
    }
    ctx->pc = 0x1965B4u;
    // 0x1965b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1965B4u;
    {
        const bool branch_taken_0x1965b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B4u;
        // 0x1965b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965b4) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x1965BCu;
label_1965bc:
    // 0x1965bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1965c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1965c4:
    // 0x1965c4: 0x0  nop
    ctx->pc = 0x1965c4u;
    // NOP
    // 0x1965c8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1965cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1965d0: 0x10a3fff6  beq         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1965D0u;
    {
        const bool branch_taken_0x1965d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1965d0) {
            ctx->pc = 0x1965ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1965ac;
        }
    }
    ctx->pc = 0x1965D8u;
    // 0x1965d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1965d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1965dc:
    // 0x1965dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1965DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965E4u;
    // 0x1965e4: 0x0  nop
    ctx->pc = 0x1965e4u;
    // NOP
    // 0x1965e8: 0x0  nop
    ctx->pc = 0x1965e8u;
    // NOP
    // 0x1965ec: 0x0  nop
    ctx->pc = 0x1965ecu;
    // NOP
    ctx->pc = 0x1965f0u;
}
