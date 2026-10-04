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

// Function: FUN_001a1788
// Address: 0x1a1788 - 0x1a179c
void FUN_001a1788_0x1a1788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1788_0x1a1788");
#endif

    ctx->pc = 0x1a1788u;

    // 0x1a1788: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1a1788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a178c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a1790: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a1790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a1794: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1a1794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1a1798: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a1798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    ctx->pc = 0x1a179cu;
}
