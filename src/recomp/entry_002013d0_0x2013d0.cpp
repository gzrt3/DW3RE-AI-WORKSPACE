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

// Function: entry_002013d0
// Address: 0x2013d0 - 0x2013dc
void entry_002013d0_0x2013d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013d0_0x2013d0");
#endif

    ctx->pc = 0x2013d0u;

    // 0x2013d0: 0x90890075  lbu         $t1, 0x75($a0)
    ctx->pc = 0x2013d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 117)));
    // 0x2013d4: 0x0  nop
    ctx->pc = 0x2013d4u;
    // NOP
    // 0x2013d8: 0x2921000a  slti        $at, $t1, 0xA
    ctx->pc = 0x2013d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    ctx->pc = 0x2013dcu;
}
