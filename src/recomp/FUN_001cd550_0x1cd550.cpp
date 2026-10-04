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

// Function: FUN_001cd550
// Address: 0x1cd550 - 0x1cd558
void FUN_001cd550_0x1cd550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd550_0x1cd550");
#endif

    ctx->pc = 0x1cd550u;

    // 0x1cd550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cd550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1cd554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1cd558u;
}
