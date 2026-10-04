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

// Function: entry_0022b3d8
// Address: 0x22b3d8 - 0x22b3f4
void entry_0022b3d8_0x22b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b3d8_0x22b3d8");
#endif

    switch (ctx->pc) {
        case 0x22b3e4u: goto label_22b3e4;
        case 0x22b3ecu: goto label_22b3ec;
        default: break;
    }

    ctx->pc = 0x22b3d8u;

    // 0x22b3d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b3dc: 0xc05ecd8  jal         func_17B360
    ctx->pc = 0x22B3DCu;
    SET_GPR_U32(ctx, 31, 0x22B3E4u);
    ctx->pc = 0x17B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B360u, 0x22B3DCu, 0x22B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3E4u;
label_22b3e4:
    // 0x22b3e4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22B3E4u;
    SET_GPR_U32(ctx, 31, 0x22B3ECu);
    ctx->pc = 0x22B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3E4u;
    // 0x22b3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B3E4u, 0x22B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3ECu;
label_22b3ec:
    // 0x22b3ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22B3ECu;
    {
        const bool branch_taken_0x22b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3ECu;
        // 0x22b3f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3ec) {
            ctx->pc = 0x22B43Cu;
            return;
        }
    }
    ctx->pc = 0x22B3F4u;
}
