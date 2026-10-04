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

// Function: FUN_00216420
// Address: 0x216420 - 0x216438
void FUN_00216420_0x216420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00216420_0x216420");
#endif

    ctx->pc = 0x216420u;

    // 0x216420: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x216420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x216424: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x216428: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x216428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x21642c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x216430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x216430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x216434: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x216434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    ctx->pc = 0x216438u;
}
