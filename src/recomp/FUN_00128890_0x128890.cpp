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

// Function: FUN_00128890
// Address: 0x128890 - 0x1288a4
void FUN_00128890_0x128890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128890_0x128890");
#endif

    ctx->pc = 0x128890u;

    // 0x128890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x128890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x128894: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x128894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x128898: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x128898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12889c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1288a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1288a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x1288a4u;
}
