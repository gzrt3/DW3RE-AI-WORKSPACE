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

// Function: entry_00152164
// Address: 0x152164 - 0x152190
void entry_00152164_0x152164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152164_0x152164");
#endif

    switch (ctx->pc) {
        case 0x152170u: goto label_152170;
        case 0x15217cu: goto label_15217c;
        default: break;
    }

    ctx->pc = 0x152164u;

label_152164:
    // 0x152164: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x152164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_152168:
    // 0x152168: 0x40f809  jalr        $v0
label_15216c:
    if (ctx->pc == 0x15216Cu) {
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152170u;
        goto label_152170;
    }
    ctx->pc = 0x152168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152170u);
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152168u, 0x152170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152170u;
label_152170:
    // 0x152170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152174:
    // 0x152174: 0xc0751a4  jal         func_1D4690
label_152178:
    if (ctx->pc == 0x152178u) {
        ctx->pc = 0x152178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152174u;
        // 0x152178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15217Cu;
        goto label_15217c;
    }
    ctx->pc = 0x152174u;
    SET_GPR_U32(ctx, 31, 0x15217Cu);
    ctx->pc = 0x152178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152174u;
    // 0x152178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4690u, 0x152174u, 0x15217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15217Cu;
label_15217c:
    // 0x15217c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_152180:
    // 0x152180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152184:
    // 0x152184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152188:
    // 0x152188: 0x3e00008  jr          $ra
label_15218c:
    if (ctx->pc == 0x15218Cu) {
        ctx->pc = 0x15218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152188u;
        // 0x15218c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152190u;
        goto label_fallthrough_0x152188;
    }
    ctx->pc = 0x152188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152188u;
        // 0x15218c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x152188:
    ctx->pc = 0x152190u;
}
