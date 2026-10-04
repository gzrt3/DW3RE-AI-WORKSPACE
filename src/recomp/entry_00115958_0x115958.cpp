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

// Function: entry_00115958
// Address: 0x115958 - 0x115964
void entry_00115958_0x115958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115958_0x115958");
#endif

    ctx->pc = 0x115958u;

    // 0x115958: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x115958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11595c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11595cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115960: 0xace00200  sw          $zero, 0x200($a3)
    ctx->pc = 0x115960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 512), GPR_U32(ctx, 0));
    ctx->pc = 0x115964u;
}
