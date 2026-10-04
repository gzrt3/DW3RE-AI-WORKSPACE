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

// Function: FUN_00213ab0
// Address: 0x213ab0 - 0x213ac8
void FUN_00213ab0_0x213ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00213ab0_0x213ab0");
#endif

    ctx->pc = 0x213ab0u;

    // 0x213ab0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x213ab4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x213ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x213ab8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x213ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x213abc: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x213abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x213ac0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x213ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x213ac4: 0x278291a8  addiu       $v0, $gp, -0x6E58
    ctx->pc = 0x213ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939048));
    ctx->pc = 0x213ac8u;
}
