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

// Function: entry_0014db24
// Address: 0x14db24 - 0x14db58
void entry_0014db24_0x14db24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db24_0x14db24");
#endif

    switch (ctx->pc) {
        case 0x14db50u: goto label_14db50;
        default: break;
    }

    ctx->pc = 0x14db24u;

    // 0x14db24: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x14db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14db28: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14db2c: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x14db2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x14db30: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14DB30u;
    {
        const bool branch_taken_0x14db30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14db30) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DB38u;
    // 0x14db38: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x14db3c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x14DB3Cu;
    {
        const bool branch_taken_0x14db3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db3c) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DB44u;
    // 0x14db44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14db44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14db48: 0xc050f08  jal         func_143C20
    ctx->pc = 0x14DB48u;
    SET_GPR_U32(ctx, 31, 0x14DB50u);
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x14DB48u, 0x14DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB50u;
label_14db50:
    // 0x14db50: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14DB50u;
    {
        const bool branch_taken_0x14db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db50) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DB58u;
}
