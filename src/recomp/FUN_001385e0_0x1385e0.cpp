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

// Function: FUN_001385e0
// Address: 0x1385e0 - 0x13860c
void FUN_001385e0_0x1385e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001385e0_0x1385e0");
#endif

    ctx->pc = 0x1385e0u;

    // 0x1385e0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1385E0u;
    {
        const bool branch_taken_0x1385e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1385E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385E0u;
        // 0x1385e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385e0) {
            ctx->pc = 0x1385F4u;
            goto label_1385f4;
        }
    }
    ctx->pc = 0x1385E8u;
    // 0x1385e8: 0xaf808514  sw          $zero, -0x7AEC($gp)
    ctx->pc = 0x1385e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935828), GPR_U32(ctx, 0));
    // 0x1385ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1385ECu;
    {
        const bool branch_taken_0x1385ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385ECu;
        // 0x1385f0: 0xaf838510  sw          $v1, -0x7AF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385ec) {
            ctx->pc = 0x1385FCu;
            goto label_1385fc;
        }
    }
    ctx->pc = 0x1385F4u;
label_1385f4:
    // 0x1385f4: 0xaf848514  sw          $a0, -0x7AEC($gp)
    ctx->pc = 0x1385f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935828), GPR_U32(ctx, 4));
    // 0x1385f8: 0xaf848510  sw          $a0, -0x7AF0($gp)
    ctx->pc = 0x1385f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935824), GPR_U32(ctx, 4));
label_1385fc:
    // 0x1385fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138600: 0xaf858508  sw          $a1, -0x7AF8($gp)
    ctx->pc = 0x138600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 5));
    // 0x138604: 0xaf86850c  sw          $a2, -0x7AF4($gp)
    ctx->pc = 0x138604u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 6));
    // 0x138608: 0xaf838504  sw          $v1, -0x7AFC($gp)
    ctx->pc = 0x138608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 3));
    ctx->pc = 0x13860cu;
}
