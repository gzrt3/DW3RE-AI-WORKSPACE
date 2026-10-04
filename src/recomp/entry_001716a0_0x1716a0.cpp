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

// Function: entry_001716a0
// Address: 0x1716a0 - 0x1716bc
void entry_001716a0_0x1716a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001716a0_0x1716a0");
#endif

    ctx->pc = 0x1716a0u;

    // 0x1716a0: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x1716a4: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x1716a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x1716a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1716a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1716ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1716acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1716b0: 0x0  nop
    ctx->pc = 0x1716b0u;
    // NOP
    // 0x1716b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1716b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1716b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1716b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x1716bcu;
}
