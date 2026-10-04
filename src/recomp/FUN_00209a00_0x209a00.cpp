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

// Function: FUN_00209a00
// Address: 0x209a00 - 0x209a10
void FUN_00209a00_0x209a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209a00_0x209a00");
#endif

    ctx->pc = 0x209a00u;

    // 0x209a00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x209a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x209a04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x209a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x209a08: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x209a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x209a0c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x209a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x209a10u;
}
