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

// Function: entry_00199db0
// Address: 0x199db0 - 0x199de4
void entry_00199db0_0x199db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199db0_0x199db0");
#endif

    ctx->pc = 0x199db0u;

label_199db0:
    // 0x199db0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199db4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x199DB4u;
    {
        const bool branch_taken_0x199db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DB4u;
        // 0x199db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199db4) {
            ctx->pc = 0x199CB8u;
            return;
        }
    }
    ctx->pc = 0x199DBCu;
    // 0x199dbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199dc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x199dc4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199DC4u;
    {
        const bool branch_taken_0x199dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DC4u;
        // 0x199dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dc4) {
            ctx->pc = 0x199DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199db0;
        }
    }
    ctx->pc = 0x199DCCu;
    // 0x199dcc: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x199dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x199dd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199dd4: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x199dd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x199dd8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x199dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x199ddc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x199DDCu;
    {
        const bool branch_taken_0x199ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DDCu;
        // 0x199de0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ddc) {
            ctx->pc = 0x199D90u;
            return;
        }
    }
    ctx->pc = 0x199DE4u;
}
