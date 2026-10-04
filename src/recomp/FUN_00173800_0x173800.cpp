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

// Function: FUN_00173800
// Address: 0x173800 - 0x173820
void FUN_00173800_0x173800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173800_0x173800");
#endif

    ctx->pc = 0x173800u;

    // 0x173800: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x173804: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x173808: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x173808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17380c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173810: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x173810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x173814: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x173814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x173818: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x173818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17381c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x173820u;
}
