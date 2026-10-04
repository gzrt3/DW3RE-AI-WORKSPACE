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

// Function: entry_00168184
// Address: 0x168184 - 0x168198
void entry_00168184_0x168184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168184_0x168184");
#endif

    ctx->pc = 0x168184u;

    // 0x168184: 0x0  nop
    ctx->pc = 0x168184u;
    // NOP
    // 0x168188: 0x172c0003  bne         $t9, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x168188u;
    {
        const bool branch_taken_0x168188 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 12));
        if (branch_taken_0x168188) {
            ctx->pc = 0x168198u;
            return;
        }
    }
    ctx->pc = 0x168190u;
    // 0x168190: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x168190u;
    {
        const bool branch_taken_0x168190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168190u;
        // 0x168194: 0xc5c00000  lwc1        $f0, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168190) {
            ctx->pc = 0x168218u;
            return;
        }
    }
    ctx->pc = 0x168198u;
}
