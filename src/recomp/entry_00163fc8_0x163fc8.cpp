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

// Function: entry_00163fc8
// Address: 0x163fc8 - 0x163fd4
void entry_00163fc8_0x163fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163fc8_0x163fc8");
#endif

    ctx->pc = 0x163fc8u;

    // 0x163fc8: 0x8f90865c  lw          $s0, -0x79A4($gp)
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x163fcc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x163FCCu;
    {
        const bool branch_taken_0x163fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fcc) {
            ctx->pc = 0x164024u;
            return;
        }
    }
    ctx->pc = 0x163FD4u;
}
