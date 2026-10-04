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

// Function: entry_00219eec
// Address: 0x219eec - 0x219ef4
void entry_00219eec_0x219eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219eec_0x219eec");
#endif

    ctx->pc = 0x219eecu;

    // 0x219eec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219ef0: 0xaf8292b8  sw          $v0, -0x6D48($gp)
    ctx->pc = 0x219ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
    ctx->pc = 0x219ef4u;
}
