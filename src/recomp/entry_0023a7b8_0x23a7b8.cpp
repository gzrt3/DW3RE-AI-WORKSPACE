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

// Function: entry_0023a7b8
// Address: 0x23a7b8 - 0x23a7d8
void entry_0023a7b8_0x23a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a7b8_0x23a7b8");
#endif

    switch (ctx->pc) {
        case 0x23a7c0u: goto label_23a7c0;
        default: break;
    }

    ctx->pc = 0x23a7b8u;

    // 0x23a7b8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x23A7B8u;
    SET_GPR_U32(ctx, 31, 0x23A7C0u);
    ctx->pc = 0x23A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7B8u;
    // 0x23a7bc: 0x8c446288  lw          $a0, 0x6288($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x23A7B8u, 0x23A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7C0u;
label_23a7c0:
    // 0x23a7c0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23a7c4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x23a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x23a7c8: 0x24630c84  addiu       $v1, $v1, 0xC84
    ctx->pc = 0x23a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3204));
    // 0x23a7cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290C84u));
    // 0x23a7d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a7d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23a7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x290C84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290C84u, _value); } while (0);
    ctx->pc = 0x23a7d8u;
}
