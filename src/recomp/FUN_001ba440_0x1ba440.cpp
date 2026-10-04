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

// Function: FUN_001ba440
// Address: 0x1ba440 - 0x1ba458
void FUN_001ba440_0x1ba440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba440_0x1ba440");
#endif

    ctx->pc = 0x1ba440u;

    // 0x1ba440: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ba444: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
    // 0x1ba448: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ba448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ba44c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ba44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ba450: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ba450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ba454: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1ba454u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ba458u;
}
