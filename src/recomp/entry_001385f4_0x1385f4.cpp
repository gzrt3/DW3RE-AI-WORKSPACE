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

// Function: entry_001385f4
// Address: 0x1385f4 - 0x1385fc
void entry_001385f4_0x1385f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385f4_0x1385f4");
#endif

    ctx->pc = 0x1385f4u;

    // 0x1385f4: 0xaf848514  sw          $a0, -0x7AEC($gp)
    ctx->pc = 0x1385f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935828), GPR_U32(ctx, 4));
    // 0x1385f8: 0xaf848510  sw          $a0, -0x7AF0($gp)
    ctx->pc = 0x1385f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935824), GPR_U32(ctx, 4));
    ctx->pc = 0x1385fcu;
}
