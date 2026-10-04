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

// Function: entry_00143ebc
// Address: 0x143ebc - 0x143ed0
void entry_00143ebc_0x143ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ebc_0x143ebc");
#endif

    ctx->pc = 0x143ebcu;

    // 0x143ebc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143EBCu;
    {
        const bool branch_taken_0x143ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143ebc) {
            ctx->pc = 0x143ED0u;
            return;
        }
    }
    ctx->pc = 0x143EC4u;
    // 0x143ec4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x143ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x143ec8: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x143EC8u;
    {
        const bool branch_taken_0x143ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ec8) {
            ctx->pc = 0x143F8Cu;
            return;
        }
    }
    ctx->pc = 0x143ED0u;
}
