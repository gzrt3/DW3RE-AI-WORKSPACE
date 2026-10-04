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

// Function: entry_001f76d4
// Address: 0x1f76d4 - 0x1f76f4
void entry_001f76d4_0x1f76d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76d4_0x1f76d4");
#endif

    ctx->pc = 0x1f76d4u;

    // 0x1f76d4: 0x0  nop
    ctx->pc = 0x1f76d4u;
    // NOP
    // 0x1f76d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f76dc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x1f76e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f76e4: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
    // 0x1f76e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f76ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1f76f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1f76f4u;
}
