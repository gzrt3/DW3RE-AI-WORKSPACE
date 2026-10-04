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

// Function: FUN_001a5300
// Address: 0x1a5300 - 0x1a5360
void FUN_001a5300_0x1a5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5300_0x1a5300");
#endif

    switch (ctx->pc) {
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a5350u: goto label_1a5350;
        default: break;
    }

    ctx->pc = 0x1a5300u;

    // 0x1a5300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5304: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a530c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a530cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5314: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5314u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1a5318: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a531c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a531cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a5320: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A5330u;
            goto label_1a5330;
        }
    }
    ctx->pc = 0x1A5328u;
    // 0x1a5328: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A5328u;
    SET_GPR_U32(ctx, 31, 0x1A5330u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A5328u, 0x1A5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5330u;
label_1a5330:
    // 0x1a5330: 0xc06915c  jal         func_1A4570
    ctx->pc = 0x1A5330u;
    SET_GPR_U32(ctx, 31, 0x1A5338u);
    ctx->pc = 0x1A5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5330u;
    // 0x1a5334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4570u, 0x1A5330u, 0x1A5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5338u;
label_1a5338:
    // 0x1a5338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a533c: 0xf  sync
    ctx->pc = 0x1a533cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5340: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5340u;
    {
        const bool branch_taken_0x1a5340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5340) {
            ctx->pc = 0x1A5354u;
            goto label_1a5354;
        }
    }
    ctx->pc = 0x1A5348u;
    // 0x1a5348: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5348u;
    SET_GPR_U32(ctx, 31, 0x1A5350u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5348u, 0x1A5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5350u;
label_1a5350:
    // 0x1a5350: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5354:
    // 0x1a5354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5358: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a535c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a535cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5360u;
}
