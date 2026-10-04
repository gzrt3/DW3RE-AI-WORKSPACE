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

// Function: FUN_001de050
// Address: 0x1de050 - 0x1de068
void FUN_001de050_0x1de050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de050_0x1de050");
#endif

    ctx->pc = 0x1de050u;

    // 0x1de050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1de054: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de058: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1de058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1de05c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1de05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1de060: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1de060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1de064: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1de064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1de068u;
}
