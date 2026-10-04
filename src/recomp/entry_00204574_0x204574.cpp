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

// Function: entry_00204574
// Address: 0x204574 - 0x204598
void entry_00204574_0x204574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204574_0x204574");
#endif

    ctx->pc = 0x204574u;

    // 0x204574: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x204574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x204578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20457c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x204580: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x204580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x204584: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204584u;
    {
        const bool branch_taken_0x204584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x204584) {
            ctx->pc = 0x204598u;
            return;
        }
    }
    ctx->pc = 0x20458Cu;
    // 0x20458c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x204590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204594: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x204598u;
}
