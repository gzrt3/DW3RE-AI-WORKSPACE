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

// Function: entry_00112784
// Address: 0x112784 - 0x11279c
void entry_00112784_0x112784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112784_0x112784");
#endif

    ctx->pc = 0x112784u;

    // 0x112784: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x112784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x112788: 0x24420dc0  addiu       $v0, $v0, 0xDC0
    ctx->pc = 0x112788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x11278c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x11278cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x112790: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112794: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x112794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x112798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x11279cu;
}
