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

// Function: entry_001b3ff0
// Address: 0x1b3ff0 - 0x1b48d8
void entry_001b3ff0_0x1b3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ff0_0x1b3ff0");
#endif

    switch (ctx->pc) {
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b4108u: goto label_1b4108;
        case 0x1b4128u: goto label_1b4128;
        case 0x1b4164u: goto label_1b4164;
        case 0x1b4198u: goto label_1b4198;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b42c8u: goto label_1b42c8;
        case 0x1b436cu: goto label_1b436c;
        case 0x1b43a0u: goto label_1b43a0;
        case 0x1b43e8u: goto label_1b43e8;
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4478u: goto label_1b4478;
        case 0x1b44f8u: goto label_1b44f8;
        case 0x1b4528u: goto label_1b4528;
        case 0x1b45b8u: goto label_1b45b8;
        case 0x1b45d8u: goto label_1b45d8;
        case 0x1b4620u: goto label_1b4620;
        case 0x1b4648u: goto label_1b4648;
        case 0x1b46f0u: goto label_1b46f0;
        case 0x1b4738u: goto label_1b4738;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b47c0u: goto label_1b47c0;
        case 0x1b4808u: goto label_1b4808;
        case 0x1b4850u: goto label_1b4850;
        default: break;
    }

    ctx->pc = 0x1b3ff0u;

    // 0x1b3ff0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3ff8: 0x0  nop
    ctx->pc = 0x1b3ff8u;
    // NOP
    // 0x1b3ffc: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x1b3ffcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b4000: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x1b4000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1b4004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b400c: 0x0  nop
    ctx->pc = 0x1b400cu;
    // NOP
    // 0x1b4010: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b4010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b4014: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1b4014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1b4018: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b4018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1b401c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1b401cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1b4020: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b4024: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b4028: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4028u;
        // 0x1b402c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4030u;
    // 0x1b4030: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x1b4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x1b4034: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1b4038: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b4038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b403c: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1b403cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1b4040: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x1b4040u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x1b4044: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x1b4044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x1b4048: 0x2b8c3  sra         $s7, $v0, 3
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1b404c: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x1b404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x1b4050: 0x2ae20000  slti        $v0, $s7, 0x0
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b4054: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b4058: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x1b4058u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x1b405c: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x1b405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x1b4060: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x1b4060u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x1b4064: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x1b4064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1b4068: 0x8e94b1c0  lw          $s4, -0x4E40($s4)
    ctx->pc = 0x1b4068u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947264)));
    // 0x1b406c: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x1b406cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x1b4070: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1b4070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x1b4074: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x1b4074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b4078: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1b4078u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b407c: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1b407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1b4080: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1b4080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x1b4084: 0x24d1fff8  addiu       $s1, $a2, -0x8
    ctx->pc = 0x1b4084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1b4088: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x1b4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x1b408c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1b408cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4090: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x1b4090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x1b4094: 0x2f22823  subu        $a1, $s7, $s2
    ctx->pc = 0x1b4094u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x1b4098: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1b4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x1b409c: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x1b409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x1b40a0: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x1b40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x1b40a4: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x1b40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x1b40a8: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b40a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1b40ac: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1b40acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x1b40b0: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B40B0u;
    {
        const bool branch_taken_0x1b40b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40B0u;
        // 0x1b40b4: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40b0) {
            ctx->pc = 0x1B40F0u;
            goto label_1b40f0;
        }
    }
    ctx->pc = 0x1B40B8u;
    // 0x1b40b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b40bc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1b40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b40c0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1b40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1b40c4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1b40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b40c8:
    // 0x1b40c8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B40C8u;
    {
        const bool branch_taken_0x1b40c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1b40c8) {
            ctx->pc = 0x1B40CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B40C8u;
            // 0x1b40cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B40DCu;
            goto label_1b40dc;
        }
    }
    ctx->pc = 0x1B40D0u;
    // 0x1b40d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b40d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b40d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b40d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b40d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b40d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b40dc:
    // 0x1b40dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b40e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b40e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b40e8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B40E8u;
    {
        const bool branch_taken_0x1b40e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40E8u;
        // 0x1b40ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40e8) {
            ctx->pc = 0x1B40C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b40c8;
        }
    }
    ctx->pc = 0x1B40F0u;
label_1b40f0:
    // 0x1b40f0: 0x680001b  bltz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B40F0u;
    {
        const bool branch_taken_0x1b40f0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40F0u;
        // 0x1b40f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40f0) {
            ctx->pc = 0x1B4160u;
            goto label_1b4160;
        }
    }
    ctx->pc = 0x1B40F8u;
    // 0x1b40f8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b40fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b40fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b4100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4104: 0x0  nop
    ctx->pc = 0x1b4104u;
    // NOP
label_1b4108:
    // 0x1b4108: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b410c: 0x642000f  bltzl       $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1B410Cu;
    {
        const bool branch_taken_0x1b410c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1b410c) {
            ctx->pc = 0x1B4110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B410Cu;
            // 0x1b4110: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B414Cu;
            goto label_1b414c;
        }
    }
    ctx->pc = 0x1B4114u;
    // 0x1b4114: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b4118: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b411c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b4120: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b4120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b4124: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b4128:
    // 0x1b4128: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b412c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b4130: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4134: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b4138: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b413c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b413cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4140: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B4140u;
    {
        const bool branch_taken_0x1b4140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4140u;
        // 0x1b4144: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4140) {
            ctx->pc = 0x1B4128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4128;
        }
    }
    ctx->pc = 0x1B4148u;
    // 0x1b4148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b414c:
    // 0x1b414c: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x1b414cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1b4150: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x1b4150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b4154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b4158: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B4158u;
    {
        const bool branch_taken_0x1b4158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4158u;
        // 0x1b415c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4158) {
            ctx->pc = 0x1B4108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4108;
        }
    }
    ctx->pc = 0x1B4160u;
label_1b4160:
    // 0x1b4160: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1b4160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b4164:
    // 0x1b4164: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x1b4164u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b4168: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b416c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b4170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4174: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B4174u;
    {
        const bool branch_taken_0x1b4174 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4174u;
        // 0x1b4178: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4174) {
            ctx->pc = 0x1B41DCu;
            goto label_1b41dc;
        }
    }
    ctx->pc = 0x1B417Cu;
    // 0x1b417c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1b4180: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b4180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b4184: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b4188: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b4188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1b418c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b418cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b4190: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b4190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4194: 0x0  nop
    ctx->pc = 0x1b4194u;
    // NOP
label_1b4198:
    // 0x1b4198: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x1b4198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1b419c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b41a0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b41a4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1b41a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b41a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b41ac: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b41acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b41b0: 0x0  nop
    ctx->pc = 0x1b41b0u;
    // NOP
    // 0x1b41b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b41b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b41b8: 0x0  nop
    ctx->pc = 0x1b41b8u;
    // NOP
    // 0x1b41bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b41bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b41c0: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1b41c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1b41c4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b41c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b41c8: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x1b41c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b41cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b41ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b41d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1b41d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b41d4: 0x1ca0fff0  bgtz        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B41D4u;
    {
        const bool branch_taken_0x1b41d4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1B41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41D4u;
        // 0x1b41d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41d4) {
            ctx->pc = 0x1B4198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4198;
        }
    }
    ctx->pc = 0x1B41DCu;
label_1b41dc:
    // 0x1b41dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b41dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b41e0: 0xc06d48e  jal         func_1B5238
    ctx->pc = 0x1B41E0u;
    SET_GPR_U32(ctx, 31, 0x1B41E8u);
    ctx->pc = 0x1B41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41E0u;
    // 0x1b41e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5238u, 0x1B41E0u, 0x1B41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41E8u;
label_1b41e8:
    // 0x1b41e8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1b41e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1b41ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b41ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b41f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b41f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b41f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b41f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41f8: 0xc06d452  jal         func_1B5148
    ctx->pc = 0x1B41F8u;
    SET_GPR_U32(ctx, 31, 0x1B4200u);
    ctx->pc = 0x1B41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41F8u;
    // 0x1b41fc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5148u, 0x1B41F8u, 0x1B4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4200u;
label_1b4200:
    // 0x1b4200: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1b4200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1b4204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4208: 0x0  nop
    ctx->pc = 0x1b4208u;
    // NOP
    // 0x1b420c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b420cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4210: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1b4210u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b4214: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b4218: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x1b4218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1b421c: 0x0  nop
    ctx->pc = 0x1b421cu;
    // NOP
    // 0x1b4220: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1b4220u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4224: 0x0  nop
    ctx->pc = 0x1b4224u;
    // NOP
    // 0x1b4228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b422c: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B422Cu;
    {
        const bool branch_taken_0x1b422c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B422Cu;
        // 0x1b4230: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b422c) {
            ctx->pc = 0x1B4270u;
            goto label_1b4270;
        }
    }
    ctx->pc = 0x1B4234u;
    // 0x1b4234: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x1b4234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1b4238: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b423c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x1b423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1b4240: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1b4240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b4244: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b4244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4248: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b424c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1b424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b4250: 0x433007  srav        $a2, $v1, $v0
    ctx->pc = 0x1b4250u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b4254: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x1b4254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b4258: 0x2a6a821  addu        $s5, $s5, $a2
    ctx->pc = 0x1b4258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1b425c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b4260: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b4260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b4264: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4264u;
    {
        const bool branch_taken_0x1b4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4264u;
        // 0x1b4268: 0x83b007  srav        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4264) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B426Cu;
    // 0x1b426c: 0x0  nop
    ctx->pc = 0x1b426cu;
    // NOP
label_1b4270:
    // 0x1b4270: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4270u;
    {
        const bool branch_taken_0x1b4270 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4270) {
            ctx->pc = 0x1B4288u;
            goto label_1b4288;
        }
    }
    ctx->pc = 0x1B4278u;
    // 0x1b4278: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1b427c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B427Cu;
    {
        const bool branch_taken_0x1b427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B427Cu;
        // 0x1b4280: 0x3b203  sra         $s6, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b427c) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B4284u;
    // 0x1b4284: 0x0  nop
    ctx->pc = 0x1b4284u;
    // NOP
label_1b4288:
    // 0x1b4288: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b428c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b428cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4290: 0x0  nop
    ctx->pc = 0x1b4290u;
    // NOP
    // 0x1b4294: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1b4294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4298: 0x0  nop
    ctx->pc = 0x1b4298u;
    // NOP
    // 0x1b429c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B429Cu;
    {
        const bool branch_taken_0x1b429c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b429c) {
            ctx->pc = 0x1B42A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B429Cu;
            // 0x1b42a0: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B42A4u;
label_1b42a4:
    // 0x1b42a4: 0x1ac00032  blez        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B42A4u;
    {
        const bool branch_taken_0x1b42a4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x1b42a4) {
            ctx->pc = 0x1B4370u;
            goto label_1b4370;
        }
    }
    ctx->pc = 0x1B42ACu;
    // 0x1b42ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b42acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b42b0: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B42B0u;
    {
        const bool branch_taken_0x1b42b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42B0u;
        // 0x1b42b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42b0) {
            ctx->pc = 0x1B42FCu;
            goto label_1b42fc;
        }
    }
    ctx->pc = 0x1B42B8u;
    // 0x1b42b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b42bc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b42c0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1b42c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b42c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b42c8:
    // 0x1b42c8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B42C8u;
    {
        const bool branch_taken_0x1b42c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C8u;
        // 0x1b42cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42c8) {
            ctx->pc = 0x1B42E0u;
            goto label_1b42e0;
        }
    }
    ctx->pc = 0x1B42D0u;
    // 0x1b42d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42E8u;
            goto label_1b42e8;
        }
    }
    ctx->pc = 0x1B42D8u;
    // 0x1b42d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B42D8u;
    {
        const bool branch_taken_0x1b42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D8u;
        // 0x1b42dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d8) {
            ctx->pc = 0x1B42E4u;
            goto label_1b42e4;
        }
    }
    ctx->pc = 0x1B42E0u;
label_1b42e0:
    // 0x1b42e0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b42e4:
    // 0x1b42e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b42e8:
    // 0x1b42e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b42ec: 0x0  nop
    ctx->pc = 0x1b42ecu;
    // NOP
    // 0x1b42f0: 0x0  nop
    ctx->pc = 0x1b42f0u;
    // NOP
    // 0x1b42f4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42F4u;
        // 0x1b42f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B42C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b42c8;
        }
    }
    ctx->pc = 0x1B42FCu;
label_1b42fc:
    // 0x1b42fc: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B42FCu;
    {
        const bool branch_taken_0x1b42fc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42FCu;
        // 0x1b4300: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42fc) {
            ctx->pc = 0x1B434Cu;
            goto label_1b434c;
        }
    }
    ctx->pc = 0x1B4304u;
    // 0x1b4304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4308: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4308u;
    {
        const bool branch_taken_0x1b4308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4308u;
        // 0x1b430c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4308) {
            ctx->pc = 0x1B4320u;
            goto label_1b4320;
        }
    }
    ctx->pc = 0x1B4310u;
    // 0x1b4310: 0x52220009  beql        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4310u;
    {
        const bool branch_taken_0x1b4310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4310) {
            ctx->pc = 0x1B4314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4310u;
            // 0x1b4314: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4338u;
            goto label_1b4338;
        }
    }
    ctx->pc = 0x1B4318u;
    // 0x1b4318: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B4318u;
    {
        const bool branch_taken_0x1b4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4318) {
            ctx->pc = 0x1B434Cu;
            goto label_1b434c;
        }
    }
    ctx->pc = 0x1B4320u;
label_1b4320:
    // 0x1b4320: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1b4324: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1b4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b4328: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b432c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B432Cu;
    {
        const bool branch_taken_0x1b432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B432Cu;
        // 0x1b4330: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b432c) {
            ctx->pc = 0x1B4344u;
            goto label_1b4344;
        }
    }
    ctx->pc = 0x1B4334u;
    // 0x1b4334: 0x0  nop
    ctx->pc = 0x1b4334u;
    // NOP
label_1b4338:
    // 0x1b4338: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1b4338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b433c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4340: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1b4340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1b4344:
    // 0x1b4344: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b434c:
    // 0x1b434c: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B434Cu;
    {
        const bool branch_taken_0x1b434c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b434c) {
            ctx->pc = 0x1B4370u;
            goto label_1b4370;
        }
    }
    ctx->pc = 0x1B4354u;
    // 0x1b4354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b435c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B435Cu;
    {
        const bool branch_taken_0x1b435c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B435Cu;
        // 0x1b4360: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b435c) {
            ctx->pc = 0x1B4370u;
            goto label_1b4370;
        }
    }
    ctx->pc = 0x1B4364u;
    // 0x1b4364: 0xc06d48e  jal         func_1B5238
    ctx->pc = 0x1B4364u;
    SET_GPR_U32(ctx, 31, 0x1B436Cu);
    ctx->pc = 0x1B4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4364u;
    // 0x1b4368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5238u, 0x1B4364u, 0x1B436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B436Cu;
label_1b436c:
    // 0x1b436c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1b436cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b4370:
    // 0x1b4370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4374: 0x0  nop
    ctx->pc = 0x1b4374u;
    // NOP
    // 0x1b4378: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1b4378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b437c: 0x0  nop
    ctx->pc = 0x1b437cu;
    // NOP
    // 0x1b4380: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x1B4380u;
    {
        const bool branch_taken_0x1b4380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4380u;
        // 0x1b4384: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4380) {
            ctx->pc = 0x1B44D0u;
            goto label_1b44d0;
        }
    }
    ctx->pc = 0x1B4388u;
    // 0x1b4388: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1b4388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b438c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B438Cu;
    {
        const bool branch_taken_0x1b438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B438Cu;
        // 0x1b4390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b438c) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B4394u;
    // 0x1b4394: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b4398: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1b4398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b439c: 0x0  nop
    ctx->pc = 0x1b439cu;
    // NOP
label_1b43a0:
    // 0x1b43a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b43a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b43a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1b43a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b43a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b43ac: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1b43acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b43b0: 0x0  nop
    ctx->pc = 0x1b43b0u;
    // NOP
    // 0x1b43b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B43B4u;
    {
        const bool branch_taken_0x1b43b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B4u;
        // 0x1b43b8: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b4) {
            ctx->pc = 0x1B43A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b43a0;
        }
    }
    ctx->pc = 0x1B43BCu;
label_1b43bc:
    // 0x1b43bc: 0x14a00040  bnez        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1B43BCu;
    {
        const bool branch_taken_0x1b43bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43BCu;
        // 0x1b43c0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43bc) {
            ctx->pc = 0x1B44C0u;
            goto label_1b44c0;
        }
    }
    ctx->pc = 0x1B43C4u;
    // 0x1b43c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b43c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b43cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b43d0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B43D0u;
    {
        const bool branch_taken_0x1b43d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D0u;
        // 0x1b43d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43d0) {
            ctx->pc = 0x1B4404u;
            goto label_1b4404;
        }
    }
    ctx->pc = 0x1B43D8u;
    // 0x1b43d8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1b43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1b43dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b43e0: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1b43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b43e4: 0x0  nop
    ctx->pc = 0x1b43e4u;
    // NOP
label_1b43e8:
    // 0x1b43e8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1b43ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b43f0: 0x0  nop
    ctx->pc = 0x1b43f0u;
    // NOP
    // 0x1b43f4: 0x0  nop
    ctx->pc = 0x1b43f4u;
    // NOP
    // 0x1b43f8: 0x0  nop
    ctx->pc = 0x1b43f8u;
    // NOP
    // 0x1b43fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B43FCu;
    {
        const bool branch_taken_0x1b43fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43FCu;
        // 0x1b4400: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43fc) {
            ctx->pc = 0x1B43E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b43e8;
        }
    }
    ctx->pc = 0x1B4404u;
label_1b4404:
    // 0x1b4404: 0x2084821  addu        $t1, $s0, $t0
    ctx->pc = 0x1b4404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1b4408: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b440c: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x1b440cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b4410: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x1B4410u;
    {
        const bool branch_taken_0x1b4410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4410u;
        // 0x1b4414: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4410) {
            ctx->pc = 0x1B4164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4164;
        }
    }
    ctx->pc = 0x1B4418u;
    // 0x1b4418: 0x8fab0148  lw          $t3, 0x148($sp)
    ctx->pc = 0x1b4418u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b441c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1b441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1b4420: 0x2e62021  addu        $a0, $s7, $a2
    ctx->pc = 0x1b4420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x1b4424: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b4428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b442c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4430: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b4434: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1b4434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4438: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1b443c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1b443cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4440: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1b4440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b4444: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b4448: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1b4448u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b444c: 0x0  nop
    ctx->pc = 0x1b444cu;
    // NOP
label_1b4450:
    // 0x1b4450: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4454: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b4458: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1b4458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1b445c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b445cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4460: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4460u;
    {
        const bool branch_taken_0x1b4460 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1B4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4460u;
        // 0x1b4464: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4460) {
            ctx->pc = 0x1B4498u;
            goto label_1b4498;
        }
    }
    ctx->pc = 0x1B4468u;
    // 0x1b4468: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b4468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b446c: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x1b446cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b4470: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1b4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1b4474: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b4478:
    // 0x1b4478: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1b4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b447c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1b447cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1b4480: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4484: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b4488: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b448c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b448cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4490: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B4490u;
    {
        const bool branch_taken_0x1b4490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4490u;
        // 0x1b4494: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4490) {
            ctx->pc = 0x1B4478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4478;
        }
    }
    ctx->pc = 0x1B4498u;
label_1b4498:
    // 0x1b4498: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b449c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b449cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b44a0: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x1b44a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b44a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1b44a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1b44a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b44ac: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B44ACu;
    {
        const bool branch_taken_0x1b44ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ACu;
        // 0x1b44b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44ac) {
            ctx->pc = 0x1B4450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4450;
        }
    }
    ctx->pc = 0x1B44B4u;
    // 0x1b44b4: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
    ctx->pc = 0x1B44B4u;
    {
        const bool branch_taken_0x1b44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B4u;
        // 0x1b44b8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44b4) {
            ctx->pc = 0x1B4164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4164;
        }
    }
    ctx->pc = 0x1B44BCu;
    // 0x1b44bc: 0x0  nop
    ctx->pc = 0x1b44bcu;
    // NOP
label_1b44c0:
    // 0x1b44c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b44c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b44c4: 0x0  nop
    ctx->pc = 0x1b44c4u;
    // NOP
    // 0x1b44c8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1b44c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b44cc: 0x0  nop
    ctx->pc = 0x1b44ccu;
    // NOP
label_1b44d0:
    // 0x1b44d0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B44D0u;
    {
        const bool branch_taken_0x1b44d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44D0u;
        // 0x1b44d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44d0) {
            ctx->pc = 0x1B4520u;
            goto label_1b4520;
        }
    }
    ctx->pc = 0x1B44D8u;
    // 0x1b44d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b44d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b44dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b44e0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b44e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b44e8: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B44E8u;
    {
        const bool branch_taken_0x1b44e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44E8u;
        // 0x1b44ec: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44e8) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B44F0u;
    // 0x1b44f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b44f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44f4: 0x0  nop
    ctx->pc = 0x1b44f4u;
    // NOP
label_1b44f8:
    // 0x1b44f8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1b44fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b44fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b4500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4504: 0x0  nop
    ctx->pc = 0x1b4504u;
    // NOP
    // 0x1b4508: 0x0  nop
    ctx->pc = 0x1b4508u;
    // NOP
    // 0x1b450c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B450Cu;
    {
        const bool branch_taken_0x1b450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B450Cu;
        // 0x1b4510: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b450c) {
            ctx->pc = 0x1B44F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b44f8;
        }
    }
    ctx->pc = 0x1B4514u;
    // 0x1b4514: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4514u;
    {
        const bool branch_taken_0x1b4514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4514) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B451Cu;
    // 0x1b451c: 0x0  nop
    ctx->pc = 0x1b451cu;
    // NOP
label_1b4520:
    // 0x1b4520: 0xc06d48e  jal         func_1B5238
    ctx->pc = 0x1B4520u;
    SET_GPR_U32(ctx, 31, 0x1B4528u);
    ctx->pc = 0x1B4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4520u;
    // 0x1b4524: 0x112023  negu        $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5238u, 0x1B4520u, 0x1B4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4528u;
label_1b4528:
    // 0x1b4528: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b4528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1b452c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b452cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4530: 0x0  nop
    ctx->pc = 0x1b4530u;
    // NOP
    // 0x1b4534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b4534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b4538: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1b4538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b453c: 0x0  nop
    ctx->pc = 0x1b453cu;
    // NOP
    // 0x1b4540: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1B4540u;
    {
        const bool branch_taken_0x1b4540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4540u;
        // 0x1b4544: 0x3b31021  addu        $v0, $sp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4540) {
            ctx->pc = 0x1B45A0u;
            goto label_1b45a0;
        }
    }
    ctx->pc = 0x1B4548u;
    // 0x1b4548: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1b454c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b4554: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b4558: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x1b4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x1b455c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b4560: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b4564: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b4568: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b4568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b456c: 0x0  nop
    ctx->pc = 0x1b456cu;
    // NOP
    // 0x1b4570: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4574: 0x0  nop
    ctx->pc = 0x1b4574u;
    // NOP
    // 0x1b4578: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b457c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1b457cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b4580: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b4580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b4584: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b4588: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1b4588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b458c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b458cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b4590: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b4594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4594u;
    {
        const bool branch_taken_0x1b4594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4594u;
        // 0x1b4598: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4594) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B459Cu;
    // 0x1b459c: 0x0  nop
    ctx->pc = 0x1b459cu;
    // NOP
label_1b45a0:
    // 0x1b45a0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b45a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b45a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b45a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b45a8:
    // 0x1b45a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b45ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b45acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b45b0: 0xc06d48e  jal         func_1B5238
    ctx->pc = 0x1B45B0u;
    SET_GPR_U32(ctx, 31, 0x1B45B8u);
    ctx->pc = 0x1B45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45B0u;
    // 0x1b45b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5238u, 0x1B45B0u, 0x1B45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45B8u;
label_1b45b8:
    // 0x1b45b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b45b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45bc: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B45BCu;
    {
        const bool branch_taken_0x1b45bc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45BCu;
        // 0x1b45c0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45bc) {
            ctx->pc = 0x1B4604u;
            goto label_1b4604;
        }
    }
    ctx->pc = 0x1B45C4u;
    // 0x1b45c4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b45c8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b45c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1b45cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b45ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b45d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b45d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45d4: 0x0  nop
    ctx->pc = 0x1b45d4u;
    // NOP
label_1b45d8:
    // 0x1b45d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b45dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b45dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b45e0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b45e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b45e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b45ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b45ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b45f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b45f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b45f4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b45f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b45f8: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B45F8u;
    {
        const bool branch_taken_0x1b45f8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F8u;
        // 0x1b45fc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45f8) {
            ctx->pc = 0x1B45D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b45d8;
        }
    }
    ctx->pc = 0x1B4600u;
    // 0x1b4600: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4604:
    // 0x1b4604: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4604u;
    {
        const bool branch_taken_0x1b4604 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4604u;
        // 0x1b4608: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4604) {
            ctx->pc = 0x1B4698u;
            goto label_1b4698;
        }
    }
    ctx->pc = 0x1B460Cu;
    // 0x1b460c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4610: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1b4610u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4614: 0x244cb1d0  addiu       $t4, $v0, -0x4E30
    ctx->pc = 0x1b4614u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947280));
    // 0x1b4618: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b461c: 0x0  nop
    ctx->pc = 0x1b461cu;
    // NOP
label_1b4620:
    // 0x1b4620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4624: 0x6800016  bltz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4624u;
    {
        const bool branch_taken_0x1b4624 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4624u;
        // 0x1b4628: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4624) {
            ctx->pc = 0x1B4680u;
            goto label_1b4680;
        }
    }
    ctx->pc = 0x1B462Cu;
    // 0x1b462c: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1b4630: 0x4e00014  bltz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B4630u;
    {
        const bool branch_taken_0x1b4630 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1B4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4630u;
        // 0x1b4634: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4630) {
            ctx->pc = 0x1B4684u;
            goto label_1b4684;
        }
    }
    ctx->pc = 0x1B4638u;
    // 0x1b4638: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b4638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b463c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1b463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4640: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1b4644: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4648:
    // 0x1b4648: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b464c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4650: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b4654: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b4658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b465c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x1b465cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b4660: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x1b4660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b4664: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4664u;
    {
        const bool branch_taken_0x1b4664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4664u;
        // 0x1b4668: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4664) {
            ctx->pc = 0x1B4684u;
            goto label_1b4684;
        }
    }
    ctx->pc = 0x1B466Cu;
    // 0x1b466c: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B466Cu;
    {
        const bool branch_taken_0x1b466c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b466c) {
            ctx->pc = 0x1B4670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B466Cu;
            // 0x1b4670: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4648;
        }
    }
    ctx->pc = 0x1B4674u;
    // 0x1b4674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4674u;
    {
        const bool branch_taken_0x1b4674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4674u;
        // 0x1b4678: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4674) {
            ctx->pc = 0x1B4688u;
            goto label_1b4688;
        }
    }
    ctx->pc = 0x1B467Cu;
    // 0x1b467c: 0x0  nop
    ctx->pc = 0x1b467cu;
    // NOP
label_1b4680:
    // 0x1b4680: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1b4684:
    // 0x1b4684: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1b4684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1b4688:
    // 0x1b4688: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b468c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1b4690: 0x4c1ffe3  bgez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B4690u;
    {
        const bool branch_taken_0x1b4690 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4690u;
        // 0x1b4694: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4690) {
            ctx->pc = 0x1B4620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4620;
        }
    }
    ctx->pc = 0x1B4698u;
label_1b4698:
    // 0x1b4698: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x1b4698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1b469c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1b469cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b46a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B46A0u;
    {
        const bool branch_taken_0x1b46a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46a0) {
            ctx->pc = 0x1B46A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B46A0u;
            // 0x1b46a4: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B46C0u;
            goto label_1b46c0;
        }
    }
    ctx->pc = 0x1B46A8u;
    // 0x1b46a8: 0x5ca0001d  bgtzl       $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B46ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B46A8u;
            // 0x1b46ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4720u;
            goto label_1b4720;
        }
    }
    ctx->pc = 0x1B46B0u;
    // 0x1b46b0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B46B0u;
    {
        const bool branch_taken_0x1b46b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46B0u;
        // 0x1b46b4: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46b0) {
            ctx->pc = 0x1B46D8u;
            goto label_1b46d8;
        }
    }
    ctx->pc = 0x1B46B8u;
    // 0x1b46b8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1B46B8u;
    {
        const bool branch_taken_0x1b46b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46B8u;
        // 0x1b46bc: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46b8) {
            ctx->pc = 0x1B48A4u;
            goto label_1b48a4;
        }
    }
    ctx->pc = 0x1B46C0u;
label_1b46c0:
    // 0x1b46c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b46c4: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1B46C4u;
    {
        const bool branch_taken_0x1b46c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46C4u;
        // 0x1b46c8: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46c4) {
            ctx->pc = 0x1B47A8u;
            goto label_1b47a8;
        }
    }
    ctx->pc = 0x1B46CCu;
    // 0x1b46cc: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1B46CCu;
    {
        const bool branch_taken_0x1b46cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46CCu;
        // 0x1b46d0: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46cc) {
            ctx->pc = 0x1B48A4u;
            goto label_1b48a4;
        }
    }
    ctx->pc = 0x1B46D4u;
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
label_1b46d8:
    // 0x1b46d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b46d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b46dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b46e0: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1B46E0u;
    {
        const bool branch_taken_0x1b46e0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46E0u;
        // 0x1b46e4: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46e0) {
            ctx->pc = 0x1B470Cu;
            goto label_1b470c;
        }
    }
    ctx->pc = 0x1B46E8u;
    // 0x1b46e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b46ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b46f0:
    // 0x1b46f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b46f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b46f4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b46f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b46fc: 0x0  nop
    ctx->pc = 0x1b46fcu;
    // NOP
    // 0x1b4700: 0x0  nop
    ctx->pc = 0x1b4700u;
    // NOP
    // 0x1b4704: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4704u;
    {
        const bool branch_taken_0x1b4704 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4704u;
        // 0x1b4708: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4704) {
            ctx->pc = 0x1B46F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b46f0;
        }
    }
    ctx->pc = 0x1B470Cu;
label_1b470c:
    // 0x1b470c: 0x12c00063  beqz        $s6, . + 4 + (0x63 << 2)
    ctx->pc = 0x1B470Cu;
    {
        const bool branch_taken_0x1b470c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B470Cu;
        // 0x1b4710: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b470c) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B4714u;
    // 0x1b4714: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b4714u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1b4718: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B4718u;
    {
        const bool branch_taken_0x1b4718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4718u;
        // 0x1b471c: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4718) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B4720u;
label_1b4720:
    // 0x1b4720: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4724: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4724u;
    {
        const bool branch_taken_0x1b4724 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4724u;
        // 0x1b4728: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4724) {
            ctx->pc = 0x1B4754u;
            goto label_1b4754;
        }
    }
    ctx->pc = 0x1B472Cu;
    // 0x1b472c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b472cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b4730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4734: 0x0  nop
    ctx->pc = 0x1b4734u;
    // NOP
label_1b4738:
    // 0x1b4738: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b473c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b4740: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4744: 0x0  nop
    ctx->pc = 0x1b4744u;
    // NOP
    // 0x1b4748: 0x0  nop
    ctx->pc = 0x1b4748u;
    // NOP
    // 0x1b474c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B474Cu;
    {
        const bool branch_taken_0x1b474c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B474Cu;
        // 0x1b4750: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b474c) {
            ctx->pc = 0x1B4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4738;
        }
    }
    ctx->pc = 0x1B4754u;
label_1b4754:
    // 0x1b4754: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4754u;
    {
        const bool branch_taken_0x1b4754 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4754u;
        // 0x1b4758: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4754) {
            ctx->pc = 0x1B4764u;
            goto label_1b4764;
        }
    }
    ctx->pc = 0x1B475Cu;
    // 0x1b475c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b475cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1b4760: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b4760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1b4764:
    // 0x1b4764: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1b4764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4768: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4768u;
    {
        const bool branch_taken_0x1b4768 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4768u;
        // 0x1b476c: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4768) {
            ctx->pc = 0x1B4794u;
            goto label_1b4794;
        }
    }
    ctx->pc = 0x1B4770u;
    // 0x1b4770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4774: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_1b4778:
    // 0x1b4778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b477c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b4780: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4784: 0x0  nop
    ctx->pc = 0x1b4784u;
    // NOP
    // 0x1b4788: 0x0  nop
    ctx->pc = 0x1b4788u;
    // NOP
    // 0x1b478c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B478Cu;
    {
        const bool branch_taken_0x1b478c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B478Cu;
        // 0x1b4790: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b478c) {
            ctx->pc = 0x1B4778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4778;
        }
    }
    ctx->pc = 0x1B4794u;
label_1b4794:
    // 0x1b4794: 0x12c00041  beqz        $s6, . + 4 + (0x41 << 2)
    ctx->pc = 0x1B4794u;
    {
        const bool branch_taken_0x1b4794 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4794u;
        // 0x1b4798: 0xe7c20004  swc1        $f2, 0x4($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4794) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B479Cu;
    // 0x1b479c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b479cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1b47a0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1B47A0u;
    {
        const bool branch_taken_0x1b47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A0u;
        // 0x1b47a4: 0xe7c00004  swc1        $f0, 0x4($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a0) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B47A8u;
label_1b47a8:
    // 0x1b47a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b47a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47ac: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B47ACu;
    {
        const bool branch_taken_0x1b47ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1B47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47ACu;
        // 0x1b47b0: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47ac) {
            ctx->pc = 0x1B47F0u;
            goto label_1b47f0;
        }
    }
    ctx->pc = 0x1B47B4u;
    // 0x1b47b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b47b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b47bc: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
label_1b47c0:
    // 0x1b47c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b47c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b47c8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b47cc: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1b47ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b47d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b47d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1b47d4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b47d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b47d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b47d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b47dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b47dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b47e0: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B47E0u;
    {
        const bool branch_taken_0x1b47e0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1B47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E0u;
        // 0x1b47e4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47e0) {
            ctx->pc = 0x1B47C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b47c0;
        }
    }
    ctx->pc = 0x1B47E8u;
    // 0x1b47e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b47e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47ec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b47ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b47f0:
    // 0x1b47f0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B47F0u;
    {
        const bool branch_taken_0x1b47f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b47f0) {
            ctx->pc = 0x1B47F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B47F0u;
            // 0x1b47f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4838u;
            goto label_1b4838;
        }
    }
    ctx->pc = 0x1B47F8u;
    // 0x1b47f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b47fc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b4800: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x1b4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x1b4804: 0x0  nop
    ctx->pc = 0x1b4804u;
    // NOP
label_1b4808:
    // 0x1b4808: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b480c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4810: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b4810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4814: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b4814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4818: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1b4818u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b481c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b481cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b4820: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b4820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b4824: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4828: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b4828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b482c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B482Cu;
    {
        const bool branch_taken_0x1b482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B482Cu;
        // 0x1b4830: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b482c) {
            ctx->pc = 0x1B4808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4808;
        }
    }
    ctx->pc = 0x1B4834u;
    // 0x1b4834: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4838:
    // 0x1b4838: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b483c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b483cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4840: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4840u;
    {
        const bool branch_taken_0x1b4840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4840u;
        // 0x1b4844: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4840) {
            ctx->pc = 0x1B486Cu;
            goto label_1b486c;
        }
    }
    ctx->pc = 0x1B4848u;
    // 0x1b4848: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b484c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4850:
    // 0x1b4850: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4854: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b4854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1b4858: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b485c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b485cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4860: 0x0  nop
    ctx->pc = 0x1b4860u;
    // NOP
    // 0x1b4864: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4864u;
    {
        const bool branch_taken_0x1b4864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4864u;
        // 0x1b4868: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4864) {
            ctx->pc = 0x1B4850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4850;
        }
    }
    ctx->pc = 0x1B486Cu;
label_1b486c:
    // 0x1b486c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B486Cu;
    {
        const bool branch_taken_0x1b486c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B486Cu;
        // 0x1b4870: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b486c) {
            ctx->pc = 0x1B4880u;
            goto label_1b4880;
        }
    }
    ctx->pc = 0x1B4874u;
    // 0x1b4874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4874u;
    {
        const bool branch_taken_0x1b4874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4874u;
        // 0x1b4878: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4874) {
            ctx->pc = 0x1B4890u;
            goto label_1b4890;
        }
    }
    ctx->pc = 0x1B487Cu;
    // 0x1b487c: 0x0  nop
    ctx->pc = 0x1b487cu;
    // NOP
label_1b4880:
    // 0x1b4880: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b4880u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1b4884: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1b4884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4888: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b488c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b488cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b4890:
    // 0x1b4890: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x1b4890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x1b4894: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b4894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1b4898: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x1b4898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_1b489c:
    // 0x1b489c: 0x32a20007  andi        $v0, $s5, 0x7
    ctx->pc = 0x1b489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x1b48a0: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1b48a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1b48a4:
    // 0x1b48a4: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1b48a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b48a8: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1b48a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b48ac: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1b48acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1b48b0: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1b48b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b48b4: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x1b48b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b48b8: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x1b48b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b48bc: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x1b48bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1b48c0: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x1b48c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b48c4: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x1b48c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1b48c8: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b48cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B48CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48CCu;
        // 0x1b48d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B48CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B48D4u;
    // 0x1b48d4: 0x0  nop
    ctx->pc = 0x1b48d4u;
    // NOP
    ctx->pc = 0x1b48d8u;
}
