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

// Function: entry_00115fa8
// Address: 0x115fa8 - 0x11600c
void entry_00115fa8_0x115fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115fa8_0x115fa8");
#endif

    switch (ctx->pc) {
        case 0x115fbcu: goto label_115fbc;
        default: break;
    }

    ctx->pc = 0x115fa8u;

    // 0x115fa8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x115fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x115fac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x115facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x115fb0: 0x24423ac0  addiu       $v0, $v0, 0x3AC0
    ctx->pc = 0x115fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15040));
    // 0x115fb4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x115FB4u;
    SET_GPR_U32(ctx, 31, 0x115FBCu);
    ctx->pc = 0x115FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FB4u;
    // 0x115fb8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x115FB4u, 0x115FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FBCu;
label_115fbc:
    // 0x115fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115fc0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x115fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x115fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115fc8: 0x0  nop
    ctx->pc = 0x115fc8u;
    // NOP
    // 0x115fcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x115fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x115fd0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x115fd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x115fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x115fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115fdc: 0x0  nop
    ctx->pc = 0x115fdcu;
    // NOP
    // 0x115fe0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x115fe0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x115fe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115fe8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x115fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x115fec: 0x0  nop
    ctx->pc = 0x115fecu;
    // NOP
    // 0x115ff0: 0xa22301a1  sb          $v1, 0x1A1($s1)
    ctx->pc = 0x115ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 3));
    // 0x115ff4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x115ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115ff8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x115FF8u;
    {
        const bool branch_taken_0x115ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x115ff8) {
            ctx->pc = 0x11600Cu;
            return;
        }
    }
    ctx->pc = 0x116000u;
    // 0x116000: 0x922301a1  lbu         $v1, 0x1A1($s1)
    ctx->pc = 0x116000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x116004: 0x24630085  addiu       $v1, $v1, 0x85
    ctx->pc = 0x116004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 133));
    // 0x116008: 0xa22301a1  sb          $v1, 0x1A1($s1)
    ctx->pc = 0x116008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x11600cu;
}
