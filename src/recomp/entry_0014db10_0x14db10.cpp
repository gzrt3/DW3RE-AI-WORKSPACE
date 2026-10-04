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

// Function: entry_0014db10
// Address: 0x14db10 - 0x14db24
void entry_0014db10_0x14db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db10_0x14db10");
#endif

    ctx->pc = 0x14db10u;

    // 0x14db10: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DB10u;
    {
        const bool branch_taken_0x14db10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db10) {
            ctx->pc = 0x14DB24u;
            return;
        }
    }
    ctx->pc = 0x14DB18u;
    // 0x14db18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14db1c: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14DB1Cu;
    {
        const bool branch_taken_0x14db1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14db1c) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DB24u;
}
