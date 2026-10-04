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

// Function: entry_001472dc
// Address: 0x1472dc - 0x1472fc
void entry_001472dc_0x1472dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001472dc_0x1472dc");
#endif

    ctx->pc = 0x1472dcu;

    // 0x1472dc: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1472dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1472e0: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1472e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x1472e4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1472E4u;
    {
        const bool branch_taken_0x1472e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1472E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472E4u;
        // 0x1472e8: 0x30a30010  andi        $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472e4) {
            ctx->pc = 0x1472FCu;
            return;
        }
    }
    ctx->pc = 0x1472ECu;
    // 0x1472ec: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1472f0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1472F0u;
    {
        const bool branch_taken_0x1472f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1472F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472F0u;
        // 0x1472f4: 0x30a30010  andi        $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472f0) {
            ctx->pc = 0x147330u;
            return;
        }
    }
    ctx->pc = 0x1472F8u;
    // 0x1472f8: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x1472f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    ctx->pc = 0x1472fcu;
}
