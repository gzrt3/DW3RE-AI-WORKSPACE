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

// Function: entry_001b7a00
// Address: 0x1b7a00 - 0x1b7a2c
void entry_001b7a00_0x1b7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a00_0x1b7a00");
#endif

    ctx->pc = 0x1b7a00u;

    // 0x1b7a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7a04: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1b7a04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7a08: 0xdfa70030  ld          $a3, 0x30($sp)
    ctx->pc = 0x1b7a08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7a10: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a10u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b7a14: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7A14u;
    {
        const bool branch_taken_0x1b7a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A14u;
        // 0x1b7a18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a14) {
            ctx->pc = 0x1B7A2Cu;
            return;
        }
    }
    ctx->pc = 0x1B7A1Cu;
    // 0x1b7a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b7a20: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1b7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1b7a24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1b7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1b7a28: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a28u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->pc = 0x1b7a2cu;
}
