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

// Function: entry_00164438
// Address: 0x164438 - 0x164444
void entry_00164438_0x164438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164438_0x164438");
#endif

    ctx->pc = 0x164438u;

    // 0x164438: 0x8f838690  lw          $v1, -0x7970($gp)
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x16443c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16443Cu;
    {
        const bool branch_taken_0x16443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16443Cu;
        // 0x164440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16443c) {
            ctx->pc = 0x164454u;
            return;
        }
    }
    ctx->pc = 0x164444u;
}
