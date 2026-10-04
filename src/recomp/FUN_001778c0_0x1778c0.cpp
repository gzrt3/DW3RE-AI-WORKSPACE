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

// Function: FUN_001778c0
// Address: 0x1778c0 - 0x1778e0
void FUN_001778c0_0x1778c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001778c0_0x1778c0");
#endif

    ctx->pc = 0x1778c0u;

    // 0x1778c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1778c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1778c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1778c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1778c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1778c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1778cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1778ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1778d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1778d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1778d4: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x1778d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x1778d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1778d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1778dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1778dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x1778e0u;
}
