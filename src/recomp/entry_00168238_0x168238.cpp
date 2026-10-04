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

// Function: entry_00168238
// Address: 0x168238 - 0x168244
void entry_00168238_0x168238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168238_0x168238");
#endif

    ctx->pc = 0x168238u;

    // 0x168238: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x168238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x16823c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16823Cu;
    {
        const bool branch_taken_0x16823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16823Cu;
        // 0x168240: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16823c) {
            ctx->pc = 0x168260u;
            return;
        }
    }
    ctx->pc = 0x168244u;
}
