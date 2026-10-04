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

// Function: entry_00225fe4
// Address: 0x225fe4 - 0x225ff4
void entry_00225fe4_0x225fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225fe4_0x225fe4");
#endif

    ctx->pc = 0x225fe4u;

    // 0x225fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fe8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x225fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x225fec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x225fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x225ff0: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    ctx->pc = 0x225ff4u;
}
