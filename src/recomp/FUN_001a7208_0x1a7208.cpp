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

// Function: FUN_001a7208
// Address: 0x1a7208 - 0x1a7224
void FUN_001a7208_0x1a7208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7208_0x1a7208");
#endif

    switch (ctx->pc) {
        case 0x1a7218u: goto label_1a7218;
        default: break;
    }

    ctx->pc = 0x1a7208u;

    // 0x1a7208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a720c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7210: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A7210u;
    SET_GPR_U32(ctx, 31, 0x1A7218u);
    ctx->pc = 0x1A6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C18u, 0x1A7210u, 0x1A7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7218u;
label_1a7218:
    // 0x1a7218: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a721c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7220: 0xac405b70  sw          $zero, 0x5B70($v0)
    ctx->pc = 0x1a7220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x285B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285B70u, _value); } while (0);
    ctx->pc = 0x1a7224u;
}
