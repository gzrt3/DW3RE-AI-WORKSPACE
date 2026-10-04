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

// Function: entry_0020d2f4
// Address: 0x20d2f4 - 0x20d308
void entry_0020d2f4_0x20d2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d2f4_0x20d2f4");
#endif

    ctx->pc = 0x20d2f4u;

    // 0x20d2f4: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20d2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d2f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2F8u;
    {
        const bool branch_taken_0x20d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d2f8) {
            ctx->pc = 0x20D308u;
            return;
        }
    }
    ctx->pc = 0x20D300u;
    // 0x20d300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d304: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
    ctx->pc = 0x20d308u;
}
