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

// Function: FUN_00177e70
// Address: 0x177e70 - 0x177e90
void FUN_00177e70_0x177e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177e70_0x177e70");
#endif

    ctx->pc = 0x177e70u;

    // 0x177e70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x177e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x177e74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177e78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x177e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x177e7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177e80: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x177e84: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x177e88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x177e8c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x177e90u;
}
