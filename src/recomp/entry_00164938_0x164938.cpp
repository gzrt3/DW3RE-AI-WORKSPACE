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

// Function: entry_00164938
// Address: 0x164938 - 0x164944
void entry_00164938_0x164938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164938_0x164938");
#endif

    ctx->pc = 0x164938u;

    // 0x164938: 0xaf868698  sw          $a2, -0x7968($gp)
    ctx->pc = 0x164938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 6));
    // 0x16493c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16493Cu;
    {
        const bool branch_taken_0x16493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16493Cu;
        // 0x164940: 0xaf878694  sw          $a3, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16493c) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164944u;
}
