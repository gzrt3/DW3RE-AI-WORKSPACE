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

// Function: entry_001c30c0
// Address: 0x1c30c0 - 0x1c3140
void entry_001c30c0_0x1c30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30c0_0x1c30c0");
#endif

    switch (ctx->pc) {
        case 0x1c3104u: goto label_1c3104;
        case 0x1c312cu: goto label_1c312c;
        default: break;
    }

    ctx->pc = 0x1c30c0u;

    // 0x1c30c0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c30c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1c30c8: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c30cc: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1c30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
    // 0x1c30d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c30d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c30d8: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1c30dc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1c30e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c30e4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c30e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c30ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f4: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1c30f8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c30fc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C30FCu;
    SET_GPR_U32(ctx, 31, 0x1C3104u);
    ctx->pc = 0x1C3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30FCu;
    // 0x1c3100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C30FCu, 0x1C3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3104u;
label_1c3104:
    // 0x1c3104: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c3108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c310c: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x1c3110: 0x24060608  addiu       $a2, $zero, 0x608
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
    // 0x1c3114: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c3118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c311c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c311cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3124: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C3124u;
    SET_GPR_U32(ctx, 31, 0x1C312Cu);
    ctx->pc = 0x1C3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3124u;
    // 0x1c3128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3124u, 0x1C312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C312Cu;
label_1c312c:
    // 0x1c312c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3138: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3138u;
        // 0x1c313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3140u;
}
