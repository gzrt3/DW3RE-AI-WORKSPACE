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

// Function: entry_00158938
// Address: 0x158938 - 0x1589b8
void entry_00158938_0x158938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158938_0x158938");
#endif

    switch (ctx->pc) {
        case 0x158980u: goto label_158980;
        default: break;
    }

    ctx->pc = 0x158938u;

label_158938:
    // 0x158938: 0xa1050220  sb          $a1, 0x220($t0)
    ctx->pc = 0x158938u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 544), (uint8_t)GPR_U32(ctx, 5));
    // 0x15893c: 0xa1040222  sb          $a0, 0x222($t0)
    ctx->pc = 0x15893cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 546), (uint8_t)GPR_U32(ctx, 4));
    // 0x158940: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x158940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x158944: 0xad00022c  sw          $zero, 0x22C($t0)
    ctx->pc = 0x158944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 556), GPR_U32(ctx, 0));
    // 0x158948: 0x28e3000c  slti        $v1, $a3, 0xC
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x15894c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15894Cu;
    {
        const bool branch_taken_0x15894c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15894Cu;
        // 0x158950: 0x25080240  addiu       $t0, $t0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15894c) {
            ctx->pc = 0x158938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158938;
        }
    }
    ctx->pc = 0x158954u;
    // 0x158954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x158958: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15895c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15895Cu;
    {
        const bool branch_taken_0x15895c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15895Cu;
        // 0x158960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15895c) {
            ctx->pc = 0x158938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158938;
        }
    }
    ctx->pc = 0x158964u;
    // 0x158964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158968: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15896c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x15896cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x158970: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158970u;
    {
        const bool branch_taken_0x158970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x158974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158970u;
        // 0x158974: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158970) {
            ctx->pc = 0x1589B8u;
            return;
        }
    }
    ctx->pc = 0x158978u;
    // 0x158978: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x158978u;
    SET_GPR_U32(ctx, 31, 0x158980u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x158978u, 0x158980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158980u;
label_158980:
    // 0x158980: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158984: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x158988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15898c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158994: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158998: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15899c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15899cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589a0: 0x0  nop
    ctx->pc = 0x1589a0u;
    // NOP
    // 0x1589a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1589a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1589a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1589a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1589ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1589acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1589b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1589B0u;
    {
        const bool branch_taken_0x1589b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B0u;
        // 0x1589b4: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589b0) {
            ctx->pc = 0x158AA8u;
            return;
        }
    }
    ctx->pc = 0x1589B8u;
}
