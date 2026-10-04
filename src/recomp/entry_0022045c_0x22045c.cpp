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

// Function: entry_0022045c
// Address: 0x22045c - 0x22047c
void entry_0022045c_0x22045c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022045c_0x22045c");
#endif

    ctx->pc = 0x22045cu;

    // 0x22045c: 0x0  nop
    ctx->pc = 0x22045cu;
    // NOP
    // 0x220460: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x220464: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220468u;
    {
        const bool branch_taken_0x220468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220468u;
        // 0x22046c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220468) {
            ctx->pc = 0x22047Cu;
            return;
        }
    }
    ctx->pc = 0x220470u;
    // 0x220470: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220470) {
            ctx->pc = 0x22047Cu;
            return;
        }
    }
    ctx->pc = 0x220478u;
    // 0x220478: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220478u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22047cu;
}
