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

// Function: entry_00136844
// Address: 0x136844 - 0x136858
void entry_00136844_0x136844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136844_0x136844");
#endif

    ctx->pc = 0x136844u;

    // 0x136844: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136844u;
    {
        const bool branch_taken_0x136844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136844) {
            ctx->pc = 0x136858u;
            return;
        }
    }
    ctx->pc = 0x13684Cu;
    // 0x13684c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136850: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136854: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x136854u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
    ctx->pc = 0x136858u;
}
