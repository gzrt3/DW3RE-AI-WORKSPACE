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

// Function: entry_00164610
// Address: 0x164610 - 0x16461c
void entry_00164610_0x164610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164610_0x164610");
#endif

    ctx->pc = 0x164610u;

    // 0x164610: 0x8f83866c  lw          $v1, -0x7994($gp)
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
    // 0x164614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164614u;
    {
        const bool branch_taken_0x164614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164614u;
        // 0x164618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164614) {
            ctx->pc = 0x16462Cu;
            return;
        }
    }
    ctx->pc = 0x16461Cu;
}
