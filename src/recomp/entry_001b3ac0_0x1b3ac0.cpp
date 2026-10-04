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

// Function: entry_001b3ac0
// Address: 0x1b3ac0 - 0x1b3ae0
void entry_001b3ac0_0x1b3ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ac0_0x1b3ac0");
#endif

    ctx->pc = 0x1b3ac0u;

    // 0x1b3ac0: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1b3ac4: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1b3ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x1b3ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3acc: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1b3ad0: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1b3ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x1b3ad4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3ad8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1b3ad8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1b3adc: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x1b3adcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x1b3ae0u;
}
