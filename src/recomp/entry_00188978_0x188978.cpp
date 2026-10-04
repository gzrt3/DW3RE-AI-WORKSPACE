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

// Function: entry_00188978
// Address: 0x188978 - 0x188998
void entry_00188978_0x188978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188978_0x188978");
#endif

    ctx->pc = 0x188978u;

    // 0x188978: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x188978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18897c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18897cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188980: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x188984: 0x0  nop
    ctx->pc = 0x188984u;
    // NOP
    // 0x188988: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188988u;
    {
        const bool branch_taken_0x188988 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188988u;
        // 0x18898c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188988) {
            ctx->pc = 0x188998u;
            return;
        }
    }
    ctx->pc = 0x188990u;
    // 0x188990: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x188994: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    ctx->pc = 0x188998u;
}
