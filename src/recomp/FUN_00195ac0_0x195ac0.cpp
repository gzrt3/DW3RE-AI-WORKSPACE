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

// Function: FUN_00195ac0
// Address: 0x195ac0 - 0x195ad0
void FUN_00195ac0_0x195ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195ac0_0x195ac0");
#endif

    ctx->pc = 0x195ac0u;

    // 0x195ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195ac4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x195ac8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195acc: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    ctx->pc = 0x195ad0u;
}
