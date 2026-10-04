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

// Function: FUN_001a8638
// Address: 0x1a8638 - 0x1a8670
void FUN_001a8638_0x1a8638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8638_0x1a8638");
#endif

    switch (ctx->pc) {
        case 0x1a8664u: goto label_1a8664;
        default: break;
    }

    ctx->pc = 0x1a8638u;

    // 0x1a8638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a863c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8640: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a8644: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1a8648: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a8648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1a864c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a8650: 0x26114580  addiu       $s1, $s0, 0x4580
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
    // 0x1a8654: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a8654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1a8658: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a8658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1a865c: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1A865Cu;
    SET_GPR_U32(ctx, 31, 0x1A8664u);
    ctx->pc = 0x1A8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A865Cu;
    // 0x1a8660: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1A865Cu, 0x1A8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8664u;
label_1a8664:
    // 0x1a8664: 0xae004580  sw          $zero, 0x4580($s0)
    ctx->pc = 0x1a8664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17792), GPR_U32(ctx, 0));
    // 0x1a8668: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A8668u;
    SET_GPR_U32(ctx, 31, 0x1A8670u);
    ctx->pc = 0x1A866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8668u;
    // 0x1a866c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A8668u, 0x1A8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8670u;
}
