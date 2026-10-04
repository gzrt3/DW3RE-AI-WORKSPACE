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

// Function: FUN_001a53d0
// Address: 0x1a53d0 - 0x1a5430
void FUN_001a53d0_0x1a53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a53d0_0x1a53d0");
#endif

    switch (ctx->pc) {
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5408u: goto label_1a5408;
        case 0x1a5420u: goto label_1a5420;
        default: break;
    }

    ctx->pc = 0x1a53d0u;

    // 0x1a53d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a53d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a53d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a53dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a53dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a53e4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1a53e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a53ec: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a53ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a53f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A53F0u;
    {
        const bool branch_taken_0x1a53f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a53f0) {
            ctx->pc = 0x1A5400u;
            goto label_1a5400;
        }
    }
    ctx->pc = 0x1A53F8u;
    // 0x1a53f8: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A53F8u;
    SET_GPR_U32(ctx, 31, 0x1A5400u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A53F8u, 0x1A5400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5400u;
label_1a5400:
    // 0x1a5400: 0xc069164  jal         func_1A4590
    ctx->pc = 0x1A5400u;
    SET_GPR_U32(ctx, 31, 0x1A5408u);
    ctx->pc = 0x1A5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5400u;
    // 0x1a5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4590u, 0x1A5400u, 0x1A5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5408u;
label_1a5408:
    // 0x1a5408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a540c: 0xf  sync
    ctx->pc = 0x1a540cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5410: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5410u;
    {
        const bool branch_taken_0x1a5410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5410u;
        // 0x1a5414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5410) {
            ctx->pc = 0x1A5424u;
            goto label_1a5424;
        }
    }
    ctx->pc = 0x1A5418u;
    // 0x1a5418: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5418u;
    SET_GPR_U32(ctx, 31, 0x1A5420u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5418u, 0x1A5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5420u;
label_1a5420:
    // 0x1a5420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5424:
    // 0x1a5424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5428: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a542c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a542cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5430u;
}
