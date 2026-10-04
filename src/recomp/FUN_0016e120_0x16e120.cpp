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

// Function: FUN_0016e120
// Address: 0x16e120 - 0x16e27c
void FUN_0016e120_0x16e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e120_0x16e120");
#endif

    switch (ctx->pc) {
        case 0x16e18cu: goto label_16e18c;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e200u: goto label_16e200;
        case 0x16e24cu: goto label_16e24c;
        case 0x16e268u: goto label_16e268;
        default: break;
    }

    ctx->pc = 0x16e120u;

    // 0x16e120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e124: 0x288113de  slti        $at, $a0, 0x13DE
    ctx->pc = 0x16e124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5086) ? 1 : 0);
    // 0x16e128: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E128u;
    {
        const bool branch_taken_0x16e128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E128u;
        // 0x16e12c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e128) {
            ctx->pc = 0x16E138u;
            goto label_16e138;
        }
    }
    ctx->pc = 0x16E130u;
    // 0x16e130: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E130u;
    {
        const bool branch_taken_0x16e130 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x16e130) {
            ctx->pc = 0x16E140u;
            goto label_16e140;
        }
    }
    ctx->pc = 0x16E138u;
label_16e138:
    // 0x16e138: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x16E138u;
    {
        const bool branch_taken_0x16e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E138u;
        // 0x16e13c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e138) {
            ctx->pc = 0x16E278u;
            goto label_16e278;
        }
    }
    ctx->pc = 0x16E140u;
label_16e140:
    // 0x16e140: 0x8f828184  lw          $v0, -0x7E7C($gp)
    ctx->pc = 0x16e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16e144: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E144u;
    {
        const bool branch_taken_0x16e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x16E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E144u;
        // 0x16e148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e144) {
            ctx->pc = 0x16E154u;
            goto label_16e154;
        }
    }
    ctx->pc = 0x16E14Cu;
    // 0x16e14c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x16E14Cu;
    {
        const bool branch_taken_0x16e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E14Cu;
        // 0x16e150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e14c) {
            ctx->pc = 0x16E27Cu;
            return;
        }
    }
    ctx->pc = 0x16E154u;
label_16e154:
    // 0x16e154: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16e158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e15c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E15Cu;
    {
        const bool branch_taken_0x16e15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E15Cu;
        // 0x16e160: 0xaf848184  sw          $a0, -0x7E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e15c) {
            ctx->pc = 0x16E170u;
            goto label_16e170;
        }
    }
    ctx->pc = 0x16E164u;
    // 0x16e164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e168: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E168u;
    {
        const bool branch_taken_0x16e168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e168) {
            ctx->pc = 0x16E184u;
            goto label_16e184;
        }
    }
    ctx->pc = 0x16E170u;
label_16e170:
    // 0x16e170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e178: 0xaf8386fc  sw          $v1, -0x7904($gp)
    ctx->pc = 0x16e178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 3));
    // 0x16e17c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16E17Cu;
    {
        const bool branch_taken_0x16e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E17Cu;
        // 0x16e180: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e17c) {
            ctx->pc = 0x16E278u;
            goto label_16e278;
        }
    }
    ctx->pc = 0x16E184u;
label_16e184:
    // 0x16e184: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x16E184u;
    SET_GPR_U32(ctx, 31, 0x16E18Cu);
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x16E184u, 0x16E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E18Cu;
label_16e18c:
    // 0x16e18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16e190: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16E190u;
    {
        const bool branch_taken_0x16e190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e190) {
            ctx->pc = 0x16E1D4u;
            goto label_16e1d4;
        }
    }
    ctx->pc = 0x16E198u;
    // 0x16e198: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16e19c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16E19Cu;
    {
        const bool branch_taken_0x16e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E19Cu;
        // 0x16e1a0: 0xaf808180  sw          $zero, -0x7E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e19c) {
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E1A4u;
    // 0x16e1a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1a8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16e1ac: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e1b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e1b4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1b8: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16e1bc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1c0: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e1c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16e1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16e1c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16E1CCu;
    {
        const bool branch_taken_0x16e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1CCu;
        // 0x16e1d0: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1cc) {
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E1D4u;
label_16e1d4:
    // 0x16e1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e1d8: 0xaf828180  sw          $v0, -0x7E80($gp)
    ctx->pc = 0x16e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 2));
label_16e1dc:
    // 0x16e1dc: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e1e0: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16e1e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E1E4u;
    {
        const bool branch_taken_0x16e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e1e4) {
            ctx->pc = 0x16E210u;
            goto label_16e210;
        }
    }
    ctx->pc = 0x16E1ECu;
label_16e1ec:
    // 0x16e1ec: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e1f0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16e1f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16e1f8: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16E1F8u;
    SET_GPR_U32(ctx, 31, 0x16E200u);
    ctx->pc = 0x16E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1F8u;
    // 0x16e1fc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16E1F8u, 0x16E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E200u;
label_16e200:
    // 0x16e200: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e204: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16E204u;
    {
        const bool branch_taken_0x16e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e204) {
            ctx->pc = 0x16E1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e1ec;
        }
    }
    ctx->pc = 0x16E20Cu;
    // 0x16e20c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16e210:
    // 0x16e210: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e214: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16e214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16e218: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0
    ctx->pc = 0x16e218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    // 0x16e21c: 0x3c032a07  lui         $v1, 0x2A07
    ctx->pc = 0x16e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10759 << 16));
    // 0x16e220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e224: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16e228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16e22c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e234: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
    // 0x16e238: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e23c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E23Cu;
    {
        const bool branch_taken_0x16e23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E23Cu;
        // 0x16e240: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e23c) {
            ctx->pc = 0x16E260u;
            goto label_16e260;
        }
    }
    ctx->pc = 0x16E244u;
    // 0x16e244: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16E244u;
    SET_GPR_U32(ctx, 31, 0x16E24Cu);
    ctx->pc = 0x16E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E244u;
    // 0x16e248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16E244u, 0x16E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E24Cu;
label_16e24c:
    // 0x16e24c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e250: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E250u;
    {
        const bool branch_taken_0x16e250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e250) {
            ctx->pc = 0x16E25Cu;
            goto label_16e25c;
        }
    }
    ctx->pc = 0x16E258u;
    // 0x16e258: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16e258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16e25c:
    // 0x16e25c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e260:
    // 0x16e260: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16E260u;
    SET_GPR_U32(ctx, 31, 0x16E268u);
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16E260u, 0x16E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E268u;
label_16e268:
    // 0x16e268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e270: 0xaf8386fc  sw          $v1, -0x7904($gp)
    ctx->pc = 0x16e270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 3));
    // 0x16e274: 0xaf828700  sw          $v0, -0x7900($gp)
    ctx->pc = 0x16e274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
label_16e278:
    // 0x16e278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16e27cu;
}
