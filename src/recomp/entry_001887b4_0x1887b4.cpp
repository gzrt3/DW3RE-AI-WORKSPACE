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

// Function: entry_001887b4
// Address: 0x1887b4 - 0x188824
void entry_001887b4_0x1887b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001887b4_0x1887b4");
#endif

    switch (ctx->pc) {
        case 0x1887ccu: goto label_1887cc;
        default: break;
    }

    ctx->pc = 0x1887b4u;

    // 0x1887b4: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x188824u;
            return;
        }
    }
    ctx->pc = 0x1887BCu;
    // 0x1887bc: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1887c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1887c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1887c4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1887C4u;
    SET_GPR_U32(ctx, 31, 0x1887CCu);
    ctx->pc = 0x1887C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887C4u;
    // 0x1887c8: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1887C4u, 0x1887CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887CCu;
label_1887cc:
    // 0x1887cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1887ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1887d0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1887d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1887d8: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x1887d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1887dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1887dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1887e0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1887e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1887e8: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x1887e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x1887ec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1887f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1887f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1887f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1887f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1887fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188800: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188804: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188804u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188808: 0x0  nop
    ctx->pc = 0x188808u;
    // NOP
    // 0x18880c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18880cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x188810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x188818: 0x0  nop
    ctx->pc = 0x188818u;
    // NOP
    // 0x18881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188820: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x188820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x188824u;
}
