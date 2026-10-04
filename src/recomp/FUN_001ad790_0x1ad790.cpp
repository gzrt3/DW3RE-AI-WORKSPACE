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

// Function: FUN_001ad790
// Address: 0x1ad790 - 0x1ad7f0
void FUN_001ad790_0x1ad790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad790_0x1ad790");
#endif

    switch (ctx->pc) {
        case 0x1ad7a4u: goto label_1ad7a4;
        case 0x1ad7c8u: goto label_1ad7c8;
        case 0x1ad7d0u: goto label_1ad7d0;
        case 0x1ad7d8u: goto label_1ad7d8;
        default: break;
    }

    ctx->pc = 0x1ad790u;

    // 0x1ad790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad794: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ad794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ad798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ad798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad79c: 0xc069234  jal         func_1A48D0
    ctx->pc = 0x1AD79Cu;
    SET_GPR_U32(ctx, 31, 0x1AD7A4u);
    ctx->pc = 0x1AD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD79Cu;
    // 0x1ad7a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D0u, 0x1AD79Cu, 0x1AD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7A4u;
label_1ad7a4:
    // 0x1ad7a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ad7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad7a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ad7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ad7ac: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x1ad7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x1ad7b0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1ad7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ad7b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ad7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ad7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7bc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1ad7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1ad7c0: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x1AD7C0u;
    SET_GPR_U32(ctx, 31, 0x1AD7C8u);
    ctx->pc = 0x1AD7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7C0u;
    // 0x1ad7c4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x1AD7C0u, 0x1AD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7C8u;
label_1ad7c8:
    // 0x1ad7c8: 0xc069234  jal         func_1A48D0
    ctx->pc = 0x1AD7C8u;
    SET_GPR_U32(ctx, 31, 0x1AD7D0u);
    ctx->pc = 0x1AD7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7C8u;
    // 0x1ad7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D0u, 0x1AD7C8u, 0x1AD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7D0u;
label_1ad7d0:
    // 0x1ad7d0: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x1AD7D0u;
    SET_GPR_U32(ctx, 31, 0x1AD7D8u);
    ctx->pc = 0x1AD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7D0u;
    // 0x1ad7d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x1AD7D0u, 0x1AD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7D8u;
label_1ad7d8:
    // 0x1ad7d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ad7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ad7dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad7e0: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x1ad7e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ad7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad7e8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ad7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ad7ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1ad7f0u;
}
