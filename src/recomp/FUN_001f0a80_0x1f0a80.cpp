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

// Function: FUN_001f0a80
// Address: 0x1f0a80 - 0x1f0a98
void FUN_001f0a80_0x1f0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0a80_0x1f0a80");
#endif

    ctx->pc = 0x1f0a80u;

    // 0x1f0a80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f0a84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f0a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f0a88: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x1f0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1f0a8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f0a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1f0a90: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f0a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1f0a94: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1f0a94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f0a98u;
}
