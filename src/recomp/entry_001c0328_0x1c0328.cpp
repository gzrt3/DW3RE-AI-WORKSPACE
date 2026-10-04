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

// Function: entry_001c0328
// Address: 0x1c0328 - 0x1c0344
void entry_001c0328_0x1c0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0328_0x1c0328");
#endif

    ctx->pc = 0x1c0328u;

    // 0x1c0328: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c0328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c032c: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
    // 0x1c0330: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c0334: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0338: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x464AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AACu, _value); } while (0);
    // 0x1c033c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0340: 0x0  nop
    ctx->pc = 0x1c0340u;
    // NOP
    ctx->pc = 0x1c0344u;
}
