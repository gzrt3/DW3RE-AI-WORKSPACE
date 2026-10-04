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

// Function: FUN_00229bd0
// Address: 0x229bd0 - 0x229be0
void FUN_00229bd0_0x229bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00229bd0_0x229bd0");
#endif

    ctx->pc = 0x229bd0u;

    // 0x229bd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x229bd4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x229bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x229bd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x229bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x229bdc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    ctx->pc = 0x229be0u;
}
