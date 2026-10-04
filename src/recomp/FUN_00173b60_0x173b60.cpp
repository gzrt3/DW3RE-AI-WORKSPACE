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

// Function: FUN_00173b60
// Address: 0x173b60 - 0x173b78
void FUN_00173b60_0x173b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173b60_0x173b60");
#endif

    ctx->pc = 0x173b60u;

    // 0x173b60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x173b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x173b64: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x173b68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x173b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x173b6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173b70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x173b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x173b74: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x173b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    ctx->pc = 0x173b78u;
}
