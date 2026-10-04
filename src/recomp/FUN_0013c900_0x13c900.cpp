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

// Function: FUN_0013c900
// Address: 0x13c900 - 0x13c930
void FUN_0013c900_0x13c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c900_0x13c900");
#endif

    switch (ctx->pc) {
        case 0x13c91cu: goto label_13c91c;
        default: break;
    }

    ctx->pc = 0x13c900u;

    // 0x13c900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c910: 0x908402e4  lbu         $a0, 0x2E4($a0)
    ctx->pc = 0x13c910u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x13c914: 0xc06465c  jal         func_191970
    ctx->pc = 0x13C914u;
    SET_GPR_U32(ctx, 31, 0x13C91Cu);
    ctx->pc = 0x13C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C914u;
    // 0x13c918: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191970u, 0x13C914u, 0x13C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C91Cu;
label_13c91c:
    // 0x13c91c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x13c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c920: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x13c924: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x13c924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x13c928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c92c: 0x0  nop
    ctx->pc = 0x13c92cu;
    // NOP
    ctx->pc = 0x13c930u;
}
