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

// Function: entry_00134c38
// Address: 0x134c38 - 0x134c50
void entry_00134c38_0x134c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c38_0x134c38");
#endif

    ctx->pc = 0x134c38u;

    // 0x134c38: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134c3c: 0x9023a407  lbu         $v1, -0x5BF9($at)
    ctx->pc = 0x134c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A407u));
    // 0x134c40: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x134c44: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x134c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x134C48u;
    {
        const bool branch_taken_0x134c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C48u;
        // 0x134c4c: 0x38650001  xori        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c48) {
            ctx->pc = 0x134C78u;
            return;
        }
    }
    ctx->pc = 0x134C50u;
}
