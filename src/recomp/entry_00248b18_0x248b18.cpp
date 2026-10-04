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

// Function: entry_00248b18
// Address: 0x248b18 - 0x248b40
void entry_00248b18_0x248b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248b18_0x248b18");
#endif

    ctx->pc = 0x248b18u;

    // 0x248b18: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248b18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x248b1c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x248b20: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248B20u;
    {
        const bool branch_taken_0x248b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b20) {
            ctx->pc = 0x248B40u;
            return;
        }
    }
    ctx->pc = 0x248B28u;
    // 0x248b28: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248b28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x248b2c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x248b30: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248b34: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248b34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x248b38: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x248B38u;
    {
        const bool branch_taken_0x248b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B38u;
        // 0x248b3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b38) {
            ctx->pc = 0x248B04u;
            return;
        }
    }
    ctx->pc = 0x248B40u;
}
