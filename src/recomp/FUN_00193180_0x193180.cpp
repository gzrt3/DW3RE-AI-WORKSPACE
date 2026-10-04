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

// Function: FUN_00193180
// Address: 0x193180 - 0x193190
void FUN_00193180_0x193180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193180_0x193180");
#endif

    ctx->pc = 0x193180u;

    // 0x193180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193184: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x193184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x193188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x193188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19318c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x193190u;
}
