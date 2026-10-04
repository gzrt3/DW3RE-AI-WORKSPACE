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

// Function: entry_001d5b1c
// Address: 0x1d5b1c - 0x1d5b34
void entry_001d5b1c_0x1d5b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b1c_0x1d5b1c");
#endif

    ctx->pc = 0x1d5b1cu;

    // 0x1d5b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b20: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1d5b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b24: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x1d5b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b28: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x1d5b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b2c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d5b30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1d5b34u;
}
