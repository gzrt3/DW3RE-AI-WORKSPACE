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

// Function: entry_002446c8
// Address: 0x2446c8 - 0x2446e0
void entry_002446c8_0x2446c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002446c8_0x2446c8");
#endif

    ctx->pc = 0x2446c8u;

    // 0x2446c8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2446c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2446cc: 0x28810050  slti        $at, $a0, 0x50
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2446d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2446D0u;
    {
        const bool branch_taken_0x2446d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446d0) {
            ctx->pc = 0x2446E0u;
            return;
        }
    }
    ctx->pc = 0x2446D8u;
    // 0x2446d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2446dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2446e0u;
}
