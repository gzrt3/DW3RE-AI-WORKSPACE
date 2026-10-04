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

// Function: entry_001ac8c0
// Address: 0x1ac8c0 - 0x1ac904
void entry_001ac8c0_0x1ac8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac8c0_0x1ac8c0");
#endif

    switch (ctx->pc) {
        case 0x1ac8ecu: goto label_1ac8ec;
        default: break;
    }

    ctx->pc = 0x1ac8c0u;

    // 0x1ac8c0: 0x24e74780  addiu       $a3, $a3, 0x4780
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
    // 0x1ac8c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac8c8: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac8cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8d8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ac8dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8e0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac8e4: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC8E4u;
    SET_GPR_U32(ctx, 31, 0x1AC8ECu);
    ctx->pc = 0x1AC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8E4u;
    // 0x1ac8e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC8E4u, 0x1AC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8ECu;
label_1ac8ec:
    // 0x1ac8ec: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac8f4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ac8f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ac8fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac900: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1ac900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1ac904u;
}
