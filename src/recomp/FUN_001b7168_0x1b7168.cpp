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

// Function: FUN_001b7168
// Address: 0x1b7168 - 0x1b719c
void FUN_001b7168_0x1b7168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7168_0x1b7168");
#endif

    switch (ctx->pc) {
        case 0x1b7180u: goto label_1b7180;
        case 0x1b7198u: goto label_1b7198;
        default: break;
    }

    ctx->pc = 0x1b7168u;

    // 0x1b7168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b716c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b7170: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7178: 0xc06dc36  jal         func_1B70D8
    ctx->pc = 0x1B7178u;
    SET_GPR_U32(ctx, 31, 0x1B7180u);
    ctx->pc = 0x1B717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7178u;
    // 0x1b717c: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70D8u, 0x1B7178u, 0x1B7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7180u;
label_1b7180:
    // 0x1b7180: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x1b7180u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b7184: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7188: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b718c: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x1b718cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x1b7190: 0xc06df60  jal         func_1B7D80
    ctx->pc = 0x1B7190u;
    SET_GPR_U32(ctx, 31, 0x1B7198u);
    ctx->pc = 0x1B7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7190u;
    // 0x1b7194: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D80u, 0x1B7190u, 0x1B7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7198u;
label_1b7198:
    // 0x1b7198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1b719cu;
}
