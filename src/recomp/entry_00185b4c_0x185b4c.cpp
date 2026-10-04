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

// Function: entry_00185b4c
// Address: 0x185b4c - 0x185b78
void entry_00185b4c_0x185b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b4c_0x185b4c");
#endif

    ctx->pc = 0x185b4cu;

    // 0x185b4c: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b50: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x185b54: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x185b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x185b58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b5c: 0x0  nop
    ctx->pc = 0x185b5cu;
    // NOP
    // 0x185b60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b64: 0x0  nop
    ctx->pc = 0x185b64u;
    // NOP
    // 0x185b68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x185B68u;
    {
        const bool branch_taken_0x185b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B68u;
        // 0x185b6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b68) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B70u;
    // 0x185b70: 0xa223023c  sb          $v1, 0x23C($s1)
    ctx->pc = 0x185b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 3));
label_185b74:
    // 0x185b74: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->pc = 0x185b78u;
}
