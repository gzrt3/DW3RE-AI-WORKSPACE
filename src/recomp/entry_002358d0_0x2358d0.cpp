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

// Function: entry_002358d0
// Address: 0x2358d0 - 0x235908
void entry_002358d0_0x2358d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002358d0_0x2358d0");
#endif

    switch (ctx->pc) {
        case 0x2358f4u: goto label_2358f4;
        case 0x235904u: goto label_235904;
        default: break;
    }

    ctx->pc = 0x2358d0u;

    // 0x2358d0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2358D0u;
    {
        const bool branch_taken_0x2358d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D0u;
        // 0x2358d4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358d0) {
            ctx->pc = 0x235908u;
            return;
        }
    }
    ctx->pc = 0x2358D8u;
    // 0x2358d8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2358d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2358dc: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x2358e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2358e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2358e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2358e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2358e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358ec: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2358ECu;
    SET_GPR_U32(ctx, 31, 0x2358F4u);
    ctx->pc = 0x2358F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358ECu;
    // 0x2358f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2358ECu, 0x2358F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358F4u;
label_2358f4:
    // 0x2358f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2358f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358f8: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2358fc: 0xc08d192  jal         func_234648
    ctx->pc = 0x2358FCu;
    SET_GPR_U32(ctx, 31, 0x235904u);
    ctx->pc = 0x235900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358FCu;
    // 0x235900: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x2358FCu, 0x235904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235904u;
label_235904:
    // 0x235904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235908u;
}
