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

// Function: FUN_0014ae40
// Address: 0x14ae40 - 0x14ae50
void FUN_0014ae40_0x14ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ae40_0x14ae40");
#endif

    ctx->pc = 0x14ae40u;

    // 0x14ae40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14ae44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14ae44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14ae48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14ae4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x14ae50u;
}
