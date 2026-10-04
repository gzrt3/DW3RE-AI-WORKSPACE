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

// Function: entry_0014daec
// Address: 0x14daec - 0x14db0c
void entry_0014daec_0x14daec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014daec_0x14daec");
#endif

    switch (ctx->pc) {
        case 0x14db04u: goto label_14db04;
        default: break;
    }

    ctx->pc = 0x14daecu;

    // 0x14daec: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x14daecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14daf0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x14daf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x14daf4: 0xa4c3001e  sh          $v1, 0x1E($a2)
    ctx->pc = 0x14daf4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x14daf8: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14dafc: 0xc040938  jal         func_1024E0
    ctx->pc = 0x14DAFCu;
    SET_GPR_U32(ctx, 31, 0x14DB04u);
    ctx->pc = 0x14DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAFCu;
    // 0x14db00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x14DAFCu, 0x14DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB04u;
label_14db04:
    // 0x14db04: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x14DB04u;
    {
        const bool branch_taken_0x14db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db04) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DB0Cu;
}
