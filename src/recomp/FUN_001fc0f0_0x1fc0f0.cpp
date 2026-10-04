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

// Function: FUN_001fc0f0
// Address: 0x1fc0f0 - 0x1fc174
void FUN_001fc0f0_0x1fc0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc0f0_0x1fc0f0");
#endif

    switch (ctx->pc) {
        case 0x1fc138u: goto label_1fc138;
        case 0x1fc148u: goto label_1fc148;
        case 0x1fc158u: goto label_1fc158;
        case 0x1fc168u: goto label_1fc168;
        case 0x1fc170u: goto label_1fc170;
        default: break;
    }

    ctx->pc = 0x1fc0f0u;

    // 0x1fc0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc0f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fc0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fc0fc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1fc100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc104: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1fc104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1fc108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc10c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc110: 0x90840fe4  lbu         $a0, 0xFE4($a0)
    ctx->pc = 0x1fc110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4068)));
    // 0x1fc114: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1fc114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc118: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC118u;
    {
        const bool branch_taken_0x1fc118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC118u;
        // 0x1fc11c: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc118) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC120u;
    // 0x1fc120: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x1fc124: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FC124u;
    {
        const bool branch_taken_0x1fc124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fc124) {
            ctx->pc = 0x1FC170u;
            goto label_1fc170;
        }
    }
    ctx->pc = 0x1FC12Cu;
label_1fc12c:
    // 0x1fc12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc130: 0xc066c5c  jal         func_19B170
    ctx->pc = 0x1FC130u;
    SET_GPR_U32(ctx, 31, 0x1FC138u);
    ctx->pc = 0x1FC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC130u;
    // 0x1fc134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x1FC130u, 0x1FC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC138u;
label_1fc138:
    // 0x1fc138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc13c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc140: 0xc066d10  jal         func_19B440
    ctx->pc = 0x1FC140u;
    SET_GPR_U32(ctx, 31, 0x1FC148u);
    ctx->pc = 0x1FC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC140u;
    // 0x1fc144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1FC140u, 0x1FC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC148u;
label_1fc148:
    // 0x1fc148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc14c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fc150: 0xc066d36  jal         func_19B4D8
    ctx->pc = 0x1FC150u;
    SET_GPR_U32(ctx, 31, 0x1FC158u);
    ctx->pc = 0x1FC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC150u;
    // 0x1fc154: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC150u, 0x1FC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC158u;
label_1fc158:
    // 0x1fc158: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1fc15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc160: 0xc066d36  jal         func_19B4D8
    ctx->pc = 0x1FC160u;
    SET_GPR_U32(ctx, 31, 0x1FC168u);
    ctx->pc = 0x1FC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC160u;
    // 0x1fc164: 0x240603e0  addiu       $a2, $zero, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC160u, 0x1FC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC168u;
label_1fc168:
    // 0x1fc168: 0xc066c46  jal         func_19B118
    ctx->pc = 0x1FC168u;
    SET_GPR_U32(ctx, 31, 0x1FC170u);
    ctx->pc = 0x1FC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC168u;
    // 0x1fc16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1FC168u, 0x1FC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC170u;
label_1fc170:
    // 0x1fc170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1fc174u;
}
