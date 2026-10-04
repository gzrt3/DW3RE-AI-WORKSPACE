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

// Function: FUN_001239b0
// Address: 0x1239b0 - 0x123a20
void FUN_001239b0_0x1239b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001239b0_0x1239b0");
#endif

    switch (ctx->pc) {
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a14u: goto label_123a14;
        case 0x123a1cu: goto label_123a1c;
        default: break;
    }

    ctx->pc = 0x1239b0u;

    // 0x1239b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1239b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1239b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1239b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1239b8: 0xc0590a0  jal         func_164280
    ctx->pc = 0x1239B8u;
    SET_GPR_U32(ctx, 31, 0x1239C0u);
    ctx->pc = 0x164280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164280u, 0x1239B8u, 0x1239C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239C0u;
label_1239c0:
    // 0x1239c0: 0xc0722ac  jal         func_1C8AB0
    ctx->pc = 0x1239C0u;
    SET_GPR_U32(ctx, 31, 0x1239C8u);
    ctx->pc = 0x1C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8AB0u, 0x1239C0u, 0x1239C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239C8u;
label_1239c8:
    // 0x1239c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1239c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1239cc: 0xc072218  jal         func_1C8860
    ctx->pc = 0x1239CCu;
    SET_GPR_U32(ctx, 31, 0x1239D4u);
    ctx->pc = 0x1239D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239CCu;
    // 0x1239d0: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8860u, 0x1239CCu, 0x1239D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239D4u;
label_1239d4:
    // 0x1239d4: 0xc0713fc  jal         func_1C4FF0
    ctx->pc = 0x1239D4u;
    SET_GPR_U32(ctx, 31, 0x1239DCu);
    ctx->pc = 0x1239D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239D4u;
    // 0x1239d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF0u, 0x1239D4u, 0x1239DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239DCu;
label_1239dc:
    // 0x1239dc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1239dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1239e0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1239e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1239e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1239E4u;
    {
        const bool branch_taken_0x1239e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239E4u;
        // 0x1239e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239e4) {
            ctx->pc = 0x123A04u;
            goto label_123a04;
        }
    }
    ctx->pc = 0x1239ECu;
    // 0x1239ec: 0xc07e020  jal         func_1F8080
    ctx->pc = 0x1239ECu;
    SET_GPR_U32(ctx, 31, 0x1239F4u);
    ctx->pc = 0x1239F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239ECu;
    // 0x1239f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8080u, 0x1239ECu, 0x1239F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239F4u;
label_1239f4:
    // 0x1239f4: 0xc07e020  jal         func_1F8080
    ctx->pc = 0x1239F4u;
    SET_GPR_U32(ctx, 31, 0x1239FCu);
    ctx->pc = 0x1239F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239F4u;
    // 0x1239f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8080u, 0x1239F4u, 0x1239FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239FCu;
label_1239fc:
    // 0x1239fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1239FCu;
    {
        const bool branch_taken_0x1239fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239fc) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x123A04u;
label_123a04:
    // 0x123a04: 0xc07e020  jal         func_1F8080
    ctx->pc = 0x123A04u;
    SET_GPR_U32(ctx, 31, 0x123A0Cu);
    ctx->pc = 0x1F8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8080u, 0x123A04u, 0x123A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A0Cu;
label_123a0c:
    // 0x123a0c: 0xc04e4f0  jal         func_1393C0
    ctx->pc = 0x123A0Cu;
    SET_GPR_U32(ctx, 31, 0x123A14u);
    ctx->pc = 0x1393C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C0u, 0x123A0Cu, 0x123A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A14u;
label_123a14:
    // 0x123a14: 0xc049d48  jal         func_127520
    ctx->pc = 0x123A14u;
    SET_GPR_U32(ctx, 31, 0x123A1Cu);
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x123A14u, 0x123A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A1Cu;
label_123a1c:
    // 0x123a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x123a20u;
}
