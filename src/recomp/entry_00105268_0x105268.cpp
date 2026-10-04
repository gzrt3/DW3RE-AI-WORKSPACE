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

// Function: entry_00105268
// Address: 0x105268 - 0x105278
void entry_00105268_0x105268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105268_0x105268");
#endif

    ctx->pc = 0x105268u;

    // 0x105268: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x105268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10526c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x10526cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x105270: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x105274: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x105278u;
}
