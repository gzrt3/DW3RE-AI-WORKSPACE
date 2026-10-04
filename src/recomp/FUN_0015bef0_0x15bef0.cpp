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

// Function: FUN_0015bef0
// Address: 0x15bef0 - 0x15bf18
void FUN_0015bef0_0x15bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bef0_0x15bef0");
#endif

    ctx->pc = 0x15bef0u;

    // 0x15bef0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15bef4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15bef8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15befc: 0x2463492e  addiu       $v1, $v1, 0x492E
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18734));
    // 0x15bf00: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15bf04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bf08: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15bf0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15bf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15bf10: 0x24423b50  addiu       $v0, $v0, 0x3B50
    ctx->pc = 0x15bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15184));
    // 0x15bf14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x15bf18u;
}
