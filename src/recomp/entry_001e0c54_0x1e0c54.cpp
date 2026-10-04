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

// Function: entry_001e0c54
// Address: 0x1e0c54 - 0x1e0c74
void entry_001e0c54_0x1e0c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c54_0x1e0c54");
#endif

    ctx->pc = 0x1e0c54u;

    // 0x1e0c54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c58: 0xa0a60083  sb          $a2, 0x83($a1)
    ctx->pc = 0x1e0c58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e0c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c60: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e0c64: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e0c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0c68: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1e0c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e0c6c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e0c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0c70: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1e0c74u;
}
