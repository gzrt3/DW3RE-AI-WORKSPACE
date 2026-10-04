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

// Function: FUN_001fd1f0
// Address: 0x1fd1f0 - 0x1fd208
void FUN_001fd1f0_0x1fd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd1f0_0x1fd1f0");
#endif

    ctx->pc = 0x1fd1f0u;

    // 0x1fd1f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fd1f4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fd1f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1fd1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1fd1fc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fd200: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fd200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1fd204: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1fd204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x1fd208u;
}
