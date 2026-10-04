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

// Function: FUN_001b6d60
// Address: 0x1b6d60 - 0x1b6e00
void FUN_001b6d60_0x1b6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6d60_0x1b6d60");
#endif

    switch (ctx->pc) {
        case 0x1b6d88u: goto label_1b6d88;
        case 0x1b6d98u: goto label_1b6d98;
        case 0x1b6da8u: goto label_1b6da8;
        case 0x1b6dc8u: goto label_1b6dc8;
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6df4u: goto label_1b6df4;
        default: break;
    }

    ctx->pc = 0x1b6d60u;

    // 0x1b6d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6d70: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1b6d70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1b6d74: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x1b6d74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1b6d78: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x1b6d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x1b6d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6d80: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x1B6D80u;
    SET_GPR_U32(ctx, 31, 0x1B6D88u);
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x1B6D80u, 0x1B6D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D88u;
label_1b6d88:
    // 0x1b6d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d90: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6D90u;
    SET_GPR_U32(ctx, 31, 0x1B6D98u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6D90u, 0x1B6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D98u;
label_1b6d98:
    // 0x1b6d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6da0: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6DA0u;
    SET_GPR_U32(ctx, 31, 0x1B6DA8u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6DA0u, 0x1B6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DA8u;
label_1b6da8:
    // 0x1b6da8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6db0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6db4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1b6db8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1b6db8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b6dbc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1b6dbcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1b6dc0: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x1B6DC0u;
    SET_GPR_U32(ctx, 31, 0x1B6DC8u);
    ctx->pc = 0x1B6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DC0u;
    // 0x1b6dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x1B6DC0u, 0x1B6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DC8u;
label_1b6dc8:
    // 0x1b6dc8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1b6dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1b6dcc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b6dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1b6dd0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6DD0u;
    {
        const bool branch_taken_0x1b6dd0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b6dd0) {
            ctx->pc = 0x1B6DE4u;
            goto label_1b6de4;
        }
    }
    ctx->pc = 0x1B6DD8u;
    // 0x1b6dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ddc: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6DDCu;
    SET_GPR_U32(ctx, 31, 0x1B6DE4u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6DDCu, 0x1B6DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DE4u;
label_1b6de4:
    // 0x1b6de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dec: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6DECu;
    SET_GPR_U32(ctx, 31, 0x1B6DF4u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6DECu, 0x1B6DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DF4u;
label_1b6df4:
    // 0x1b6df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6df8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b6e00u;
}
