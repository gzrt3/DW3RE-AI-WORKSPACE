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

// Function: entry_001113f4
// Address: 0x1113f4 - 0x111410
void entry_001113f4_0x1113f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113f4_0x1113f4");
#endif

    ctx->pc = 0x1113f4u;

    // 0x1113f4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1113f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1113f8: 0x55200  sll         $t2, $a1, 8
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1113fc: 0x24630dc0  addiu       $v1, $v1, 0xDC0
    ctx->pc = 0x1113fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3520));
    // 0x111400: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x111400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x111404: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x111404u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x111408: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x111408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x11140c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x11140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    ctx->pc = 0x111410u;
}
