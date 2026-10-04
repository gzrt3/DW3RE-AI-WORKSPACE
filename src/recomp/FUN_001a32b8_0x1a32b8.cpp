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

// Function: FUN_001a32b8
// Address: 0x1a32b8 - 0x1a32c4
void FUN_001a32b8_0x1a32b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a32b8_0x1a32b8");
#endif

    ctx->pc = 0x1a32b8u;

    // 0x1a32b8: 0xac800848  sw          $zero, 0x848($a0)
    ctx->pc = 0x1a32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 0));
    // 0x1a32bc: 0x806781e  j           func_19E078
    ctx->pc = 0x1A32BCu;
    ctx->pc = 0x1A32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32BCu;
    // 0x1a32c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E078u;
    FUN_0019e078_0x19e078(rdram, ctx, runtime); return;
    ctx->pc = 0x1A32C4u;
}
