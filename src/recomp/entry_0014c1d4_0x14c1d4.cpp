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

// Function: entry_0014c1d4
// Address: 0x14c1d4 - 0x14c200
void entry_0014c1d4_0x14c1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c1d4_0x14c1d4");
#endif

    ctx->pc = 0x14c1d4u;

    // 0x14c1d4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C1D4u;
    {
        const bool branch_taken_0x14c1d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D4u;
        // 0x14c1d8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1d4) {
            ctx->pc = 0x14C230u;
            return;
        }
    }
    ctx->pc = 0x14C1DCu;
    // 0x14c1dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x14c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c1e0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x14C1E0u;
    {
        const bool branch_taken_0x14c1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1E0u;
        // 0x14c1e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1e0) {
            ctx->pc = 0x14C274u;
            return;
        }
    }
    ctx->pc = 0x14C1E8u;
    // 0x14c1e8: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x14c1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x14c1ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C1F0u;
    {
        const bool branch_taken_0x14c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1f0) {
            ctx->pc = 0x14C200u;
            return;
        }
    }
    ctx->pc = 0x14C1F8u;
    // 0x14c1f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14C1F8u;
    {
        const bool branch_taken_0x14c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1F8u;
        // 0x14c1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1f8) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C200u;
}
