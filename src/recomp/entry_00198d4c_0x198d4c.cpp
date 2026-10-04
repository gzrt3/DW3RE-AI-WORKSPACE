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

// Function: entry_00198d4c
// Address: 0x198d4c - 0x198d64
void entry_00198d4c_0x198d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d4c_0x198d4c");
#endif

    ctx->pc = 0x198d4cu;

    // 0x198d4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x198d50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198d54: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x198d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x198d58: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x198d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x198d60u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    ctx->pc = 0x198d64u;
}
