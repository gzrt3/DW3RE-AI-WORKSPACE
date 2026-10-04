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

// Function: entry_00229a28
// Address: 0x229a28 - 0x229a30
void entry_00229a28_0x229a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229a28_0x229a28");
#endif

    ctx->pc = 0x229a28u;

    // 0x229a28: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a2c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A270u, _value); } while (0);
    ctx->pc = 0x229a30u;
}
