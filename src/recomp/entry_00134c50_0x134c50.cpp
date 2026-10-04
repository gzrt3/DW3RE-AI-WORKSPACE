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

// Function: entry_00134c50
// Address: 0x134c50 - 0x134c64
void entry_00134c50_0x134c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c50_0x134c50");
#endif

    ctx->pc = 0x134c50u;

    // 0x134c50: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134c54: 0x9023a407  lbu         $v1, -0x5BF9($at)
    ctx->pc = 0x134c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A407u));
    // 0x134c58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x134c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x134c5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134C5Cu;
    {
        const bool branch_taken_0x134c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C5Cu;
        // 0x134c60: 0x2c650001  sltiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c5c) {
            ctx->pc = 0x134C78u;
            return;
        }
    }
    ctx->pc = 0x134C64u;
}
