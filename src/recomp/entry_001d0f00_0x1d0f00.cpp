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

// Function: entry_001d0f00
// Address: 0x1d0f00 - 0x1d0f28
void entry_001d0f00_0x1d0f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0f00_0x1d0f00");
#endif

    ctx->pc = 0x1d0f00u;

    // 0x1d0f00: 0x92020242  lbu         $v0, 0x242($s0)
    ctx->pc = 0x1d0f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
    // 0x1d0f04: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1d0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1d0f08: 0x92020241  lbu         $v0, 0x241($s0)
    ctx->pc = 0x1d0f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
    // 0x1d0f0c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1d0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1d0f10: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1d0f14: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d0f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d0f18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F18u;
    {
        const bool branch_taken_0x1d0f18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f18) {
            ctx->pc = 0x1D0F28u;
            return;
        }
    }
    ctx->pc = 0x1D0F20u;
    // 0x1d0f20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F20u;
    {
        const bool branch_taken_0x1d0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F20u;
        // 0x1d0f24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f20) {
            ctx->pc = 0x1D0F30u;
            return;
        }
    }
    ctx->pc = 0x1D0F28u;
}
