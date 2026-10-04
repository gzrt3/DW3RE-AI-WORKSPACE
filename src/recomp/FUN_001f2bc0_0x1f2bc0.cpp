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

// Function: FUN_001f2bc0
// Address: 0x1f2bc0 - 0x1f2bd0
void FUN_001f2bc0_0x1f2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2bc0_0x1f2bc0");
#endif

    ctx->pc = 0x1f2bc0u;

    // 0x1f2bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f2bc4: 0x3c023b49  lui         $v0, 0x3B49
    ctx->pc = 0x1f2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15177 << 16));
    // 0x1f2bc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f2bcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    ctx->pc = 0x1f2bd0u;
}
