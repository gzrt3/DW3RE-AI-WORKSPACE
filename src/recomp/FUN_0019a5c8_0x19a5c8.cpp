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

// Function: FUN_0019a5c8
// Address: 0x19a5c8 - 0x19a610
void FUN_0019a5c8_0x19a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a5c8_0x19a5c8");
#endif

    switch (ctx->pc) {
        case 0x19a5f0u: goto label_19a5f0;
        case 0x19a600u: goto label_19a600;
        default: break;
    }

    ctx->pc = 0x19a5c8u;

    // 0x19a5c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a5cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a5d8: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19a5dc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x19a5e0: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x19a5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a5e8: 0xc066204  jal         func_198810
    ctx->pc = 0x19A5E8u;
    SET_GPR_U32(ctx, 31, 0x19A5F0u);
    ctx->pc = 0x19A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5E8u;
    // 0x19a5ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198810u, 0x19A5E8u, 0x19A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5F0u;
label_19a5f0:
    // 0x19a5f0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A5F0u;
    {
        const bool branch_taken_0x19a5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5f0) {
            ctx->pc = 0x19A608u;
            goto label_19a608;
        }
    }
    ctx->pc = 0x19A5F8u;
    // 0x19a5f8: 0xc066322  jal         func_198C88
    ctx->pc = 0x19A5F8u;
    SET_GPR_U32(ctx, 31, 0x19A600u);
    ctx->pc = 0x19A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5F8u;
    // 0x19a5fc: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x19A5F8u, 0x19A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A600u;
label_19a600:
    // 0x19a600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A600u;
    {
        const bool branch_taken_0x19a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A600u;
        // 0x19a604: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a600) {
            ctx->pc = 0x19A614u;
            return;
        }
    }
    ctx->pc = 0x19A608u;
label_19a608:
    // 0x19a608: 0xc066322  jal         func_198C88
    ctx->pc = 0x19A608u;
    SET_GPR_U32(ctx, 31, 0x19A610u);
    ctx->pc = 0x19A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A608u;
    // 0x19a60c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x19A608u, 0x19A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A610u;
}
