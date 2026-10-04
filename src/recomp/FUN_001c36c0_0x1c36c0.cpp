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

// Function: FUN_001c36c0
// Address: 0x1c36c0 - 0x1c36d0
void FUN_001c36c0_0x1c36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c36c0_0x1c36c0");
#endif

    ctx->pc = 0x1c36c0u;

    // 0x1c36c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c36c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c36c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c36c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c36cc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1c36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x1c36d0u;
}
