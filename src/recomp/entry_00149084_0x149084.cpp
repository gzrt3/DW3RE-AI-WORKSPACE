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

// Function: entry_00149084
// Address: 0x149084 - 0x14909c
void entry_00149084_0x149084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149084_0x149084");
#endif

    ctx->pc = 0x149084u;

    // 0x149084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x149084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x149088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14908c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14908cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149090: 0x0  nop
    ctx->pc = 0x149090u;
    // NOP
    // 0x149094: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x149094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x149098: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x149098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x14909cu;
}
