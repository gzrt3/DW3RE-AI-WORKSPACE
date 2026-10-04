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

// Function: entry_00209e70
// Address: 0x209e70 - 0x209ea0
void entry_00209e70_0x209e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e70_0x209e70");
#endif

    ctx->pc = 0x209e70u;

    // 0x209e70: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x209E70u;
    {
        const bool branch_taken_0x209e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x209e70) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209E78u;
    // 0x209e78: 0x8ca45724  lw          $a0, 0x5724($a1)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22308)));
    // 0x209e7c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x209e80: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x209e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x209e84: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x209E84u;
    {
        const bool branch_taken_0x209e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E84u;
        // 0x209e88: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e84) {
            ctx->pc = 0x209EA0u;
            return;
        }
    }
    ctx->pc = 0x209E8Cu;
    // 0x209e8c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e90: 0x8c855724  lw          $a1, 0x5724($a0)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209e94: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x209e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209E98u;
    {
        const bool branch_taken_0x209e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E98u;
        // 0x209e9c: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e98) {
            ctx->pc = 0x209EA4u;
            return;
        }
    }
    ctx->pc = 0x209EA0u;
}
