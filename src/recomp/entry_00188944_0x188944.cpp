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

// Function: entry_00188944
// Address: 0x188944 - 0x188978
void entry_00188944_0x188944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188944_0x188944");
#endif

    ctx->pc = 0x188944u;

    // 0x188944: 0xc6010260  lwc1        $f1, 0x260($s0)
    ctx->pc = 0x188944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188948: 0x3c034a09  lui         $v1, 0x4A09
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18953 << 16));
    // 0x18894c: 0x34635440  ori         $v1, $v1, 0x5440
    ctx->pc = 0x18894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21568);
    // 0x188950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188954: 0x0  nop
    ctx->pc = 0x188954u;
    // NOP
    // 0x188958: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18895c: 0x0  nop
    ctx->pc = 0x18895cu;
    // NOP
    // 0x188960: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x188960u;
    {
        const bool branch_taken_0x188960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188960) {
            ctx->pc = 0x1889BCu;
            return;
        }
    }
    ctx->pc = 0x188968u;
    // 0x188968: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x188968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x18896c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x18896cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x188970: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x188970u;
    {
        const bool branch_taken_0x188970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188970) {
            ctx->pc = 0x1889BCu;
            return;
        }
    }
    ctx->pc = 0x188978u;
}
