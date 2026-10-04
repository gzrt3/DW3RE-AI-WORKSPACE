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

// Function: entry_002299e0
// Address: 0x2299e0 - 0x229a24
void entry_002299e0_0x2299e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002299e0_0x2299e0");
#endif

    ctx->pc = 0x2299e0u;

    // 0x2299e0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2299e4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2299e8: 0xac22a274  sw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A274u, _value); } while (0);
    // 0x2299ec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2299f0: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A270u));
    // 0x2299f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2299f8: 0x8c22a274  lw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58A274u));
    // 0x2299fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229a00: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a04: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A270u, _value); } while (0);
    // 0x229a08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a0c: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58A270u));
    // 0x229a10: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x229a14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x229A14u;
    {
        const bool branch_taken_0x229a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a14) {
            ctx->pc = 0x229A24u;
            return;
        }
    }
    ctx->pc = 0x229A1Cu;
    // 0x229a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229A1Cu;
    {
        const bool branch_taken_0x229a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a1c) {
            ctx->pc = 0x229A28u;
            return;
        }
    }
    ctx->pc = 0x229A24u;
}
