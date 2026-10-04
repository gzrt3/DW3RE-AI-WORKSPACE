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

// Function: entry_0012a9fc
// Address: 0x12a9fc - 0x12aa00
void entry_0012a9fc_0x12a9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a9fc_0x12a9fc");
#endif

    ctx->pc = 0x12a9fcu;

    // 0x12a9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x12aa00u;
}
