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

// Function: entry_0017161c
// Address: 0x17161c - 0x171628
void entry_0017161c_0x17161c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017161c_0x17161c");
#endif

    ctx->pc = 0x17161cu;

    // 0x17161c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17161cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171620: 0x24670090  addiu       $a3, $v1, 0x90
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x171624: 0x246800a0  addiu       $t0, $v1, 0xA0
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    ctx->pc = 0x171628u;
}
