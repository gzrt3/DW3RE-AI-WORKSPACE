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

// Function: entry_00223518
// Address: 0x223518 - 0x223540
void entry_00223518_0x223518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223518_0x223518");
#endif

    ctx->pc = 0x223518u;

    // 0x223518: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x22351c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x22351cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x223520: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x223520u;
    {
        const bool branch_taken_0x223520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x223520) {
            ctx->pc = 0x223540u;
            return;
        }
    }
    ctx->pc = 0x223528u;
    // 0x223528: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x223528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22352c: 0x902350b2  lbu         $v1, 0x50B2($at)
    ctx->pc = 0x22352cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3650B2u));
    // 0x223530: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x223530u;
    {
        const bool branch_taken_0x223530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223530u;
        // 0x223534: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223530) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223538u;
    // 0x223538: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x223538u;
    {
        const bool branch_taken_0x223538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223538u;
        // 0x22353c: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223538) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223540u;
}
