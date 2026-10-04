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

// Function: entry_0016b074
// Address: 0x16b074 - 0x16b0b0
void entry_0016b074_0x16b074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b074_0x16b074");
#endif

    ctx->pc = 0x16b074u;

    // 0x16b074: 0x0  nop
    ctx->pc = 0x16b074u;
    // NOP
    // 0x16b078: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16b07c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16b07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16b080: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x16b080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x16b084: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
    // 0x16b088: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b08c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16b08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16b090: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16b090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16b094: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16b098: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b0a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16b0a4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b0a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16b0ac: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x16b0b0u;
}
