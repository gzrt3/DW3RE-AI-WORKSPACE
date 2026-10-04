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

// Function: FUN_00232080
// Address: 0x232080 - 0x232184
void FUN_00232080_0x232080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232080_0x232080");
#endif

    switch (ctx->pc) {
        case 0x232140u: goto label_232140;
        default: break;
    }

    ctx->pc = 0x232080u;

    // 0x232080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23208c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232094: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x232094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x232098: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x232098u;
    {
        const bool branch_taken_0x232098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232098u;
        // 0x23209c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232098) {
            ctx->pc = 0x232178u;
            goto label_232178;
        }
    }
    ctx->pc = 0x2320A0u;
    // 0x2320a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2320a4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2320A4u;
    {
        const bool branch_taken_0x2320a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2320a4) {
            ctx->pc = 0x2320A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2320A4u;
            // 0x2320a8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232144u;
            goto label_232144;
        }
    }
    ctx->pc = 0x2320ACu;
    // 0x2320ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2320b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2320b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2320b4: 0x54a20023  bnel        $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2320B4u;
    {
        const bool branch_taken_0x2320b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2320b4) {
            ctx->pc = 0x2320B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2320B4u;
            // 0x2320b8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232144u;
            goto label_232144;
        }
    }
    ctx->pc = 0x2320BCu;
    // 0x2320bc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2320bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2320c0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2320c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2320c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2320c8: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x2320c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2320cc: 0x223100a  movz        $v0, $s1, $v1
    ctx->pc = 0x2320ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x2320d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2320d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2320d4: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2320d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2320d8: 0x2c830028  sltiu       $v1, $a0, 0x28
    ctx->pc = 0x2320d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2320dc: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2320DCu;
    {
        const bool branch_taken_0x2320dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2320E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320DCu;
        // 0x2320e0: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320dc) {
            ctx->pc = 0x232140u;
            goto label_232140;
        }
    }
    ctx->pc = 0x2320E4u;
    // 0x2320e4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2320e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2320e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2320e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2320ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2320f0: 0xc44004d0  lwc1        $f0, 0x4D0($v0)
    ctx->pc = 0x2320f0u;
    { uint32_t bits = FAST_READ32(0x2904D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2320f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2320f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2320f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2320fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2320fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x232100: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x232100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x232104: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x232104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232108: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x232108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23210c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x23210cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232110: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x232114: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x232114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x232118: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x232118u;
    {
        const bool branch_taken_0x232118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232118u;
        // 0x23211c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232118) {
            ctx->pc = 0x232138u;
            goto label_232138;
        }
    }
    ctx->pc = 0x232120u;
    // 0x232120: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x232120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x232124: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x232128: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23212c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x23212cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x232130: 0x0  nop
    ctx->pc = 0x232130u;
    // NOP
    // 0x232134: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x232134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_232138:
    // 0x232138: 0xc08db98  jal         func_236E60
    ctx->pc = 0x232138u;
    SET_GPR_U32(ctx, 31, 0x232140u);
    ctx->pc = 0x23213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232138u;
    // 0x23213c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E60u, 0x232138u, 0x232140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232140u;
label_232140:
    // 0x232140: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x232140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_232144:
    // 0x232144: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x232144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x232148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23214c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x23214cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232150: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232150u;
    {
        const bool branch_taken_0x232150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232150) {
            ctx->pc = 0x232154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232150u;
            // 0x232154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x232158u;
label_232158:
    // 0x232158: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x232158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x23215c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x23215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x232160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x232160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x232164: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x232164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x232168: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x232168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x23216c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x23216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x232170: 0x2010  mfhi        $a0
    ctx->pc = 0x232170u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x232174: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x232174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_232178:
    // 0x232178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23217c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23217cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x232184u;
}
