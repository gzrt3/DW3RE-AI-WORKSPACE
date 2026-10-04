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

// Function: entry_0012820c
// Address: 0x12820c - 0x128260
void entry_0012820c_0x12820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012820c_0x12820c");
#endif

    ctx->pc = 0x12820cu;

    // 0x12820c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12820cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x128210: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x128214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128218: 0x0  nop
    ctx->pc = 0x128218u;
    // NOP
    // 0x12821c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12821cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128220: 0x0  nop
    ctx->pc = 0x128220u;
    // NOP
    // 0x128224: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x128224u;
    {
        const bool branch_taken_0x128224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128224) {
            ctx->pc = 0x12823Cu;
            goto label_12823c;
        }
    }
    ctx->pc = 0x12822Cu;
    // 0x12822c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12822cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128230: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128234: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128234u;
    {
        const bool branch_taken_0x128234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128234u;
        // 0x128238: 0xa08502e3  sb          $a1, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128234) {
            ctx->pc = 0x128258u;
            goto label_128258;
        }
    }
    ctx->pc = 0x12823Cu;
label_12823c:
    // 0x12823c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12823cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128240: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x128244: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128248: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12824c: 0x0  nop
    ctx->pc = 0x12824cu;
    // NOP
    // 0x128250: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x128250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x128254: 0xa08502e3  sb          $a1, 0x2E3($a0)
    ctx->pc = 0x128254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
label_128258:
    // 0x128258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128258u;
    {
        const bool branch_taken_0x128258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128258) {
            ctx->pc = 0x128270u;
            return;
        }
    }
    ctx->pc = 0x128260u;
}
