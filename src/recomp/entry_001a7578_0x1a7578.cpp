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

// Function: entry_001a7578
// Address: 0x1a7578 - 0x1a75b4
void entry_001a7578_0x1a7578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7578_0x1a7578");
#endif

    switch (ctx->pc) {
        case 0x1a75a0u: goto label_1a75a0;
        case 0x1a75b0u: goto label_1a75b0;
        default: break;
    }

    ctx->pc = 0x1a7578u;

    // 0x1a7578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a757c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7580: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a7580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a7584: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1a7584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1a7588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a758c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a7590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a7594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7598: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A7598u;
    SET_GPR_U32(ctx, 31, 0x1A75A0u);
    ctx->pc = 0x1A759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7598u;
    // 0x1a759c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A7598u, 0x1A75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75A0u;
label_1a75a0:
    // 0x1a75a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A75A0u;
    {
        const bool branch_taken_0x1a75a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75A0u;
        // 0x1a75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75a0) {
            ctx->pc = 0x1A75B4u;
            return;
        }
    }
    ctx->pc = 0x1A75A8u;
    // 0x1a75a8: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A75A8u;
    SET_GPR_U32(ctx, 31, 0x1A75B0u);
    ctx->pc = 0x1A75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75A8u;
    // 0x1a75ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A75A8u, 0x1A75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75B0u;
label_1a75b0:
    // 0x1a75b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1a75b4u;
}
