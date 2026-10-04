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

// Function: entry_00233f98
// Address: 0x233f98 - 0x233f9c
void entry_00233f98_0x233f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233f98_0x233f98");
#endif

    ctx->pc = 0x233f98u;

    // 0x233f98: 0xad260018  sw          $a2, 0x18($t1)
    ctx->pc = 0x233f98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 6));
    ctx->pc = 0x233f9cu;
}
