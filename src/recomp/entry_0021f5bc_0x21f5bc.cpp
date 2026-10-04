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

// Function: entry_0021f5bc
// Address: 0x21f5bc - 0x21f5c0
void entry_0021f5bc_0x21f5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f5bc_0x21f5bc");
#endif

    ctx->pc = 0x21f5bcu;

    // 0x21f5bc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    ctx->pc = 0x21f5c0u;
}
