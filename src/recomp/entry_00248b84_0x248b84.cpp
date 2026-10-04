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

// Function: entry_00248b84
// Address: 0x248b84 - 0x248bac
void entry_00248b84_0x248b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248b84_0x248b84");
#endif

    ctx->pc = 0x248b84u;

label_248b84:
    // 0x248b84: 0x0  nop
    ctx->pc = 0x248b84u;
    // NOP
    // 0x248b88: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248b88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x248b8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248b90: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248b90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248b94: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248b94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x248b98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x248b9c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x248B9Cu;
    {
        const bool branch_taken_0x248b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248b9c) {
            ctx->pc = 0x248B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248b84;
        }
    }
    ctx->pc = 0x248BA4u;
    // 0x248ba4: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x248BA4u;
    {
        const bool branch_taken_0x248ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BA4u;
        // 0x248ba8: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ba4) {
            ctx->pc = 0x248B08u;
            return;
        }
    }
    ctx->pc = 0x248BACu;
}
