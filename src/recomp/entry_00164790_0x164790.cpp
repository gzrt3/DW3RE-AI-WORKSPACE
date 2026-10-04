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

// Function: entry_00164790
// Address: 0x164790 - 0x16479c
void entry_00164790_0x164790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164790_0x164790");
#endif

    ctx->pc = 0x164790u;

    // 0x164790: 0xaf838674  sw          $v1, -0x798C($gp)
    ctx->pc = 0x164790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 3));
    // 0x164794: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164794u;
    {
        const bool branch_taken_0x164794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164794u;
        // 0x164798: 0xaf828670  sw          $v0, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164794) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x16479Cu;
}
