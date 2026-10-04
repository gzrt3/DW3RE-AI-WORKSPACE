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

// Function: entry_0023fabc
// Address: 0x23fabc - 0x23fad0
void entry_0023fabc_0x23fabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fabc_0x23fabc");
#endif

    ctx->pc = 0x23fabcu;

    // 0x23fabc: 0x0  nop
    ctx->pc = 0x23fabcu;
    // NOP
    // 0x23fac0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23fac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x23fac4: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23FAC4u;
    {
        const bool branch_taken_0x23fac4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fac4) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23FACCu;
    // 0x23facc: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x23faccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x23fad0u;
}
