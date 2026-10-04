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

// Function: entry_00212b6c
// Address: 0x212b6c - 0x212bbc
void entry_00212b6c_0x212b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212b6c_0x212b6c");
#endif

    switch (ctx->pc) {
        case 0x212b74u: goto label_212b74;
        case 0x212b84u: goto label_212b84;
        case 0x212b94u: goto label_212b94;
        case 0x212ba4u: goto label_212ba4;
        case 0x212bb4u: goto label_212bb4;
        default: break;
    }

    ctx->pc = 0x212b6cu;

    // 0x212b6c: 0xc051338  jal         func_144CE0
    ctx->pc = 0x212B6Cu;
    SET_GPR_U32(ctx, 31, 0x212B74u);
    ctx->pc = 0x144CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CE0u, 0x212B6Cu, 0x212B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B74u;
label_212b74:
    // 0x212b74: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b7c: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212B7Cu;
    SET_GPR_U32(ctx, 31, 0x212B84u);
    ctx->pc = 0x212B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B7Cu;
    // 0x212b80: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212B7Cu, 0x212B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B84u;
label_212b84:
    // 0x212b84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212B84u;
    {
        const bool branch_taken_0x212b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B84u;
        // 0x212b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b84) {
            ctx->pc = 0x212BBCu;
            return;
        }
    }
    ctx->pc = 0x212B8Cu;
    // 0x212b8c: 0xc051350  jal         func_144D40
    ctx->pc = 0x212B8Cu;
    SET_GPR_U32(ctx, 31, 0x212B94u);
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212B8Cu, 0x212B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B94u;
label_212b94:
    // 0x212b94: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212b9c: 0xc051350  jal         func_144D40
    ctx->pc = 0x212B9Cu;
    SET_GPR_U32(ctx, 31, 0x212BA4u);
    ctx->pc = 0x212BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B9Cu;
    // 0x212ba0: 0xac22ccd8  sw          $v0, -0x3328($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212B9Cu, 0x212BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BA4u;
label_212ba4:
    // 0x212ba4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212ba8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x212ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212bac: 0xc051350  jal         func_144D40
    ctx->pc = 0x212BACu;
    SET_GPR_U32(ctx, 31, 0x212BB4u);
    ctx->pc = 0x212BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BACu;
    // 0x212bb0: 0xac22ccdc  sw          $v0, -0x3324($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212BACu, 0x212BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BB4u;
label_212bb4:
    // 0x212bb4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212bb8: 0xac22cce0  sw          $v0, -0x3320($at)
    ctx->pc = 0x212bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x29CCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CCE0u, _value); } while (0);
    ctx->pc = 0x212bbcu;
}
