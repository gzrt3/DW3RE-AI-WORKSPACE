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

// Function: entry_00223cf4
// Address: 0x223cf4 - 0x223d00
void entry_00223cf4_0x223cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223cf4_0x223cf4");
#endif

    ctx->pc = 0x223cf4u;

    // 0x223cf4: 0x0  nop
    ctx->pc = 0x223cf4u;
    // NOP
    // 0x223cf8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x223CF8u;
    {
        const bool branch_taken_0x223cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf8) {
            ctx->pc = 0x223D84u;
            return;
        }
    }
    ctx->pc = 0x223D00u;
}
