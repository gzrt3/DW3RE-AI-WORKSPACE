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

// Function: FUN_00183c60
// Address: 0x183c60 - 0x183c70
void FUN_00183c60_0x183c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183c60_0x183c60");
#endif

    ctx->pc = 0x183c60u;

    // 0x183c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x183c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x183c64: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x183c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x183c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183c6c: 0x34674dd3  ori         $a3, $v1, 0x4DD3
    ctx->pc = 0x183c6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    ctx->pc = 0x183c70u;
}
