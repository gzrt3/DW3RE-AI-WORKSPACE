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

// Function: entry_00167b64
// Address: 0x167b64 - 0x167b80
void entry_00167b64_0x167b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167b64_0x167b64");
#endif

    ctx->pc = 0x167b64u;

    // 0x167b64: 0x0  nop
    ctx->pc = 0x167b64u;
    // NOP
    // 0x167b68: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167b6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x167b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167b70: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167B70u;
    {
        const bool branch_taken_0x167b70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x167b70) {
            ctx->pc = 0x167B80u;
            return;
        }
    }
    ctx->pc = 0x167B78u;
    // 0x167b78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x167b7c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x167b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x167b80u;
}
