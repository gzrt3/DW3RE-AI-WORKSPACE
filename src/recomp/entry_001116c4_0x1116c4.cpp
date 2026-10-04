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

// Function: entry_001116c4
// Address: 0x1116c4 - 0x1116e4
void entry_001116c4_0x1116c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116c4_0x1116c4");
#endif

    ctx->pc = 0x1116c4u;

    // 0x1116c4: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x1116c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1116c8: 0x9084002a  lbu         $a0, 0x2A($a0)
    ctx->pc = 0x1116c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1116cc: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1116ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1116d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1116d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1116d8: 0x28610025  slti        $at, $v1, 0x25
    ctx->pc = 0x1116d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1116dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1116DCu;
    {
        const bool branch_taken_0x1116dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1116dc) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x1116E4u;
}
