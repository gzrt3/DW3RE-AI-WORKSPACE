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

// Function: entry_0018728c
// Address: 0x18728c - 0x1872bc
void entry_0018728c_0x18728c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018728c_0x18728c");
#endif

    ctx->pc = 0x18728cu;

    // 0x18728c: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x18728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187290: 0x3c034874  lui         $v1, 0x4874
    ctx->pc = 0x187290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18548 << 16));
    // 0x187294: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x187294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x187298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18729c: 0x0  nop
    ctx->pc = 0x18729cu;
    // NOP
    // 0x1872a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1872a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872a4: 0x0  nop
    ctx->pc = 0x1872a4u;
    // NOP
    // 0x1872a8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1872A8u;
    {
        const bool branch_taken_0x1872a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1872a8) {
            ctx->pc = 0x187340u;
            return;
        }
    }
    ctx->pc = 0x1872B0u;
    // 0x1872b0: 0xa085023c  sb          $a1, 0x23C($a0)
    ctx->pc = 0x1872b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
    // 0x1872b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1872B4u;
    {
        const bool branch_taken_0x1872b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B4u;
        // 0x1872b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872b4) {
            ctx->pc = 0x187340u;
            return;
        }
    }
    ctx->pc = 0x1872BCu;
}
