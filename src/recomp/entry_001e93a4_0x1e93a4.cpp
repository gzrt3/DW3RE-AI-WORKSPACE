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

// Function: entry_001e93a4
// Address: 0x1e93a4 - 0x1e93b4
void entry_001e93a4_0x1e93a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e93a4_0x1e93a4");
#endif

    ctx->pc = 0x1e93a4u;

    // 0x1e93a4: 0x0  nop
    ctx->pc = 0x1e93a4u;
    // NOP
    // 0x1e93a8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e93a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1e93ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e93acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e93b0: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x1e93b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1e93b4u;
}
