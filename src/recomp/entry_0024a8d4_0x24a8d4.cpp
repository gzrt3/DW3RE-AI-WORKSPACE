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

// Function: entry_0024a8d4
// Address: 0x24a8d4 - 0x24a91c
void entry_0024a8d4_0x24a8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a8d4_0x24a8d4");
#endif

    switch (ctx->pc) {
        case 0x24a918u: goto label_24a918;
        default: break;
    }

    ctx->pc = 0x24a8d4u;

    // 0x24a8d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x24a8d8: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a8dc: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x24a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x24a8e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24a8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a8e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a8ec: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x24A8ECu;
    {
        const bool branch_taken_0x24a8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ECu;
        // 0x24a8f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8ec) {
            ctx->pc = 0x24A91Cu;
            return;
        }
    }
    ctx->pc = 0x24A8F4u;
    // 0x24a8f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x24a8f8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x24a8fc: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x24a900: 0x24062081  addiu       $a2, $zero, 0x2081
    ctx->pc = 0x24a900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8321));
    // 0x24a904: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x24a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a910: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x24A910u;
    SET_GPR_U32(ctx, 31, 0x24A918u);
    ctx->pc = 0x24A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A910u;
    // 0x24a914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x24A910u, 0x24A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A918u;
label_24a918:
    // 0x24a918: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x24a91cu;
}
