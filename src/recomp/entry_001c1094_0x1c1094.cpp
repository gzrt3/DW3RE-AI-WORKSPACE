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

// Function: entry_001c1094
// Address: 0x1c1094 - 0x1c10b4
void entry_001c1094_0x1c1094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1094_0x1c1094");
#endif

    ctx->pc = 0x1c1094u;

    // 0x1c1094: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1094u;
    {
        const bool branch_taken_0x1c1094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1094) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C109Cu;
    // 0x1c109c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c10a0: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
    // 0x1c10a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C10A4u;
    {
        const bool branch_taken_0x1c10a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c10a4) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C10ACu;
    // 0x1c10ac: 0xaf8088f0  sw          $zero, -0x7710($gp)
    ctx->pc = 0x1c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 0));
    // 0x1c10b0: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
    ctx->pc = 0x1c10b4u;
}
