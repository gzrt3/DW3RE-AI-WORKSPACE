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

// Function: entry_00164b2c
// Address: 0x164b2c - 0x164b40
void entry_00164b2c_0x164b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b2c_0x164b2c");
#endif

    ctx->pc = 0x164b2cu;

    // 0x164b2c: 0x0  nop
    ctx->pc = 0x164b2cu;
    // NOP
    // 0x164b30: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B30u;
        // 0x164b34: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164B9Cu;
            return;
        }
    }
    ctx->pc = 0x164B38u;
    // 0x164b38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164b3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x164b40u;
}
