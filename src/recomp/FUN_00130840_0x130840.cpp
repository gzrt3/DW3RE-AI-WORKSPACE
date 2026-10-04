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

// Function: FUN_00130840
// Address: 0x130840 - 0x13089c
void FUN_00130840_0x130840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130840_0x130840");
#endif

    switch (ctx->pc) {
        case 0x130878u: goto label_130878;
        case 0x130898u: goto label_130898;
        default: break;
    }

    ctx->pc = 0x130840u;

    // 0x130840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130844: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13084c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130850: 0x8c25a3e0  lw          $a1, -0x5C20($at)
    ctx->pc = 0x130850u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130854: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x130854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x130858: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130858u;
        // 0x13085c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130858) {
            ctx->pc = 0x130898u;
            goto label_130898;
        }
    }
    ctx->pc = 0x130860u;
    // 0x130860: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x130860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x130864: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130868: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x130868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13086c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130870: 0xc0706b4  jal         func_1C1AD0
    ctx->pc = 0x130870u;
    SET_GPR_U32(ctx, 31, 0x130878u);
    ctx->pc = 0x130874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130870u;
    // 0x130874: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AD0u, 0x130870u, 0x130878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130878u;
label_130878:
    // 0x130878: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13087c: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x13087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x130880: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x130880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130884: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x130888: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x130888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13088c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130890: 0xc04c430  jal         func_1310C0
    ctx->pc = 0x130890u;
    SET_GPR_U32(ctx, 31, 0x130898u);
    ctx->pc = 0x130894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130890u;
    // 0x130894: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x130890u, 0x130898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130898u;
label_130898:
    // 0x130898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13089cu;
}
