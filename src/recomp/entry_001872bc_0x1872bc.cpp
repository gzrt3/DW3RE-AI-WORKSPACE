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

// Function: entry_001872bc
// Address: 0x1872bc - 0x187314
void entry_001872bc_0x1872bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001872bc_0x1872bc");
#endif

    ctx->pc = 0x1872bcu;

    // 0x1872bc: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x1872bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872c0: 0x3c03484e  lui         $v1, 0x484E
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18510 << 16));
    // 0x1872c4: 0x3463a400  ori         $v1, $v1, 0xA400
    ctx->pc = 0x1872c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41984);
    // 0x1872c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1872c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1872cc: 0x0  nop
    ctx->pc = 0x1872ccu;
    // NOP
    // 0x1872d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1872d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872d4: 0x0  nop
    ctx->pc = 0x1872d4u;
    // NOP
    // 0x1872d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1872D8u;
    {
        const bool branch_taken_0x1872d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1872DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D8u;
        // 0x1872dc: 0x3c0348af  lui         $v1, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872d8) {
            ctx->pc = 0x1872ECu;
            goto label_1872ec;
        }
    }
    ctx->pc = 0x1872E0u;
    // 0x1872e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1872e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1872E4u;
    {
        const bool branch_taken_0x1872e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E4u;
        // 0x1872e8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872e4) {
            ctx->pc = 0x187340u;
            return;
        }
    }
    ctx->pc = 0x1872ECu;
label_1872ec:
    // 0x1872ec: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x1872ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x1872f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1872f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1872f4: 0x0  nop
    ctx->pc = 0x1872f4u;
    // NOP
    // 0x1872f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1872f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872fc: 0x0  nop
    ctx->pc = 0x1872fcu;
    // NOP
    // 0x187300: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x187300u;
    {
        const bool branch_taken_0x187300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187300) {
            ctx->pc = 0x187340u;
            return;
        }
    }
    ctx->pc = 0x187308u;
    // 0x187308: 0xa086023c  sb          $a2, 0x23C($a0)
    ctx->pc = 0x187308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 6));
    // 0x18730c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18730Cu;
    {
        const bool branch_taken_0x18730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18730Cu;
        // 0x187310: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18730c) {
            ctx->pc = 0x187340u;
            return;
        }
    }
    ctx->pc = 0x187314u;
}
