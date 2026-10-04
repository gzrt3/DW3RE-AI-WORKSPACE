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

// Function: FUN_001540b0
// Address: 0x1540b0 - 0x1540c4
void FUN_001540b0_0x1540b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001540b0_0x1540b0");
#endif

    ctx->pc = 0x1540b0u;

    // 0x1540b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1540b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1540b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1540b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1540b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1540b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1540bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1540bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1540c0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1540c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1540c4u;
}
