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

// Function: entry_00164950
// Address: 0x164950 - 0x16495c
void entry_00164950_0x164950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164950_0x164950");
#endif

    ctx->pc = 0x164950u;

    // 0x164950: 0xaf868674  sw          $a2, -0x798C($gp)
    ctx->pc = 0x164950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 6));
    // 0x164954: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164954u;
    {
        const bool branch_taken_0x164954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164954u;
        // 0x164958: 0xaf878670  sw          $a3, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164954) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x16495Cu;
}
