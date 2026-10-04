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

// Function: entry_001281a4
// Address: 0x1281a4 - 0x1281bc
void entry_001281a4_0x1281a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281a4_0x1281a4");
#endif

    ctx->pc = 0x1281a4u;

    // 0x1281a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1281a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1281a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1281a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1281ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1281acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1281b0: 0x0  nop
    ctx->pc = 0x1281b0u;
    // NOP
    // 0x1281b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1281b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1281b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1281b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x1281bcu;
}
