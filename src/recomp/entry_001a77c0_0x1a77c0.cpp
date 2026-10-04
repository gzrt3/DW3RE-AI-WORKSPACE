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

// Function: entry_001a77c0
// Address: 0x1a77c0 - 0x1a77fc
void entry_001a77c0_0x1a77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a77c0_0x1a77c0");
#endif

    switch (ctx->pc) {
        case 0x1a77e8u: goto label_1a77e8;
        case 0x1a77f8u: goto label_1a77f8;
        default: break;
    }

    ctx->pc = 0x1a77c0u;

    // 0x1a77c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a77c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a77c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a77cc: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a77ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1a77d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a77d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77d4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a77d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a77d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a77dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77e0: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A77E0u;
    SET_GPR_U32(ctx, 31, 0x1A77E8u);
    ctx->pc = 0x1A77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77E0u;
    // 0x1a77e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A77E0u, 0x1A77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77E8u;
label_1a77e8:
    // 0x1a77e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A77E8u;
    {
        const bool branch_taken_0x1a77e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E8u;
        // 0x1a77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e8) {
            ctx->pc = 0x1A77FCu;
            return;
        }
    }
    ctx->pc = 0x1A77F0u;
    // 0x1a77f0: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A77F0u;
    SET_GPR_U32(ctx, 31, 0x1A77F8u);
    ctx->pc = 0x1A77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77F0u;
    // 0x1a77f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A77F0u, 0x1A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77F8u;
label_1a77f8:
    // 0x1a77f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1a77fcu;
}
