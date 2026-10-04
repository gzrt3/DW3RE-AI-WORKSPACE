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

// Function: FUN_001eddf0
// Address: 0x1eddf0 - 0x1ede08
void FUN_001eddf0_0x1eddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eddf0_0x1eddf0");
#endif

    ctx->pc = 0x1eddf0u;

    // 0x1eddf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1eddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1eddf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eddf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1eddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1eddfc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1eddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ede00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ede00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ede04: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1ede04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ede08u;
}
