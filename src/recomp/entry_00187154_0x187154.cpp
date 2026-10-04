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

// Function: entry_00187154
// Address: 0x187154 - 0x187180
void entry_00187154_0x187154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187154_0x187154");
#endif

    ctx->pc = 0x187154u;

    // 0x187154: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187158: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
    // 0x18715c: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x187160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187164: 0x0  nop
    ctx->pc = 0x187164u;
    // NOP
    // 0x187168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x187168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18716c: 0x0  nop
    ctx->pc = 0x18716cu;
    // NOP
    // 0x187170: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x187170u;
    {
        const bool branch_taken_0x187170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187170) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x187178u;
    // 0x187178: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x187178u;
    {
        const bool branch_taken_0x187178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187178u;
        // 0x18717c: 0xa085023c  sb          $a1, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187178) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x187180u;
}
