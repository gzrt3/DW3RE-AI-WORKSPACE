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

// Function: entry_00195900
// Address: 0x195900 - 0x195924
void entry_00195900_0x195900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195900_0x195900");
#endif

    ctx->pc = 0x195900u;

    // 0x195900: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x195904: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x195904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x195908: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x195908u;
    {
        const bool branch_taken_0x195908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195908u;
        // 0x19590c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195908) {
            ctx->pc = 0x1959C0u;
            return;
        }
    }
    ctx->pc = 0x195910u;
    // 0x195910: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x195914: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x195914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x195918: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x195918u;
    {
        const bool branch_taken_0x195918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195918u;
        // 0x19591c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195918) {
            ctx->pc = 0x1959C0u;
            return;
        }
    }
    ctx->pc = 0x195920u;
    // 0x195920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195924u;
}
