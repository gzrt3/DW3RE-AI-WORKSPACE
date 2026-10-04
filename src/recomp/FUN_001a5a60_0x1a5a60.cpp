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

// Function: FUN_001a5a60
// Address: 0x1a5a60 - 0x1a5a7c
void FUN_001a5a60_0x1a5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5a60_0x1a5a60");
#endif

    ctx->pc = 0x1a5a60u;

    // 0x1a5a60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a5a64: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1a5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1a5a68: 0xac441300  sw          $a0, 0x1300($v0)
    ctx->pc = 0x1a5a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x371300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x371300u, _value); } while (0);
    // 0x1a5a6c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a5a70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a74: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a5a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x371308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x371308u, _value); } while (0);
    // 0x1a5a78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a5a78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x371304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x371304u, _value); } while (0);
    ctx->pc = 0x1a5a7cu;
}
