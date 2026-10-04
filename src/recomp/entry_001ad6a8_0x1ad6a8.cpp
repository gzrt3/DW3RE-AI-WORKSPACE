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

// Function: entry_001ad6a8
// Address: 0x1ad6a8 - 0x1ad6ac
void entry_001ad6a8_0x1ad6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad6a8_0x1ad6a8");
#endif

    ctx->pc = 0x1ad6a8u;

    // 0x1ad6a8: 0xaed16270  sw          $s1, 0x6270($s6)
    ctx->pc = 0x1ad6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
    ctx->pc = 0x1ad6acu;
}
