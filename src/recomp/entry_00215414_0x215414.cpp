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

// Function: entry_00215414
// Address: 0x215414 - 0x215434
void entry_00215414_0x215414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215414_0x215414");
#endif

    ctx->pc = 0x215414u;

    // 0x215414: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215418: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x21541c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x21541cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x215420: 0xaf8491f4  sw          $a0, -0x6E0C($gp)
    ctx->pc = 0x215420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 4));
    // 0x215424: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215424u;
    {
        const bool branch_taken_0x215424 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x215428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215424u;
        // 0x215428: 0xaf8591f0  sw          $a1, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215424) {
            ctx->pc = 0x215434u;
            return;
        }
    }
    ctx->pc = 0x21542Cu;
    // 0x21542c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21542Cu;
    {
        const bool branch_taken_0x21542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21542Cu;
        // 0x215430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21542c) {
            ctx->pc = 0x215438u;
            return;
        }
    }
    ctx->pc = 0x215434u;
}
