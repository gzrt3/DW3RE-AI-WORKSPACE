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

// Function: entry_0024a91c
// Address: 0x24a91c - 0x24a9d0
void entry_0024a91c_0x24a91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a91c_0x24a91c");
#endif

    switch (ctx->pc) {
        case 0x24a948u: goto label_24a948;
        case 0x24a950u: goto label_24a950;
        case 0x24a958u: goto label_24a958;
        case 0x24a984u: goto label_24a984;
        case 0x24a990u: goto label_24a990;
        case 0x24a9a4u: goto label_24a9a4;
        default: break;
    }

    ctx->pc = 0x24a91cu;

    // 0x24a91c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x24a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x24a920: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x24a924: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x24a928: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x24a928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24a92c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x24a930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a934: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x24a938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a93c: 0x468024  and         $s0, $v0, $a2
    ctx->pc = 0x24a93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24a940: 0xc066c98  jal         func_19B260
    ctx->pc = 0x24A940u;
    SET_GPR_U32(ctx, 31, 0x24A948u);
    ctx->pc = 0x24A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A940u;
    // 0x24a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B260u, 0x24A940u, 0x24A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A948u;
label_24a948:
    // 0x24a948: 0xc066c46  jal         func_19B118
    ctx->pc = 0x24A948u;
    SET_GPR_U32(ctx, 31, 0x24A950u);
    ctx->pc = 0x24A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A948u;
    // 0x24a94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x24A948u, 0x24A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A950u;
label_24a950:
    // 0x24a950: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x24A950u;
    SET_GPR_U32(ctx, 31, 0x24A958u);
    ctx->pc = 0x24A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A950u;
    // 0x24a954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x24A950u, 0x24A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A958u;
label_24a958:
    // 0x24a958: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x24a95c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x24a960: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x24a960u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x24a964: 0x24421e04  addiu       $v0, $v0, 0x1E04
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7684));
    // 0x24a968: 0x8f8487a4  lw          $a0, -0x785C($gp)
    ctx->pc = 0x24a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x24a96c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x24a970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a978: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x24a978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x24a97c: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x24A97Cu;
    SET_GPR_U32(ctx, 31, 0x24A984u);
    ctx->pc = 0x24A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A97Cu;
    // 0x24a980: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x24A97Cu, 0x24A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A984u;
label_24a984:
    // 0x24a984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a988: 0xc066440  jal         func_199100
    ctx->pc = 0x24A988u;
    SET_GPR_U32(ctx, 31, 0x24A990u);
    ctx->pc = 0x24A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A988u;
    // 0x24a98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x24A988u, 0x24A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A990u;
label_24a990:
    // 0x24a990: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24a990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x24a994: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A994u;
    {
        const bool branch_taken_0x24a994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A994u;
        // 0x24a998: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a994) {
            ctx->pc = 0x24A9A8u;
            goto label_24a9a8;
        }
    }
    ctx->pc = 0x24A99Cu;
    // 0x24a99c: 0xc06614e  jal         func_198538
    ctx->pc = 0x24A99Cu;
    SET_GPR_U32(ctx, 31, 0x24A9A4u);
    ctx->pc = 0x198538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x24A99Cu, 0x24A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9A4u;
label_24a9a4:
    // 0x24a9a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a9a8:
    // 0x24a9a8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x24a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x24a9ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24a9b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x24a9b4: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x24a9b4u;
    runtime->Store32(rdram, ctx, 0x70003FFCu, GPR_U32(ctx, 3));
    // 0x24a9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9C0u;
        // 0x24a9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A9C8u;
    // 0x24a9c8: 0x0  nop
    ctx->pc = 0x24a9c8u;
    // NOP
    // 0x24a9cc: 0x0  nop
    ctx->pc = 0x24a9ccu;
    // NOP
    ctx->pc = 0x24a9d0u;
}
