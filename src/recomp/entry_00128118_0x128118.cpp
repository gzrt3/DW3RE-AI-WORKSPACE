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

// Function: entry_00128118
// Address: 0x128118 - 0x12816c
void entry_00128118_0x128118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128118_0x128118");
#endif

    ctx->pc = 0x128118u;

    // 0x128118: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x128118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12811c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x128120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128124: 0x0  nop
    ctx->pc = 0x128124u;
    // NOP
    // 0x128128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12812c: 0x0  nop
    ctx->pc = 0x12812cu;
    // NOP
    // 0x128130: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x128130u;
    {
        const bool branch_taken_0x128130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128130) {
            ctx->pc = 0x128148u;
            goto label_128148;
        }
    }
    ctx->pc = 0x128138u;
    // 0x128138: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12813c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12813cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128140u;
    {
        const bool branch_taken_0x128140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128140u;
        // 0x128144: 0xa08502e3  sb          $a1, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128140) {
            ctx->pc = 0x128164u;
            goto label_128164;
        }
    }
    ctx->pc = 0x128148u;
label_128148:
    // 0x128148: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12814c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x128150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128154: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128158: 0x0  nop
    ctx->pc = 0x128158u;
    // NOP
    // 0x12815c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12815cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x128160: 0xa08502e3  sb          $a1, 0x2E3($a0)
    ctx->pc = 0x128160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
label_128164:
    // 0x128164: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x128164u;
    {
        const bool branch_taken_0x128164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128164u;
        // 0x128168: 0x948302e6  lhu         $v1, 0x2E6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128164) {
            ctx->pc = 0x128274u;
            return;
        }
    }
    ctx->pc = 0x12816Cu;
}
