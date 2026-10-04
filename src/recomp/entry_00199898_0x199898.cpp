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

// Function: entry_00199898
// Address: 0x199898 - 0x1998b0
void entry_00199898_0x199898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199898_0x199898");
#endif

    ctx->pc = 0x199898u;

    // 0x199898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19989c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1998a0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1998a4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1998a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1998a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1998a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1998acu;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    ctx->pc = 0x1998b0u;
}
