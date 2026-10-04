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

// Function: entry_001532ac
// Address: 0x1532ac - 0x1532c8
void entry_001532ac_0x1532ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001532ac_0x1532ac");
#endif

    ctx->pc = 0x1532acu;

    // 0x1532ac: 0x24e30018  addiu       $v1, $a3, 0x18
    ctx->pc = 0x1532acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x1532b0: 0x28630280  slti        $v1, $v1, 0x280
    ctx->pc = 0x1532b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x1532b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1532B4u;
    {
        const bool branch_taken_0x1532b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B4u;
        // 0x1532b8: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532b4) {
            ctx->pc = 0x1532C8u;
            return;
        }
    }
    ctx->pc = 0x1532BCu;
    // 0x1532bc: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1532c0: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1532c4: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1532c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1532c8u;
}
