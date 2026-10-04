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

// Function: entry_00132968
// Address: 0x132968 - 0x132970
void entry_00132968_0x132968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132968_0x132968");
#endif

    ctx->pc = 0x132968u;

    // 0x132968: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x132968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13296c: 0x24632150  addiu       $v1, $v1, 0x2150
    ctx->pc = 0x13296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8528));
    ctx->pc = 0x132970u;
}
