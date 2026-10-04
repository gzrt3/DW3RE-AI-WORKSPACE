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

// Function: FUN_0022eea0
// Address: 0x22eea0 - 0x22eeb0
void FUN_0022eea0_0x22eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022eea0_0x22eea0");
#endif

    ctx->pc = 0x22eea0u;

    // 0x22eea0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22eea4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22eea8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22eea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x22eeac: 0x0  nop
    ctx->pc = 0x22eeacu;
    // NOP
    ctx->pc = 0x22eeb0u;
}
