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

// Function: FUN_00165d10
// Address: 0x165d10 - 0x165d20
void FUN_00165d10_0x165d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165d10_0x165d10");
#endif

    ctx->pc = 0x165d10u;

    // 0x165d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x165d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x165d14: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x165d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x165d18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x165d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x165d1c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->pc = 0x165d20u;
}
