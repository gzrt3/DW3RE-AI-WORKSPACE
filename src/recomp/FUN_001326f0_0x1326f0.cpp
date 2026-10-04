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

// Function: FUN_001326f0
// Address: 0x1326f0 - 0x132728
void FUN_001326f0_0x1326f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001326f0_0x1326f0");
#endif

    switch (ctx->pc) {
        case 0x132718u: goto label_132718;
        default: break;
    }

    ctx->pc = 0x1326f0u;

    // 0x1326f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1326f4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1326f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1326f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1326f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1326fc: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1326fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x132700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132708: 0x9024a406  lbu         $a0, -0x5BFA($at)
    ctx->pc = 0x132708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A406u));
    // 0x13270c: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x13270cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x132710: 0xc04c9d0  jal         func_132740
    ctx->pc = 0x132710u;
    SET_GPR_U32(ctx, 31, 0x132718u);
    ctx->pc = 0x132714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132710u;
    // 0x132714: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132740u, 0x132710u, 0x132718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132718u;
label_132718:
    // 0x132718: 0x93a5002c  lbu         $a1, 0x2C($sp)
    ctx->pc = 0x132718u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13271c: 0x93a60028  lbu         $a2, 0x28($sp)
    ctx->pc = 0x13271cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x132720: 0xc04ca34  jal         func_1328D0
    ctx->pc = 0x132720u;
    SET_GPR_U32(ctx, 31, 0x132728u);
    ctx->pc = 0x132724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132720u;
    // 0x132724: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328D0u, 0x132720u, 0x132728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132728u;
}
