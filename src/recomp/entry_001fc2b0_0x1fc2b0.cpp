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

// Function: entry_001fc2b0
// Address: 0x1fc2b0 - 0x1fc2d0
void entry_001fc2b0_0x1fc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc2b0_0x1fc2b0");
#endif

    ctx->pc = 0x1fc2b0u;

    // 0x1fc2b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fc2b4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1fc2b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fc2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc2bc: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc2c0: 0xfe240040  sd          $a0, 0x40($s1)
    ctx->pc = 0x1fc2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 4));
    // 0x1fc2c4: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x1fc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
    // 0x1fc2c8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1fc2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1fc2cc: 0xfe260038  sd          $a2, 0x38($s1)
    ctx->pc = 0x1fc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 6));
    ctx->pc = 0x1fc2d0u;
}
