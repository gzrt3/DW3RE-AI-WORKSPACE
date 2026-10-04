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

// Function: entry_001a1e10
// Address: 0x1a1e10 - 0x1a1e28
void entry_001a1e10_0x1a1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1e10_0x1a1e10");
#endif

    ctx->pc = 0x1a1e10u;

    // 0x1a1e10: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1E10u;
    {
        const bool branch_taken_0x1a1e10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E10u;
        // 0x1a1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e10) {
            ctx->pc = 0x1A1E2Cu;
            return;
        }
    }
    ctx->pc = 0x1A1E18u;
    // 0x1a1e18: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x1a1e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a1e1c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1a1e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a1e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a1e24: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1e28u;
}
