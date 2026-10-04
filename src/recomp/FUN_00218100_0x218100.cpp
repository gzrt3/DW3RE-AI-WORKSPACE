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

// Function: FUN_00218100
// Address: 0x218100 - 0x21811c
void FUN_00218100_0x218100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00218100_0x218100");
#endif

    ctx->pc = 0x218100u;

    // 0x218100: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x218100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x218104: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x218108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x218108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21810c: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x21810cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x218110: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x218110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x218114: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x218114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x218118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x218118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x21811cu;
}
