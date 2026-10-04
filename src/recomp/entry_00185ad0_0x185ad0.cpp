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

// Function: entry_00185ad0
// Address: 0x185ad0 - 0x185afc
void entry_00185ad0_0x185ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185ad0_0x185ad0");
#endif

    ctx->pc = 0x185ad0u;

    // 0x185ad0: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ad4: 0x3c0348af  lui         $v1, 0x48AF
    ctx->pc = 0x185ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
    // 0x185ad8: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x185ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x185adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ae0: 0x0  nop
    ctx->pc = 0x185ae0u;
    // NOP
    // 0x185ae4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185ae8: 0x0  nop
    ctx->pc = 0x185ae8u;
    // NOP
    // 0x185aec: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x185AECu;
    {
        const bool branch_taken_0x185aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185aec) {
            ctx->pc = 0x185B74u;
            return;
        }
    }
    ctx->pc = 0x185AF4u;
    // 0x185af4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x185AF4u;
    {
        const bool branch_taken_0x185af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF4u;
        // 0x185af8: 0xa224023c  sb          $a0, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af4) {
            ctx->pc = 0x185B74u;
            return;
        }
    }
    ctx->pc = 0x185AFCu;
}
