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

// Function: entry_0022ec18
// Address: 0x22ec18 - 0x22ec30
void entry_0022ec18_0x22ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec18_0x22ec18");
#endif

    ctx->pc = 0x22ec18u;

    // 0x22ec18: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x22ec18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
    // 0x22ec1c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EC1Cu;
    {
        const bool branch_taken_0x22ec1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec1c) {
            ctx->pc = 0x22EC30u;
            return;
        }
    }
    ctx->pc = 0x22EC24u;
    // 0x22ec24: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x22ec24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
    // 0x22ec28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22ec2c: 0xa4a30056  sh          $v1, 0x56($a1)
    ctx->pc = 0x22ec2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22ec30u;
}
