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

// Function: entry_0017bfac
// Address: 0x17bfac - 0x17bfc0
void entry_0017bfac_0x17bfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bfac_0x17bfac");
#endif

    ctx->pc = 0x17bfacu;

    // 0x17bfac: 0x0  nop
    ctx->pc = 0x17bfacu;
    // NOP
    // 0x17bfb0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BFB0u;
    {
        const bool branch_taken_0x17bfb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bfb0) {
            ctx->pc = 0x17BFC0u;
            return;
        }
    }
    ctx->pc = 0x17BFB8u;
    // 0x17bfb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x17bfbc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x17bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x17bfc0u;
}
