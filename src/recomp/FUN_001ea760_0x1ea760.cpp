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

// Function: FUN_001ea760
// Address: 0x1ea760 - 0x1ea960
void FUN_001ea760_0x1ea760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ea760_0x1ea760");
#endif

    switch (ctx->pc) {
        case 0x1ea858u: goto label_1ea858;
        case 0x1ea89cu: goto label_1ea89c;
        case 0x1ea8dcu: goto label_1ea8dc;
        case 0x1ea910u: goto label_1ea910;
        default: break;
    }

    ctx->pc = 0x1ea760u;

    // 0x1ea760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea768: 0x8f858efc  lw          $a1, -0x7104($gp)
    ctx->pc = 0x1ea768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
    // 0x1ea76c: 0x10a0007b  beqz        $a1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1EA76Cu;
    {
        const bool branch_taken_0x1ea76c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA76Cu;
        // 0x1ea770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea76c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA774u;
    // 0x1ea774: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA774u;
    {
        const bool branch_taken_0x1ea774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA774u;
        // 0x1ea778: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea774) {
            ctx->pc = 0x1EA7A0u;
            goto label_1ea7a0;
        }
    }
    ctx->pc = 0x1EA77Cu;
    // 0x1ea77c: 0x8f838ef4  lw          $v1, -0x710C($gp)
    ctx->pc = 0x1ea77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ea780: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ea780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ea784: 0xaf838ef4  sw          $v1, -0x710C($gp)
    ctx->pc = 0x1ea784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 3));
    // 0x1ea788: 0x8f838ef4  lw          $v1, -0x710C($gp)
    ctx->pc = 0x1ea788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ea78c: 0x1c600073  bgtz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1EA78Cu;
    {
        const bool branch_taken_0x1ea78c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA78Cu;
        // 0x1ea790: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea78c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA794u;
    // 0x1ea794: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    // 0x1ea798: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1EA798u;
    {
        const bool branch_taken_0x1ea798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA798u;
        // 0x1ea79c: 0xaf838efc  sw          $v1, -0x7104($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea798) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA7A0u;
label_1ea7a0:
    // 0x1ea7a0: 0x14a4001c  bne         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EA7A0u;
    {
        const bool branch_taken_0x1ea7a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea7a0) {
            ctx->pc = 0x1EA814u;
            goto label_1ea814;
        }
    }
    ctx->pc = 0x1EA7A8u;
    // 0x1ea7a8: 0x8f848ef4  lw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ea7ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ea7b0: 0xaf848ef4  sw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 4));
    // 0x1ea7b4: 0x8f848ef4  lw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ea7b8: 0x28840008  slti        $a0, $a0, 0x8
    ctx->pc = 0x1ea7b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ea7bc: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1EA7BCu;
    {
        const bool branch_taken_0x1ea7bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7BCu;
        // 0x1ea7c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7bc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA7C4u;
    // 0x1ea7c4: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
    // 0x1ea7c8: 0xaf848ef0  sw          $a0, -0x7110($gp)
    ctx->pc = 0x1ea7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 4));
    // 0x1ea7cc: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x1ea7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1ea7d0: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
    // 0x1ea7d4: 0xaf848eec  sw          $a0, -0x7114($gp)
    ctx->pc = 0x1ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 4));
    // 0x1ea7d8: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1ea7dc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    // 0x1ea7e0: 0xaf848ee8  sw          $a0, -0x7118($gp)
    ctx->pc = 0x1ea7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 4));
    // 0x1ea7e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ea7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ea7e8: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1ea7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
    // 0x1ea7ec: 0xaf848ee0  sw          $a0, -0x7120($gp)
    ctx->pc = 0x1ea7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 4));
    // 0x1ea7f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ea7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ea7f4: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
    // 0x1ea7f8: 0xaf848edc  sw          $a0, -0x7124($gp)
    ctx->pc = 0x1ea7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 4));
    // 0x1ea7fc: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
    // 0x1ea800: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
    // 0x1ea804: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1ea804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
    // 0x1ea808: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
    // 0x1ea80c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1EA80Cu;
    {
        const bool branch_taken_0x1ea80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA80Cu;
        // 0x1ea810: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea80c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA814u;
label_1ea814:
    // 0x1ea814: 0x8f868ec8  lw          $a2, -0x7138($gp)
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
    // 0x1ea818: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x1EA818u;
    {
        const bool branch_taken_0x1ea818 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea818) {
            ctx->pc = 0x1EA91Cu;
            goto label_1ea91c;
        }
    }
    ctx->pc = 0x1EA820u;
    // 0x1ea820: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ea824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ea828: 0x14c3004c  bne         $a2, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1EA828u;
    {
        const bool branch_taken_0x1ea828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0xaf858ec0  sw          $a1, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea828) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA830u;
    // 0x1ea830: 0x8f878ebc  lw          $a3, -0x7144($gp)
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
    // 0x1ea834: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1ea838: 0xdf8587c8  ld          $a1, -0x7838($gp)
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea83c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1ea840: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea844: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1ea844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1ea848: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA848u;
    {
        const bool branch_taken_0x1ea848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA848u;
        // 0x1ea84c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea848) {
            ctx->pc = 0x1EA870u;
            goto label_1ea870;
        }
    }
    ctx->pc = 0x1EA850u;
    // 0x1ea850: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA850u;
    SET_GPR_U32(ctx, 31, 0x1EA858u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA850u, 0x1EA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA858u;
label_1ea858:
    // 0x1ea858: 0x8f858ec4  lw          $a1, -0x713C($gp)
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
    // 0x1ea85c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea860: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea864: 0x65200b  movn        $a0, $v1, $a1
    ctx->pc = 0x1ea864u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1ea868: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1EA868u;
    {
        const bool branch_taken_0x1ea868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA868u;
        // 0x1ea86c: 0xaf848ec8  sw          $a0, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea868) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA870u;
label_1ea870:
    // 0x1ea870: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea874: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1ea878: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea87c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ea880: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EA880u;
    {
        const bool branch_taken_0x1ea880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea880) {
            ctx->pc = 0x1EA8B0u;
            goto label_1ea8b0;
        }
    }
    ctx->pc = 0x1EA888u;
    // 0x1ea888: 0x8f838eb8  lw          $v1, -0x7148($gp)
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938296)));
    // 0x1ea88c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EA88Cu;
    {
        const bool branch_taken_0x1ea88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA88Cu;
        // 0x1ea890: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea88c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA894u;
    // 0x1ea894: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA894u;
    SET_GPR_U32(ctx, 31, 0x1EA89Cu);
    ctx->pc = 0x1EA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA894u;
    // 0x1ea898: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA894u, 0x1EA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA89Cu;
label_1ea89c:
    // 0x1ea89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea8a4: 0xaf848ec4  sw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 4));
    // 0x1ea8a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A8u;
        // 0x1ea8ac: 0xaf838ec8  sw          $v1, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8B0u;
label_1ea8b0:
    // 0x1ea8b0: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea8b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ea8b8: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea8bc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ea8c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA8C0u;
    {
        const bool branch_taken_0x1ea8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8c0) {
            ctx->pc = 0x1EA8E4u;
            goto label_1ea8e4;
        }
    }
    ctx->pc = 0x1EA8C8u;
    // 0x1ea8c8: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
    // 0x1ea8cc: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EA8CCu;
    {
        const bool branch_taken_0x1ea8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8CCu;
        // 0x1ea8d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8cc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8D4u;
    // 0x1ea8d4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA8D4u;
    SET_GPR_U32(ctx, 31, 0x1EA8DCu);
    ctx->pc = 0x1EA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8D4u;
    // 0x1ea8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA8D4u, 0x1EA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8DCu;
label_1ea8dc:
    // 0x1ea8dc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1EA8DCu;
    {
        const bool branch_taken_0x1ea8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0xaf808ec4  sw          $zero, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8dc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8E4u;
label_1ea8e4:
    // 0x1ea8e4: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea8e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ea8ec: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea8f0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ea8f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EA8F4u;
    {
        const bool branch_taken_0x1ea8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8f4) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8FCu;
    // 0x1ea8fc: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
    // 0x1ea900: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EA900u;
    {
        const bool branch_taken_0x1ea900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea900) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA908u;
    // 0x1ea908: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA908u;
    SET_GPR_U32(ctx, 31, 0x1EA910u);
    ctx->pc = 0x1EA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA908u;
    // 0x1ea90c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA908u, 0x1EA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA910u;
label_1ea910:
    // 0x1ea910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea914: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA914u;
    {
        const bool branch_taken_0x1ea914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA914u;
        // 0x1ea918: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea914) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA91Cu;
label_1ea91c:
    // 0x1ea91c: 0x8f858eb4  lw          $a1, -0x714C($gp)
    ctx->pc = 0x1ea91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
    // 0x1ea920: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA928u;
    // 0x1ea928: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1ea92c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ea930: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xaf848eb0  sw          $a0, -0x7150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA938u;
    // 0x1ea938: 0x8f858eac  lw          $a1, -0x7154($gp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
    // 0x1ea93c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1ea940: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1ea940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea944: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ea944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ea948: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1ea94c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ea94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ea950: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA950u;
    {
        const bool branch_taken_0x1ea950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea950) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA958u;
    // 0x1ea958: 0xaf838eb4  sw          $v1, -0x714C($gp)
    ctx->pc = 0x1ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 3));
label_1ea95c:
    // 0x1ea95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ea960u;
}
