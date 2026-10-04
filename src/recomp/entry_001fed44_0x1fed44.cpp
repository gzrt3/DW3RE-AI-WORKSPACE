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

// Function: entry_001fed44
// Address: 0x1fed44 - 0x1fed4c
void entry_001fed44_0x1fed44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed44_0x1fed44");
#endif

    ctx->pc = 0x1fed44u;

    // 0x1fed44: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fed48: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x1fed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    ctx->pc = 0x1fed4cu;
}
