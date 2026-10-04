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

// Function: FUN_0017bfe0
// Address: 0x17bfe0 - 0x17bff0
void FUN_0017bfe0_0x17bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bfe0_0x17bfe0");
#endif

    ctx->pc = 0x17bfe0u;

    // 0x17bfe0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17bfe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17bfe8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17bfec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x17bff0u;
}
