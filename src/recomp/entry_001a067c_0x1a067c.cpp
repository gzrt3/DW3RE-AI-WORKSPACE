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

// Function: entry_001a067c
// Address: 0x1a067c - 0x1a0694
void entry_001a067c_0x1a067c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a067c_0x1a067c");
#endif

    ctx->pc = 0x1a067cu;

    // 0x1a067c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a0680: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a0684: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1a0688: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a0688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a068c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0690: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x1a0690u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x1a0694u;
}
