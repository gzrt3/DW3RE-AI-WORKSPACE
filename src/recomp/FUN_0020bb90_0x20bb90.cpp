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

// Function: FUN_0020bb90
// Address: 0x20bb90 - 0x20bba4
void FUN_0020bb90_0x20bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020bb90_0x20bb90");
#endif

    ctx->pc = 0x20bb90u;

    // 0x20bb90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20bb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20bb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20bb9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20bb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bba0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x20bba4u;
}
