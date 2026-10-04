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

// Function: entry_00229918
// Address: 0x229918 - 0x229940
void entry_00229918_0x229918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229918_0x229918");
#endif

    switch (ctx->pc) {
        case 0x229920u: goto label_229920;
        default: break;
    }

    ctx->pc = 0x229918u;

    // 0x229918: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229918u;
    SET_GPR_U32(ctx, 31, 0x229920u);
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229918u, 0x229920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229920u;
label_229920:
    // 0x229920: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229924: 0x8c24a278  lw          $a0, -0x5D88($at)
    ctx->pc = 0x229924u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x58A278u));
    // 0x229928: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22992c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229930: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
    // 0x229934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229938: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22993c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x22993cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A270u, _value); } while (0);
    ctx->pc = 0x229940u;
}
