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

// Function: entry_00116068
// Address: 0x116068 - 0x11607c
void entry_00116068_0x116068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116068_0x116068");
#endif

    switch (ctx->pc) {
        case 0x116078u: goto label_116078;
        default: break;
    }

    ctx->pc = 0x116068u;

    // 0x116068: 0x26250170  addiu       $a1, $s1, 0x170
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x11606c: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x11606cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x116070: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x116070u;
    SET_GPR_U32(ctx, 31, 0x116078u);
    ctx->pc = 0x116074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116070u;
    // 0x116074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x116070u, 0x116078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116078u;
label_116078:
    // 0x116078: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x116078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    ctx->pc = 0x11607cu;
}
