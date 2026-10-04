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

// Function: entry_001433fc
// Address: 0x1433fc - 0x143400
void entry_001433fc_0x1433fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433fc_0x1433fc");
#endif

    ctx->pc = 0x1433fcu;

    // 0x1433fc: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x1433fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->pc = 0x143400u;
}
