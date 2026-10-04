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

// Function: entry_00209e0c
// Address: 0x209e0c - 0x209e48
void entry_00209e0c_0x209e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e0c_0x209e0c");
#endif

    ctx->pc = 0x209e0cu;

    // 0x209e0c: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209e14: 0x8ca45720  lw          $a0, 0x5720($a1)
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22304)));
    // 0x209e18: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E70u;
            return;
        }
    }
    ctx->pc = 0x209E20u;
    // 0x209e20: 0x8ca45724  lw          $a0, 0x5724($a1)
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22308)));
    // 0x209e24: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x209e28: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x209e2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x209E2Cu;
    {
        const bool branch_taken_0x209e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E2Cu;
        // 0x209e30: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e2c) {
            ctx->pc = 0x209E48u;
            return;
        }
    }
    ctx->pc = 0x209E34u;
    // 0x209e34: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e38: 0x8c855724  lw          $a1, 0x5724($a0)
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209e3c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x209e40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209E40u;
    {
        const bool branch_taken_0x209e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E40u;
        // 0x209e44: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e40) {
            ctx->pc = 0x209E4Cu;
            return;
        }
    }
    ctx->pc = 0x209E48u;
}
