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

// Function: entry_00169ac0
// Address: 0x169ac0 - 0x169aec
void entry_00169ac0_0x169ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169ac0_0x169ac0");
#endif

    ctx->pc = 0x169ac0u;

    // 0x169ac0: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
    // 0x169ac4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x169ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x169ac8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169acc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x169ad0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x169ad4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169adc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x169ae0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169ae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x169ae8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x169aecu;
}
