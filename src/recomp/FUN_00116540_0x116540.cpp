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

// Function: FUN_00116540
// Address: 0x116540 - 0x116550
void FUN_00116540_0x116540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116540_0x116540");
#endif

    ctx->pc = 0x116540u;

    // 0x116540: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x116540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x116544: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x116548: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x116548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11654c: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    ctx->pc = 0x116550u;
}
