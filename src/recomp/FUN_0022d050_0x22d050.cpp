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

// Function: FUN_0022d050
// Address: 0x22d050 - 0x22d060
void FUN_0022d050_0x22d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022d050_0x22d050");
#endif

    ctx->pc = 0x22d050u;

    // 0x22d050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22d054: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x22d054u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22d058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22d05c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22d05cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22d060u;
}
