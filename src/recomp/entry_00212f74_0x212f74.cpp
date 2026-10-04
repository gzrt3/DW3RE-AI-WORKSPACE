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

// Function: entry_00212f74
// Address: 0x212f74 - 0x212f94
void entry_00212f74_0x212f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212f74_0x212f74");
#endif

    ctx->pc = 0x212f74u;

    // 0x212f74: 0x0  nop
    ctx->pc = 0x212f74u;
    // NOP
    // 0x212f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x212f80: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x212f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x212f84: 0x34664ef0  ori         $a2, $v1, 0x4EF0
    ctx->pc = 0x212f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20208);
    // 0x212f88: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x212f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x212f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212f90: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->pc = 0x212f94u;
}
