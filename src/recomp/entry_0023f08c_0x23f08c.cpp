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

// Function: entry_0023f08c
// Address: 0x23f08c - 0x23f2b8
void entry_0023f08c_0x23f08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f08c_0x23f08c");
#endif

    switch (ctx->pc) {
        case 0x23f0acu: goto label_23f0ac;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f124u: goto label_23f124;
        case 0x23f14cu: goto label_23f14c;
        case 0x23f170u: goto label_23f170;
        case 0x23f220u: goto label_23f220;
        case 0x23f268u: goto label_23f268;
        default: break;
    }

    ctx->pc = 0x23f08cu;

    // 0x23f08c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f090: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23f090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23f094: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F094u;
    {
        const bool branch_taken_0x23f094 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23f094) {
            ctx->pc = 0x23F098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F094u;
            // 0x23f098: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F0B8u;
            goto label_23f0b8;
        }
    }
    ctx->pc = 0x23F09Cu;
    // 0x23f09c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0a4: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x23F0A4u;
    SET_GPR_U32(ctx, 31, 0x23F0ACu);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x23F0A4u, 0x23F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0ACu;
label_23f0ac:
    // 0x23f0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0b0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23f0b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f0b8:
    // 0x23f0b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23f0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23f0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23f0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x23f0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0cc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x23f0ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0d0: 0xc08dd34  jal         func_2374D0
    ctx->pc = 0x23F0D0u;
    SET_GPR_U32(ctx, 31, 0x23F0D8u);
    ctx->pc = 0x23F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0D0u;
    // 0x23f0d4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2374D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2374D0u, 0x23F0D0u, 0x23F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0D8u;
label_23f0d8:
    // 0x23f0d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23f0d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0dc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x23f0e0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F0E0u;
    {
        const bool branch_taken_0x23f0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E0u;
        // 0x23f0e4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0e0) {
            ctx->pc = 0x23F0F0u;
            goto label_23f0f0;
        }
    }
    ctx->pc = 0x23F0E8u;
    // 0x23f0e8: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F0E8u;
    {
        const bool branch_taken_0x23f0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E8u;
        // 0x23f0ec: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0e8) {
            ctx->pc = 0x23F0FCu;
            goto label_23f0fc;
        }
    }
    ctx->pc = 0x23F0F0u;
label_23f0f0:
    // 0x23f0f0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23f0f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23F0F4u;
    {
        const bool branch_taken_0x23f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F4u;
        // 0x23f0f8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0f4) {
            ctx->pc = 0x23F198u;
            goto label_23f198;
        }
    }
    ctx->pc = 0x23F0FCu;
label_23f0fc:
    // 0x23f0fc: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23F0FCu;
    {
        const bool branch_taken_0x23f0fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0FCu;
        // 0x23f100: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0fc) {
            ctx->pc = 0x23F13Cu;
            goto label_23f13c;
        }
    }
    ctx->pc = 0x23F104u;
    // 0x23f104: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x23f104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23f108: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23f10c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23F10Cu;
    {
        const bool branch_taken_0x23f10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f10c) {
            ctx->pc = 0x23F110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F10Cu;
            // 0x23f110: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F138u;
            goto label_23f138;
        }
    }
    ctx->pc = 0x23F114u;
    // 0x23f114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f11c: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x23F11Cu;
    SET_GPR_U32(ctx, 31, 0x23F124u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x23F11Cu, 0x23F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F124u;
label_23f124:
    // 0x23f124: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F124u;
    {
        const bool branch_taken_0x23f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F124u;
        // 0x23f128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f124) {
            ctx->pc = 0x23F134u;
            goto label_23f134;
        }
    }
    ctx->pc = 0x23F12Cu;
    // 0x23f12c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x23f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23f130: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x23f130u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_23f134:
    // 0x23f134: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23f138:
    // 0x23f138: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23f13c:
    // 0x23f13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f144: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x23F144u;
    SET_GPR_U32(ctx, 31, 0x23F14Cu);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x23F144u, 0x23F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F14Cu;
label_23f14c:
    // 0x23f14c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23f150: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x23f150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x23f154: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x23f154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x23f158: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x23f158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x23f15c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x23f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x23f160: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23F160u;
    {
        const bool branch_taken_0x23f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F160u;
        // 0x23f164: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f160) {
            ctx->pc = 0x23F19Cu;
            goto label_23f19c;
        }
    }
    ctx->pc = 0x23F168u;
    // 0x23f168: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x23f168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23f16c: 0x0  nop
    ctx->pc = 0x23f16cu;
    // NOP
label_23f170:
    // 0x23f170: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23f174: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x23f174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23f178: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x23f178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x23f17c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x23f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x23f180: 0x0  nop
    ctx->pc = 0x23f180u;
    // NOP
    // 0x23f184: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23F184u;
    {
        const bool branch_taken_0x23f184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F184u;
        // 0x23f188: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f184) {
            ctx->pc = 0x23F170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f170;
        }
    }
    ctx->pc = 0x23F18Cu;
    // 0x23f18c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23F18Cu;
    {
        const bool branch_taken_0x23f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F18Cu;
        // 0x23f190: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f18c) {
            ctx->pc = 0x23F1A0u;
            goto label_23f1a0;
        }
    }
    ctx->pc = 0x23F194u;
    // 0x23f194: 0x0  nop
    ctx->pc = 0x23f194u;
    // NOP
label_23f198:
    // 0x23f198: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23f19c:
    // 0x23f19c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_23f1a0:
    // 0x23f1a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23f1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1a4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x23f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x23f1a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23f1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f1ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23f1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f1b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23f1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f1b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23f1b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23f1b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23f1b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f1bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23f1bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23f1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f1c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23f1c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f1c8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x23f1c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f1cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x23f1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1D0u;
        // 0x23f1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F1D8u;
    // 0x23f1d8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x23f1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x23f1dc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x23f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23f1e0: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F1E0u;
    {
        const bool branch_taken_0x23f1e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x23F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1E0u;
        // 0x23f1e4: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1e0) {
            ctx->pc = 0x23F1F8u;
            goto label_23f1f8;
        }
    }
    ctx->pc = 0x23F1E8u;
    // 0x23f1e8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23f1ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F1ECu;
    {
        const bool branch_taken_0x23f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1ECu;
        // 0x23f1f0: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1ec) {
            ctx->pc = 0x23F1FCu;
            goto label_23f1fc;
        }
    }
    ctx->pc = 0x23F1F4u;
    // 0x23f1f4: 0x0  nop
    ctx->pc = 0x23f1f4u;
    // NOP
label_23f1f8:
    // 0x23f1f8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_23f1fc:
    // 0x23f1fc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23f1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f200: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x23f204: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x23f204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x23f208: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x23f208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23f20c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23F20Cu;
    {
        const bool branch_taken_0x23f20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F20Cu;
        // 0x23f210: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f20c) {
            ctx->pc = 0x23F290u;
            goto label_23f290;
        }
    }
    ctx->pc = 0x23F214u;
    // 0x23f214: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f218: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x23f218u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23f21c: 0x0  nop
    ctx->pc = 0x23f21cu;
    // NOP
label_23f220:
    // 0x23f220: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23f220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23f224: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F224u;
    {
        const bool branch_taken_0x23f224 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f224) {
            ctx->pc = 0x23F228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F224u;
            // 0x23f228: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F22Cu;
            goto label_23f22c;
        }
    }
    ctx->pc = 0x23F22Cu;
label_23f22c:
    // 0x23f22c: 0x1812  mflo        $v1
    ctx->pc = 0x23f22cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23f230: 0x1010  mfhi        $v0
    ctx->pc = 0x23f230u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x23f234: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f238: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x23f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x23f23c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x23f23cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23f240: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x23f240u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f244: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x23F244u;
    {
        const bool branch_taken_0x23f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f244) {
            ctx->pc = 0x23F248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F244u;
            // 0x23f248: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f220;
        }
    }
    ctx->pc = 0x23F24Cu;
    // 0x23f24c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23f24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23f250: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x23f254: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x23f254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23f258: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x23F258u;
    {
        const bool branch_taken_0x23f258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F258u;
        // 0x23f25c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f258) {
            ctx->pc = 0x23F2A8u;
            goto label_23f2a8;
        }
    }
    ctx->pc = 0x23F260u;
    // 0x23f260: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x23f260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f264: 0x0  nop
    ctx->pc = 0x23f264u;
    // NOP
label_23f268:
    // 0x23f268: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23f268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23f26c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23f26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23f270: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x23f270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x23f274: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23f274u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f278: 0x0  nop
    ctx->pc = 0x23f278u;
    // NOP
    // 0x23f27c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23F27Cu;
    {
        const bool branch_taken_0x23f27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F27Cu;
        // 0x23f280: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f27c) {
            ctx->pc = 0x23F268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f268;
        }
    }
    ctx->pc = 0x23F284u;
    // 0x23f284: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23F284u;
    {
        const bool branch_taken_0x23f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F284u;
        // 0x23f288: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f284) {
            ctx->pc = 0x23F2ACu;
            goto label_23f2ac;
        }
    }
    ctx->pc = 0x23F28Cu;
    // 0x23f28c: 0x0  nop
    ctx->pc = 0x23f28cu;
    // NOP
label_23f290:
    // 0x23f290: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23f294: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x23f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x23f298: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23f298u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f29c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23f2a0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f2a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f2a8:
    // 0x23f2a8: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_23f2ac:
    // 0x23f2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23F2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2ACu;
        // 0x23f2b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F2B4u;
    // 0x23f2b4: 0x0  nop
    ctx->pc = 0x23f2b4u;
    // NOP
    ctx->pc = 0x23f2b8u;
}
