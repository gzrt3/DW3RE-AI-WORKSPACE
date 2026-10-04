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

// Function: entry_00170204
// Address: 0x170204 - 0x170224
void entry_00170204_0x170204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170204_0x170204");
#endif

    ctx->pc = 0x170204u;

label_170204:
    // 0x170204: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x170208: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x170208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x17020c: 0x90470008  lbu         $a3, 0x8($v0)
    ctx->pc = 0x17020cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170210: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x170214: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x170214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x170218: 0xa0670015  sb          $a3, 0x15($v1)
    ctx->pc = 0x170218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 7));
    // 0x17021c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17021Cu;
    {
        const bool branch_taken_0x17021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17021c) {
            ctx->pc = 0x170204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170204;
        }
    }
    ctx->pc = 0x170224u;
}
