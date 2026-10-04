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

// Function: entry_00143fcc
// Address: 0x143fcc - 0x143fe0
void entry_00143fcc_0x143fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143fcc_0x143fcc");
#endif

    ctx->pc = 0x143fccu;

    // 0x143fcc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143FCCu;
    {
        const bool branch_taken_0x143fcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143fcc) {
            ctx->pc = 0x143FE0u;
            return;
        }
    }
    ctx->pc = 0x143FD4u;
    // 0x143fd4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x143fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x143fd8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x143FD8u;
    {
        const bool branch_taken_0x143fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143fd8) {
            ctx->pc = 0x144054u;
            return;
        }
    }
    ctx->pc = 0x143FE0u;
}
