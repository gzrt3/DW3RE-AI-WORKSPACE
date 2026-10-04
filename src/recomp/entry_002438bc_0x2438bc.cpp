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

// Function: entry_002438bc
// Address: 0x2438bc - 0x2438d4
void entry_002438bc_0x2438bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002438bc_0x2438bc");
#endif

    ctx->pc = 0x2438bcu;

    // 0x2438bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2438bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2438c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2438c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2438c4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2438C4u;
    {
        const bool branch_taken_0x2438c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2438c4) {
            ctx->pc = 0x2438D4u;
            return;
        }
    }
    ctx->pc = 0x2438CCu;
    // 0x2438cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2438CCu;
    {
        const bool branch_taken_0x2438cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438cc) {
            ctx->pc = 0x2438D8u;
            return;
        }
    }
    ctx->pc = 0x2438D4u;
}
