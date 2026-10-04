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

// Function: entry_0022f270
// Address: 0x22f270 - 0x22f298
void entry_0022f270_0x22f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f270_0x22f270");
#endif

    ctx->pc = 0x22f270u;

    // 0x22f270: 0x0  nop
    ctx->pc = 0x22f270u;
    // NOP
    // 0x22f274: 0x90a3005c  lbu         $v1, 0x5C($a1)
    ctx->pc = 0x22f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x22f278: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F278u;
    {
        const bool branch_taken_0x22f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f278) {
            ctx->pc = 0x22F298u;
            return;
        }
    }
    ctx->pc = 0x22F280u;
    // 0x22f280: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x22f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22f284: 0x286303e8  slti        $v1, $v1, 0x3E8
    ctx->pc = 0x22f284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x22f288: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F288u;
    {
        const bool branch_taken_0x22f288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f288) {
            ctx->pc = 0x22F298u;
            return;
        }
    }
    ctx->pc = 0x22F290u;
    // 0x22f290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F290u;
    {
        const bool branch_taken_0x22f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F290u;
        // 0x22f294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f290) {
            ctx->pc = 0x22F2A8u;
            return;
        }
    }
    ctx->pc = 0x22F298u;
}
