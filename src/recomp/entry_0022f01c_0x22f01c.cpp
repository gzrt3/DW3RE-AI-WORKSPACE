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

// Function: entry_0022f01c
// Address: 0x22f01c - 0x22f0cc
void entry_0022f01c_0x22f01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f01c_0x22f01c");
#endif

    switch (ctx->pc) {
        case 0x22f078u: goto label_22f078;
        case 0x22f08cu: goto label_22f08c;
        case 0x22f094u: goto label_22f094;
        default: break;
    }

    ctx->pc = 0x22f01cu;

    // 0x22f01c: 0x0  nop
    ctx->pc = 0x22f01cu;
    // NOP
    // 0x22f020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22f024: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x22f024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f028: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22F028u;
    {
        const bool branch_taken_0x22f028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F028u;
        // 0x22f02c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f028) {
            ctx->pc = 0x22EFD8u;
            return;
        }
    }
    ctx->pc = 0x22F030u;
    // 0x22f030: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x22f030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f034: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x22F034u;
    {
        const bool branch_taken_0x22f034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f034) {
            ctx->pc = 0x22F0CCu;
            return;
        }
    }
    ctx->pc = 0x22F03Cu;
    // 0x22f03c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x22f040: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x22f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x22f044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22f048: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x22f048u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22f04c: 0x0  nop
    ctx->pc = 0x22f04cu;
    // NOP
    // 0x22f050: 0x0  nop
    ctx->pc = 0x22f050u;
    // NOP
    // 0x22f054: 0x1810  mfhi        $v1
    ctx->pc = 0x22f054u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22f058: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F058u;
    {
        const bool branch_taken_0x22f058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F058u;
        // 0x22f05c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f058) {
            ctx->pc = 0x22F0CCu;
            return;
        }
    }
    ctx->pc = 0x22F060u;
    // 0x22f060: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x22f064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f068: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22f06c: 0x24c6a2b0  addiu       $a2, $a2, -0x5D50
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943408));
    // 0x22f070: 0xc07a518  jal         func_1E9460
    ctx->pc = 0x22F070u;
    SET_GPR_U32(ctx, 31, 0x22F078u);
    ctx->pc = 0x22F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F070u;
    // 0x22f074: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9460u, 0x22F070u, 0x22F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F078u;
label_22f078:
    // 0x22f078: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f07c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22f080: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x22f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22f084: 0xc05ae1c  jal         func_16B870
    ctx->pc = 0x22F084u;
    SET_GPR_U32(ctx, 31, 0x22F08Cu);
    ctx->pc = 0x22F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F084u;
    // 0x22f088: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x22F084u, 0x22F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F08Cu;
label_22f08c:
    // 0x22f08c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x22F08Cu, 0x22F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f098: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22f09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f0a0: 0x0  nop
    ctx->pc = 0x22f0a0u;
    // NOP
    // 0x22f0a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22f0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f0a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x22f0ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22f0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f0b4: 0x0  nop
    ctx->pc = 0x22f0b4u;
    // NOP
    // 0x22f0b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22f0b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x22f0bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22f0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22f0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22f0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22f0c4: 0x0  nop
    ctx->pc = 0x22f0c4u;
    // NOP
    // 0x22f0c8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x22f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x22f0ccu;
}
