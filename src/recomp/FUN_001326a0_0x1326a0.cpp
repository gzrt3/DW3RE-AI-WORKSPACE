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

// Function: FUN_001326a0
// Address: 0x1326a0 - 0x1326d8
void FUN_001326a0_0x1326a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001326a0_0x1326a0");
#endif

    switch (ctx->pc) {
        case 0x1326c8u: goto label_1326c8;
        default: break;
    }

    ctx->pc = 0x1326a0u;

    // 0x1326a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1326a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1326a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1326a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1326a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1326ac: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1326b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1326b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1326b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1326b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326b8: 0x9024a406  lbu         $a0, -0x5BFA($at)
    ctx->pc = 0x1326b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A406u));
    // 0x1326bc: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x1326bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1326c0: 0xc04c9d0  jal         func_132740
    ctx->pc = 0x1326C0u;
    SET_GPR_U32(ctx, 31, 0x1326C8u);
    ctx->pc = 0x1326C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1326C0u;
    // 0x1326c4: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132740u, 0x1326C0u, 0x1326C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326C8u;
label_1326c8:
    // 0x1326c8: 0x93a5002c  lbu         $a1, 0x2C($sp)
    ctx->pc = 0x1326c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1326cc: 0x93a60028  lbu         $a2, 0x28($sp)
    ctx->pc = 0x1326ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1326d0: 0xc04ca34  jal         func_1328D0
    ctx->pc = 0x1326D0u;
    SET_GPR_U32(ctx, 31, 0x1326D8u);
    ctx->pc = 0x1326D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1326D0u;
    // 0x1326d4: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328D0u, 0x1326D0u, 0x1326D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326D8u;
}
