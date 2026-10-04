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

// Function: FUN_001b0fa0
// Address: 0x1b0fa0 - 0x1b1004
void FUN_001b0fa0_0x1b0fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0fa0_0x1b0fa0");
#endif

    switch (ctx->pc) {
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0ffcu: goto label_1b0ffc;
        default: break;
    }

    ctx->pc = 0x1b0fa0u;

    // 0x1b0fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b0fa4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1b0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1b0fa8: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b0fac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b0facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b0fb0: 0x8ea28d0c  lw          $v0, -0x72F4($s5)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x288D0Cu));
    // 0x1b0fb4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1b0fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1b0fb8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1b0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1b0fbc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1b0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1b0fc0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1b0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1b0fc4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1b0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1b0fc8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0FC8u;
    {
        const bool branch_taken_0x1b0fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC8u;
        // 0x1b0fcc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fc8) {
            ctx->pc = 0x1B0FECu;
            goto label_1b0fec;
        }
    }
    ctx->pc = 0x1B0FD0u;
    // 0x1b0fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0fd4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b0fd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b0fdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b0fe0: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1B0FE0u;
    SET_GPR_U32(ctx, 31, 0x1B0FE8u);
    ctx->pc = 0x1B0FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FE0u;
    // 0x1b0fe4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1B0FE0u, 0x1B0FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FE8u;
label_1b0fe8:
    // 0x1b0fe8: 0xaea28d0c  sw          $v0, -0x72F4($s5)
    ctx->pc = 0x1b0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294937868), GPR_U32(ctx, 2));
label_1b0fec:
    // 0x1b0fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ff4: 0xc06c672  jal         func_1B19C8
    ctx->pc = 0x1B0FF4u;
    SET_GPR_U32(ctx, 31, 0x1B0FFCu);
    ctx->pc = 0x1B0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FF4u;
    // 0x1b0ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19C8u, 0x1B0FF4u, 0x1B0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FFCu;
label_1b0ffc:
    // 0x1b0ffc: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1B0FFCu;
    SET_GPR_U32(ctx, 31, 0x1B1004u);
    ctx->pc = 0x1B1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FFCu;
    // 0x1b1000: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1B0FFCu, 0x1B1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1004u;
}
