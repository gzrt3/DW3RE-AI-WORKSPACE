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

// Function: entry_001531e4
// Address: 0x1531e4 - 0x153204
void entry_001531e4_0x1531e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001531e4_0x1531e4");
#endif

    ctx->pc = 0x1531e4u;

    // 0x1531e4: 0x108600f2  beq         $a0, $a2, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1531E4u;
    {
        const bool branch_taken_0x1531e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1531E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531E4u;
        // 0x1531e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531e4) {
            ctx->pc = 0x1535B0u;
            return;
        }
    }
    ctx->pc = 0x1531ECu;
    // 0x1531ec: 0x10820078  beq         $a0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1531ECu;
    {
        const bool branch_taken_0x1531ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ECu;
        // 0x1531f0: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531ec) {
            ctx->pc = 0x1533D0u;
            return;
        }
    }
    ctx->pc = 0x1531F4u;
    // 0x1531f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1531F4u;
    {
        const bool branch_taken_0x1531f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531f4) {
            ctx->pc = 0x153204u;
            return;
        }
    }
    ctx->pc = 0x1531FCu;
    // 0x1531fc: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1531FCu;
    {
        const bool branch_taken_0x1531fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531FCu;
        // 0x153200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531fc) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x153204u;
}
