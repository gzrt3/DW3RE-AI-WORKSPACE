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

// Function: FUN_00184020
// Address: 0x184020 - 0x184028
void FUN_00184020_0x184020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184020_0x184020");
#endif

    ctx->pc = 0x184020u;

    // 0x184020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x184028u;
}
