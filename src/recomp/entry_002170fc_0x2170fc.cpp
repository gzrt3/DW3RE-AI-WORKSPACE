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

// Function: entry_002170fc
// Address: 0x2170fc - 0x217128
void entry_002170fc_0x2170fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002170fc_0x2170fc");
#endif

    ctx->pc = 0x2170fcu;

    // 0x2170fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217100: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x217100u;
    {
        const bool branch_taken_0x217100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x217104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217100u;
        // 0x217104: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217100) {
            ctx->pc = 0x217128u;
            return;
        }
    }
    ctx->pc = 0x217108u;
    // 0x217108: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21710c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217110: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217114: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x217118: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21711c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x217120: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x217120u;
    {
        const bool branch_taken_0x217120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217120u;
        // 0x217124: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217120) {
            ctx->pc = 0x217178u;
            return;
        }
    }
    ctx->pc = 0x217128u;
}
