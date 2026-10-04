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

// Function: entry_001c4efc
// Address: 0x1c4efc - 0x1c4f18
void entry_001c4efc_0x1c4efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4efc_0x1c4efc");
#endif

    ctx->pc = 0x1c4efcu;

    // 0x1c4efc: 0x0  nop
    ctx->pc = 0x1c4efcu;
    // NOP
    // 0x1c4f00: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4f04: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1c4f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4f08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F08u;
    {
        const bool branch_taken_0x1c4f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F08u;
        // 0x1c4f0c: 0x2843007f  slti        $v1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f08) {
            ctx->pc = 0x1C4F18u;
            return;
        }
    }
    ctx->pc = 0x1C4F10u;
    // 0x1c4f10: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C4F10u;
    {
        const bool branch_taken_0x1c4f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f10) {
            ctx->pc = 0x1C4EF4u;
            return;
        }
    }
    ctx->pc = 0x1C4F18u;
}
