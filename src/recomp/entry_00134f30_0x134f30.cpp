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

// Function: entry_00134f30
// Address: 0x134f30 - 0x134f44
void entry_00134f30_0x134f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f30_0x134f30");
#endif

    ctx->pc = 0x134f30u;

    // 0x134f30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x134f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x134f34: 0x29230008  slti        $v1, $t1, 0x8
    ctx->pc = 0x134f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x134f38: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x134F38u;
    {
        const bool branch_taken_0x134f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F38u;
        // 0x134f3c: 0x254a000a  addiu       $t2, $t2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f38) {
            ctx->pc = 0x134F04u;
            return;
        }
    }
    ctx->pc = 0x134F40u;
    // 0x134f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x134f44u;
}
