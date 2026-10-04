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

// Function: FUN_0019e0a0
// Address: 0x19e0a0 - 0x19e288
void FUN_0019e0a0_0x19e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e0a0_0x19e0a0");
#endif

    switch (ctx->pc) {
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e120u: goto label_19e120;
        case 0x19e148u: goto label_19e148;
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e20cu: goto label_19e20c;
        case 0x19e214u: goto label_19e214;
        case 0x19e258u: goto label_19e258;
        default: break;
    }

    ctx->pc = 0x19e0a0u;

    // 0x19e0a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19e0a4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x19e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x19e0a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19e0a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0ac: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x19e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x19e0b0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x19e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x19e0b4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x19e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x19e0b8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19e0b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e0bc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x19e0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x19e0c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x19e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x19e0c4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x19e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x19e0c8: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x19E0C8u;
    SET_GPR_U32(ctx, 31, 0x19E0D0u);
    ctx->pc = 0x19E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0C8u;
    // 0x19e0cc: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x19E0C8u, 0x19E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19e0d4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x19e0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x19e0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x19e0dc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x19E0DCu;
    {
        const bool branch_taken_0x19e0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0DCu;
        // 0x19e0e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0dc) {
            ctx->pc = 0x19E164u;
            goto label_19e164;
        }
    }
    ctx->pc = 0x19E0E4u;
    // 0x19e0e4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19e0e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e0ec: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19e0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x19e0f0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19E0F0u;
    {
        const bool branch_taken_0x19e0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0F0u;
        // 0x19e0f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0f0) {
            ctx->pc = 0x19E168u;
            goto label_19e168;
        }
    }
    ctx->pc = 0x19E0F8u;
    // 0x19e0f8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x19e0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x19e0fc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x19e0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x19e100: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19e100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x19e104: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19e104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x19e108: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x19e108u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x19e10c: 0x3652b400  ori         $s2, $s2, 0xB400
    ctx->pc = 0x19e10cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)46080);
    // 0x19e110: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x19e110u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e114: 0x3631b020  ori         $s1, $s1, 0xB020
    ctx->pc = 0x19e114u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45088);
    // 0x19e118: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x19e118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x19e11c: 0x0  nop
    ctx->pc = 0x19e11cu;
    // NOP
label_19e120:
    // 0x19e120: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19e124: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E124u;
    {
        const bool branch_taken_0x19e124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e124) {
            ctx->pc = 0x19E148u;
            goto label_19e148;
        }
    }
    ctx->pc = 0x19E12Cu;
    // 0x19e12c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19e130: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19e134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E134u;
    {
        const bool branch_taken_0x19e134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E134u;
        // 0x19e138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e134) {
            ctx->pc = 0x19E148u;
            goto label_19e148;
        }
    }
    ctx->pc = 0x19E13Cu;
    // 0x19e13c: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x19e140: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19E140u;
    SET_GPR_U32(ctx, 31, 0x19E148u);
    ctx->pc = 0x19E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E140u;
    // 0x19e144: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19E140u, 0x19E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E148u;
label_19e148:
    // 0x19e148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19e14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E14Cu;
    {
        const bool branch_taken_0x19e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E14Cu;
        // 0x19e150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e14c) {
            ctx->pc = 0x19E168u;
            goto label_19e168;
        }
    }
    ctx->pc = 0x19E154u;
    // 0x19e154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19e158: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19e15c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19E15Cu;
    {
        const bool branch_taken_0x19e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e15c) {
            ctx->pc = 0x19E120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e120;
        }
    }
    ctx->pc = 0x19E164u;
label_19e164:
    // 0x19e164: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19e168:
    // 0x19e168: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x19e16c: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x19e16cu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x19e170: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x19e174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e178: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19e17c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19e17cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19e180: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E180u;
    {
        const bool branch_taken_0x19e180 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E180u;
        // 0x19e184: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e180) {
            ctx->pc = 0x19E1A4u;
            goto label_19e1a4;
        }
    }
    ctx->pc = 0x19E188u;
    // 0x19e188: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x19e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19e18c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E18Cu;
    {
        const bool branch_taken_0x19e18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E18Cu;
        // 0x19e190: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e18c) {
            ctx->pc = 0x19E19Cu;
            goto label_19e19c;
        }
    }
    ctx->pc = 0x19E194u;
    // 0x19e194: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19E194u;
    {
        const bool branch_taken_0x19e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E194u;
        // 0x19e198: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e194) {
            ctx->pc = 0x19E1A8u;
            goto label_19e1a8;
        }
    }
    ctx->pc = 0x19E19Cu;
label_19e19c:
    // 0x19e19c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19E19Cu;
    {
        const bool branch_taken_0x19e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E19Cu;
        // 0x19e1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e19c) {
            ctx->pc = 0x19E1A8u;
            goto label_19e1a8;
        }
    }
    ctx->pc = 0x19E1A4u;
label_19e1a4:
    // 0x19e1a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19e1a8:
    // 0x19e1a8: 0xae62083c  sw          $v0, 0x83C($s3)
    ctx->pc = 0x19e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2108), GPR_U32(ctx, 2));
    // 0x19e1ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19e1b0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19e1b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19e1b8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x19e1bc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19E1BCu;
    {
        const bool branch_taken_0x19e1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1BCu;
        // 0x19e1c0: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1bc) {
            ctx->pc = 0x19E264u;
            goto label_19e264;
        }
    }
    ctx->pc = 0x19E1C4u;
    // 0x19e1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1c8: 0x24a5a048  addiu       $a1, $a1, -0x5FB8
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942792));
    // 0x19e1cc: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x19E1CCu;
    SET_GPR_U32(ctx, 31, 0x19E1D4u);
    ctx->pc = 0x19E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1CCu;
    // 0x19e1d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x19E1CCu, 0x19E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1D4u;
label_19e1d4:
    // 0x19e1d4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19e1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e1d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e1dc: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x19e1e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1e4: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19E1E4u;
    SET_GPR_U32(ctx, 31, 0x19E1ECu);
    ctx->pc = 0x19E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1E4u;
    // 0x19e1e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19E1E4u, 0x19E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1ECu;
label_19e1ec:
    // 0x19e1ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19e1f0: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x19e1f4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x19e1f8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x19e1f8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x19e1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e200: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19e200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x19e204: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19E204u;
    SET_GPR_U32(ctx, 31, 0x19E20Cu);
    ctx->pc = 0x19E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E204u;
    // 0x19e208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19E204u, 0x19E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E20Cu;
label_19e20c:
    // 0x19e20c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x19E20Cu;
    SET_GPR_U32(ctx, 31, 0x19E214u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x19E20Cu, 0x19E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E214u;
label_19e214:
    // 0x19e214: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x19e218: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x19e218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x19e21c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x19e21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x19e220: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19e220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x19e224: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e224u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x19e228: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x19e228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x19e22c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19e230: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x19e230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x19e234: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x19e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x19e238: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x19e23c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19e23cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x19e240: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19e240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19e244: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19e244u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x19e248: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e248u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x19e24c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19e250: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x19E250u;
    SET_GPR_U32(ctx, 31, 0x19E258u);
    ctx->pc = 0x19E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E250u;
    // 0x19e254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x19E250u, 0x19E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E258u;
label_19e258:
    // 0x19e258: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19e25c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x19e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x19e260: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19e260u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 0));
label_19e264:
    // 0x19e264: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x19e264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e268: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x19e268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19e26c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x19e26cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19e270: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x19e270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e274: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x19e274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e278: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x19e278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e27c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x19e27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e280: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x19e280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e284: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19e284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x19e288u;
}
