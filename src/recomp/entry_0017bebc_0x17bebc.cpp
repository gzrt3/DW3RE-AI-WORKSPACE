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

// Function: entry_0017bebc
// Address: 0x17bebc - 0x17bed4
void entry_0017bebc_0x17bebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bebc_0x17bebc");
#endif

    ctx->pc = 0x17bebcu;

    // 0x17bebc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17bec0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x17bec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x17bec4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17bec4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bec8: 0x0  nop
    ctx->pc = 0x17bec8u;
    // NOP
    // 0x17becc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x17beccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17bed0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17bed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x17bed4u;
}
