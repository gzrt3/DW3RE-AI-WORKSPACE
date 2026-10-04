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

// Function: entry_00215984
// Address: 0x215984 - 0x215988
void entry_00215984_0x215984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215984_0x215984");
#endif

    ctx->pc = 0x215984u;

    // 0x215984: 0xaf809248  sw          $zero, -0x6DB8($gp)
    ctx->pc = 0x215984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
    ctx->pc = 0x215988u;
}
