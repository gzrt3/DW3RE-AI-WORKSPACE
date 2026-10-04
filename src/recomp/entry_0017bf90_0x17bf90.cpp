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

// Function: entry_0017bf90
// Address: 0x17bf90 - 0x17bfac
void entry_0017bf90_0x17bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf90_0x17bf90");
#endif

    ctx->pc = 0x17bf90u;

    // 0x17bf90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bf94: 0x664024  and         $t0, $v1, $a2
    ctx->pc = 0x17bf94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x17bf98: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BF98u;
    {
        const bool branch_taken_0x17bf98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf98) {
            ctx->pc = 0x17BFACu;
            return;
        }
    }
    ctx->pc = 0x17BFA0u;
    // 0x17bfa0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x17bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x17bfa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17BFA4u;
    {
        const bool branch_taken_0x17bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFA4u;
        // 0x17bfa8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfa4) {
            ctx->pc = 0x17BFC0u;
            return;
        }
    }
    ctx->pc = 0x17BFACu;
}
