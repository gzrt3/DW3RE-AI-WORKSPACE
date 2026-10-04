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

// Function: entry_00169978
// Address: 0x169978 - 0x1699c0
void entry_00169978_0x169978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169978_0x169978");
#endif

    ctx->pc = 0x169978u;

    // 0x169978: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x169978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16997c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x16997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x169980: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169984: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x169984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169988: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169988u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x16998c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x16998cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x169990: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x169994: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169998: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x169998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16999c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16999cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1699a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1699a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1699a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1699a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1699ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1699acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1699b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699B0u;
    {
        const bool branch_taken_0x1699b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1699B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699B0u;
        // 0x1699b4: 0x28411900  slti        $at, $v0, 0x1900 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6400) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699b0) {
            ctx->pc = 0x1699C0u;
            return;
        }
    }
    ctx->pc = 0x1699B8u;
    // 0x1699b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699B8u;
    {
        const bool branch_taken_0x1699b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1699b8) {
            ctx->pc = 0x1699C8u;
            return;
        }
    }
    ctx->pc = 0x1699C0u;
}
