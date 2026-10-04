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

// Function: entry_001b32b8
// Address: 0x1b32b8 - 0x1b39f4
void entry_001b32b8_0x1b32b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32b8_0x1b32b8");
#endif

    switch (ctx->pc) {
        case 0x1b3338u: goto label_1b3338;
        case 0x1b39e0u: goto label_1b39e0;
        default: break;
    }

    ctx->pc = 0x1b32b8u;

    // 0x1b32b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b32bc: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B32BCu;
    {
        const bool branch_taken_0x1b32bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b32bc) {
            ctx->pc = 0x1B32C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B32BCu;
            // 0x1b32c0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B32E8u;
            goto label_1b32e8;
        }
    }
    ctx->pc = 0x1B32C4u;
    // 0x1b32c4: 0x64301cb  bgezl       $s2, . + 4 + (0x1CB << 2)
    ctx->pc = 0x1B32C4u;
    {
        const bool branch_taken_0x1b32c4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1b32c4) {
            ctx->pc = 0x1B32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B32C4u;
            // 0x1b32c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B32CCu;
    // 0x1b32cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b32ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b32d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b32d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b32d4: 0x0  nop
    ctx->pc = 0x1b32d4u;
    // NOP
    // 0x1b32d8: 0x0  nop
    ctx->pc = 0x1b32d8u;
    // NOP
    // 0x1b32dc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1b32dcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1b32e0: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x1B32E0u;
    {
        const bool branch_taken_0x1b32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E0u;
        // 0x1b32e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32e0) {
            ctx->pc = 0x1B39F8u;
            return;
        }
    }
    ctx->pc = 0x1B32E8u;
label_1b32e8:
    // 0x1b32e8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B32E8u;
    {
        const bool branch_taken_0x1b32e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E8u;
        // 0x1b32ec: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32e8) {
            ctx->pc = 0x1B32F8u;
            goto label_1b32f8;
        }
    }
    ctx->pc = 0x1B32F0u;
    // 0x1b32f0: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x1B32F0u;
    {
        const bool branch_taken_0x1b32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32F0u;
        // 0x1b32f4: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32f0) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B32F8u;
label_1b32f8:
    // 0x1b32f8: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B32F8u;
    {
        const bool branch_taken_0x1b32f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b32f8) {
            ctx->pc = 0x1B3330u;
            goto label_1b3330;
        }
    }
    ctx->pc = 0x1B3300u;
    // 0x1b3300: 0x660000b  bltz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1B3300u;
    {
        const bool branch_taken_0x1b3300 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3300u;
        // 0x1b3304: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3300) {
            ctx->pc = 0x1B3330u;
            goto label_1b3330;
        }
    }
    ctx->pc = 0x1B3308u;
    // 0x1b3308: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b330c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3310: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b3310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3314: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b3314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3318: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b3318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b331c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b331cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3320: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b3320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3324: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3328: 0x806cf7a  j           func_1B3DE8
    ctx->pc = 0x1B3328u;
    ctx->pc = 0x1B332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3328u;
    // 0x1b332c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DE8u;
    FUN_001b3de8_0x1b3de8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B3330u;
label_1b3330:
    // 0x1b3330: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B3330u;
    SET_GPR_U32(ctx, 31, 0x1B3338u);
    ctx->pc = 0x1B3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3330u;
    // 0x1b3334: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B3330u, 0x1B3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3338u;
label_1b3338:
    // 0x1b3338: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1b333c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b3340: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1b3340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b3344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3344u;
    {
        const bool branch_taken_0x1b3344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3344u;
        // 0x1b3348: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3344) {
            ctx->pc = 0x1B3358u;
            goto label_1b3358;
        }
    }
    ctx->pc = 0x1B334Cu;
    // 0x1b334c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b334cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3350: 0x16250019  bne         $s1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B3350u;
    {
        const bool branch_taken_0x1b3350 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3350u;
        // 0x1b3354: 0x134fc2  srl         $t1, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3350) {
            ctx->pc = 0x1B33B8u;
            goto label_1b33b8;
        }
    }
    ctx->pc = 0x1B3358u;
label_1b3358:
    // 0x1b3358: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3358u;
    {
        const bool branch_taken_0x1b3358 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3358u;
        // 0x1b335c: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3358) {
            ctx->pc = 0x1B3374u;
            goto label_1b3374;
        }
    }
    ctx->pc = 0x1B3360u;
    // 0x1b3360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3368: 0x0  nop
    ctx->pc = 0x1b3368u;
    // NOP
    // 0x1b336c: 0x0  nop
    ctx->pc = 0x1b336cu;
    // NOP
    // 0x1b3370: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x1b3370u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[4];
label_1b3374:
    // 0x1b3374: 0x661019f  bgez        $s3, . + 4 + (0x19F << 2)
    ctx->pc = 0x1B3374u;
    {
        const bool branch_taken_0x1b3374 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1B3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3374u;
        // 0x1b3378: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3374) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B337Cu;
    // 0x1b337c: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1b3380: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b3384: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1b3384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1b3388: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3388u;
    {
        const bool branch_taken_0x1b3388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3388u;
        // 0x1b338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3388) {
            ctx->pc = 0x1B33A8u;
            goto label_1b33a8;
        }
    }
    ctx->pc = 0x1B3390u;
    // 0x1b3390: 0x46042001  sub.s       $f0, $f4, $f4
    ctx->pc = 0x1b3390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[4]);
    // 0x1b3394: 0x0  nop
    ctx->pc = 0x1b3394u;
    // NOP
    // 0x1b3398: 0x0  nop
    ctx->pc = 0x1b3398u;
    // NOP
    // 0x1b339c: 0x46000103  div.s       $f4, $f0, $f0
    ctx->pc = 0x1b339cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[0];
    // 0x1b33a0: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1B33A0u;
    {
        const bool branch_taken_0x1b33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33A0u;
        // 0x1b33a4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33a0) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B33A8u;
label_1b33a8:
    // 0x1b33a8: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B33A8u;
    {
        const bool branch_taken_0x1b33a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b33a8) {
            ctx->pc = 0x1B33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B33A8u;
            // 0x1b33ac: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B33B0u;
            goto label_1b33b0;
        }
    }
    ctx->pc = 0x1B33B0u;
label_1b33b0:
    // 0x1b33b0: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x1B33B0u;
    {
        const bool branch_taken_0x1b33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33B0u;
        // 0x1b33b4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33b0) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B33B8u;
label_1b33b8:
    // 0x1b33b8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x1b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1b33bc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1b33bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1b33c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B33C0u;
    {
        const bool branch_taken_0x1b33c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33C0u;
        // 0x1b33c4: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33c0) {
            ctx->pc = 0x1B33E0u;
            goto label_1b33e0;
        }
    }
    ctx->pc = 0x1B33C8u;
    // 0x1b33c8: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x1b33c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x1b33cc: 0x0  nop
    ctx->pc = 0x1b33ccu;
    // NOP
    // 0x1b33d0: 0x0  nop
    ctx->pc = 0x1b33d0u;
    // NOP
    // 0x1b33d4: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b33d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x1b33d8: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x1B33D8u;
    {
        const bool branch_taken_0x1b33d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33D8u;
        // 0x1b33dc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33d8) {
            ctx->pc = 0x1B39F8u;
            return;
        }
    }
    ctx->pc = 0x1B33E0u;
label_1b33e0:
    // 0x1b33e0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b33e4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1B33E4u;
    {
        const bool branch_taken_0x1b33e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33E4u;
        // 0x1b33e8: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33e4) {
            ctx->pc = 0x1B34E0u;
            goto label_1b34e0;
        }
    }
    ctx->pc = 0x1B33ECu;
    // 0x1b33ec: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x1b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x1b33f0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1b33f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1b33f4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1b33f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b33f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B33F8u;
    {
        const bool branch_taken_0x1b33f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33F8u;
        // 0x1b33fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f8) {
            ctx->pc = 0x1B3410u;
            goto label_1b3410;
        }
    }
    ctx->pc = 0x1B3400u;
    // 0x1b3400: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B3400u;
    {
        const bool branch_taken_0x1b3400 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3400u;
        // 0x1b3404: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3400) {
            ctx->pc = 0x1B3430u;
            goto label_1b3430;
        }
    }
    ctx->pc = 0x1B3408u;
    // 0x1b3408: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x1B3408u;
    {
        const bool branch_taken_0x1b3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3408u;
        // 0x1b340c: 0xc440adfc  lwc1        $f0, -0x5204($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3408) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B3410u;
label_1b3410:
    // 0x1b3410: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1b3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x1b3414: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1b3414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b3418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3418u;
    {
        const bool branch_taken_0x1b3418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3418u;
        // 0x1b341c: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3418) {
            ctx->pc = 0x1B3440u;
            goto label_1b3440;
        }
    }
    ctx->pc = 0x1B3420u;
    // 0x1b3420: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3420u;
    {
        const bool branch_taken_0x1b3420 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3420u;
        // 0x1b3424: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3420) {
            ctx->pc = 0x1B3430u;
            goto label_1b3430;
        }
    }
    ctx->pc = 0x1B3428u;
    // 0x1b3428: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x1B3428u;
    {
        const bool branch_taken_0x1b3428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3428u;
        // 0x1b342c: 0xc440adfc  lwc1        $f0, -0x5204($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3428) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B3430u;
label_1b3430:
    // 0x1b3430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3434: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x1B3434u;
    {
        const bool branch_taken_0x1b3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3434u;
        // 0x1b3438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3434) {
            ctx->pc = 0x1B39F8u;
            return;
        }
    }
    ctx->pc = 0x1B343Cu;
    // 0x1b343c: 0x0  nop
    ctx->pc = 0x1b343cu;
    // NOP
label_1b3440:
    // 0x1b3440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3448: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1b344c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b344cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3450: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x1b3450u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x1b3454: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b345c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1b345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1b3460: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b3460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b3464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3468: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x1b346c: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x1b346cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
    // 0x1b3470: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b3474: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x1b3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x1b3478: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1b3478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x1b347c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b347cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3480: 0x0  nop
    ctx->pc = 0x1b3480u;
    // NOP
    // 0x1b3484: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1b3484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1b3488: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x1b3488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x1b348c: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x1b348cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x1b3490: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b3494: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x1b3494u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1b3498: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x1b3498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x1b349c: 0x46056402  mul.s       $f16, $f12, $f5
    ctx->pc = 0x1b349cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x1b34a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b34a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b34a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b34a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b34a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b34a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b34ac: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1b34acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1b34b0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1b34b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b34b4: 0x46032341  sub.s       $f13, $f4, $f3
    ctx->pc = 0x1b34b4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b34b8: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x1b34b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x1b34bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b34bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b34c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b34c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b34c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b34c8: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1b34c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b34cc: 0x0  nop
    ctx->pc = 0x1b34ccu;
    // NOP
    // 0x1b34d0: 0x46103001  sub.s       $f0, $f6, $f16
    ctx->pc = 0x1b34d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[16]);
    // 0x1b34d4: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1B34D4u;
    {
        const bool branch_taken_0x1b34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34D4u;
        // 0x1b34d8: 0x46006881  sub.s       $f2, $f13, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34d4) {
            ctx->pc = 0x1B3728u;
            goto label_1b3728;
        }
    }
    ctx->pc = 0x1B34DCu;
    // 0x1b34dc: 0x0  nop
    ctx->pc = 0x1b34dcu;
    // NOP
label_1b34e0:
    // 0x1b34e0: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x1b34e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1b34e4: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x1b34e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x1b34e8: 0x111dc3  sra         $v1, $s1, 23
    ctx->pc = 0x1b34e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
    // 0x1b34ec: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b34ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b34f0: 0x2468ff81  addiu       $t0, $v1, -0x7F
    ctx->pc = 0x1b34f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x1b34f4: 0x858825  or          $s1, $a0, $a1
    ctx->pc = 0x1b34f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b34f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B34F8u;
    {
        const bool branch_taken_0x1b34f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34F8u;
        // 0x1b34fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34f8) {
            ctx->pc = 0x1B3524u;
            goto label_1b3524;
        }
    }
    ctx->pc = 0x1B3500u;
    // 0x1b3500: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b3500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1b3504: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x1b3504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x1b3508: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b3508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b350c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B350Cu;
    {
        const bool branch_taken_0x1b350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B350Cu;
        // 0x1b3510: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b350c) {
            ctx->pc = 0x1B3524u;
            goto label_1b3524;
        }
    }
    ctx->pc = 0x1B3514u;
    // 0x1b3514: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1b3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1b3518: 0x2468ff82  addiu       $t0, $v1, -0x7E
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
    // 0x1b351c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1b351cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b3520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b3520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3524:
    // 0x1b3524: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x1b3524u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3528: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1b3528u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b352c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3534: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b3538: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1b353c: 0xc421ad78  lwc1        $f1, -0x5288($at)
    ctx->pc = 0x1b353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3540: 0x46016000  add.s       $f0, $f12, $f1
    ctx->pc = 0x1b3540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1b3544: 0x46016401  sub.s       $f16, $f12, $f1
    ctx->pc = 0x1b3544u;
    ctx->f[16] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1b3548: 0x0  nop
    ctx->pc = 0x1b3548u;
    // NOP
    // 0x1b354c: 0x0  nop
    ctx->pc = 0x1b354cu;
    // NOP
    // 0x1b3550: 0x46001343  div.s       $f13, $f2, $f0
    ctx->pc = 0x1b3550u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[13] = ctx->f[2] / ctx->f[0];
    // 0x1b3554: 0x460d8502  mul.s       $f20, $f16, $f13
    ctx->pc = 0x1b3554u;
    ctx->f[20] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
    // 0x1b3558: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1b3558u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1b355c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b355cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3560: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x1b3560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b3564: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b3568: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b356c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1b356cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b3570: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1b3574: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b3574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b357c: 0x72540  sll         $a0, $a3, 21
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x1b3580: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3584: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1b3584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1b3588: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1b3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b358c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b358cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b3590: 0x0  nop
    ctx->pc = 0x1b3590u;
    // NOP
    // 0x1b3594: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x1b3594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x1b3598: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x1b359c: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x1b359cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x1b35a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b35a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b35a4: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x1b35a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x1b35a8: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x1b35a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
    // 0x1b35ac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b35acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b35b0: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x1b35b4: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x1b35b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
    // 0x1b35b8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b35b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1b35bc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1b35bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1b35c0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b35c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b35c4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b35c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1b35c8: 0x4614a382  mul.s       $f14, $f20, $f20
    ctx->pc = 0x1b35c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1b35cc: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x1b35ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x1b35d0: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1b35d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1b35d4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b35d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1b35d8: 0x46016081  sub.s       $f2, $f12, $f1
    ctx->pc = 0x1b35d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1b35dc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b35dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1b35e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b35e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b35e4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1b35e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1b35e8: 0x460f2842  mul.s       $f1, $f5, $f15
    ctx->pc = 0x1b35e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x1b35ec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b35f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b35f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b35f4: 0x46142900  add.s       $f4, $f5, $f20
    ctx->pc = 0x1b35f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x1b35f8: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b35f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1b35fc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b35fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1b3600: 0x46018041  sub.s       $f1, $f16, $f1
    ctx->pc = 0x1b3600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x1b3604: 0x460e71c2  mul.s       $f7, $f14, $f14
    ctx->pc = 0x1b3604u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x1b3608: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1b3608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1b360c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b360cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1b3610: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1b3614: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x1b3614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1b3618: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b3618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1b361c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1b361cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b3620: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1b3624: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1b3624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1b3628: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1b362c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x1b362cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1b3630: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1b3634: 0x46052b82  mul.s       $f14, $f5, $f5
    ctx->pc = 0x1b3634u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1b3638: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x1b3638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x1b363c: 0x46037080  add.s       $f2, $f14, $f3
    ctx->pc = 0x1b363cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x1b3640: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1b3640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1b3644: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1b3644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1b3648: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b3648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b364c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b364cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3650: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3654: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b3654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b3658: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x1b3658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b365c: 0x0  nop
    ctx->pc = 0x1b365cu;
    // NOP
    // 0x1b3660: 0x460378c1  sub.s       $f3, $f15, $f3
    ctx->pc = 0x1b3660u;
    ctx->f[3] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x1b3664: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x1b3664u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x1b3668: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x1b3668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x1b366c: 0x460f2c02  mul.s       $f16, $f5, $f15
    ctx->pc = 0x1b366cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x1b3670: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1b3670u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b3674: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x1b3674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1b3678: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1b3678u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b367c: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x1b367cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x1b3680: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b3680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3684: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b3688: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b3688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b368c: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1b368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1b3690: 0x0  nop
    ctx->pc = 0x1b3690u;
    // NOP
    // 0x1b3694: 0x461040c1  sub.s       $f3, $f8, $f16
    ctx->pc = 0x1b3694u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
    // 0x1b3698: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x1b3698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x1b369c: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x1b369cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x1b36a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b36a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b36a4: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x1b36a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x1b36a8: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x1b36a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
    // 0x1b36ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b36acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b36b0: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x1b36b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x1b36b4: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x1b36b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
    // 0x1b36b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b36b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b36bc: 0x460369c1  sub.s       $f7, $f13, $f3
    ctx->pc = 0x1b36bcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
    // 0x1b36c0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b36c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b36c4: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x1b36c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1b36c8: 0xc423ad80  lwc1        $f3, -0x5280($at)
    ctx->pc = 0x1b36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b36cc: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x1b36ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x1b36d0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b36d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b36d4: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x1b36d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1b36d8: 0xc424ad88  lwc1        $f4, -0x5278($at)
    ctx->pc = 0x1b36d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b36dc: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x1b36dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x1b36e0: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x1b36e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b36e4: 0x0  nop
    ctx->pc = 0x1b36e4u;
    // NOP
    // 0x1b36e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1b36e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b36ec: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1b36ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1b36f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b36f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b36f4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1b36f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1b36f8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1b36f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b36fc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b36fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b3700: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1b3700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1b3704: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b3704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b3708: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b370c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b370cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b3710: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1b3710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b3714: 0x0  nop
    ctx->pc = 0x1b3714u;
    // NOP
    // 0x1b3718: 0x460c3001  sub.s       $f0, $f6, $f12
    ctx->pc = 0x1b3718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x1b371c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b371cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b3720: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b3720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b3724: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b3724u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b3728:
    // 0x1b3728: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1b372c: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1b372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1b3730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b3734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3738: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b3738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b373c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B373Cu;
    {
        const bool branch_taken_0x1b373c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B373Cu;
        // 0x1b3740: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b373c) {
            ctx->pc = 0x1B3750u;
            goto label_1b3750;
        }
    }
    ctx->pc = 0x1B3744u;
    // 0x1b3744: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b3744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b3748: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b3748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b374c: 0x0  nop
    ctx->pc = 0x1b374cu;
    // NOP
label_1b3750:
    // 0x1b3750: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b3750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b3754: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x1b3754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b3758: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1b3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b375c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b3760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b3760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3764: 0x0  nop
    ctx->pc = 0x1b3764u;
    // NOP
    // 0x1b3768: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x1b3768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x1b376c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b376cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1b3770: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1b3770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1b3774: 0x46060a02  mul.s       $f8, $f1, $f6
    ctx->pc = 0x1b3774u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1b3778: 0x460201c0  add.s       $f7, $f0, $f2
    ctx->pc = 0x1b3778u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b377c: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x1b377cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x1b3780: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x1b3780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1b3784: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x1b3784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b3788: 0x0  nop
    ctx->pc = 0x1b3788u;
    // NOP
    // 0x1b378c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3790: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b3794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b3798: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B3798u;
    {
        const bool branch_taken_0x1b3798 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3798u;
        // 0x1b379c: 0x823024  and         $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3798) {
            ctx->pc = 0x1B3808u;
            goto label_1b3808;
        }
    }
    ctx->pc = 0x1B37A0u;
    // 0x1b37a0: 0x3c044301  lui         $a0, 0x4301
    ctx->pc = 0x1b37a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17153 << 16));
    // 0x1b37a4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b37a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b37a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B37A8u;
    {
        const bool branch_taken_0x1b37a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37a8) {
            ctx->pc = 0x1B37C8u;
            goto label_1b37c8;
        }
    }
    ctx->pc = 0x1B37B0u;
    // 0x1b37b0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b37b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1b37b4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b37b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1b37b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b37bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1B37BCu;
    {
        const bool branch_taken_0x1b37bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37BCu;
        // 0x1b37c0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37bc) {
            ctx->pc = 0x1B3848u;
            goto label_1b3848;
        }
    }
    ctx->pc = 0x1B37C4u;
    // 0x1b37c4: 0x0  nop
    ctx->pc = 0x1b37c4u;
    // NOP
label_1b37c8:
    // 0x1b37c8: 0x14c40021  bne         $a2, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B37C8u;
    {
        const bool branch_taken_0x1b37c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37c8) {
            ctx->pc = 0x1B3850u;
            goto label_1b3850;
        }
    }
    ctx->pc = 0x1B37D0u;
    // 0x1b37d0: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x1b37d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x1b37d4: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x1b37d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
    // 0x1b37d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b37d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b37dc: 0x46082041  sub.s       $f1, $f4, $f8
    ctx->pc = 0x1b37dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x1b37e0: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x1b37e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1b37e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b37e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b37e8: 0x0  nop
    ctx->pc = 0x1b37e8u;
    // NOP
    // 0x1b37ec: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1B37ECu;
    {
        const bool branch_taken_0x1b37ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37ECu;
        // 0x1b37f0: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37ec) {
            ctx->pc = 0x1B3854u;
            goto label_1b3854;
        }
    }
    ctx->pc = 0x1B37F4u;
    // 0x1b37f4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b37f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1b37f8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b37f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1b37fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3800: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3800u;
    {
        const bool branch_taken_0x1b3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3800u;
        // 0x1b3804: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3800) {
            ctx->pc = 0x1B3848u;
            goto label_1b3848;
        }
    }
    ctx->pc = 0x1B3808u;
label_1b3808:
    // 0x1b3808: 0x3c0442fc  lui         $a0, 0x42FC
    ctx->pc = 0x1b3808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17148 << 16));
    // 0x1b380c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b380cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b3810: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3810u;
    {
        const bool branch_taken_0x1b3810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3810) {
            ctx->pc = 0x1B3834u;
            goto label_1b3834;
        }
    }
    ctx->pc = 0x1B3818u;
    // 0x1b3818: 0x14c4000d  bne         $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B3850u;
            goto label_1b3850;
        }
    }
    ctx->pc = 0x1B3820u;
    // 0x1b3820: 0x46082001  sub.s       $f0, $f4, $f8
    ctx->pc = 0x1b3820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x1b3824: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1b3824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3828: 0x0  nop
    ctx->pc = 0x1b3828u;
    // NOP
    // 0x1b382c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B382Cu;
    {
        const bool branch_taken_0x1b382c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B382Cu;
        // 0x1b3830: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b382c) {
            ctx->pc = 0x1B3854u;
            goto label_1b3854;
        }
    }
    ctx->pc = 0x1B3834u;
label_1b3834:
    // 0x1b3834: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1b3834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x1b3838: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x1b383c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b383cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3840: 0x0  nop
    ctx->pc = 0x1b3840u;
    // NOP
    // 0x1b3844: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x1b3844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1b3848:
    // 0x1b3848: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1B3848u;
    {
        const bool branch_taken_0x1b3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3848u;
        // 0x1b384c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3848) {
            ctx->pc = 0x1B39F4u;
            return;
        }
    }
    ctx->pc = 0x1B3850u;
label_1b3850:
    // 0x1b3850: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
label_1b3854:
    // 0x1b3854: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1b3854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b3858: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B3858u;
    {
        const bool branch_taken_0x1b3858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3858u;
        // 0x1b385c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3858) {
            ctx->pc = 0x1B38C0u;
            goto label_1b38c0;
        }
    }
    ctx->pc = 0x1B3860u;
    // 0x1b3860: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1b3860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1b3864: 0x2463ff82  addiu       $v1, $v1, -0x7E
    ctx->pc = 0x1b3864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
    // 0x1b3868: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x1b3868u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b386c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x1b386cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b3870: 0x815c2  srl         $v0, $t0, 23
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 23));
    // 0x1b3874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3878: 0x2447ff81  addiu       $a3, $v0, -0x7F
    ctx->pc = 0x1b3878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1b387c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1b3880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b3884: 0xe31007  srav        $v0, $v1, $a3
    ctx->pc = 0x1b3884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b3888: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1b3888u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1b388c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1b388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1b3890: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3894: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x1b3894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1b3898: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b389c: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x1b389cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x1b38a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b38a4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1b38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b38a8: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x1b38a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b38ac: 0x434007  srav        $t0, $v1, $v0
    ctx->pc = 0x1b38acu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b38b0: 0x82023  negu        $a0, $t0
    ctx->pc = 0x1b38b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x1b38b4: 0x46083800  add.s       $f0, $f7, $f8
    ctx->pc = 0x1b38b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x1b38b8: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x1b38b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x1b38bc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1b38bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1b38c0:
    // 0x1b38c0: 0x0  nop
    ctx->pc = 0x1b38c0u;
    // NOP
    // 0x1b38c4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1b38c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38c8: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x1b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b38cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b38d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b38d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b38d4: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x1b38d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x1b38d8: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x1b38d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x1b38dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b38dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b38e0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x1b38e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x1b38e4: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x1b38e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
    // 0x1b38e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b38e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b38ec: 0x46086041  sub.s       $f1, $f12, $f8
    ctx->pc = 0x1b38ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x1b38f0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b38f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1b38f4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b38f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b38f8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b38f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1b38fc: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x1b38fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x1b3900: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x1b3900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x1b3904: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3908: 0x0  nop
    ctx->pc = 0x1b3908u;
    // NOP
    // 0x1b390c: 0x46036402  mul.s       $f16, $f12, $f3
    ctx->pc = 0x1b390cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x1b3910: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x1b3910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x1b3914: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x1b3914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x1b3918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b391c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1b391cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1b3920: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x1b3924: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x1b3924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x1b3928: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b392c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1b392cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x1b3930: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x1b3934: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b3934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1b3938: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b3938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1b393c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x1b3940: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x1b3940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x1b3944: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b3944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b3948: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b3948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b394c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b394cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3954: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b3954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1b3958: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b3958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b395c: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x1b395cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b3960: 0x460d8100  add.s       $f4, $f16, $f13
    ctx->pc = 0x1b3960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x1b3964: 0x46042302  mul.s       $f12, $f4, $f4
    ctx->pc = 0x1b3964u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1b3968: 0x46102041  sub.s       $f1, $f4, $f16
    ctx->pc = 0x1b3968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[16]);
    // 0x1b396c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b396cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b3970: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x1b3970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x1b3974: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b3974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1b3978: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x1b3978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b397c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b397cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b3980: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1b3980u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b3984: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1b3984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1b3988: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b3988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b398c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1b398cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1b3990: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b3990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b3994: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b3994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1b3998: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b3998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b399c: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x1b399cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1b39a0: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x1b39a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1b39a4: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x1b39a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x1b39a8: 0x0  nop
    ctx->pc = 0x1b39a8u;
    // NOP
    // 0x1b39ac: 0x0  nop
    ctx->pc = 0x1b39acu;
    // NOP
    // 0x1b39b0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1b39b0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1b39b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b39b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b39b8: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x1b39b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1b39bc: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x1b39bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x1b39c0: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x1b39c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b39c4: 0x815c0  sll         $v0, $t0, 23
    ctx->pc = 0x1b39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 23));
    // 0x1b39c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b39cc: 0x41dc3  sra         $v1, $a0, 23
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 23));
    // 0x1b39d0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B39D0u;
    {
        const bool branch_taken_0x1b39d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39D0u;
        // 0x1b39d4: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39d0) {
            ctx->pc = 0x1B39E8u;
            goto label_1b39e8;
        }
    }
    ctx->pc = 0x1B39D8u;
    // 0x1b39d8: 0xc06d48e  jal         func_1B5238
    ctx->pc = 0x1B39D8u;
    SET_GPR_U32(ctx, 31, 0x1B39E0u);
    ctx->pc = 0x1B39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39D8u;
    // 0x1b39dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5238u, 0x1B39D8u, 0x1B39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39E0u;
label_1b39e0:
    // 0x1b39e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B39E0u;
    {
        const bool branch_taken_0x1b39e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39E0u;
        // 0x1b39e4: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39e0) {
            ctx->pc = 0x1B39ECu;
            goto label_1b39ec;
        }
    }
    ctx->pc = 0x1B39E8u;
label_1b39e8:
    // 0x1b39e8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1b39e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b39ec:
    // 0x1b39ec: 0x0  nop
    ctx->pc = 0x1b39ecu;
    // NOP
    // 0x1b39f0: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x1b39f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    ctx->pc = 0x1b39f4u;
}
