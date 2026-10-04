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

// Function: entry_001371dc
// Address: 0x1371dc - 0x137204
void entry_001371dc_0x1371dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001371dc_0x1371dc");
#endif

    switch (ctx->pc) {
        case 0x1371ecu: goto label_1371ec;
        case 0x1371f4u: goto label_1371f4;
        case 0x1371fcu: goto label_1371fc;
        default: break;
    }

    ctx->pc = 0x1371dcu;

    // 0x1371dc: 0x0  nop
    ctx->pc = 0x1371dcu;
    // NOP
    // 0x1371e0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1371e4: 0xc04dca8  jal         func_1372A0
    ctx->pc = 0x1371E4u;
    SET_GPR_U32(ctx, 31, 0x1371ECu);
    ctx->pc = 0x1371E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371E4u;
    // 0x1371e8: 0xac30a3cc  sw          $s0, -0x5C34($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1372A0u, 0x1371E4u, 0x1371ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371ECu;
label_1371ec:
    // 0x1371ec: 0xc04ddc8  jal         func_137720
    ctx->pc = 0x1371ECu;
    SET_GPR_U32(ctx, 31, 0x1371F4u);
    ctx->pc = 0x137720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137720u, 0x1371ECu, 0x1371F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371F4u;
label_1371f4:
    // 0x1371f4: 0xc04d040  jal         func_134100
    ctx->pc = 0x1371F4u;
    SET_GPR_U32(ctx, 31, 0x1371FCu);
    ctx->pc = 0x134100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134100u, 0x1371F4u, 0x1371FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371FCu;
label_1371fc:
    // 0x1371fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1371fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x137200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137204u;
}
