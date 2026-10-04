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

// Function: FUN_001471d0
// Address: 0x1471d0 - 0x1473a8
void FUN_001471d0_0x1471d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001471d0_0x1471d0");
#endif

    switch (ctx->pc) {
        case 0x147218u: goto label_147218;
        case 0x147238u: goto label_147238;
        case 0x147254u: goto label_147254;
        case 0x147280u: goto label_147280;
        case 0x1472a0u: goto label_1472a0;
        case 0x1472d4u: goto label_1472d4;
        case 0x147310u: goto label_147310;
        case 0x147328u: goto label_147328;
        case 0x147340u: goto label_147340;
        case 0x147364u: goto label_147364;
        case 0x147380u: goto label_147380;
        case 0x1473a0u: goto label_1473a0;
        default: break;
    }

    ctx->pc = 0x1471d0u;

    // 0x1471d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1471d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1471d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1471d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1471d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1471dc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1471dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1471e0: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1471e4: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1471E4u;
    {
        const bool branch_taken_0x1471e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1471E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E4u;
        // 0x1471e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e4) {
            ctx->pc = 0x1472A8u;
            goto label_1472a8;
        }
    }
    ctx->pc = 0x1471ECu;
    // 0x1471ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1471ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1471f0: 0x90244af3  lbu         $a0, 0x4AF3($at)
    ctx->pc = 0x1471f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334AF3u));
    // 0x1471f4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1471f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1471f8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1471F8u;
    {
        const bool branch_taken_0x1471f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471F8u;
        // 0x1471fc: 0x30830003  andi        $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471f8) {
            ctx->pc = 0x147224u;
            goto label_147224;
        }
    }
    ctx->pc = 0x147200u;
    // 0x147200: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x147200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x147204: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147204u;
    {
        const bool branch_taken_0x147204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147204) {
            ctx->pc = 0x147220u;
            goto label_147220;
        }
    }
    ctx->pc = 0x14720Cu;
    // 0x14720c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14720cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147210: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147210u;
    SET_GPR_U32(ctx, 31, 0x147218u);
    ctx->pc = 0x147214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147210u;
    // 0x147214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147210u, 0x147218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147218u;
label_147218:
    // 0x147218: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x147218u;
    {
        const bool branch_taken_0x147218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147218u;
        // 0x14721c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147218) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147220u;
label_147220:
    // 0x147220: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x147220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_147224:
    // 0x147224: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147224u;
    {
        const bool branch_taken_0x147224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147224u;
        // 0x147228: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147224) {
            ctx->pc = 0x147240u;
            goto label_147240;
        }
    }
    ctx->pc = 0x14722Cu;
    // 0x14722c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147230: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147230u;
    SET_GPR_U32(ctx, 31, 0x147238u);
    ctx->pc = 0x147234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147230u;
    // 0x147234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147230u, 0x147238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147238u;
label_147238:
    // 0x147238: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x147238u;
    {
        const bool branch_taken_0x147238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147238u;
        // 0x14723c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147238) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147240u;
label_147240:
    // 0x147240: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147240u;
    {
        const bool branch_taken_0x147240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147240) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x147248u;
    // 0x147248: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14724c: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x14724Cu;
    SET_GPR_U32(ctx, 31, 0x147254u);
    ctx->pc = 0x147250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14724Cu;
    // 0x147250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x14724Cu, 0x147254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147254u;
label_147254:
    // 0x147254: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x147254u;
    {
        const bool branch_taken_0x147254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147254u;
        // 0x147258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147254) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x14725Cu;
label_14725c:
    // 0x14725c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x14725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x147260: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x147260u;
    {
        const bool branch_taken_0x147260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147260u;
        // 0x147264: 0x3083000c  andi        $v1, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147260) {
            ctx->pc = 0x14728Cu;
            goto label_14728c;
        }
    }
    ctx->pc = 0x147268u;
    // 0x147268: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x147268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x14726c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14726Cu;
    {
        const bool branch_taken_0x14726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14726c) {
            ctx->pc = 0x147288u;
            goto label_147288;
        }
    }
    ctx->pc = 0x147274u;
    // 0x147274: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147278: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147278u;
    SET_GPR_U32(ctx, 31, 0x147280u);
    ctx->pc = 0x14727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147278u;
    // 0x14727c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147278u, 0x147280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147280u;
label_147280:
    // 0x147280: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x147280u;
    {
        const bool branch_taken_0x147280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147280u;
        // 0x147284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147280) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147288u;
label_147288:
    // 0x147288: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x147288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_14728c:
    // 0x14728c: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x14728Cu;
    {
        const bool branch_taken_0x14728c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14728c) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147294u;
    // 0x147294: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x147294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147298: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147298u;
    SET_GPR_U32(ctx, 31, 0x1472A0u);
    ctx->pc = 0x14729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147298u;
    // 0x14729c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147298u, 0x1472A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472A0u;
label_1472a0:
    // 0x1472a0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1472A0u;
    {
        const bool branch_taken_0x1472a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472A0u;
        // 0x1472a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472a0) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x1472A8u;
label_1472a8:
    // 0x1472a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1472ac: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1472ACu;
    {
        const bool branch_taken_0x1472ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1472B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472ACu;
        // 0x1472b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472ac) {
            ctx->pc = 0x147348u;
            goto label_147348;
        }
    }
    ctx->pc = 0x1472B4u;
    // 0x1472b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1472b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1472b8: 0x90254af3  lbu         $a1, 0x4AF3($at)
    ctx->pc = 0x1472b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334AF3u));
    // 0x1472bc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1472bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1472c0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1472C0u;
    {
        const bool branch_taken_0x1472c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472C0u;
        // 0x1472c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472c0) {
            ctx->pc = 0x1472DCu;
            goto label_1472dc;
        }
    }
    ctx->pc = 0x1472C8u;
    // 0x1472c8: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1472c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1472cc: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x1472CCu;
    SET_GPR_U32(ctx, 31, 0x1472D4u);
    ctx->pc = 0x1472D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472CCu;
    // 0x1472d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x1472CCu, 0x1472D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D4u;
label_1472d4:
    // 0x1472d4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1472D4u;
    {
        const bool branch_taken_0x1472d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472D4u;
        // 0x1472d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472d4) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x1472DCu;
label_1472dc:
    // 0x1472dc: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1472dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1472e0: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1472e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x1472e4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1472E4u;
    {
        const bool branch_taken_0x1472e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1472E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472E4u;
        // 0x1472e8: 0x30a30010  andi        $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472e4) {
            ctx->pc = 0x1472FCu;
            goto label_1472fc;
        }
    }
    ctx->pc = 0x1472ECu;
    // 0x1472ec: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1472f0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1472F0u;
    {
        const bool branch_taken_0x1472f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1472F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472F0u;
        // 0x1472f4: 0x30a30010  andi        $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472f0) {
            ctx->pc = 0x147330u;
            goto label_147330;
        }
    }
    ctx->pc = 0x1472F8u;
    // 0x1472f8: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x1472f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_1472fc:
    // 0x1472fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1472FCu;
    {
        const bool branch_taken_0x1472fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472FCu;
        // 0x147300: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472fc) {
            ctx->pc = 0x147318u;
            goto label_147318;
        }
    }
    ctx->pc = 0x147304u;
    // 0x147304: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147308: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147308u;
    SET_GPR_U32(ctx, 31, 0x147310u);
    ctx->pc = 0x14730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147308u;
    // 0x14730c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147308u, 0x147310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147310u;
label_147310:
    // 0x147310: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x147310u;
    {
        const bool branch_taken_0x147310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147310u;
        // 0x147314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147310) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147318u;
label_147318:
    // 0x147318: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x147318u;
    {
        const bool branch_taken_0x147318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147318u;
        // 0x14731c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147318) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147320u;
    // 0x147320: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147320u;
    SET_GPR_U32(ctx, 31, 0x147328u);
    ctx->pc = 0x147324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147320u;
    // 0x147324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147320u, 0x147328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147328u;
label_147328:
    // 0x147328: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147328u;
    {
        const bool branch_taken_0x147328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147328u;
        // 0x14732c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147328) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147330u;
label_147330:
    // 0x147330: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x147330u;
    {
        const bool branch_taken_0x147330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147330u;
        // 0x147334: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147330) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147338u;
    // 0x147338: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147338u;
    SET_GPR_U32(ctx, 31, 0x147340u);
    ctx->pc = 0x14733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147338u;
    // 0x14733c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147338u, 0x147340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147340u;
label_147340:
    // 0x147340: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x147340u;
    {
        const bool branch_taken_0x147340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147340u;
        // 0x147344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147340) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147348u;
label_147348:
    // 0x147348: 0x90244af3  lbu         $a0, 0x4AF3($at)
    ctx->pc = 0x147348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
    // 0x14734c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x14734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x147350: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147350u;
    {
        const bool branch_taken_0x147350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147350u;
        // 0x147354: 0x30830018  andi        $v1, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147350) {
            ctx->pc = 0x14736Cu;
            goto label_14736c;
        }
    }
    ctx->pc = 0x147358u;
    // 0x147358: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14735c: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x14735Cu;
    SET_GPR_U32(ctx, 31, 0x147364u);
    ctx->pc = 0x147360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14735Cu;
    // 0x147360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x14735Cu, 0x147364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147364u;
label_147364:
    // 0x147364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x147364u;
    {
        const bool branch_taken_0x147364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147364u;
        // 0x147368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147364) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x14736Cu;
label_14736c:
    // 0x14736c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14736c) {
            ctx->pc = 0x147388u;
            goto label_147388;
        }
    }
    ctx->pc = 0x147374u;
    // 0x147374: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147378: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147378u;
    SET_GPR_U32(ctx, 31, 0x147380u);
    ctx->pc = 0x14737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147378u;
    // 0x14737c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147378u, 0x147380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147380u;
label_147380:
    // 0x147380: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x147380u;
    {
        const bool branch_taken_0x147380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147380u;
        // 0x147384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147380) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147388u;
label_147388:
    // 0x147388: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x147388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x14738c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14738Cu;
    {
        const bool branch_taken_0x14738c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14738c) {
            ctx->pc = 0x1473A4u;
            goto label_1473a4;
        }
    }
    ctx->pc = 0x147394u;
    // 0x147394: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x147394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147398: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147398u;
    SET_GPR_U32(ctx, 31, 0x1473A0u);
    ctx->pc = 0x14739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147398u;
    // 0x14739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147398u, 0x1473A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473A0u;
label_1473a0:
    // 0x1473a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1473a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1473a4:
    // 0x1473a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1473a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1473a8u;
}
