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

// Function: entry_0010fc20
// Address: 0x10fc20 - 0x10fc3c
void entry_0010fc20_0x10fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc20_0x10fc20");
#endif

    ctx->pc = 0x10fc20u;

    // 0x10fc20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x10fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x10fc24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc28: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x10fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    // 0x10fc2c: 0x3c18002c  lui         $t8, 0x2C
    ctx->pc = 0x10fc2cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)44 << 16));
    // 0x10fc30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10fc34: 0x27185430  addiu       $t8, $t8, 0x5430
    ctx->pc = 0x10fc34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 21552));
    // 0x10fc38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fc3cu;
}
