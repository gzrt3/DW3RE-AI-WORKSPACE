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

// Function: entry_0012b980
// Address: 0x12b980 - 0x12b9c8
void entry_0012b980_0x12b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b980_0x12b980");
#endif

    ctx->pc = 0x12b980u;

    // 0x12b980: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x12b984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b988: 0x0  nop
    ctx->pc = 0x12b988u;
    // NOP
    // 0x12b98c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12b98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b990: 0x0  nop
    ctx->pc = 0x12b990u;
    // NOP
    // 0x12b994: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12B994u;
    {
        const bool branch_taken_0x12b994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b994) {
            ctx->pc = 0x12B9ACu;
            goto label_12b9ac;
        }
    }
    ctx->pc = 0x12B99Cu;
    // 0x12b99c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12b9a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12b9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12b9a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12B9A4u;
    {
        const bool branch_taken_0x12b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A4u;
        // 0x12b9a8: 0xac8500ac  sw          $a1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a4) {
            ctx->pc = 0x12B9C8u;
            return;
        }
    }
    ctx->pc = 0x12B9ACu;
label_12b9ac:
    // 0x12b9ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b9b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12b9b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b9b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12b9b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12b9b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12b9bc: 0x0  nop
    ctx->pc = 0x12b9bcu;
    // NOP
    // 0x12b9c0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12b9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x12b9c4: 0xac8500ac  sw          $a1, 0xAC($a0)
    ctx->pc = 0x12b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
    ctx->pc = 0x12b9c8u;
}
