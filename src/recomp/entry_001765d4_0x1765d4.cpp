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

// Function: entry_001765d4
// Address: 0x1765d4 - 0x1765e8
void entry_001765d4_0x1765d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001765d4_0x1765d4");
#endif

    ctx->pc = 0x1765d4u;

    // 0x1765d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1765d8: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x1765d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3651F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F6u, _value); } while (0);
    // 0x1765dc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1765e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1765E0u;
    {
        const bool branch_taken_0x1765e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765E0u;
        // 0x1765e4: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765e0) {
            ctx->pc = 0x176608u;
            return;
        }
    }
    ctx->pc = 0x1765E8u;
}
