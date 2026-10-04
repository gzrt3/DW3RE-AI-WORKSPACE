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

// Function: entry_001348a4
// Address: 0x1348a4 - 0x1348c0
void entry_001348a4_0x1348a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001348a4_0x1348a4");
#endif

    ctx->pc = 0x1348a4u;

    // 0x1348a4: 0x0  nop
    ctx->pc = 0x1348a4u;
    // NOP
    // 0x1348a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1348A8u;
    {
        const bool branch_taken_0x1348a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348a8) {
            ctx->pc = 0x1348C0u;
            return;
        }
    }
    ctx->pc = 0x1348B0u;
    // 0x1348b0: 0x87a3003e  lh          $v1, 0x3E($sp)
    ctx->pc = 0x1348b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x1348b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1348b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1348b8: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x1348b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x1348bc: 0xa423a40e  sh          $v1, -0x5BF2($at)
    ctx->pc = 0x1348bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A40Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A40Eu, _value); } while (0);
    ctx->pc = 0x1348c0u;
}
