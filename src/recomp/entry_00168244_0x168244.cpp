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

// Function: entry_00168244
// Address: 0x168244 - 0x168254
void entry_00168244_0x168244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168244_0x168244");
#endif

    ctx->pc = 0x168244u;

    // 0x168244: 0x0  nop
    ctx->pc = 0x168244u;
    // NOP
    // 0x168248: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x168248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x16824c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16824Cu;
    {
        const bool branch_taken_0x16824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16824Cu;
        // 0x168250: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16824c) {
            ctx->pc = 0x168260u;
            return;
        }
    }
    ctx->pc = 0x168254u;
}
