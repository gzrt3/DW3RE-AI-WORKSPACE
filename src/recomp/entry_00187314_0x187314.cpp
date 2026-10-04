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

// Function: entry_00187314
// Address: 0x187314 - 0x187340
void entry_00187314_0x187314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187314_0x187314");
#endif

    ctx->pc = 0x187314u;

    // 0x187314: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187318: 0x3c034899  lui         $v1, 0x4899
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18585 << 16));
    // 0x18731c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18731cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x187320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187324: 0x0  nop
    ctx->pc = 0x187324u;
    // NOP
    // 0x187328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18732c: 0x0  nop
    ctx->pc = 0x18732cu;
    // NOP
    // 0x187330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x187330u;
    {
        const bool branch_taken_0x187330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187330) {
            ctx->pc = 0x187340u;
            return;
        }
    }
    ctx->pc = 0x187338u;
    // 0x187338: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18733c: 0xa087023c  sb          $a3, 0x23C($a0)
    ctx->pc = 0x18733cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x187340u;
}
