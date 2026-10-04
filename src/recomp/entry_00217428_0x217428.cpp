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

// Function: entry_00217428
// Address: 0x217428 - 0x21744c
void entry_00217428_0x217428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217428_0x217428");
#endif

    ctx->pc = 0x217428u;

    // 0x217428: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217428u;
    {
        const bool branch_taken_0x217428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x217428) {
            ctx->pc = 0x21744Cu;
            return;
        }
    }
    ctx->pc = 0x217430u;
    // 0x217430: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x217434: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217438: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21743c: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
    // 0x217440: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x217444: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x217444u;
    {
        const bool branch_taken_0x217444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217444u;
        // 0x217448: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217444) {
            ctx->pc = 0x217478u;
            return;
        }
    }
    ctx->pc = 0x21744Cu;
}
