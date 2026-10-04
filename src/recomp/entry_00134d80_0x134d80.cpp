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

// Function: entry_00134d80
// Address: 0x134d80 - 0x134da0
void entry_00134d80_0x134d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d80_0x134d80");
#endif

    ctx->pc = 0x134d80u;

    // 0x134d80: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x134d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134d84: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x134d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134d88: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x134D88u;
    {
        const bool branch_taken_0x134d88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D88u;
        // 0x134d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d88) {
            ctx->pc = 0x134DC8u;
            return;
        }
    }
    ctx->pc = 0x134D90u;
    // 0x134d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x134d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x134d98: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x134d9c: 0x0  nop
    ctx->pc = 0x134d9cu;
    // NOP
    ctx->pc = 0x134da0u;
}
