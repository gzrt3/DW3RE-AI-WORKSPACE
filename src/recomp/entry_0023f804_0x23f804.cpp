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

// Function: entry_0023f804
// Address: 0x23f804 - 0x23f828
void entry_0023f804_0x23f804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f804_0x23f804");
#endif

    ctx->pc = 0x23f804u;

    // 0x23f804: 0x0  nop
    ctx->pc = 0x23f804u;
    // NOP
    // 0x23f808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f80c: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x23f80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x23f810: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F810u;
        // 0x23f814: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F828u;
            return;
        }
    }
    ctx->pc = 0x23F818u;
    // 0x23f818: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x23f818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x23f81c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x23f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x23f820: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x23F820u;
    {
        const bool branch_taken_0x23f820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f820) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F828u;
}
