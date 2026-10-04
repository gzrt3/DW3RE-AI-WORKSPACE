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

// Function: entry_00140740
// Address: 0x140740 - 0x140790
void entry_00140740_0x140740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140740_0x140740");
#endif

    ctx->pc = 0x140740u;

    // 0x140740: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x140740u;
    {
        const bool branch_taken_0x140740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140740u;
        // 0x140744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140740) {
            ctx->pc = 0x1407B8u;
            return;
        }
    }
    ctx->pc = 0x140748u;
    // 0x140748: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x140748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x14074c: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x140750: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x140750u;
    {
        const bool branch_taken_0x140750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x140750) {
            ctx->pc = 0x1407B4u;
            return;
        }
    }
    ctx->pc = 0x140758u;
    // 0x140758: 0xde030270  ld          $v1, 0x270($s0)
    ctx->pc = 0x140758u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x14075c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x140760: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140764: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x140764u;
    {
        const bool branch_taken_0x140764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140764) {
            ctx->pc = 0x1407B4u;
            return;
        }
    }
    ctx->pc = 0x14076Cu;
    // 0x14076c: 0x8603021e  lh          $v1, 0x21E($s0)
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x140770: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x140770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x140774: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x140774u;
    {
        const bool branch_taken_0x140774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140774u;
        // 0x140778: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140774) {
            ctx->pc = 0x140790u;
            return;
        }
    }
    ctx->pc = 0x14077Cu;
    // 0x14077c: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x140780: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x140780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x140784: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x140784u;
    {
        const bool branch_taken_0x140784 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140784u;
        // 0x140788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140784) {
            ctx->pc = 0x1407ACu;
            return;
        }
    }
    ctx->pc = 0x14078Cu;
    // 0x14078c: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x14078cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    ctx->pc = 0x140790u;
}
