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

// Function: entry_00217128
// Address: 0x217128 - 0x21714c
void entry_00217128_0x217128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217128_0x217128");
#endif

    ctx->pc = 0x217128u;

    // 0x217128: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217128u;
    {
        const bool branch_taken_0x217128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217128) {
            ctx->pc = 0x21714Cu;
            return;
        }
    }
    ctx->pc = 0x217130u;
    // 0x217130: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x217134: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217138: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21713c: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x21713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
    // 0x217140: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x217144: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x217144u;
    {
        const bool branch_taken_0x217144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217144u;
        // 0x217148: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217144) {
            ctx->pc = 0x217178u;
            return;
        }
    }
    ctx->pc = 0x21714Cu;
}
