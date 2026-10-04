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

// Function: entry_001ea7a0
// Address: 0x1ea7a0 - 0x1ea814
void entry_001ea7a0_0x1ea7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea7a0_0x1ea7a0");
#endif

    ctx->pc = 0x1ea7a0u;

    // 0x1ea7a0: 0x14a4001c  bne         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EA7A0u;
    {
        const bool branch_taken_0x1ea7a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea7a0) {
            ctx->pc = 0x1EA814u;
            return;
        }
    }
    ctx->pc = 0x1EA7A8u;
    // 0x1ea7a8: 0x8f848ef4  lw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ea7ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ea7b0: 0xaf848ef4  sw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 4));
    // 0x1ea7b4: 0x8f848ef4  lw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ea7b8: 0x28840008  slti        $a0, $a0, 0x8
    ctx->pc = 0x1ea7b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ea7bc: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1EA7BCu;
    {
        const bool branch_taken_0x1ea7bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7BCu;
        // 0x1ea7c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7bc) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA7C4u;
    // 0x1ea7c4: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
    // 0x1ea7c8: 0xaf848ef0  sw          $a0, -0x7110($gp)
    ctx->pc = 0x1ea7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 4));
    // 0x1ea7cc: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x1ea7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1ea7d0: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
    // 0x1ea7d4: 0xaf848eec  sw          $a0, -0x7114($gp)
    ctx->pc = 0x1ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 4));
    // 0x1ea7d8: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1ea7dc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    // 0x1ea7e0: 0xaf848ee8  sw          $a0, -0x7118($gp)
    ctx->pc = 0x1ea7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 4));
    // 0x1ea7e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ea7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ea7e8: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1ea7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
    // 0x1ea7ec: 0xaf848ee0  sw          $a0, -0x7120($gp)
    ctx->pc = 0x1ea7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 4));
    // 0x1ea7f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ea7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ea7f4: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
    // 0x1ea7f8: 0xaf848edc  sw          $a0, -0x7124($gp)
    ctx->pc = 0x1ea7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 4));
    // 0x1ea7fc: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
    // 0x1ea800: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
    // 0x1ea804: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1ea804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
    // 0x1ea808: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
    // 0x1ea80c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1EA80Cu;
    {
        const bool branch_taken_0x1ea80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA80Cu;
        // 0x1ea810: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea80c) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA814u;
}
