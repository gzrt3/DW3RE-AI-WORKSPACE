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

// Function: entry_00131170
// Address: 0x131170 - 0x131194
void entry_00131170_0x131170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131170_0x131170");
#endif

    ctx->pc = 0x131170u;

    // 0x131170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131174: 0x9023a404  lbu         $v1, -0x5BFC($at)
    ctx->pc = 0x131174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943748)));
    // 0x131178: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x131178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13117c: 0x8c27a448  lw          $a3, -0x5BB8($at)
    ctx->pc = 0x13117cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x30A448u));
    // 0x131180: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x131180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x131184: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x131184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x131188: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x131188u;
    {
        const bool branch_taken_0x131188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131188u;
        // 0x13118c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131188) {
            ctx->pc = 0x1311B0u;
            return;
        }
    }
    ctx->pc = 0x131190u;
    // 0x131190: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x131190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x131194u;
}
