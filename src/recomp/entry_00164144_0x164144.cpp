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

// Function: entry_00164144
// Address: 0x164144 - 0x164154
void entry_00164144_0x164144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164144_0x164144");
#endif

    ctx->pc = 0x164144u;

    // 0x164144: 0x0  nop
    ctx->pc = 0x164144u;
    // NOP
    // 0x164148: 0x8f908668  lw          $s0, -0x7998($gp)
    ctx->pc = 0x164148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x16414c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16414Cu;
    {
        const bool branch_taken_0x16414c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16414c) {
            ctx->pc = 0x1641A4u;
            return;
        }
    }
    ctx->pc = 0x164154u;
}
