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

// Function: FUN_00240b00
// Address: 0x240b00 - 0x240b70
void FUN_00240b00_0x240b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240b00_0x240b00");
#endif

    switch (ctx->pc) {
        case 0x240b40u: goto label_240b40;
        case 0x240b54u: goto label_240b54;
        case 0x240b5cu: goto label_240b5c;
        default: break;
    }

    ctx->pc = 0x240b00u;

    // 0x240b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240b0c: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x240b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x240b10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x240b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x240b18: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x240b18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
    // 0x240b1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x240b20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x240b24: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x240b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x240b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240b2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x240b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b34: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x240b38: 0xc056a20  jal         func_15A880
    ctx->pc = 0x240B38u;
    SET_GPR_U32(ctx, 31, 0x240B40u);
    ctx->pc = 0x240B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B38u;
    // 0x240b3c: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x240B38u, 0x240B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B40u;
label_240b40:
    // 0x240b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b48: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x240b4c: 0xc056a04  jal         func_15A810
    ctx->pc = 0x240B4Cu;
    SET_GPR_U32(ctx, 31, 0x240B54u);
    ctx->pc = 0x240B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B4Cu;
    // 0x240b50: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x240B4Cu, 0x240B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B54u;
label_240b54:
    // 0x240b54: 0xc057138  jal         func_15C4E0
    ctx->pc = 0x240B54u;
    SET_GPR_U32(ctx, 31, 0x240B5Cu);
    ctx->pc = 0x240B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B54u;
    // 0x240b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x240B54u, 0x240B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B5Cu;
label_240b5c:
    // 0x240b5c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x240b60: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x240b64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240b68: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x240b6c: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x240B6Cu;
    SET_GPR_U32(ctx, 31, 0x240B74u);
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240B6Cu, 0x240B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B74u;
}
