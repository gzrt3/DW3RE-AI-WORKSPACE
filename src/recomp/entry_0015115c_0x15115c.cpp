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

// Function: entry_0015115c
// Address: 0x15115c - 0x151168
void entry_0015115c_0x15115c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015115c_0x15115c");
#endif

    ctx->pc = 0x15115cu;

    // 0x15115c: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x151160: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151164: 0x26106ae0  addiu       $s0, $s0, 0x6AE0
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27360));
    ctx->pc = 0x151168u;
}
