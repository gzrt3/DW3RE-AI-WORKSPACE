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

// Function: FUN_0010b990
// Address: 0x10b990 - 0x10b9a4
void FUN_0010b990_0x10b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010b990_0x10b990");
#endif

    ctx->pc = 0x10b990u;

    // 0x10b990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10b994: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x10b994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x10b998: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10b99c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x10b99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x10b9a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x10b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x10b9a4u;
}
