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

// Function: entry_00248cf8
// Address: 0x248cf8 - 0x248d20
void entry_00248cf8_0x248cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248cf8_0x248cf8");
#endif

    ctx->pc = 0x248cf8u;

    // 0x248cf8: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248cf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x248cfc: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x248d00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248D00u;
    {
        const bool branch_taken_0x248d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d00) {
            ctx->pc = 0x248D20u;
            return;
        }
    }
    ctx->pc = 0x248D08u;
    // 0x248d08: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x248d0c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x248d10: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248d10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248d14: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x248d18: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x248D18u;
    {
        const bool branch_taken_0x248d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D18u;
        // 0x248d1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d18) {
            ctx->pc = 0x248CE4u;
            return;
        }
    }
    ctx->pc = 0x248D20u;
}
