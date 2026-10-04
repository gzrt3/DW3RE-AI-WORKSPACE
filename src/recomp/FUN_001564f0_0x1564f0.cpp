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

// Function: FUN_001564f0
// Address: 0x1564f0 - 0x156504
void FUN_001564f0_0x1564f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001564f0_0x1564f0");
#endif

    ctx->pc = 0x1564f0u;

    // 0x1564f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1564f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1564f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1564f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1564f8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1564f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1564fc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1564fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x156500: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x156504u;
}
