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

// Function: entry_0021714c
// Address: 0x21714c - 0x217174
void entry_0021714c_0x21714c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021714c_0x21714c");
#endif

    ctx->pc = 0x21714cu;

    // 0x21714c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217150: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217150u;
    {
        const bool branch_taken_0x217150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x217154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217150u;
        // 0x217154: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217150) {
            ctx->pc = 0x217174u;
            return;
        }
    }
    ctx->pc = 0x217158u;
    // 0x217158: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21715c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21715cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217160: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217164: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
    // 0x217168: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21716c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21716Cu;
    {
        const bool branch_taken_0x21716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21716Cu;
        // 0x217170: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21716c) {
            ctx->pc = 0x217178u;
            return;
        }
    }
    ctx->pc = 0x217174u;
}
