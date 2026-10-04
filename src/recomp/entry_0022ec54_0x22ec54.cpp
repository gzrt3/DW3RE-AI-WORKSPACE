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

// Function: entry_0022ec54
// Address: 0x22ec54 - 0x22ec6c
void entry_0022ec54_0x22ec54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec54_0x22ec54");
#endif

    ctx->pc = 0x22ec54u;

    // 0x22ec54: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x22ec54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
    // 0x22ec58: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EC58u;
    {
        const bool branch_taken_0x22ec58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec58) {
            ctx->pc = 0x22EC6Cu;
            return;
        }
    }
    ctx->pc = 0x22EC60u;
    // 0x22ec60: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x22ec60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
    // 0x22ec64: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x22ec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x22ec68: 0xa4a30056  sh          $v1, 0x56($a1)
    ctx->pc = 0x22ec68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22ec6cu;
}
