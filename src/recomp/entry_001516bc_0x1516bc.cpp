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

// Function: entry_001516bc
// Address: 0x1516bc - 0x151710
void entry_001516bc_0x1516bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001516bc_0x1516bc");
#endif

    switch (ctx->pc) {
        case 0x1516d8u: goto label_1516d8;
        default: break;
    }

    ctx->pc = 0x1516bcu;

    // 0x1516bc: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1516BCu;
    {
        const bool branch_taken_0x1516bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516BCu;
        // 0x1516c0: 0x28810010  slti        $at, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516bc) {
            ctx->pc = 0x151718u;
            return;
        }
    }
    ctx->pc = 0x1516C4u;
    // 0x1516c4: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x1516c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1516c8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1516C8u;
    {
        const bool branch_taken_0x1516c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C8u;
        // 0x1516cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c8) {
            ctx->pc = 0x151710u;
            return;
        }
    }
    ctx->pc = 0x1516D0u;
    // 0x1516d0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1516D0u;
    SET_GPR_U32(ctx, 31, 0x1516D8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1516D0u, 0x1516D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516D8u;
label_1516d8:
    // 0x1516d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1516d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1516dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1516e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1516e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1516e4: 0x0  nop
    ctx->pc = 0x1516e4u;
    // NOP
    // 0x1516e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1516e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1516ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1516f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1516f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1516f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1516f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1516f8: 0x0  nop
    ctx->pc = 0x1516f8u;
    // NOP
    // 0x1516fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1516fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x151700: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151704: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x151704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x151708: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x151708u;
    {
        const bool branch_taken_0x151708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151708u;
        // 0x15170c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151708) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x151710u;
}
