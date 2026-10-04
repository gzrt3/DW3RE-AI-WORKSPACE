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

// Function: entry_00137304
// Address: 0x137304 - 0x13732c
void entry_00137304_0x137304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137304_0x137304");
#endif

    ctx->pc = 0x137304u;

    // 0x137304: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137308: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x13730c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x13730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x137310: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137310u;
    {
        const bool branch_taken_0x137310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137310) {
            ctx->pc = 0x13732Cu;
            return;
        }
    }
    ctx->pc = 0x137318u;
    // 0x137318: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13731c: 0x9422a3e6  lhu         $v0, -0x5C1A($at)
    ctx->pc = 0x13731cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x30A3E6u));
    // 0x137320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137324: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137328: 0xa422a3e6  sh          $v0, -0x5C1A($at)
    ctx->pc = 0x137328u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E6u, _value); } while (0);
    ctx->pc = 0x13732cu;
}
