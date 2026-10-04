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

// Function: entry_0013127c
// Address: 0x13127c - 0x131298
void entry_0013127c_0x13127c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013127c_0x13127c");
#endif

    switch (ctx->pc) {
        case 0x13128cu: goto label_13128c;
        default: break;
    }

    ctx->pc = 0x13127cu;

    // 0x13127c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131280: 0x9024a404  lbu         $a0, -0x5BFC($at)
    ctx->pc = 0x131280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A404u));
    // 0x131284: 0xc05b6d8  jal         func_16DB60
    ctx->pc = 0x131284u;
    SET_GPR_U32(ctx, 31, 0x13128Cu);
    ctx->pc = 0x131288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131284u;
    // 0x131288: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB60u, 0x131284u, 0x13128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13128Cu;
label_13128c:
    // 0x13128c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x131290: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131290u;
    {
        const bool branch_taken_0x131290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131290u;
        // 0x131294: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131290) {
            ctx->pc = 0x1312F0u;
            return;
        }
    }
    ctx->pc = 0x131298u;
}
