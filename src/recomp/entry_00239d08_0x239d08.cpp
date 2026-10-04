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

// Function: entry_00239d08
// Address: 0x239d08 - 0x239d30
void entry_00239d08_0x239d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239d08_0x239d08");
#endif

    ctx->pc = 0x239d08u;

    // 0x239d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D08u;
    {
        const bool branch_taken_0x239d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D08u;
        // 0x239d0c: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d08) {
            ctx->pc = 0x239D20u;
            goto label_239d20;
        }
    }
    ctx->pc = 0x239D10u;
    // 0x239d10: 0x1113c2  srl         $v0, $s1, 15
    ctx->pc = 0x239d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
    // 0x239d14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239D14u;
    {
        const bool branch_taken_0x239d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D14u;
        // 0x239d18: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d14) {
            ctx->pc = 0x239D30u;
            return;
        }
    }
    ctx->pc = 0x239D1Cu;
    // 0x239d1c: 0x0  nop
    ctx->pc = 0x239d1cu;
    // NOP
label_239d20:
    // 0x239d20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x239D20u;
    {
        const bool branch_taken_0x239d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d20) {
            ctx->pc = 0x239D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D20u;
            // 0x239d24: 0x240a007e  addiu       $t2, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D30u;
            return;
        }
    }
    ctx->pc = 0x239D28u;
    // 0x239d28: 0x111482  srl         $v0, $s1, 18
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
    // 0x239d2c: 0x244a007c  addiu       $t2, $v0, 0x7C
    ctx->pc = 0x239d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    ctx->pc = 0x239d30u;
}
