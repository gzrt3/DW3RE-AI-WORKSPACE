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

// Function: FUN_00138620
// Address: 0x138620 - 0x13864c
void FUN_00138620_0x138620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138620_0x138620");
#endif

    ctx->pc = 0x138620u;

    // 0x138620: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138620u;
    {
        const bool branch_taken_0x138620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x138624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138620u;
        // 0x138624: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138620) {
            ctx->pc = 0x138634u;
            goto label_138634;
        }
    }
    ctx->pc = 0x138628u;
    // 0x138628: 0xaf808514  sw          $zero, -0x7AEC($gp)
    ctx->pc = 0x138628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935828), GPR_U32(ctx, 0));
    // 0x13862c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13862Cu;
    {
        const bool branch_taken_0x13862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13862Cu;
        // 0x138630: 0xaf838510  sw          $v1, -0x7AF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13862c) {
            ctx->pc = 0x13863Cu;
            goto label_13863c;
        }
    }
    ctx->pc = 0x138634u;
label_138634:
    // 0x138634: 0xaf848514  sw          $a0, -0x7AEC($gp)
    ctx->pc = 0x138634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935828), GPR_U32(ctx, 4));
    // 0x138638: 0xaf848510  sw          $a0, -0x7AF0($gp)
    ctx->pc = 0x138638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935824), GPR_U32(ctx, 4));
label_13863c:
    // 0x13863c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138640: 0xaf858508  sw          $a1, -0x7AF8($gp)
    ctx->pc = 0x138640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 5));
    // 0x138644: 0xaf86850c  sw          $a2, -0x7AF4($gp)
    ctx->pc = 0x138644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 6));
    // 0x138648: 0xaf838504  sw          $v1, -0x7AFC($gp)
    ctx->pc = 0x138648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 3));
    ctx->pc = 0x13864cu;
}
