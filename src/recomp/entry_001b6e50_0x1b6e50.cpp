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

// Function: entry_001b6e50
// Address: 0x1b6e50 - 0x1b6ebc
void entry_001b6e50_0x1b6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6e50_0x1b6e50");
#endif

    switch (ctx->pc) {
        case 0x1b6e64u: goto label_1b6e64;
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e8cu: goto label_1b6e8c;
        case 0x1b6ea0u: goto label_1b6ea0;
        default: break;
    }

    ctx->pc = 0x1b6e50u;

    // 0x1b6e50: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x1b6e50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1b6e54: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1b6e58: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x1b6e58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1b6e5c: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x1B6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E64u);
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x1B6E5Cu, 0x1B6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E64u;
label_1b6e64:
    // 0x1b6e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e6c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E74u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6E6Cu, 0x1B6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E74u;
label_1b6e74:
    // 0x1b6e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e78: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6e7c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b6e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1b6e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e84: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6E84u;
    SET_GPR_U32(ctx, 31, 0x1B6E8Cu);
    ctx->pc = 0x1B6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E84u;
    // 0x1b6e88: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6E84u, 0x1B6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E8Cu;
label_1b6e8c:
    // 0x1b6e8c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1b6e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b6e90: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1b6e90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1b6e94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b6e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e98: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x1B6E98u;
    SET_GPR_U32(ctx, 31, 0x1B6EA0u);
    ctx->pc = 0x1B6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E98u;
    // 0x1b6e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x1B6E98u, 0x1B6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EA0u;
label_1b6ea0:
    // 0x1b6ea0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1b6ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1b6ea4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b6ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1b6ea8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6EA8u;
    {
        const bool branch_taken_0x1b6ea8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b6ea8) {
            ctx->pc = 0x1B6EBCu;
            return;
        }
    }
    ctx->pc = 0x1B6EB0u;
    // 0x1b6eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6eb4: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6EB4u;
    SET_GPR_U32(ctx, 31, 0x1B6EBCu);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6EB4u, 0x1B6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EBCu;
}
