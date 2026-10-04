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

// Function: entry_001280fc
// Address: 0x1280fc - 0x128118
void entry_001280fc_0x1280fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001280fc_0x1280fc");
#endif

    ctx->pc = 0x1280fcu;

    // 0x1280fc: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x1280fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x128100: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x128100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x128104: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x128104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x128108: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x128108u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12810c: 0x0  nop
    ctx->pc = 0x12810cu;
    // NOP
    // 0x128110: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128114: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x128114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x128118u;
}
