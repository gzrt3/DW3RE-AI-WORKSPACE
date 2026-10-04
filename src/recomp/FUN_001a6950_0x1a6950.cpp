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

// Function: FUN_001a6950
// Address: 0x1a6950 - 0x1a6960
void FUN_001a6950_0x1a6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6950_0x1a6950");
#endif

    ctx->pc = 0x1a6950u;

    // 0x1a6950: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6954: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6958: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x1a6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x1a695c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a6960u;
}
