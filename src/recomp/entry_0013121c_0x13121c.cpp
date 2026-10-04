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

// Function: entry_0013121c
// Address: 0x13121c - 0x131268
void entry_0013121c_0x13121c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013121c_0x13121c");
#endif

    switch (ctx->pc) {
        case 0x131224u: goto label_131224;
        default: break;
    }

    ctx->pc = 0x13121cu;

    // 0x13121c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x13121Cu;
    SET_GPR_U32(ctx, 31, 0x131224u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x13121Cu, 0x131224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131224u;
label_131224:
    // 0x131224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131228: 0x0  nop
    ctx->pc = 0x131228u;
    // NOP
    // 0x13122c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13122cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x131230: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x131234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131238: 0x0  nop
    ctx->pc = 0x131238u;
    // NOP
    // 0x13123c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x13123cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131240: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131248: 0x0  nop
    ctx->pc = 0x131248u;
    // NOP
    // 0x13124c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13124cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x131250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131258: 0x0  nop
    ctx->pc = 0x131258u;
    // NOP
    // 0x13125c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x131260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x131260u;
    {
        const bool branch_taken_0x131260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131260u;
        // 0x131264: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131260) {
            ctx->pc = 0x13127Cu;
            return;
        }
    }
    ctx->pc = 0x131268u;
}
