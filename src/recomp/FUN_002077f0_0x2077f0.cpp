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

// Function: FUN_002077f0
// Address: 0x2077f0 - 0x207964
void FUN_002077f0_0x2077f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002077f0_0x2077f0");
#endif

    ctx->pc = 0x2077f0u;

    // 0x2077f0: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2077f4: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2077F4u;
    {
        const bool branch_taken_0x2077f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077F4u;
        // 0x2077f8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077f4) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x2077FCu;
    // 0x2077fc: 0x3463e2e4  ori         $v1, $v1, 0xE2E4
    ctx->pc = 0x2077fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58084);
    // 0x207800: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x207800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x207804: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207808: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x207808u;
    {
        const bool branch_taken_0x207808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207808u;
        // 0x20780c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207808) {
            ctx->pc = 0x207838u;
            goto label_207838;
        }
    }
    ctx->pc = 0x207810u;
    // 0x207810: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x207814: 0x3421e2e8  ori         $at, $at, 0xE2E8
    ctx->pc = 0x207814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58088);
    // 0x207818: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20781c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207820: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x207820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x207824: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x207824u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x207828: 0x0  nop
    ctx->pc = 0x207828u;
    // NOP
    // 0x20782c: 0x0  nop
    ctx->pc = 0x20782cu;
    // NOP
    // 0x207830: 0x1810  mfhi        $v1
    ctx->pc = 0x207830u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x207834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_207838:
    // 0x207838: 0x8f8590fc  lw          $a1, -0x6F04($gp)
    ctx->pc = 0x207838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x20783c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20783cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x207840: 0x3464e2e0  ori         $a0, $v1, 0xE2E0
    ctx->pc = 0x207840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58080);
    // 0x207844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207848: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x207848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20784c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20784cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207850: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x207850u;
    {
        const bool branch_taken_0x207850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x207854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207850u;
        // 0x207854: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207850) {
            ctx->pc = 0x2078E0u;
            goto label_2078e0;
        }
    }
    ctx->pc = 0x207858u;
    // 0x207858: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20785c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x20785cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x207860: 0x8c24e2e4  lw          $a0, -0x1D1C($at)
    ctx->pc = 0x207860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x207864: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207868: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x207868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20786c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x20786cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x207870: 0xac23e2e4  sw          $v1, -0x1D1C($at)
    ctx->pc = 0x207870u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
    // 0x207874: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x207878: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x207878u;
    {
        const bool branch_taken_0x207878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207878) {
            ctx->pc = 0x2078A4u;
            goto label_2078a4;
        }
    }
    ctx->pc = 0x207880u;
    // 0x207880: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207884: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207888: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20788c: 0x8c25e2e4  lw          $a1, -0x1D1C($at)
    ctx->pc = 0x20788cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x207890: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207894: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x207898: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20789c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20789Cu;
    {
        const bool branch_taken_0x20789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20789Cu;
        // 0x2078a0: 0xac23e2e4  sw          $v1, -0x1D1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20789c) {
            ctx->pc = 0x2078A8u;
            goto label_2078a8;
        }
    }
    ctx->pc = 0x2078A4u;
label_2078a4:
    // 0x2078a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2078a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2078a8:
    // 0x2078a8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2078ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2078b0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2078b4: 0xac25e2e4  sw          $a1, -0x1D1C($at)
    ctx->pc = 0x2078b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 5));
    // 0x2078b8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2078bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2078c0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2078c4: 0x8c23e2e4  lw          $v1, -0x1D1C($at)
    ctx->pc = 0x2078c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x2078c8: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x2078c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2078cc: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2078CCu;
    {
        const bool branch_taken_0x2078cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078CCu;
        // 0x2078d0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078cc) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x2078D4u;
    // 0x2078d4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2078d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2078d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2078D8u;
    {
        const bool branch_taken_0x2078d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D8u;
        // 0x2078dc: 0xac20e2e0  sw          $zero, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078d8) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x2078E0u;
label_2078e0:
    // 0x2078e0: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2078E0u;
    {
        const bool branch_taken_0x2078e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E0u;
        // 0x2078e4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078e0) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x2078E8u;
    // 0x2078e8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2078e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2078ec: 0x8c24e2e4  lw          $a0, -0x1D1C($at)
    ctx->pc = 0x2078ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x2078f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2078f4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2078f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2078f8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2078f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2078fc: 0xac23e2e4  sw          $v1, -0x1D1C($at)
    ctx->pc = 0x2078fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
    // 0x207900: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x207904: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207904) {
            ctx->pc = 0x207930u;
            goto label_207930;
        }
    }
    ctx->pc = 0x20790Cu;
    // 0x20790c: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207910: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207914: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207918: 0x8c25e2e4  lw          $a1, -0x1D1C($at)
    ctx->pc = 0x207918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x20791c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20791cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207920: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x207924: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207928u;
    {
        const bool branch_taken_0x207928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207928u;
        // 0x20792c: 0xac23e2e4  sw          $v1, -0x1D1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207928) {
            ctx->pc = 0x207934u;
            goto label_207934;
        }
    }
    ctx->pc = 0x207930u;
label_207930:
    // 0x207930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207934:
    // 0x207934: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207938: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20793c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20793cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x207940: 0xac25e2e4  sw          $a1, -0x1D1C($at)
    ctx->pc = 0x207940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 5));
    // 0x207944: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207948: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20794c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20794cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207950: 0x8c23e2e4  lw          $v1, -0x1D1C($at)
    ctx->pc = 0x207950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x207954: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207954u;
    {
        const bool branch_taken_0x207954 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207954) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x20795Cu;
    // 0x20795c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20795cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207960: 0xac20e2e0  sw          $zero, -0x1D20($at)
    ctx->pc = 0x207960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
    ctx->pc = 0x207964u;
}
