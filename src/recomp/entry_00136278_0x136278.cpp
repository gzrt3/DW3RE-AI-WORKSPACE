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

// Function: entry_00136278
// Address: 0x136278 - 0x1362d0
void entry_00136278_0x136278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136278_0x136278");
#endif

    switch (ctx->pc) {
        case 0x136288u: goto label_136288;
        case 0x1362a0u: goto label_1362a0;
        case 0x1362b0u: goto label_1362b0;
        case 0x1362b8u: goto label_1362b8;
        default: break;
    }

    ctx->pc = 0x136278u;

    // 0x136278: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x136278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x13627c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136280: 0xc066e26  jal         func_19B898
    ctx->pc = 0x136280u;
    SET_GPR_U32(ctx, 31, 0x136288u);
    ctx->pc = 0x136284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136280u;
    // 0x136284: 0x2484a3f0  addiu       $a0, $a0, -0x5C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x136280u, 0x136288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136288u;
label_136288:
    // 0x136288: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x136288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x13628c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13628cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136290: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x136294: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x136294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x136298: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x136298u;
    SET_GPR_U32(ctx, 31, 0x1362A0u);
    ctx->pc = 0x13629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136298u;
    // 0x13629c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x136298u, 0x1362A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362A0u;
label_1362a0:
    // 0x1362a0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1362a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1362a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362a8: 0xc04d920  jal         func_136480
    ctx->pc = 0x1362A8u;
    SET_GPR_U32(ctx, 31, 0x1362B0u);
    ctx->pc = 0x1362ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362A8u;
    // 0x1362ac: 0xe420a3f4  swc1        $f0, -0x5C0C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943732), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136480u, 0x1362A8u, 0x1362B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362B0u;
label_1362b0:
    // 0x1362b0: 0xc05a67c  jal         func_1699F0
    ctx->pc = 0x1362B0u;
    SET_GPR_U32(ctx, 31, 0x1362B8u);
    ctx->pc = 0x1362B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362B0u;
    // 0x1362b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699F0u, 0x1362B0u, 0x1362B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362B8u;
label_1362b8:
    // 0x1362b8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1362b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1362bc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1362bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1362c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1362C0u;
    {
        const bool branch_taken_0x1362c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362C0u;
        // 0x1362c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362c0) {
            ctx->pc = 0x1362D0u;
            return;
        }
    }
    ctx->pc = 0x1362C8u;
    // 0x1362c8: 0xc05a67c  jal         func_1699F0
    ctx->pc = 0x1362C8u;
    SET_GPR_U32(ctx, 31, 0x1362D0u);
    ctx->pc = 0x1699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699F0u, 0x1362C8u, 0x1362D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362D0u;
}
