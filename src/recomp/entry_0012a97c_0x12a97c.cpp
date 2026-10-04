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

// Function: entry_0012a97c
// Address: 0x12a97c - 0x12a9fc
void entry_0012a97c_0x12a97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a97c_0x12a97c");
#endif

    switch (ctx->pc) {
        case 0x12a988u: goto label_12a988;
        case 0x12a98cu: goto label_12a98c;
        case 0x12a994u: goto label_12a994;
        case 0x12a9e0u: goto label_12a9e0;
        default: break;
    }

    ctx->pc = 0x12a97cu;

    // 0x12a97c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x12a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a980: 0xc04abe4  jal         func_12AF90
    ctx->pc = 0x12A980u;
    SET_GPR_U32(ctx, 31, 0x12A988u);
    ctx->pc = 0x12A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A980u;
    // 0x12a984: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AF90u, 0x12A980u, 0x12A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A988u;
label_12a988:
    // 0x12a988: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12a988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a98c:
    // 0x12a98c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12A98Cu;
    SET_GPR_U32(ctx, 31, 0x12A994u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12A98Cu, 0x12A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A994u;
label_12a994:
    // 0x12a994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12a994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a998: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x12a99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9a0: 0x0  nop
    ctx->pc = 0x12a9a0u;
    // NOP
    // 0x12a9a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12a9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12a9a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x12a9ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12a9acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12a9b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a9b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9b4: 0x0  nop
    ctx->pc = 0x12a9b4u;
    // NOP
    // 0x12a9b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12a9b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x12a9bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12a9c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a9c4: 0x0  nop
    ctx->pc = 0x12a9c4u;
    // NOP
    // 0x12a9c8: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x12a9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12a9cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A9CCu;
    {
        const bool branch_taken_0x12a9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9cc) {
            ctx->pc = 0x12A9E0u;
            goto label_12a9e0;
        }
    }
    ctx->pc = 0x12A9D4u;
    // 0x12a9d4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x12a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a9d8: 0xc04aa84  jal         func_12AA10
    ctx->pc = 0x12A9D8u;
    SET_GPR_U32(ctx, 31, 0x12A9E0u);
    ctx->pc = 0x12A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9D8u;
    // 0x12a9dc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AA10u, 0x12A9D8u, 0x12A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9E0u;
label_12a9e0:
    // 0x12a9e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12a9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12a9e4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x12a9e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a9e8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12A9E8u;
    {
        const bool branch_taken_0x12a9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9e8) {
            ctx->pc = 0x12A98Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a98c;
        }
    }
    ctx->pc = 0x12A9F0u;
    // 0x12a9f0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x12a9f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12a9f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12a9f8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x12a9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12a9fcu;
}
