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

// Function: entry_0019f3a0
// Address: 0x19f3a0 - 0x19f3c0
void entry_0019f3a0_0x19f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3a0_0x19f3a0");
#endif

    ctx->pc = 0x19f3a0u;

    // 0x19f3a0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x19f3a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f3a4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F3A4u;
    {
        const bool branch_taken_0x19f3a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a4) {
            ctx->pc = 0x19F3C0u;
            return;
        }
    }
    ctx->pc = 0x19F3ACu;
    // 0x19f3ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f3b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19f3b4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19F3B4u;
    {
        const bool branch_taken_0x19f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b4) {
            ctx->pc = 0x19F388u;
            return;
        }
    }
    ctx->pc = 0x19F3BCu;
    // 0x19f3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x19f3c0u;
}
