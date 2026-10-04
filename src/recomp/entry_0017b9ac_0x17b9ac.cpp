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

// Function: entry_0017b9ac
// Address: 0x17b9ac - 0x17b9b4
void entry_0017b9ac_0x17b9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9ac_0x17b9ac");
#endif

    ctx->pc = 0x17b9acu;

    // 0x17b9ac: 0x256a0004  addiu       $t2, $t3, 0x4
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x17b9b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17b9b4u;
}
