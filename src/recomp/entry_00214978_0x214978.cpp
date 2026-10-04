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

// Function: entry_00214978
// Address: 0x214978 - 0x214998
void entry_00214978_0x214978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214978_0x214978");
#endif

    ctx->pc = 0x214978u;

    // 0x214978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x214978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21497c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21497Cu;
    {
        const bool branch_taken_0x21497c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x214980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21497Cu;
        // 0x214980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21497c) {
            ctx->pc = 0x214998u;
            return;
        }
    }
    ctx->pc = 0x214984u;
    // 0x214984: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x214984u;
    {
        const bool branch_taken_0x214984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214984u;
        // 0x214988: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214984) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x21498Cu;
    // 0x21498c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21498cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x214990: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x214990u;
    {
        const bool branch_taken_0x214990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214990u;
        // 0x214994: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214990) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x214998u;
}
