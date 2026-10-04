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

// Function: FUN_001a5438
// Address: 0x1a5438 - 0x1a5498
void FUN_001a5438_0x1a5438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5438_0x1a5438");
#endif

    switch (ctx->pc) {
        case 0x1a5468u: goto label_1a5468;
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5488u: goto label_1a5488;
        default: break;
    }

    ctx->pc = 0x1a5438u;

    // 0x1a5438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a543c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5440: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a544c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1a5450: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a5454: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a5454u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a5458: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5458u;
    {
        const bool branch_taken_0x1a5458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5458) {
            ctx->pc = 0x1A5468u;
            goto label_1a5468;
        }
    }
    ctx->pc = 0x1A5460u;
    // 0x1a5460: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A5460u;
    SET_GPR_U32(ctx, 31, 0x1A5468u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A5460u, 0x1A5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5468u;
label_1a5468:
    // 0x1a5468: 0xc069160  jal         func_1A4580
    ctx->pc = 0x1A5468u;
    SET_GPR_U32(ctx, 31, 0x1A5470u);
    ctx->pc = 0x1A546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5468u;
    // 0x1a546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4580u, 0x1A5468u, 0x1A5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5470u;
label_1a5470:
    // 0x1a5470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5474: 0xf  sync
    ctx->pc = 0x1a5474u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5478: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5478u;
    {
        const bool branch_taken_0x1a5478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5478u;
        // 0x1a547c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5478) {
            ctx->pc = 0x1A548Cu;
            goto label_1a548c;
        }
    }
    ctx->pc = 0x1A5480u;
    // 0x1a5480: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5480u;
    SET_GPR_U32(ctx, 31, 0x1A5488u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5480u, 0x1A5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5488u;
label_1a5488:
    // 0x1a5488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a548c:
    // 0x1a548c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5490: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5498u;
}
