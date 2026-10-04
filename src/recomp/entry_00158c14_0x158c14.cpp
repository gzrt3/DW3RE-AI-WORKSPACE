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

// Function: entry_00158c14
// Address: 0x158c14 - 0x158c30
void entry_00158c14_0x158c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c14_0x158c14");
#endif

    ctx->pc = 0x158c14u;

    // 0x158c14: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x158c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x158c18: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x158c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x158c1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x158C1Cu;
    {
        const bool branch_taken_0x158c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C1Cu;
        // 0x158c20: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c1c) {
            ctx->pc = 0x158C30u;
            return;
        }
    }
    ctx->pc = 0x158C24u;
    // 0x158c24: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158C24u;
    {
        const bool branch_taken_0x158c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c24) {
            ctx->pc = 0x158C30u;
            return;
        }
    }
    ctx->pc = 0x158C2Cu;
    // 0x158c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x158c30u;
}
