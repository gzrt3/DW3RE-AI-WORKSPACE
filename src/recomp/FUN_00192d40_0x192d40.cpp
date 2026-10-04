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

// Function: FUN_00192d40
// Address: 0x192d40 - 0x192d50
void FUN_00192d40_0x192d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192d40_0x192d40");
#endif

    ctx->pc = 0x192d40u;

    // 0x192d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192d44: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x192d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x192d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x192d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x192d4c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x192d50u;
}
