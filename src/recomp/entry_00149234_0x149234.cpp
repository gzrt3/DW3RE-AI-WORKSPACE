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

// Function: entry_00149234
// Address: 0x149234 - 0x149260
void entry_00149234_0x149234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149234_0x149234");
#endif

    ctx->pc = 0x149234u;

    // 0x149234: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x149238: 0x28411771  slti        $at, $v0, 0x1771
    ctx->pc = 0x149238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6001) ? 1 : 0);
    // 0x14923c: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x14923Cu;
    {
        const bool branch_taken_0x14923c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14923c) {
            ctx->pc = 0x149340u;
            return;
        }
    }
    ctx->pc = 0x149244u;
    // 0x149244: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x149244u;
    {
        const bool branch_taken_0x149244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149244) {
            ctx->pc = 0x149260u;
            return;
        }
    }
    ctx->pc = 0x14924Cu;
    // 0x14924c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149250: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x149250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x149254: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x149254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x149258: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x149258u;
    {
        const bool branch_taken_0x149258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149258) {
            ctx->pc = 0x149274u;
            return;
        }
    }
    ctx->pc = 0x149260u;
}
