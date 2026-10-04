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

// Function: entry_0020af34
// Address: 0x20af34 - 0x20af58
void entry_0020af34_0x20af34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020af34_0x20af34");
#endif

    ctx->pc = 0x20af34u;

    // 0x20af34: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20AF34u;
    {
        const bool branch_taken_0x20af34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20af34) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF3Cu;
    // 0x20af3c: 0x8f849118  lw          $a0, -0x6EE8($gp)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x20af40: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20af44: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20af48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AF48u;
    {
        const bool branch_taken_0x20af48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF48u;
        // 0x20af4c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af48) {
            ctx->pc = 0x20AF58u;
            return;
        }
    }
    ctx->pc = 0x20AF50u;
    // 0x20af50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF50u;
    {
        const bool branch_taken_0x20af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF50u;
        // 0x20af54: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af50) {
            ctx->pc = 0x20AF5Cu;
            return;
        }
    }
    ctx->pc = 0x20AF58u;
}
