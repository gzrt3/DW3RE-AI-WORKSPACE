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

// Function: entry_00229ae0
// Address: 0x229ae0 - 0x229b00
void entry_00229ae0_0x229ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229ae0_0x229ae0");
#endif

    switch (ctx->pc) {
        case 0x229ae8u: goto label_229ae8;
        case 0x229af8u: goto label_229af8;
        default: break;
    }

    ctx->pc = 0x229ae0u;

    // 0x229ae0: 0xc090e38  jal         func_2438E0
    ctx->pc = 0x229AE0u;
    SET_GPR_U32(ctx, 31, 0x229AE8u);
    ctx->pc = 0x229AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AE0u;
    // 0x229ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2438E0u, 0x229AE0u, 0x229AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AE8u;
label_229ae8:
    // 0x229ae8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229af0: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229AF0u;
    SET_GPR_U32(ctx, 31, 0x229AF8u);
    ctx->pc = 0x229AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF0u;
    // 0x229af4: 0xac22a27c  sw          $v0, -0x5D84($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229AF0u, 0x229AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AF8u;
label_229af8:
    // 0x229af8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229afc: 0xac22a278  sw          $v0, -0x5D88($at)
    ctx->pc = 0x229afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A278u, _value); } while (0);
    ctx->pc = 0x229b00u;
}
