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

// Function: entry_00168500
// Address: 0x168500 - 0x168510
void entry_00168500_0x168500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168500_0x168500");
#endif

    ctx->pc = 0x168500u;

    // 0x168500: 0x148c0003  bne         $a0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x168500u;
    {
        const bool branch_taken_0x168500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x168500) {
            ctx->pc = 0x168510u;
            return;
        }
    }
    ctx->pc = 0x168508u;
    // 0x168508: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x168508u;
    {
        const bool branch_taken_0x168508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168508u;
        // 0x16850c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168508) {
            ctx->pc = 0x168590u;
            return;
        }
    }
    ctx->pc = 0x168510u;
}
