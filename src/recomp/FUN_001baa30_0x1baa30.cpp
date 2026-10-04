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

// Function: FUN_001baa30
// Address: 0x1baa30 - 0x1baa90
void FUN_001baa30_0x1baa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001baa30_0x1baa30");
#endif

    switch (ctx->pc) {
        case 0x1baa5cu: goto label_1baa5c;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa74u: goto label_1baa74;
        default: break;
    }

    ctx->pc = 0x1baa30u;

    // 0x1baa30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1baa34: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1baa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1baa38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1baa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1baa3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1baa40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baa44: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x1baa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x1baa48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1baa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1baa4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baa50: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1baa50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1baa54: 0xc041738  jal         func_105CE0
    ctx->pc = 0x1BAA54u;
    SET_GPR_U32(ctx, 31, 0x1BAA5Cu);
    ctx->pc = 0x1BAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA54u;
    // 0x1baa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1BAA54u, 0x1BAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA5Cu;
label_1baa5c:
    // 0x1baa5c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1baa60: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1BAA60u;
    SET_GPR_U32(ctx, 31, 0x1BAA68u);
    ctx->pc = 0x1BAA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA60u;
    // 0x1baa64: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1BAA60u, 0x1BAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA68u;
label_1baa68:
    // 0x1baa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa6c: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x1BAA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA74u);
    ctx->pc = 0x1BAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA6Cu;
    // 0x1baa70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1BAA6Cu, 0x1BAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA74u;
label_1baa74:
    // 0x1baa74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1baa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa78: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1baa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1baa7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1baa7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa80: 0x24844690  addiu       $a0, $a0, 0x4690
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18064));
    // 0x1baa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1baa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa88: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1BAA88u;
    SET_GPR_U32(ctx, 31, 0x1BAA90u);
    ctx->pc = 0x1BAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA88u;
    // 0x1baa8c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1BAA88u, 0x1BAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA90u;
}
