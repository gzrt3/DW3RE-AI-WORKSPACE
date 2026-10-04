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

// Function: entry_001765e8
// Address: 0x1765e8 - 0x176608
void entry_001765e8_0x1765e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001765e8_0x1765e8");
#endif

    ctx->pc = 0x1765e8u;

    // 0x1765e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1765E8u;
    {
        const bool branch_taken_0x1765e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765e8) {
            ctx->pc = 0x176608u;
            return;
        }
    }
    ctx->pc = 0x1765F0u;
    // 0x1765f0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1765f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1765f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1765f8: 0xa42251f4  sh          $v0, 0x51F4($at)
    ctx->pc = 0x1765f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3651F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F4u, _value); } while (0);
    // 0x1765fc: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x176600: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x176604: 0xa42251f6  sh          $v0, 0x51F6($at)
    ctx->pc = 0x176604u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3651F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F6u, _value); } while (0);
    ctx->pc = 0x176608u;
}
