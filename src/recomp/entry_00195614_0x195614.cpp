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

// Function: entry_00195614
// Address: 0x195614 - 0x19562c
void entry_00195614_0x195614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195614_0x195614");
#endif

    ctx->pc = 0x195614u;

    // 0x195614: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x195618: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195618u;
    {
        const bool branch_taken_0x195618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195618) {
            ctx->pc = 0x19562Cu;
            return;
        }
    }
    ctx->pc = 0x195620u;
    // 0x195620: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
    // 0x195624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195624u;
    {
        const bool branch_taken_0x195624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195624) {
            ctx->pc = 0x195648u;
            return;
        }
    }
    ctx->pc = 0x19562Cu;
}
