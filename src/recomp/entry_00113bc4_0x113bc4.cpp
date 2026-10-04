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

// Function: entry_00113bc4
// Address: 0x113bc4 - 0x113bf0
void entry_00113bc4_0x113bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113bc4_0x113bc4");
#endif

    ctx->pc = 0x113bc4u;

    // 0x113bc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113bc8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x113bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113bd0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x113bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x113bd4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113bd8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x113bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x113bdc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x113bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x113be0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x113be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x113be4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x113be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x113bec: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x113becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->pc = 0x113bf0u;
}
