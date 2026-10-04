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

// Function: entry_0021ae70
// Address: 0x21ae70 - 0x21ae7c
void entry_0021ae70_0x21ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ae70_0x21ae70");
#endif

    ctx->pc = 0x21ae70u;

    // 0x21ae70: 0xaf90927c  sw          $s0, -0x6D84($gp)
    ctx->pc = 0x21ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 16));
    // 0x21ae74: 0xaf9092ac  sw          $s0, -0x6D54($gp)
    ctx->pc = 0x21ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 16));
    // 0x21ae78: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
    ctx->pc = 0x21ae7cu;
}
