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

// Function: entry_00131298
// Address: 0x131298 - 0x1312b8
void entry_00131298_0x131298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131298_0x131298");
#endif

    switch (ctx->pc) {
        case 0x1312acu: goto label_1312ac;
        default: break;
    }

    ctx->pc = 0x131298u;

    // 0x131298: 0x9024a402  lbu         $a0, -0x5BFE($at)
    ctx->pc = 0x131298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943746)));
    // 0x13129c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13129cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1312a0: 0x9026a404  lbu         $a2, -0x5BFC($at)
    ctx->pc = 0x1312a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x30A404u));
    // 0x1312a4: 0xc05b6bc  jal         func_16DAF0
    ctx->pc = 0x1312A4u;
    SET_GPR_U32(ctx, 31, 0x1312ACu);
    ctx->pc = 0x1312A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312A4u;
    // 0x1312a8: 0x84450002  lh          $a1, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DAF0u, 0x1312A4u, 0x1312ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312ACu;
label_1312ac:
    // 0x1312ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1312acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1312b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1312B0u;
    {
        const bool branch_taken_0x1312b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312B0u;
        // 0x1312b4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312b0) {
            ctx->pc = 0x1312F0u;
            return;
        }
    }
    ctx->pc = 0x1312B8u;
}
