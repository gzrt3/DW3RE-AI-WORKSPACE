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

// Function: entry_001fec2c
// Address: 0x1fec2c - 0x1fec48
void entry_001fec2c_0x1fec2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec2c_0x1fec2c");
#endif

    ctx->pc = 0x1fec2cu;

    // 0x1fec2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fec30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fec34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC34u;
    {
        const bool branch_taken_0x1fec34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec34) {
            ctx->pc = 0x1FEC48u;
            return;
        }
    }
    ctx->pc = 0x1FEC3Cu;
    // 0x1fec3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fec40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC40u;
    {
        const bool branch_taken_0x1fec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC40u;
        // 0x1fec44: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec40) {
            ctx->pc = 0x1FEC50u;
            return;
        }
    }
    ctx->pc = 0x1FEC48u;
}
