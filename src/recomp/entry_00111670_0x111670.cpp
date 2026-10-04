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

// Function: entry_00111670
// Address: 0x111670 - 0x111690
void entry_00111670_0x111670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111670_0x111670");
#endif

    ctx->pc = 0x111670u;

    // 0x111670: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x111670u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x111674: 0x9084002a  lbu         $a0, 0x2A($a0)
    ctx->pc = 0x111674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x111678: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x111678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x11167c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x111680: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x111684: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x111684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x111688: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x111688u;
    {
        const bool branch_taken_0x111688 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x111688) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111690u;
}
