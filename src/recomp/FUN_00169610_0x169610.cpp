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

// Function: FUN_00169610
// Address: 0x169610 - 0x1696ec
void FUN_00169610_0x169610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169610_0x169610");
#endif

    switch (ctx->pc) {
        case 0x169624u: goto label_169624;
        case 0x16962cu: goto label_16962c;
        case 0x169638u: goto label_169638;
        case 0x169644u: goto label_169644;
        case 0x169680u: goto label_169680;
        case 0x169688u: goto label_169688;
        case 0x169690u: goto label_169690;
        case 0x1696a0u: goto label_1696a0;
        case 0x1696a8u: goto label_1696a8;
        case 0x1696bcu: goto label_1696bc;
        case 0x1696e8u: goto label_1696e8;
        default: break;
    }

    ctx->pc = 0x169610u;

    // 0x169610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16961c: 0xc066440  jal         func_199100
    ctx->pc = 0x16961Cu;
    SET_GPR_U32(ctx, 31, 0x169624u);
    ctx->pc = 0x169620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16961Cu;
    // 0x169620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x16961Cu, 0x169624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169624u;
label_169624:
    // 0x169624: 0xc06641a  jal         func_199068
    ctx->pc = 0x169624u;
    SET_GPR_U32(ctx, 31, 0x16962Cu);
    ctx->pc = 0x169628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169624u;
    // 0x169628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x169624u, 0x16962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16962Cu;
label_16962c:
    // 0x16962c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x16962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x169630: 0xc066972  jal         func_19A5C8
    ctx->pc = 0x169630u;
    SET_GPR_U32(ctx, 31, 0x169638u);
    ctx->pc = 0x169634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169630u;
    // 0x169634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5C8u, 0x169630u, 0x169638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169638u;
label_169638:
    // 0x169638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16963c: 0xc066440  jal         func_199100
    ctx->pc = 0x16963Cu;
    SET_GPR_U32(ctx, 31, 0x169644u);
    ctx->pc = 0x169640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16963Cu;
    // 0x169640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x16963Cu, 0x169644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169644u;
label_169644:
    // 0x169644: 0x8f8386ec  lw          $v1, -0x7914($gp)
    ctx->pc = 0x169644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x169648: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x169648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16964c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16964Cu;
    {
        const bool branch_taken_0x16964c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16964c) {
            ctx->pc = 0x1696E8u;
            goto label_1696e8;
        }
    }
    ctx->pc = 0x169654u;
    // 0x169654: 0x8f8687b0  lw          $a2, -0x7850($gp)
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x169658: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16965c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16965cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x169660: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
    // 0x169664: 0x24636670  addiu       $v1, $v1, 0x6670
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26224));
    // 0x169668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16966c: 0xdcc20060  ld          $v0, 0x60($a2)
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x169670: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x169670u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x256620u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x256620u, _value); } while (0);
    // 0x169674: 0xdcc201d0  ld          $v0, 0x1D0($a2)
    ctx->pc = 0x169674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 464)));
    // 0x169678: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x169678u;
    SET_GPR_U32(ctx, 31, 0x169680u);
    ctx->pc = 0x16967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169678u;
    // 0x16967c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x169678u, 0x169680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169680u;
label_169680:
    // 0x169680: 0xc06641a  jal         func_199068
    ctx->pc = 0x169680u;
    SET_GPR_U32(ctx, 31, 0x169688u);
    ctx->pc = 0x169684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169680u;
    // 0x169684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x169680u, 0x169688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169688u;
label_169688:
    // 0x169688: 0xc066998  jal         func_19A660
    ctx->pc = 0x169688u;
    SET_GPR_U32(ctx, 31, 0x169690u);
    ctx->pc = 0x16968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169688u;
    // 0x16968c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x169688u, 0x169690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169690u;
label_169690:
    // 0x169690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169698: 0xc066bc0  jal         func_19AF00
    ctx->pc = 0x169698u;
    SET_GPR_U32(ctx, 31, 0x1696A0u);
    ctx->pc = 0x16969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169698u;
    // 0x16969c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AF00u, 0x169698u, 0x1696A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696A0u;
label_1696a0:
    // 0x1696a0: 0xc066998  jal         func_19A660
    ctx->pc = 0x1696A0u;
    SET_GPR_U32(ctx, 31, 0x1696A8u);
    ctx->pc = 0x1696A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696A0u;
    // 0x1696a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1696A0u, 0x1696A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696A8u;
label_1696a8:
    // 0x1696a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1696ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1696acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696b0: 0x24a565d0  addiu       $a1, $a1, 0x65D0
    ctx->pc = 0x1696b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
    // 0x1696b4: 0xc066aa2  jal         func_19AA88
    ctx->pc = 0x1696B4u;
    SET_GPR_U32(ctx, 31, 0x1696BCu);
    ctx->pc = 0x1696B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696B4u;
    // 0x1696b8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AA88u, 0x1696B4u, 0x1696BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696BCu;
label_1696bc:
    // 0x1696bc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1696bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1696c0: 0x8c220508  lw          $v0, 0x508($at)
    ctx->pc = 0x1696c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290508u));
    // 0x1696c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1696C4u;
    {
        const bool branch_taken_0x1696c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696c4) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1696CCu;
    // 0x1696cc: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1696ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1696d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1696D0u;
    {
        const bool branch_taken_0x1696d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696D0u;
        // 0x1696d4: 0x244401c0  addiu       $a0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696d0) {
            ctx->pc = 0x1696E0u;
            goto label_1696e0;
        }
    }
    ctx->pc = 0x1696D8u;
label_1696d8:
    // 0x1696d8: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1696dc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1696e0:
    // 0x1696e0: 0xc066322  jal         func_198C88
    ctx->pc = 0x1696E0u;
    SET_GPR_U32(ctx, 31, 0x1696E8u);
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x1696E0u, 0x1696E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696E8u;
label_1696e8:
    // 0x1696e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1696e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1696ecu;
}
