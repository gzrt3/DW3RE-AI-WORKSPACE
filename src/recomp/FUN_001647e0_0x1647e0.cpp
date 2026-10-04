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

// Function: FUN_001647e0
// Address: 0x1647e0 - 0x164988
void FUN_001647e0_0x1647e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001647e0_0x1647e0");
#endif

    ctx->pc = 0x1647e0u;

    // 0x1647e0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1647e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1647e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1647e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1647e8: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1647e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1647ec: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x1647ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1647f0: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1647F0u;
    {
        const bool branch_taken_0x1647f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1647F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647F0u;
        // 0x1647f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647f0) {
            ctx->pc = 0x164880u;
            goto label_164880;
        }
    }
    ctx->pc = 0x1647F8u;
    // 0x1647f8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1647F8u;
    {
        const bool branch_taken_0x1647f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1647f8) {
            ctx->pc = 0x164874u;
            goto label_164874;
        }
    }
    ctx->pc = 0x164800u;
    // 0x164800: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x164800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164804: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x164804u;
    {
        const bool branch_taken_0x164804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x164808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164804u;
        // 0x164808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164804) {
            ctx->pc = 0x164868u;
            goto label_164868;
        }
    }
    ctx->pc = 0x16480Cu;
    // 0x16480c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x16480Cu;
    {
        const bool branch_taken_0x16480c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16480c) {
            ctx->pc = 0x16485Cu;
            goto label_16485c;
        }
    }
    ctx->pc = 0x164814u;
    // 0x164814: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164818: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x164818u;
    {
        const bool branch_taken_0x164818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164818u;
        // 0x16481c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164818) {
            ctx->pc = 0x164850u;
            goto label_164850;
        }
    }
    ctx->pc = 0x164820u;
    // 0x164820: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164820u;
    {
        const bool branch_taken_0x164820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x164820) {
            ctx->pc = 0x164844u;
            goto label_164844;
        }
    }
    ctx->pc = 0x164828u;
    // 0x164828: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164828u;
    {
        const bool branch_taken_0x164828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x164828) {
            ctx->pc = 0x164838u;
            goto label_164838;
        }
    }
    ctx->pc = 0x164830u;
    // 0x164830: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x164830u;
    {
        const bool branch_taken_0x164830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164830) {
            ctx->pc = 0x16488Cu;
            goto label_16488c;
        }
    }
    ctx->pc = 0x164838u;
label_164838:
    // 0x164838: 0x8f878694  lw          $a3, -0x796C($gp)
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x16483c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16483Cu;
    {
        const bool branch_taken_0x16483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16483Cu;
        // 0x164840: 0x8f868698  lw          $a2, -0x7968($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16483c) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164844u;
label_164844:
    // 0x164844: 0x8f878688  lw          $a3, -0x7978($gp)
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x164848: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x164848u;
    {
        const bool branch_taken_0x164848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164848u;
        // 0x16484c: 0x8f86868c  lw          $a2, -0x7974($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164848) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164850u;
label_164850:
    // 0x164850: 0x8f878670  lw          $a3, -0x7990($gp)
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x164854: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164854u;
    {
        const bool branch_taken_0x164854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164854u;
        // 0x164858: 0x8f868674  lw          $a2, -0x798C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164854) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x16485Cu;
label_16485c:
    // 0x16485c: 0x8f878658  lw          $a3, -0x79A8($gp)
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x164860: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164860u;
    {
        const bool branch_taken_0x164860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164860u;
        // 0x164864: 0x8f86865c  lw          $a2, -0x79A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164860) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164868u;
label_164868:
    // 0x164868: 0x8f87867c  lw          $a3, -0x7984($gp)
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
    // 0x16486c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16486Cu;
    {
        const bool branch_taken_0x16486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16486Cu;
        // 0x164870: 0x8f868680  lw          $a2, -0x7980($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16486c) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164874u;
label_164874:
    // 0x164874: 0x8f878664  lw          $a3, -0x799C($gp)
    ctx->pc = 0x164874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
    // 0x164878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164878u;
    {
        const bool branch_taken_0x164878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164878u;
        // 0x16487c: 0x8f868668  lw          $a2, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164878) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164880u;
label_164880:
    // 0x164880: 0x8f87864c  lw          $a3, -0x79B4($gp)
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
    // 0x164884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164884u;
    {
        const bool branch_taken_0x164884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164884u;
        // 0x164888: 0x8f868650  lw          $a2, -0x79B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164884) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x16488Cu;
label_16488c:
    // 0x16488c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16488Cu;
    {
        const bool branch_taken_0x16488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16488c) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164894u;
label_164894:
    // 0x164894: 0x14c70004  bne         $a2, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x164894u;
    {
        const bool branch_taken_0x164894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x164894) {
            ctx->pc = 0x1648A8u;
            goto label_1648a8;
        }
    }
    ctx->pc = 0x16489Cu;
    // 0x16489c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16489cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1648A0u;
    {
        const bool branch_taken_0x1648a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A0u;
        // 0x1648a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a0) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x1648A8u;
label_1648a8:
    // 0x1648a8: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1648A8u;
    {
        const bool branch_taken_0x1648a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1648a8) {
            ctx->pc = 0x1648BCu;
            goto label_1648bc;
        }
    }
    ctx->pc = 0x1648B0u;
    // 0x1648b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1648b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1648b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1648B4u;
    {
        const bool branch_taken_0x1648b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648B4u;
        // 0x1648b8: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648b4) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x1648BCu;
label_1648bc:
    // 0x1648bc: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1648BCu;
    {
        const bool branch_taken_0x1648bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1648bc) {
            ctx->pc = 0x1648D0u;
            goto label_1648d0;
        }
    }
    ctx->pc = 0x1648C4u;
    // 0x1648c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1648c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1648C8u;
    {
        const bool branch_taken_0x1648c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C8u;
        // 0x1648cc: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648c8) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x1648D0u;
label_1648d0:
    // 0x1648d0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1648d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1648d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1648d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1648d8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1648d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1648dc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1648dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1648e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1648e4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1648e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_1648e8:
    // 0x1648e8: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x1648e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1648ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1648f0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1648F0u;
    {
        const bool branch_taken_0x1648f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1648F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648F0u;
        // 0x1648f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648f0) {
            ctx->pc = 0x164980u;
            goto label_164980;
        }
    }
    ctx->pc = 0x1648F8u;
    // 0x1648f8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1648F8u;
    {
        const bool branch_taken_0x1648f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1648f8) {
            ctx->pc = 0x164974u;
            goto label_164974;
        }
    }
    ctx->pc = 0x164900u;
    // 0x164900: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164904: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x164904u;
    {
        const bool branch_taken_0x164904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x164908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164904u;
        // 0x164908: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164904) {
            ctx->pc = 0x164968u;
            goto label_164968;
        }
    }
    ctx->pc = 0x16490Cu;
    // 0x16490c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x16490Cu;
    {
        const bool branch_taken_0x16490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16490c) {
            ctx->pc = 0x16495Cu;
            goto label_16495c;
        }
    }
    ctx->pc = 0x164914u;
    // 0x164914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164918: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x164918u;
    {
        const bool branch_taken_0x164918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164918u;
        // 0x16491c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164918) {
            ctx->pc = 0x164950u;
            goto label_164950;
        }
    }
    ctx->pc = 0x164920u;
    // 0x164920: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164920u;
    {
        const bool branch_taken_0x164920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164920) {
            ctx->pc = 0x164944u;
            goto label_164944;
        }
    }
    ctx->pc = 0x164928u;
    // 0x164928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164928u;
    {
        const bool branch_taken_0x164928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164928) {
            ctx->pc = 0x164938u;
            goto label_164938;
        }
    }
    ctx->pc = 0x164930u;
    // 0x164930: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x164930u;
    {
        const bool branch_taken_0x164930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164930) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164938u;
label_164938:
    // 0x164938: 0xaf868698  sw          $a2, -0x7968($gp)
    ctx->pc = 0x164938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 6));
    // 0x16493c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16493Cu;
    {
        const bool branch_taken_0x16493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16493Cu;
        // 0x164940: 0xaf878694  sw          $a3, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16493c) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164944u;
label_164944:
    // 0x164944: 0xaf86868c  sw          $a2, -0x7974($gp)
    ctx->pc = 0x164944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 6));
    // 0x164948: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164948u;
    {
        const bool branch_taken_0x164948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164948u;
        // 0x16494c: 0xaf878688  sw          $a3, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164948) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164950u;
label_164950:
    // 0x164950: 0xaf868674  sw          $a2, -0x798C($gp)
    ctx->pc = 0x164950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 6));
    // 0x164954: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164954u;
    {
        const bool branch_taken_0x164954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164954u;
        // 0x164958: 0xaf878670  sw          $a3, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164954) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x16495Cu;
label_16495c:
    // 0x16495c: 0xaf86865c  sw          $a2, -0x79A4($gp)
    ctx->pc = 0x16495cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 6));
    // 0x164960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164960u;
    {
        const bool branch_taken_0x164960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164960u;
        // 0x164964: 0xaf878658  sw          $a3, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164960) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164968u;
label_164968:
    // 0x164968: 0xaf868680  sw          $a2, -0x7980($gp)
    ctx->pc = 0x164968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 6));
    // 0x16496c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16496Cu;
    {
        const bool branch_taken_0x16496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16496Cu;
        // 0x164970: 0xaf87867c  sw          $a3, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16496c) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164974u;
label_164974:
    // 0x164974: 0xaf868668  sw          $a2, -0x7998($gp)
    ctx->pc = 0x164974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 6));
    // 0x164978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164978u;
    {
        const bool branch_taken_0x164978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164978u;
        // 0x16497c: 0xaf878664  sw          $a3, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164978) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164980u;
label_164980:
    // 0x164980: 0xaf868650  sw          $a2, -0x79B0($gp)
    ctx->pc = 0x164980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 6));
    // 0x164984: 0xaf87864c  sw          $a3, -0x79B4($gp)
    ctx->pc = 0x164984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 7));
    ctx->pc = 0x164988u;
}
