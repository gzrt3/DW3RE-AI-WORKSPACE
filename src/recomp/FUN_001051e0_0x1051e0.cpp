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

// Function: FUN_001051e0
// Address: 0x1051e0 - 0x105294
void FUN_001051e0_0x1051e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001051e0_0x1051e0");
#endif

    switch (ctx->pc) {
        case 0x1051f0u: goto label_1051f0;
        case 0x1051f8u: goto label_1051f8;
        case 0x10521cu: goto label_10521c;
        case 0x105224u: goto label_105224;
        case 0x105238u: goto label_105238;
        case 0x105240u: goto label_105240;
        case 0x105250u: goto label_105250;
        case 0x105268u: goto label_105268;
        default: break;
    }

    ctx->pc = 0x1051e0u;

    // 0x1051e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1051e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1051e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1051e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1051e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1051e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1051ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1051ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1051f0:
    // 0x1051f0: 0xc06c208  jal         func_1B0820
    ctx->pc = 0x1051F0u;
    SET_GPR_U32(ctx, 31, 0x1051F8u);
    ctx->pc = 0x1B0820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0820u, 0x1051F0u, 0x1051F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051F8u;
label_1051f8:
    // 0x1051f8: 0x0  nop
    ctx->pc = 0x1051f8u;
    // NOP
    // 0x1051fc: 0x0  nop
    ctx->pc = 0x1051fcu;
    // NOP
    // 0x105200: 0x0  nop
    ctx->pc = 0x105200u;
    // NOP
    // 0x105204: 0x0  nop
    ctx->pc = 0x105204u;
    // NOP
    // 0x105208: 0x0  nop
    ctx->pc = 0x105208u;
    // NOP
    // 0x10520c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10520Cu;
    {
        const bool branch_taken_0x10520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10520c) {
            ctx->pc = 0x1051F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1051f0;
        }
    }
    ctx->pc = 0x105214u;
    // 0x105214: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x105214u;
    SET_GPR_U32(ctx, 31, 0x10521Cu);
    ctx->pc = 0x105218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105214u;
    // 0x105218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x105214u, 0x10521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10521Cu;
label_10521c:
    // 0x10521c: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x10521Cu;
    SET_GPR_U32(ctx, 31, 0x105224u);
    ctx->pc = 0x105220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10521Cu;
    // 0x105220: 0x8f828470  lw          $v0, -0x7B90($gp) (Delay Slot)
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x10521Cu, 0x105224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105224u;
label_105224:
    // 0x105224: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x105224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x105228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105228u;
    {
        const bool branch_taken_0x105228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105228) {
            ctx->pc = 0x105240u;
            goto label_105240;
        }
    }
    ctx->pc = 0x105230u;
    // 0x105230: 0xc05af18  jal         func_16BC60
    ctx->pc = 0x105230u;
    SET_GPR_U32(ctx, 31, 0x105238u);
    ctx->pc = 0x16BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC60u, 0x105230u, 0x105238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105238u;
label_105238:
    // 0x105238: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x105238u;
    SET_GPR_U32(ctx, 31, 0x105240u);
    ctx->pc = 0x10523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105238u;
    // 0x10523c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x105238u, 0x105240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105240u;
label_105240:
    // 0x105240: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x105240u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x105244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x105244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105248: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x105248u;
    {
        const bool branch_taken_0x105248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105248u;
        // 0x10524c: 0x26105150  addiu       $s0, $s0, 0x5150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105248) {
            ctx->pc = 0x105278u;
            goto label_105278;
        }
    }
    ctx->pc = 0x105250u;
label_105250:
    // 0x105250: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x105250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x105254: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x105254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105258: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105258u;
    {
        const bool branch_taken_0x105258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x105258) {
            ctx->pc = 0x105268u;
            goto label_105268;
        }
    }
    ctx->pc = 0x105260u;
    // 0x105260: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x105260u;
    SET_GPR_U32(ctx, 31, 0x105268u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x105260u, 0x105268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105268u;
label_105268:
    // 0x105268: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x105268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10526c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x10526cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x105270: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x105274: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_105278:
    // 0x105278: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x10527c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10527cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105280: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x105280u;
    {
        const bool branch_taken_0x105280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105280) {
            ctx->pc = 0x105250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105250;
        }
    }
    ctx->pc = 0x105288u;
    // 0x105288: 0xaf808470  sw          $zero, -0x7B90($gp)
    ctx->pc = 0x105288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 0));
    // 0x10528c: 0xaf80846c  sw          $zero, -0x7B94($gp)
    ctx->pc = 0x10528cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 0));
    // 0x105290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x105294u;
}
