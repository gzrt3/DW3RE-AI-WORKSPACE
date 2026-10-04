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

// Function: entry_00181954
// Address: 0x181954 - 0x18196c
void entry_00181954_0x181954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181954_0x181954");
#endif

    ctx->pc = 0x181954u;

    // 0x181954: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181954u;
    {
        const bool branch_taken_0x181954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181954u;
        // 0x181958: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181954) {
            ctx->pc = 0x181970u;
            return;
        }
    }
    ctx->pc = 0x18195Cu;
    // 0x18195c: 0x28a10238  slti        $at, $a1, 0x238
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)568) ? 1 : 0);
    // 0x181960: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x181960u;
    {
        const bool branch_taken_0x181960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181960) {
            ctx->pc = 0x18196Cu;
            return;
        }
    }
    ctx->pc = 0x181968u;
    // 0x181968: 0x24a33dc8  addiu       $v1, $a1, 0x3DC8
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
    ctx->pc = 0x18196cu;
}
