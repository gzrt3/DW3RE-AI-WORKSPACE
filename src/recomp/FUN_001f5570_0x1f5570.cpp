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

// Function: FUN_001f5570
// Address: 0x1f5570 - 0x1f5580
void FUN_001f5570_0x1f5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5570_0x1f5570");
#endif

    ctx->pc = 0x1f5570u;

    // 0x1f5570: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f5574: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5578: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f5578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f557c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x1f5580u;
}
