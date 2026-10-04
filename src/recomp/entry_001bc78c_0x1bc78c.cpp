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

// Function: entry_001bc78c
// Address: 0x1bc78c - 0x1bc7a8
void entry_001bc78c_0x1bc78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc78c_0x1bc78c");
#endif

    switch (ctx->pc) {
        case 0x1bc7a4u: goto label_1bc7a4;
        default: break;
    }

    ctx->pc = 0x1bc78cu;

    // 0x1bc78c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bc790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc794: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bc798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc79c: 0xc0804a0  jal         func_201280
    ctx->pc = 0x1BC79Cu;
    SET_GPR_U32(ctx, 31, 0x1BC7A4u);
    ctx->pc = 0x1BC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC79Cu;
    // 0x1bc7a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x1BC79Cu, 0x1BC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7A4u;
label_1bc7a4:
    // 0x1bc7a4: 0x92250063  lbu         $a1, 0x63($s1)
    ctx->pc = 0x1bc7a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
    ctx->pc = 0x1bc7a8u;
}
