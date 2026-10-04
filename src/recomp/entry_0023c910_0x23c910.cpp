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

// Function: entry_0023c910
// Address: 0x23c910 - 0x23c91c
void entry_0023c910_0x23c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c910_0x23c910");
#endif

    ctx->pc = 0x23c910u;

    // 0x23c910: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x23c910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23c914: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x23c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x23c918: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23c918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23c91cu;
}
