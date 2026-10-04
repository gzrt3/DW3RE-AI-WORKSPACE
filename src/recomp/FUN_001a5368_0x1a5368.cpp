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

// Function: FUN_001a5368
// Address: 0x1a5368 - 0x1a53c8
void FUN_001a5368_0x1a5368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5368_0x1a5368");
#endif

    switch (ctx->pc) {
        case 0x1a5398u: goto label_1a5398;
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53b8u: goto label_1a53b8;
        default: break;
    }

    ctx->pc = 0x1a5368u;

    // 0x1a5368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a536c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5370: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a537c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a537cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1a5380: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a5384: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a5384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a5388: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5388u;
    {
        const bool branch_taken_0x1a5388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5388) {
            ctx->pc = 0x1A5398u;
            goto label_1a5398;
        }
    }
    ctx->pc = 0x1A5390u;
    // 0x1a5390: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A5390u;
    SET_GPR_U32(ctx, 31, 0x1A5398u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A5390u, 0x1A5398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5398u;
label_1a5398:
    // 0x1a5398: 0xc069158  jal         func_1A4560
    ctx->pc = 0x1A5398u;
    SET_GPR_U32(ctx, 31, 0x1A53A0u);
    ctx->pc = 0x1A539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5398u;
    // 0x1a539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4560u, 0x1A5398u, 0x1A53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53A0u;
label_1a53a0:
    // 0x1a53a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a53a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53a4: 0xf  sync
    ctx->pc = 0x1a53a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a53a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A53A8u;
    {
        const bool branch_taken_0x1a53a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A8u;
        // 0x1a53ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53a8) {
            ctx->pc = 0x1A53BCu;
            goto label_1a53bc;
        }
    }
    ctx->pc = 0x1A53B0u;
    // 0x1a53b0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A53B0u;
    SET_GPR_U32(ctx, 31, 0x1A53B8u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A53B0u, 0x1A53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53B8u;
label_1a53b8:
    // 0x1a53b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a53b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a53bc:
    // 0x1a53bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a53bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a53c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a53c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a53c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a53c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a53c8u;
}
