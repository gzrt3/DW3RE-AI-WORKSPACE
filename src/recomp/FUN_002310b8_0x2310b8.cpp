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

// Function: FUN_002310b8
// Address: 0x2310b8 - 0x2310d4
void FUN_002310b8_0x2310b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002310b8_0x2310b8");
#endif

    ctx->pc = 0x2310b8u;

    // 0x2310b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2310bc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2310bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2310c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2310c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2310c4: 0x904404ce  lbu         $a0, 0x4CE($v0)
    ctx->pc = 0x2310c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x2904CEu));
    // 0x2310c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2310c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2310cc: 0x80691b4  j           func_1A46D0
    ctx->pc = 0x2310CCu;
    ctx->pc = 0x2310D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310CCu;
    // 0x2310d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46D0u;
    FUN_001a46d0_0x1a46d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2310D4u;
}
