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

// Function: entry_0019fa30
// Address: 0x19fa30 - 0x19fa64
void entry_0019fa30_0x19fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa30_0x19fa30");
#endif

    switch (ctx->pc) {
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa50u: goto label_19fa50;
        default: break;
    }

    ctx->pc = 0x19fa30u;

    // 0x19fa30: 0xc067ea4  jal         func_19FA90
    ctx->pc = 0x19FA30u;
    SET_GPR_U32(ctx, 31, 0x19FA38u);
    ctx->pc = 0x19FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA30u;
    // 0x19fa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FA90u, 0x19FA30u, 0x19FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x19fa3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa40: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x19fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x19fa44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fa48: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19FA48u;
    SET_GPR_U32(ctx, 31, 0x19FA50u);
    ctx->pc = 0x19FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA48u;
    // 0x19fa4c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19FA48u, 0x19FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA50u;
label_19fa50:
    // 0x19fa50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x19fa50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa54: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x19fa54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fa58: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x19fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
    // 0x19fa5c: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x19fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
    // 0x19fa60: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->pc = 0x19fa64u;
}
