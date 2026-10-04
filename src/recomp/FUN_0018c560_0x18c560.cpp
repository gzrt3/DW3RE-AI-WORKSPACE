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

// Function: FUN_0018c560
// Address: 0x18c560 - 0x18c570
void FUN_0018c560_0x18c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c560_0x18c560");
#endif

    ctx->pc = 0x18c560u;

    // 0x18c560: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x18c564: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18c568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18c56c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x18c570u;
}
