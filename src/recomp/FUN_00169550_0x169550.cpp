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

// Function: FUN_00169550
// Address: 0x169550 - 0x169608
void FUN_00169550_0x169550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169550_0x169550");
#endif

    switch (ctx->pc) {
        case 0x169570u: goto label_169570;
        case 0x16959cu: goto label_16959c;
        case 0x1695a4u: goto label_1695a4;
        case 0x1695acu: goto label_1695ac;
        case 0x1695bcu: goto label_1695bc;
        case 0x1695c4u: goto label_1695c4;
        case 0x1695d8u: goto label_1695d8;
        case 0x169604u: goto label_169604;
        default: break;
    }

    ctx->pc = 0x169550u;

    // 0x169550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169558: 0x8f8386ec  lw          $v1, -0x7914($gp)
    ctx->pc = 0x169558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x16955c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x169560: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x169560u;
    {
        const bool branch_taken_0x169560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169560u;
        // 0x169564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169560) {
            ctx->pc = 0x169604u;
            goto label_169604;
        }
    }
    ctx->pc = 0x169568u;
    // 0x169568: 0xc06641a  jal         func_199068
    ctx->pc = 0x169568u;
    SET_GPR_U32(ctx, 31, 0x169570u);
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x169568u, 0x169570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169570u;
label_169570:
    // 0x169570: 0x8f8687b0  lw          $a2, -0x7850($gp)
    ctx->pc = 0x169570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x169574: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169578: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16957c: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
    // 0x169580: 0x24636670  addiu       $v1, $v1, 0x6670
    ctx->pc = 0x169580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26224));
    // 0x169584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169588: 0xdcc20060  ld          $v0, 0x60($a2)
    ctx->pc = 0x169588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x16958c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x16958cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x256620u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x256620u, _value); } while (0);
    // 0x169590: 0xdcc201d0  ld          $v0, 0x1D0($a2)
    ctx->pc = 0x169590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 464)));
    // 0x169594: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x169594u;
    SET_GPR_U32(ctx, 31, 0x16959Cu);
    ctx->pc = 0x169598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169594u;
    // 0x169598: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x169594u, 0x16959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16959Cu;
label_16959c:
    // 0x16959c: 0xc06641a  jal         func_199068
    ctx->pc = 0x16959Cu;
    SET_GPR_U32(ctx, 31, 0x1695A4u);
    ctx->pc = 0x1695A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16959Cu;
    // 0x1695a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x16959Cu, 0x1695A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695A4u;
label_1695a4:
    // 0x1695a4: 0xc066998  jal         func_19A660
    ctx->pc = 0x1695A4u;
    SET_GPR_U32(ctx, 31, 0x1695ACu);
    ctx->pc = 0x1695A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A4u;
    // 0x1695a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1695A4u, 0x1695ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695ACu;
label_1695ac:
    // 0x1695ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1695b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1695b4: 0xc066bc0  jal         func_19AF00
    ctx->pc = 0x1695B4u;
    SET_GPR_U32(ctx, 31, 0x1695BCu);
    ctx->pc = 0x1695B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695B4u;
    // 0x1695b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AF00u, 0x1695B4u, 0x1695BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695BCu;
label_1695bc:
    // 0x1695bc: 0xc066998  jal         func_19A660
    ctx->pc = 0x1695BCu;
    SET_GPR_U32(ctx, 31, 0x1695C4u);
    ctx->pc = 0x1695C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695BCu;
    // 0x1695c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1695BCu, 0x1695C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695C4u;
label_1695c4:
    // 0x1695c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1695c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1695c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1695c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695cc: 0x24a565d0  addiu       $a1, $a1, 0x65D0
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
    // 0x1695d0: 0xc066aa2  jal         func_19AA88
    ctx->pc = 0x1695D0u;
    SET_GPR_U32(ctx, 31, 0x1695D8u);
    ctx->pc = 0x1695D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695D0u;
    // 0x1695d4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AA88u, 0x1695D0u, 0x1695D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695D8u;
label_1695d8:
    // 0x1695d8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1695d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1695dc: 0x8c220508  lw          $v0, 0x508($at)
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290508u));
    // 0x1695e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1695E0u;
    {
        const bool branch_taken_0x1695e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695e0) {
            ctx->pc = 0x1695F4u;
            goto label_1695f4;
        }
    }
    ctx->pc = 0x1695E8u;
    // 0x1695e8: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1695e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1695ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1695ECu;
    {
        const bool branch_taken_0x1695ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695ECu;
        // 0x1695f0: 0x244401c0  addiu       $a0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695ec) {
            ctx->pc = 0x1695FCu;
            goto label_1695fc;
        }
    }
    ctx->pc = 0x1695F4u;
label_1695f4:
    // 0x1695f4: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1695f8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1695fc:
    // 0x1695fc: 0xc066322  jal         func_198C88
    ctx->pc = 0x1695FCu;
    SET_GPR_U32(ctx, 31, 0x169604u);
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x1695FCu, 0x169604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169604u;
label_169604:
    // 0x169604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x169608u;
}
