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

// Function: FUN_001659f0
// Address: 0x1659f0 - 0x165a10
void FUN_001659f0_0x1659f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001659f0_0x1659f0");
#endif

    ctx->pc = 0x1659f0u;

    // 0x1659f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1659f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1659f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1659f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1659f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1659f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1659fc: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x1659fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165a00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x165a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x165a04: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x165a08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x165a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x165a0c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    ctx->pc = 0x165a10u;
}
