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

// Function: entry_0020fbd4
// Address: 0x20fbd4 - 0x20fbe4
void entry_0020fbd4_0x20fbd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fbd4_0x20fbd4");
#endif

    ctx->pc = 0x20fbd4u;

    // 0x20fbd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x20fbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20fbd8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FBD8u;
    {
        const bool branch_taken_0x20fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20fbd8) {
            ctx->pc = 0x20FBE4u;
            return;
        }
    }
    ctx->pc = 0x20FBE0u;
    // 0x20fbe0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x20fbe4u;
}
