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

// Function: FUN_001a34b0
// Address: 0x1a34b0 - 0x1a34fc
void FUN_001a34b0_0x1a34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a34b0_0x1a34b0");
#endif

    switch (ctx->pc) {
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34f8u: goto label_1a34f8;
        default: break;
    }

    ctx->pc = 0x1a34b0u;

    // 0x1a34b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a34b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a34b8: 0x8c830858  lw          $v1, 0x858($a0)
    ctx->pc = 0x1a34b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x1a34bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A34BCu;
    {
        const bool branch_taken_0x1a34bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34bc) {
            ctx->pc = 0x1A34F0u;
            goto label_1a34f0;
        }
    }
    ctx->pc = 0x1A34C4u;
    // 0x1a34c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A34C4u;
    {
        const bool branch_taken_0x1a34c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34c4) {
            ctx->pc = 0x1A34F0u;
            goto label_1a34f0;
        }
    }
    ctx->pc = 0x1A34CCu;
    // 0x1a34cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a34d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A34D0u;
    {
        const bool branch_taken_0x1a34d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D0u;
        // 0x1a34d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34d0) {
            ctx->pc = 0x1A34F0u;
            goto label_1a34f0;
        }
    }
    ctx->pc = 0x1A34D8u;
    // 0x1a34d8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1a34d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1a34dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a34e0: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x1A34E0u;
    SET_GPR_U32(ctx, 31, 0x1A34E8u);
    ctx->pc = 0x1A34E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34E0u;
    // 0x1a34e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x1A34E0u, 0x1A34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34E8u;
label_1a34e8:
    // 0x1a34e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A34E8u;
    {
        const bool branch_taken_0x1a34e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E8u;
        // 0x1a34ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34e8) {
            ctx->pc = 0x1A34FCu;
            return;
        }
    }
    ctx->pc = 0x1A34F0u;
label_1a34f0:
    // 0x1a34f0: 0xc068d1a  jal         func_1A3468
    ctx->pc = 0x1A34F0u;
    SET_GPR_U32(ctx, 31, 0x1A34F8u);
    ctx->pc = 0x1A34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34F0u;
    // 0x1a34f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3468u, 0x1A34F0u, 0x1A34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34F8u;
label_1a34f8:
    // 0x1a34f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a34f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1a34fcu;
}
