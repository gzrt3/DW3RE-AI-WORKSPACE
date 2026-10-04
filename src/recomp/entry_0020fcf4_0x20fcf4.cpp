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

// Function: entry_0020fcf4
// Address: 0x20fcf4 - 0x20fd14
void entry_0020fcf4_0x20fcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fcf4_0x20fcf4");
#endif

    ctx->pc = 0x20fcf4u;

label_20fcf4:
    // 0x20fcf4: 0x0  nop
    ctx->pc = 0x20fcf4u;
    // NOP
    // 0x20fcf8: 0x825814  dsllv       $t3, $v0, $a0
    ctx->pc = 0x20fcf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x20fcfc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fd00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fd04: 0x288b0019  slti        $t3, $a0, 0x19
    ctx->pc = 0x20fd04u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x20fd08: 0x0  nop
    ctx->pc = 0x20fd08u;
    // NOP
    // 0x20fd0c: 0x1560fff9  bnez        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20FD0Cu;
    {
        const bool branch_taken_0x20fd0c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd0c) {
            ctx->pc = 0x20FCF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fcf4;
        }
    }
    ctx->pc = 0x20FD14u;
}
