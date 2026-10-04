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

// Function: entry_0015ec0c
// Address: 0x15ec0c - 0x15ec34
void entry_0015ec0c_0x15ec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec0c_0x15ec0c");
#endif

    ctx->pc = 0x15ec0cu;

label_15ec0c:
    // 0x15ec0c: 0x0  nop
    ctx->pc = 0x15ec0cu;
    // NOP
    // 0x15ec10: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ec14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15ec18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15ec1c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x15ec20: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x15ec24: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15EC24u;
    {
        const bool branch_taken_0x15ec24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec24) {
            ctx->pc = 0x15EC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec0c;
        }
    }
    ctx->pc = 0x15EC2Cu;
    // 0x15ec2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15EC2Cu;
    {
        const bool branch_taken_0x15ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec2c) {
            ctx->pc = 0x15EC68u;
            return;
        }
    }
    ctx->pc = 0x15EC34u;
}
