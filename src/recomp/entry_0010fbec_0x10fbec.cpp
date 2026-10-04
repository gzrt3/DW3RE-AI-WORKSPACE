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

// Function: entry_0010fbec
// Address: 0x10fbec - 0x10fbf4
void entry_0010fbec_0x10fbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbec_0x10fbec");
#endif

    ctx->pc = 0x10fbecu;

    // 0x10fbec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10FBECu;
    {
        const bool branch_taken_0x10fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fbec) {
            ctx->pc = 0x10FC20u;
            return;
        }
    }
    ctx->pc = 0x10FBF4u;
}
