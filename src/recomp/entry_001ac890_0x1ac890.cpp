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

// Function: entry_001ac890
// Address: 0x1ac890 - 0x1ac8c0
void entry_001ac890_0x1ac890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac890_0x1ac890");
#endif

    ctx->pc = 0x1ac890u;

    // 0x1ac890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac894: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC89Cu;
    // 0x1ac89c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1ac89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac8a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC8C0u;
            return;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC8A8u;
    {
        const bool branch_taken_0x1ac8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac8a8) {
            ctx->pc = 0x1AC8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8A8u;
            // 0x1ac8ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC8BCu;
            goto label_1ac8bc;
        }
    }
    ctx->pc = 0x1AC8B0u;
    // 0x1ac8b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac8b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC8B4u;
    {
        const bool branch_taken_0x1ac8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8b4) {
            ctx->pc = 0x1AC904u;
            return;
        }
    }
    ctx->pc = 0x1AC8BCu;
label_1ac8bc:
    // 0x1ac8bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ac8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1ac8c0u;
}
