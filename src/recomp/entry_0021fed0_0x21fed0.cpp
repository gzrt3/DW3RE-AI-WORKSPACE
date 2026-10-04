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

// Function: entry_0021fed0
// Address: 0x21fed0 - 0x21fee8
void entry_0021fed0_0x21fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fed0_0x21fed0");
#endif

    switch (ctx->pc) {
        case 0x21fed8u: goto label_21fed8;
        case 0x21fee4u: goto label_21fee4;
        default: break;
    }

    ctx->pc = 0x21fed0u;

    // 0x21fed0: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FED0u;
    SET_GPR_U32(ctx, 31, 0x21FED8u);
    ctx->pc = 0x21FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FED0u;
    // 0x21fed4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FED0u, 0x21FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FED8u;
label_21fed8:
    // 0x21fed8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21fedc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FEDCu;
    SET_GPR_U32(ctx, 31, 0x21FEE4u);
    ctx->pc = 0x21FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEDCu;
    // 0x21fee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FEDCu, 0x21FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEE4u;
label_21fee4:
    // 0x21fee4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x21fee8u;
}
