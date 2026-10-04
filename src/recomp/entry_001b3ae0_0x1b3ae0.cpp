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

// Function: entry_001b3ae0
// Address: 0x1b3ae0 - 0x1b3af8
void entry_001b3ae0_0x1b3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ae0_0x1b3ae0");
#endif

    ctx->pc = 0x1b3ae0u;

    // 0x1b3ae0: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1b3ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1b3ae4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b3ae8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b3ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b3aec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1b3af0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1B3AF0u;
    {
        const bool branch_taken_0x1b3af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AF0u;
        // 0x1b3af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3af0) {
            ctx->pc = 0x1B3DD0u;
            return;
        }
    }
    ctx->pc = 0x1B3AF8u;
}
