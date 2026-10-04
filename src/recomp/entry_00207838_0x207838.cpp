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

// Function: entry_00207838
// Address: 0x207838 - 0x2078a4
void entry_00207838_0x207838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207838_0x207838");
#endif

    ctx->pc = 0x207838u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x2078A4u;
}
