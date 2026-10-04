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

// Function: entry_001e9140
// Address: 0x1e9140 - 0x1e9178
void entry_001e9140_0x1e9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9140_0x1e9140");
#endif

    ctx->pc = 0x1e9140u;

    // 0x1e9140: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x1e9140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x1e9144: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x1E9144u;
    {
        const bool branch_taken_0x1e9144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9144) {
            ctx->pc = 0x1E93B4u;
            return;
        }
    }
    ctx->pc = 0x1E914Cu;
    // 0x1e914c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e9150: 0x10a00098  beqz        $a1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1E9150u;
    {
        const bool branch_taken_0x1e9150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9150) {
            ctx->pc = 0x1E93B4u;
            return;
        }
    }
    ctx->pc = 0x1E9158u;
    // 0x1e9158: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1e915c: 0x86240056  lh          $a0, 0x56($s1)
    ctx->pc = 0x1e915cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x1e9160: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e9160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e9164: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9164u;
    {
        const bool branch_taken_0x1e9164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9164) {
            ctx->pc = 0x1E9178u;
            return;
        }
    }
    ctx->pc = 0x1E916Cu;
    // 0x1e916c: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x1e916cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9170: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1E9170u;
    {
        const bool branch_taken_0x1e9170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9170u;
        // 0x1e9174: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9170) {
            ctx->pc = 0x1E93B4u;
            return;
        }
    }
    ctx->pc = 0x1E9178u;
}
