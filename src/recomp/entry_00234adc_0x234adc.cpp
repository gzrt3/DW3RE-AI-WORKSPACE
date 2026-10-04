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

// Function: entry_00234adc
// Address: 0x234adc - 0x234ae8
void entry_00234adc_0x234adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234adc_0x234adc");
#endif

    switch (ctx->pc) {
        case 0x234ae4u: goto label_234ae4;
        default: break;
    }

    ctx->pc = 0x234adcu;

    // 0x234adc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234ADCu;
    SET_GPR_U32(ctx, 31, 0x234AE4u);
    ctx->pc = 0x234AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ADCu;
    // 0x234ae0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234ADCu, 0x234AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AE4u;
label_234ae4:
    // 0x234ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234ae8u;
}
