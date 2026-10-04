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

// Function: entry_0013689c
// Address: 0x13689c - 0x1368c8
void entry_0013689c_0x13689c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013689c_0x13689c");
#endif

    switch (ctx->pc) {
        case 0x1368a4u: goto label_1368a4;
        default: break;
    }

    ctx->pc = 0x13689cu;

    // 0x13689c: 0xc04d238  jal         func_1348E0
    ctx->pc = 0x13689Cu;
    SET_GPR_U32(ctx, 31, 0x1368A4u);
    ctx->pc = 0x1348E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E0u, 0x13689Cu, 0x1368A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368A4u;
label_1368a4:
    // 0x1368a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1368a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1368ac: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1368acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1368b0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368b4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1368b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1368b8: 0xa024a3ea  sb          $a0, -0x5C16($at)
    ctx->pc = 0x1368b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x30A3EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EAu, _value); } while (0);
    // 0x1368bc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1368C0u;
    {
        const bool branch_taken_0x1368c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368C0u;
        // 0x1368c4: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368c0) {
            ctx->pc = 0x136920u;
            return;
        }
    }
    ctx->pc = 0x1368C8u;
}
