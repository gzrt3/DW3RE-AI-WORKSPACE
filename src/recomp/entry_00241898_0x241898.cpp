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

// Function: entry_00241898
// Address: 0x241898 - 0x241904
void entry_00241898_0x241898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241898_0x241898");
#endif

    ctx->pc = 0x241898u;

    // 0x241898: 0x8f8592f8  lw          $a1, -0x6D08($gp)
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x24189c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2418a0: 0x34642380  ori         $a0, $v1, 0x2380
    ctx->pc = 0x2418a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9088);
    // 0x2418a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2418a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2418ac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2418acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2418b0: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2418B0u;
    {
        const bool branch_taken_0x2418b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2418B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B0u;
        // 0x2418b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418b0) {
            ctx->pc = 0x241940u;
            return;
        }
    }
    ctx->pc = 0x2418B8u;
    // 0x2418b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418bc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2418c0: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x2418c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2418cc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2418d0: 0xac232384  sw          $v1, 0x2384($at)
    ctx->pc = 0x2418d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
    // 0x2418d4: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x2418d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2418d8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2418D8u;
    {
        const bool branch_taken_0x2418d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418d8) {
            ctx->pc = 0x241904u;
            return;
        }
    }
    ctx->pc = 0x2418E0u;
    // 0x2418e0: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x2418e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2418ec: 0x8c252384  lw          $a1, 0x2384($at)
    ctx->pc = 0x2418ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x2418f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418f4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2418f8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2418f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2418fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2418FCu;
    {
        const bool branch_taken_0x2418fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418FCu;
        // 0x241900: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418fc) {
            ctx->pc = 0x241908u;
            return;
        }
    }
    ctx->pc = 0x241904u;
}
