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

// Function: entry_0018ecc0
// Address: 0x18ecc0 - 0x18ecdc
void entry_0018ecc0_0x18ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ecc0_0x18ecc0");
#endif

    ctx->pc = 0x18ecc0u;

    // 0x18ecc0: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x18ECC0u;
    {
        const bool branch_taken_0x18ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecc0) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18ECC8u;
    // 0x18ecc8: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x18eccc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x18ECCCu;
    {
        const bool branch_taken_0x18eccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECCCu;
        // 0x18ecd0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eccc) {
            ctx->pc = 0x18ED84u;
            return;
        }
    }
    ctx->pc = 0x18ECD4u;
    // 0x18ecd4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x18ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x18ecd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ecd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x18ecdcu;
}
