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

// Function: entry_00153634
// Address: 0x153634 - 0x15363c
void entry_00153634_0x153634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153634_0x153634");
#endif

    ctx->pc = 0x153634u;

    // 0x153634: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x153638: 0x0  nop
    ctx->pc = 0x153638u;
    // NOP
    ctx->pc = 0x15363cu;
}
