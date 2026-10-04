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

// Function: entry_00220348
// Address: 0x220348 - 0x220364
void entry_00220348_0x220348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220348_0x220348");
#endif

    ctx->pc = 0x220348u;

    // 0x220348: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x22034c: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220350: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220350u;
    {
        const bool branch_taken_0x220350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220350u;
        // 0x220354: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220350) {
            ctx->pc = 0x220364u;
            return;
        }
    }
    ctx->pc = 0x220358u;
    // 0x220358: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220358u;
    {
        const bool branch_taken_0x220358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220358u;
        // 0x22035c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220358) {
            ctx->pc = 0x220364u;
            return;
        }
    }
    ctx->pc = 0x220360u;
    // 0x220360: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x220364u;
}
