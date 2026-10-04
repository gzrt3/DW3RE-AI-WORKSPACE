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

// Function: FUN_001b6ef0
// Address: 0x1b6ef0 - 0x1b7000
void FUN_001b6ef0_0x1b6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6ef0_0x1b6ef0");
#endif

    switch (ctx->pc) {
        case 0x1b6f14u: goto label_1b6f14;
        case 0x1b6f30u: goto label_1b6f30;
        case 0x1b6f3cu: goto label_1b6f3c;
        case 0x1b6f58u: goto label_1b6f58;
        case 0x1b6f68u: goto label_1b6f68;
        case 0x1b6f78u: goto label_1b6f78;
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6fa0u: goto label_1b6fa0;
        case 0x1b6fbcu: goto label_1b6fbc;
        case 0x1b6fc8u: goto label_1b6fc8;
        case 0x1b6fe0u: goto label_1b6fe0;
        default: break;
    }

    ctx->pc = 0x1b6ef0u;

    // 0x1b6ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6f04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6f08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6f0c: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1B6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F14u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1B6F0Cu, 0x1B6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F14u;
label_1b6f14:
    // 0x1b6f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f18: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x1b6f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x1b6f1c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1b6f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1b6f20: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B6F20u;
    {
        const bool branch_taken_0x1b6f20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F20u;
        // 0x1b6f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f20) {
            ctx->pc = 0x1B6FF0u;
            goto label_1b6ff0;
        }
    }
    ctx->pc = 0x1B6F28u;
    // 0x1b6f28: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6F28u;
    SET_GPR_U32(ctx, 31, 0x1B6F30u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6F28u, 0x1B6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F30u;
label_1b6f30:
    // 0x1b6f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f34: 0xc06df82  jal         func_1B7E08
    ctx->pc = 0x1B6F34u;
    SET_GPR_U32(ctx, 31, 0x1B6F3Cu);
    ctx->pc = 0x1B7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E08u, 0x1B6F34u, 0x1B6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F3Cu;
label_1b6f3c:
    // 0x1b6f3c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1b6f3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6f40: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1b6f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1b6f44: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x1b6f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x1b6f48: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6F48u;
    {
        const bool branch_taken_0x1b6f48 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F48u;
        // 0x1b6f4c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f48) {
            ctx->pc = 0x1B6F60u;
            goto label_1b6f60;
        }
    }
    ctx->pc = 0x1B6F50u;
    // 0x1b6f50: 0xc06db58  jal         func_1B6D60
    ctx->pc = 0x1B6F50u;
    SET_GPR_U32(ctx, 31, 0x1B6F58u);
    ctx->pc = 0x1B6F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F50u;
    // 0x1b6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D60u, 0x1B6F50u, 0x1B6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F58u;
label_1b6f58:
    // 0x1b6f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6F58u;
    {
        const bool branch_taken_0x1b6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f58) {
            ctx->pc = 0x1B6F78u;
            goto label_1b6f78;
        }
    }
    ctx->pc = 0x1B6F60u;
label_1b6f60:
    // 0x1b6f60: 0xc06db58  jal         func_1B6D60
    ctx->pc = 0x1B6F60u;
    SET_GPR_U32(ctx, 31, 0x1B6F68u);
    ctx->pc = 0x1B6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D60u, 0x1B6F60u, 0x1B6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F68u;
label_1b6f68:
    // 0x1b6f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b6f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f70: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6F70u;
    SET_GPR_U32(ctx, 31, 0x1B6F78u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6F70u, 0x1B6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F78u;
label_1b6f78:
    // 0x1b6f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f80: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x1B6F80u, 0x1B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f98: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1B6F98u;
    SET_GPR_U32(ctx, 31, 0x1B6FA0u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1B6F98u, 0x1B6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FA0u;
label_1b6fa0:
    // 0x1b6fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6FA8u;
    {
        const bool branch_taken_0x1b6fa8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6fa8) {
            ctx->pc = 0x1B6FD8u;
            goto label_1b6fd8;
        }
    }
    ctx->pc = 0x1B6FB0u;
    // 0x1b6fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fb4: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x1B6FB4u;
    SET_GPR_U32(ctx, 31, 0x1B6FBCu);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x1B6FB4u, 0x1B6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FBCu;
label_1b6fbc:
    // 0x1b6fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fc0: 0xc06df82  jal         func_1B7E08
    ctx->pc = 0x1B6FC0u;
    SET_GPR_U32(ctx, 31, 0x1B6FC8u);
    ctx->pc = 0x1B7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E08u, 0x1B6FC0u, 0x1B6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FC8u;
label_1b6fc8:
    // 0x1b6fc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6fcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6fd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6FD0u;
    {
        const bool branch_taken_0x1b6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FD0u;
        // 0x1b6fd4: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fd0) {
            ctx->pc = 0x1B6FECu;
            goto label_1b6fec;
        }
    }
    ctx->pc = 0x1B6FD8u;
label_1b6fd8:
    // 0x1b6fd8: 0xc06df82  jal         func_1B7E08
    ctx->pc = 0x1B6FD8u;
    SET_GPR_U32(ctx, 31, 0x1B6FE0u);
    ctx->pc = 0x1B7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E08u, 0x1B6FD8u, 0x1B6FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FE0u;
label_1b6fe0:
    // 0x1b6fe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6fe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6fe8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1b6fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1b6fec:
    // 0x1b6fec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ff0:
    // 0x1b6ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1b7000u;
}
