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

// Function: entry_00143bb0
// Address: 0x143bb0 - 0x143bcc
void entry_00143bb0_0x143bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143bb0_0x143bb0");
#endif

    ctx->pc = 0x143bb0u;

    // 0x143bb0: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x143bb4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x143bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x143bb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x143bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x143bbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x143bbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143bc0: 0x0  nop
    ctx->pc = 0x143bc0u;
    // NOP
    // 0x143bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143bc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x143bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x143bccu;
}
