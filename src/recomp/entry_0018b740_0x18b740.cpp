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

// Function: entry_0018b740
// Address: 0x18b740 - 0x18b7a0
void entry_0018b740_0x18b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b740_0x18b740");
#endif

    switch (ctx->pc) {
        case 0x18b754u: goto label_18b754;
        case 0x18b79cu: goto label_18b79c;
        default: break;
    }

    ctx->pc = 0x18b740u;

    // 0x18b740: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x18b740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x18b744: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B744u;
    {
        const bool branch_taken_0x18b744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b744) {
            ctx->pc = 0x18B7A0u;
            return;
        }
    }
    ctx->pc = 0x18B74Cu;
    // 0x18b74c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x18B74Cu;
    SET_GPR_U32(ctx, 31, 0x18B754u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x18B74Cu, 0x18B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B754u;
label_18b754:
    // 0x18b754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b758: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x18b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x18b75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b760: 0x0  nop
    ctx->pc = 0x18b760u;
    // NOP
    // 0x18b764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b768: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18b76c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
    // 0x18b778: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b778u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18b77c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b780: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18b784: 0x0  nop
    ctx->pc = 0x18b784u;
    // NOP
    // 0x18b788: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x18b788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18b78c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B78Cu;
    {
        const bool branch_taken_0x18b78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B78Cu;
        // 0x18b790: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b78c) {
            ctx->pc = 0x18B7A0u;
            return;
        }
    }
    ctx->pc = 0x18B794u;
    // 0x18b794: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B794u;
    SET_GPR_U32(ctx, 31, 0x18B79Cu);
    ctx->pc = 0x18B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B794u;
    // 0x18b798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B794u, 0x18B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B79Cu;
label_18b79c:
    // 0x18b79c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18b7a0u;
}
