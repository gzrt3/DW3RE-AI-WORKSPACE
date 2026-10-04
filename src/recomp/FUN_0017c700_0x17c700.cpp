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

// Function: FUN_0017c700
// Address: 0x17c700 - 0x17c714
void FUN_0017c700_0x17c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c700_0x17c700");
#endif

    ctx->pc = 0x17c700u;

    // 0x17c700: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17c704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c708: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17c70c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17c710: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17c710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x17c714u;
}
