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

// Function: entry_00164c24
// Address: 0x164c24 - 0x164c38
void entry_00164c24_0x164c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c24_0x164c24");
#endif

    ctx->pc = 0x164c24u;

    // 0x164c24: 0x0  nop
    ctx->pc = 0x164c24u;
    // NOP
    // 0x164c28: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x164C28u;
    {
        const bool branch_taken_0x164c28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C28u;
        // 0x164c2c: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c28) {
            ctx->pc = 0x164C94u;
            return;
        }
    }
    ctx->pc = 0x164C30u;
    // 0x164c30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164c34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x164c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x164c38u;
}
