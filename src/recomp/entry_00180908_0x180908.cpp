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

// Function: entry_00180908
// Address: 0x180908 - 0x180914
void entry_00180908_0x180908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180908_0x180908");
#endif

    ctx->pc = 0x180908u;

    // 0x180908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18090c: 0xaf828808  sw          $v0, -0x77F8($gp)
    ctx->pc = 0x18090cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 2));
    // 0x180910: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->pc = 0x180914u;
}
