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

// Function: entry_001c3a18
// Address: 0x1c3a18 - 0x1c3a60
void entry_001c3a18_0x1c3a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3a18_0x1c3a18");
#endif

    switch (ctx->pc) {
        case 0x1c3a20u: goto label_1c3a20;
        case 0x1c3a2cu: goto label_1c3a2c;
        case 0x1c3a38u: goto label_1c3a38;
        default: break;
    }

    ctx->pc = 0x1c3a18u;

    // 0x1c3a18: 0xc041738  jal         func_105CE0
    ctx->pc = 0x1C3A18u;
    SET_GPR_U32(ctx, 31, 0x1C3A20u);
    ctx->pc = 0x1C3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A18u;
    // 0x1c3a1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C3A18u, 0x1C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A20u;
label_1c3a20:
    // 0x1c3a20: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c3a24: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C3A24u;
    SET_GPR_U32(ctx, 31, 0x1C3A2Cu);
    ctx->pc = 0x1C3A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A24u;
    // 0x1c3a28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C3A24u, 0x1C3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A2Cu;
label_1c3a2c:
    // 0x1c3a2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3a30: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x1C3A30u;
    SET_GPR_U32(ctx, 31, 0x1C3A38u);
    ctx->pc = 0x1C3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A30u;
    // 0x1c3a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C3A30u, 0x1C3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A38u;
label_1c3a38:
    // 0x1c3a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c3a40: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c3a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c3a44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1c3a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3A48u;
    {
        const bool branch_taken_0x1c3a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a48) {
            ctx->pc = 0x1C3A60u;
            return;
        }
    }
    ctx->pc = 0x1C3A50u;
    // 0x1c3a50: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c3a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a58: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C3A58u;
    SET_GPR_U32(ctx, 31, 0x1C3A60u);
    ctx->pc = 0x1C3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A58u;
    // 0x1c3a5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C3A58u, 0x1C3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A60u;
}
