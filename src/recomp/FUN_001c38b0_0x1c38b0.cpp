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

// Function: FUN_001c38b0
// Address: 0x1c38b0 - 0x1c3940
void FUN_001c38b0_0x1c38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c38b0_0x1c38b0");
#endif

    switch (ctx->pc) {
        case 0x1c390cu: goto label_1c390c;
        default: break;
    }

    ctx->pc = 0x1c38b0u;

    // 0x1c38b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c38b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c38b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c38b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c38bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c38bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1c38c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c38c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c38c4: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1c38c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c38c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c38cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38d0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1c38d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1c38d8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C38D8u;
    {
        const bool branch_taken_0x1c38d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38D8u;
        // 0x1c38dc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38d8) {
            ctx->pc = 0x1C3914u;
            goto label_1c3914;
        }
    }
    ctx->pc = 0x1C38E0u;
    // 0x1c38e0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c38e4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1c38e8: 0x2442f904  addiu       $v0, $v0, -0x6FC
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965508));
    // 0x1c38ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c38f4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c38f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c38f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c38fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c38fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3904: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C3904u;
    SET_GPR_U32(ctx, 31, 0x1C390Cu);
    ctx->pc = 0x1C3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3904u;
    // 0x1c3908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3904u, 0x1C390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C390Cu;
label_1c390c:
    // 0x1c390c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C390Cu;
    {
        const bool branch_taken_0x1c390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c390c) {
            ctx->pc = 0x1C3940u;
            return;
        }
    }
    ctx->pc = 0x1C3914u;
label_1c3914:
    // 0x1c3914: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c3918: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1c391c: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x1c3920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3928: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c392c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3938: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C3938u;
    SET_GPR_U32(ctx, 31, 0x1C3940u);
    ctx->pc = 0x1C393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3938u;
    // 0x1c393c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3938u, 0x1C3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3940u;
}
