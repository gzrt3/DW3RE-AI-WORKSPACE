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

// Function: entry_00137c94
// Address: 0x137c94 - 0x137cb4
void entry_00137c94_0x137c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137c94_0x137c94");
#endif

    ctx->pc = 0x137c94u;

    // 0x137c94: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x137c98: 0x8c23a424  lw          $v1, -0x5BDC($at)
    ctx->pc = 0x137c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943780)));
    // 0x137c9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137ca0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x137ca4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137cac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137cb0: 0xac23a3cc  sw          $v1, -0x5C34($at)
    ctx->pc = 0x137cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3CCu, _value); } while (0);
    ctx->pc = 0x137cb4u;
}
