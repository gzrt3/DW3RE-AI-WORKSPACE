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

// Function: entry_00170e08
// Address: 0x170e08 - 0x170e44
void entry_00170e08_0x170e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e08_0x170e08");
#endif

    ctx->pc = 0x170e08u;

    // 0x170e08: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x170e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170e0c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x170E0Cu;
    {
        const bool branch_taken_0x170e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e0c) {
            ctx->pc = 0x170E44u;
            return;
        }
    }
    ctx->pc = 0x170E14u;
    // 0x170e14: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x170e18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x170E18u;
    {
        const bool branch_taken_0x170e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e18) {
            ctx->pc = 0x170E44u;
            return;
        }
    }
    ctx->pc = 0x170E20u;
    // 0x170e20: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x170e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x170e24: 0x162082b  sltu        $at, $t3, $v0
    ctx->pc = 0x170e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170e28: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x170E28u;
    {
        const bool branch_taken_0x170e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E28u;
        // 0x170e2c: 0x1482821  addu        $a1, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e28) {
            ctx->pc = 0x170E44u;
            return;
        }
    }
    ctx->pc = 0x170E30u;
    // 0x170e30: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x170e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
    // 0x170e34: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x170e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x170e38: 0x8f828738  lw          $v0, -0x78C8($gp)
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x170e3c: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x170e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x170e40: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x170e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x170e44u;
}
