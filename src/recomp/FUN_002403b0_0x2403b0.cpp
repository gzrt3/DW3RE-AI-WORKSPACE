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

// Function: FUN_002403b0
// Address: 0x2403b0 - 0x2404cc
void FUN_002403b0_0x2403b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002403b0_0x2403b0");
#endif

    switch (ctx->pc) {
        case 0x2403f8u: goto label_2403f8;
        case 0x240420u: goto label_240420;
        default: break;
    }

    ctx->pc = 0x2403b0u;

    // 0x2403b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2403b4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2403b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2403b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2403bc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2403bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2403c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2403c4: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x2403c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x2403c8: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2403c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x2403cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2403ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403d0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2403d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2403d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2403d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2403d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2403dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2403dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2403e0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2403e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2403e4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2403e8: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x2403e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x2403ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2403ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2403f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2403f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2403f4: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x2403f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_2403f8:
    // 0x2403f8: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2403f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2403fc: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x240400: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x240404: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x240408: 0x6cc021  addu        $t8, $v1, $t4
    ctx->pc = 0x240408u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x24040c: 0x24900000  addiu       $s0, $a0, 0x0
    ctx->pc = 0x24040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x240410: 0xcd7021  addu        $t6, $a2, $t5
    ctx->pc = 0x240410u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x240414: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x240414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x240418: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24041c: 0x25cf0000  addiu       $t7, $t6, 0x0
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 0));
label_240420:
    // 0x240420: 0x15070006  bne         $t0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x240420u;
    {
        const bool branch_taken_0x240420 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x240424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240420u;
        // 0x240424: 0x8bc821  addu        $t9, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240420) {
            ctx->pc = 0x24043Cu;
            goto label_24043c;
        }
    }
    ctx->pc = 0x240428u;
    // 0x240428: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x240428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24042c: 0x8f390374  lw          $t9, 0x374($t9)
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
    // 0x240430: 0x1d9082a  slt         $at, $t6, $t9
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x240434: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x240434u;
    {
        const bool branch_taken_0x240434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x240434) {
            ctx->pc = 0x24045Cu;
            goto label_24045c;
        }
    }
    ctx->pc = 0x24043Cu;
label_24043c:
    // 0x24043c: 0x0  nop
    ctx->pc = 0x24043cu;
    // NOP
    // 0x240440: 0x11070012  beq         $t0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x240440u;
    {
        const bool branch_taken_0x240440 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x240444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240440u;
        // 0x240444: 0x20bc821  addu        $t9, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240440) {
            ctx->pc = 0x24048Cu;
            goto label_24048c;
        }
    }
    ctx->pc = 0x240448u;
    // 0x240448: 0x8f0e0000  lw          $t6, 0x0($t8)
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24044c: 0x8f390374  lw          $t9, 0x374($t9)
    ctx->pc = 0x24044cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
    // 0x240450: 0x32e082a  slt         $at, $t9, $t6
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x240454: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x240454u;
    {
        const bool branch_taken_0x240454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240454) {
            ctx->pc = 0x24048Cu;
            goto label_24048c;
        }
    }
    ctx->pc = 0x24045Cu;
label_24045c:
    // 0x24045c: 0x0  nop
    ctx->pc = 0x24045cu;
    // NOP
    // 0x240460: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x240464: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x240464u;
    {
        const bool branch_taken_0x240464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240464u;
        // 0x240468: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240464) {
            ctx->pc = 0x240480u;
            goto label_240480;
        }
    }
    ctx->pc = 0x24046Cu;
    // 0x24046c: 0x1ebc821  addu        $t9, $t7, $t3
    ctx->pc = 0x24046cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x240470: 0x8f2e0374  lw          $t6, 0x374($t9)
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
    // 0x240474: 0xaf2e037c  sw          $t6, 0x37C($t9)
    ctx->pc = 0x240474u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 892), GPR_U32(ctx, 14));
    // 0x240478: 0x8f2e0370  lw          $t6, 0x370($t9)
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
    // 0x24047c: 0xaf2e0378  sw          $t6, 0x378($t9)
    ctx->pc = 0x24047cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 888), GPR_U32(ctx, 14));
label_240480:
    // 0x240480: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x240484: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x240484u;
    {
        const bool branch_taken_0x240484 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x240488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240484u;
        // 0x240488: 0x256bfff8  addiu       $t3, $t3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240484) {
            ctx->pc = 0x240420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240420;
        }
    }
    ctx->pc = 0x24048Cu;
label_24048c:
    // 0x24048c: 0x0  nop
    ctx->pc = 0x24048cu;
    // NOP
    // 0x240490: 0x2941000a  slti        $at, $t2, 0xA
    ctx->pc = 0x240490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x240494: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240494u;
        // 0x240498: 0xa48c0  sll         $t1, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404B8u;
            goto label_2404b8;
        }
    }
    ctx->pc = 0x24049Cu;
    // 0x24049c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2404a0: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2404a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2404a4: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x2404a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2404a8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2404a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x2404ac: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2404acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2404b0: 0xac8a0374  sw          $t2, 0x374($a0)
    ctx->pc = 0x2404b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 10));
    // 0x2404b4: 0xac850370  sw          $a1, 0x370($a0)
    ctx->pc = 0x2404b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 5));
label_2404b8:
    // 0x2404b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2404b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2404bc: 0x29040003  slti        $a0, $t0, 0x3
    ctx->pc = 0x2404bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2404c0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2404c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2404c4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2404C4u;
    {
        const bool branch_taken_0x2404c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404C4u;
        // 0x2404c8: 0x25ad0730  addiu       $t5, $t5, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404c4) {
            ctx->pc = 0x2403F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2403f8;
        }
    }
    ctx->pc = 0x2404CCu;
}
