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

// Function: FUN_001e3550
// Address: 0x1e3550 - 0x1e3560
void FUN_001e3550_0x1e3550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3550_0x1e3550");
#endif

    ctx->pc = 0x1e3550u;

    // 0x1e3550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e3554: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e3558: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e3558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e355c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x1e3560u;
}
