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

// Function: entry_00112298
// Address: 0x112298 - 0x1122a8
void entry_00112298_0x112298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112298_0x112298");
#endif

    ctx->pc = 0x112298u;

    // 0x112298: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x112298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x11229c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11229Cu;
    {
        const bool branch_taken_0x11229c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11229c) {
            ctx->pc = 0x1122A8u;
            return;
        }
    }
    ctx->pc = 0x1122A4u;
    // 0x1122a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1122a8u;
}
