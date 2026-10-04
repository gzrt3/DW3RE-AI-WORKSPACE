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

// Function: FUN_0015bfe0
// Address: 0x15bfe0 - 0x15bff4
void FUN_0015bfe0_0x15bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bfe0_0x15bfe0");
#endif

    ctx->pc = 0x15bfe0u;

    // 0x15bfe0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x15bfe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bfe8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15bfec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15bff0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x15bff4u;
}
