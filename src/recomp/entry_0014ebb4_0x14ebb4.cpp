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

// Function: entry_0014ebb4
// Address: 0x14ebb4 - 0x14ebcc
void entry_0014ebb4_0x14ebb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ebb4_0x14ebb4");
#endif

    ctx->pc = 0x14ebb4u;

    // 0x14ebb4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14ebb8: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x14ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x14ebbc: 0x0  nop
    ctx->pc = 0x14ebbcu;
    // NOP
    // 0x14ebc0: 0x0  nop
    ctx->pc = 0x14ebc0u;
    // NOP
    // 0x14ebc4: 0x8ce70088  lw          $a3, 0x88($a3)
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x14ebc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x14ebccu;
}
