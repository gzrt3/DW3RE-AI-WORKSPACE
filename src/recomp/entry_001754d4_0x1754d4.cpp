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

// Function: entry_001754d4
// Address: 0x1754d4 - 0x1754f4
void entry_001754d4_0x1754d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001754d4_0x1754d4");
#endif

    ctx->pc = 0x1754d4u;

    // 0x1754d4: 0x90264af2  lbu         $a2, 0x4AF2($at)
    ctx->pc = 0x1754d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
    // 0x1754d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1754dc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1754e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1754e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1754e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1754ec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1754ECu;
    {
        const bool branch_taken_0x1754ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754ECu;
        // 0x1754f0: 0x24670384  addiu       $a3, $v1, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754ec) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1754F4u;
}
