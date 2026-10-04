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

// Function: entry_001a3ffc
// Address: 0x1a3ffc - 0x1a4008
void entry_001a3ffc_0x1a3ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3ffc_0x1a3ffc");
#endif

    ctx->pc = 0x1a3ffcu;

    // 0x1a3ffc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4000: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a4000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a4004: 0x0  nop
    ctx->pc = 0x1a4004u;
    // NOP
    ctx->pc = 0x1a4008u;
}
