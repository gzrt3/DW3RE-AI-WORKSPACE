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

// Function: FUN_00213d10
// Address: 0x213d10 - 0x213d18
void FUN_00213d10_0x213d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00213d10_0x213d10");
#endif

    ctx->pc = 0x213d10u;

    // 0x213d10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x213d14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x213d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x213d18u;
}
