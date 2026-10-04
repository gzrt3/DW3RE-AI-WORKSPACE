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

// Function: entry_00168268
// Address: 0x168268 - 0x168278
void entry_00168268_0x168268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168268_0x168268");
#endif

    ctx->pc = 0x168268u;

    // 0x168268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16826c: 0x32f3818  mult        $a3, $t9, $t7
    ctx->pc = 0x16826cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x168270: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x168274: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    ctx->pc = 0x168278u;
}
