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

// Function: FUN_001b3030
// Address: 0x1b3030 - 0x1b317c
void FUN_001b3030_0x1b3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3030_0x1b3030");
#endif

    switch (ctx->pc) {
        case 0x1b3108u: goto label_1b3108;
        default: break;
    }

    ctx->pc = 0x1b3030u;

    // 0x1b3030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3034: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3034u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b3038: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b303c: 0x0  nop
    ctx->pc = 0x1b303cu;
    // NOP
    // 0x1b3040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3044: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x1b3044u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x1b3048: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b3048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b304c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b3050: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3054: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b3058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b305c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1b305cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1b3060: 0xe23024  and         $a2, $a3, $v0
    ctx->pc = 0x1b3060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1b3064: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1b3064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b3068: 0xa35024  and         $t2, $a1, $v1
    ctx->pc = 0x1b3068u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b306c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b306cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b3070: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3070u;
    {
        const bool branch_taken_0x1b3070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3070u;
        // 0x1b3074: 0xaa2826  xor         $a1, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3070) {
            ctx->pc = 0x1B3090u;
            goto label_1b3090;
        }
    }
    ctx->pc = 0x1B3078u;
    // 0x1b3078: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1b3078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1b307c: 0x0  nop
    ctx->pc = 0x1b307cu;
    // NOP
    // 0x1b3080: 0x0  nop
    ctx->pc = 0x1b3080u;
    // NOP
    // 0x1b3084: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b3084u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x1b3088: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1B3088u;
    {
        const bool branch_taken_0x1b3088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3088) {
            ctx->pc = 0x1B31F8u;
            return;
        }
    }
    ctx->pc = 0x1B3090u;
label_1b3090:
    // 0x1b3090: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b3090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b3094: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1B3094u;
    {
        const bool branch_taken_0x1b3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3094) {
            ctx->pc = 0x1B31F8u;
            return;
        }
    }
    ctx->pc = 0x1B309Cu;
    // 0x1b309c: 0x10a60030  beq         $a1, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B309Cu;
    {
        const bool branch_taken_0x1b309c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B309Cu;
        // 0x1b30a0: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b309c) {
            ctx->pc = 0x1B3160u;
            goto label_1b3160;
        }
    }
    ctx->pc = 0x1B30A4u;
    // 0x1b30a4: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x1b30a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1b30a8: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x1b30a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
    // 0x1b30ac: 0x2902ff82  slti        $v0, $t0, -0x7E
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1b30b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B30B0u;
    {
        const bool branch_taken_0x1b30b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30B0u;
        // 0x1b30b4: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30b0) {
            ctx->pc = 0x1B30C8u;
            goto label_1b30c8;
        }
    }
    ctx->pc = 0x1B30B8u;
    // 0x1b30b8: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1b30b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1b30bc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b30c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B30C0u;
    {
        const bool branch_taken_0x1b30c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C0u;
        // 0x1b30c4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30c0) {
            ctx->pc = 0x1B30D4u;
            goto label_1b30d4;
        }
    }
    ctx->pc = 0x1B30C8u;
label_1b30c8:
    // 0x1b30c8: 0x2402ff82  addiu       $v0, $zero, -0x7E
    ctx->pc = 0x1b30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
    // 0x1b30cc: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x1b30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b30d0: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_1b30d4:
    // 0x1b30d4: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x1b30d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1b30d8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B30D8u;
    {
        const bool branch_taken_0x1b30d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D8u;
        // 0x1b30dc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d8) {
            ctx->pc = 0x1B30F8u;
            goto label_1b30f8;
        }
    }
    ctx->pc = 0x1B30E0u;
    // 0x1b30e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b30e4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1b30e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b30ec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1b30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b30f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B30F0u;
    {
        const bool branch_taken_0x1b30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30F0u;
        // 0x1b30f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30f0) {
            ctx->pc = 0x1B3100u;
            goto label_1b3100;
        }
    }
    ctx->pc = 0x1B30F8u;
label_1b30f8:
    // 0x1b30f8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b30fc: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x1b30fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_1b3100:
    // 0x1b3100: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x1b3100u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b3104: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b3108:
    // 0x1b3108: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b3108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b310c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B310Cu;
    {
        const bool branch_taken_0x1b310c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B310Cu;
        // 0x1b3110: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b310c) {
            ctx->pc = 0x1B3150u;
            goto label_1b3150;
        }
    }
    ctx->pc = 0x1B3114u;
    // 0x1b3114: 0x0  nop
    ctx->pc = 0x1b3114u;
    // NOP
    // 0x1b3118: 0x0  nop
    ctx->pc = 0x1b3118u;
    // NOP
    // 0x1b311c: 0x0  nop
    ctx->pc = 0x1b311cu;
    // NOP
    // 0x1b3120: 0x0  nop
    ctx->pc = 0x1b3120u;
    // NOP
    // 0x1b3124: 0x460fff8  bltz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3124u;
    {
        const bool branch_taken_0x1b3124 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3124u;
        // 0x1b3128: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3124) {
            ctx->pc = 0x1B3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3108;
        }
    }
    ctx->pc = 0x1B312Cu;
    // 0x1b312c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B312Cu;
    {
        const bool branch_taken_0x1b312c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b312c) {
            ctx->pc = 0x1B3130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B312Cu;
            // 0x1b3130: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3164u;
            goto label_1b3164;
        }
    }
    ctx->pc = 0x1B3134u;
    // 0x1b3134: 0x0  nop
    ctx->pc = 0x1b3134u;
    // NOP
    // 0x1b3138: 0x0  nop
    ctx->pc = 0x1b3138u;
    // NOP
    // 0x1b313c: 0x0  nop
    ctx->pc = 0x1b313cu;
    // NOP
    // 0x1b3140: 0x0  nop
    ctx->pc = 0x1b3140u;
    // NOP
    // 0x1b3144: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B3144u;
    {
        const bool branch_taken_0x1b3144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3144u;
        // 0x1b3148: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3144) {
            ctx->pc = 0x1B3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3108;
        }
    }
    ctx->pc = 0x1B314Cu;
    // 0x1b314c: 0x0  nop
    ctx->pc = 0x1b314cu;
    // NOP
label_1b3150:
    // 0x1b3150: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1b3150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b3154: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1b3154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b3158: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3158u;
    {
        const bool branch_taken_0x1b3158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3158u;
        // 0x1b315c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3158) {
            ctx->pc = 0x1B3180u;
            return;
        }
    }
    ctx->pc = 0x1B3160u;
label_1b3160:
    // 0x1b3160: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x1b3160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_1b3164:
    // 0x1b3164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3168: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b3168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b316c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b316cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b3170: 0xc420ad70  lwc1        $f0, -0x5290($at)
    ctx->pc = 0x1b3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3174: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3174u;
    {
        const bool branch_taken_0x1b3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3174) {
            ctx->pc = 0x1B31F8u;
            return;
        }
    }
    ctx->pc = 0x1B317Cu;
}
