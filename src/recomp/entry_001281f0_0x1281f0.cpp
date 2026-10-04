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

// Function: entry_001281f0
// Address: 0x1281f0 - 0x12820c
void entry_001281f0_0x1281f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281f0_0x1281f0");
#endif

    ctx->pc = 0x1281f0u;

    // 0x1281f0: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1281f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1281f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1281f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1281f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1281f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1281fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1281fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128200: 0x0  nop
    ctx->pc = 0x128200u;
    // NOP
    // 0x128204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128208: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x128208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x12820cu;
}
