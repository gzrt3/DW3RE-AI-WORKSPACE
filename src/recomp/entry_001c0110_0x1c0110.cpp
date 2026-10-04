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

// Function: entry_001c0110
// Address: 0x1c0110 - 0x1c012c
void entry_001c0110_0x1c0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0110_0x1c0110");
#endif

    ctx->pc = 0x1c0110u;

    // 0x1c0110: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0114: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A9Cu));
    // 0x1c0118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c011c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C011Cu;
    {
        const bool branch_taken_0x1c011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c011c) {
            ctx->pc = 0x1C012Cu;
            return;
        }
    }
    ctx->pc = 0x1C0124u;
    // 0x1c0124: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0128: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
    ctx->pc = 0x1c012cu;
}
