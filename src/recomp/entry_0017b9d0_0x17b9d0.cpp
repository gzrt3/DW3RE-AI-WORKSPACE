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

// Function: entry_0017b9d0
// Address: 0x17b9d0 - 0x17b9dc
void entry_0017b9d0_0x17b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9d0_0x17b9d0");
#endif

    ctx->pc = 0x17b9d0u;

    // 0x17b9d0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x17b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x17b9d4: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x17b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
    // 0x17b9d8: 0xad45001c  sw          $a1, 0x1C($t2)
    ctx->pc = 0x17b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
    ctx->pc = 0x17b9dcu;
}
