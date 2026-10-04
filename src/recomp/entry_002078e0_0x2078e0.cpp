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

// Function: entry_002078e0
// Address: 0x2078e0 - 0x207930
void entry_002078e0_0x2078e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002078e0_0x2078e0");
#endif

    ctx->pc = 0x2078e0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x207930u;
}
