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

// Function: entry_0019b480
// Address: 0x19b480 - 0x19b498
void entry_0019b480_0x19b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b480_0x19b480");
#endif

    ctx->pc = 0x19b480u;

    // 0x19b480: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x19b480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19b484: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B484u;
    {
        const bool branch_taken_0x19b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B484u;
        // 0x19b488: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b484) {
            ctx->pc = 0x19B4B4u;
            return;
        }
    }
    ctx->pc = 0x19B48Cu;
    // 0x19b48c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B48Cu;
    {
        const bool branch_taken_0x19b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B48Cu;
        // 0x19b490: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b48c) {
            ctx->pc = 0x19B4A4u;
            return;
        }
    }
    ctx->pc = 0x19B494u;
    // 0x19b494: 0x0  nop
    ctx->pc = 0x19b494u;
    // NOP
    ctx->pc = 0x19b498u;
}
