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

// Function: entry_0013863c
// Address: 0x13863c - 0x13864c
void entry_0013863c_0x13863c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013863c_0x13863c");
#endif

    ctx->pc = 0x13863cu;

    // 0x13863c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138640: 0xaf858508  sw          $a1, -0x7AF8($gp)
    ctx->pc = 0x138640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 5));
    // 0x138644: 0xaf86850c  sw          $a2, -0x7AF4($gp)
    ctx->pc = 0x138644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 6));
    // 0x138648: 0xaf838504  sw          $v1, -0x7AFC($gp)
    ctx->pc = 0x138648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 3));
    ctx->pc = 0x13864cu;
}
