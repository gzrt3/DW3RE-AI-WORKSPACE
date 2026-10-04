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

// Function: entry_001f6ea8
// Address: 0x1f6ea8 - 0x1f6ed4
void entry_001f6ea8_0x1f6ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6ea8_0x1f6ea8");
#endif

    ctx->pc = 0x1f6ea8u;

    // 0x1f6ea8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f6eac: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f6eacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6eb0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F6EB0u;
    {
        const bool branch_taken_0x1f6eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB0u;
        // 0x1f6eb4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eb0) {
            ctx->pc = 0x1F6E24u;
            return;
        }
    }
    ctx->pc = 0x1F6EB8u;
    // 0x1f6eb8: 0x8f838ff0  lw          $v1, -0x7010($gp)
    ctx->pc = 0x1f6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f6ebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6ec0: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1f6ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1f6ec4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6EC4u;
    {
        const bool branch_taken_0x1f6ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ec4) {
            ctx->pc = 0x1F6ED4u;
            return;
        }
    }
    ctx->pc = 0x1F6ECCu;
    // 0x1f6ecc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6ECCu;
    {
        const bool branch_taken_0x1f6ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0xaf838ff0  sw          $v1, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ecc) {
            ctx->pc = 0x1F6EDCu;
            return;
        }
    }
    ctx->pc = 0x1F6ED4u;
}
