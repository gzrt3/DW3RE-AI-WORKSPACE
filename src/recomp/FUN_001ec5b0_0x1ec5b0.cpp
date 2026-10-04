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

// Function: FUN_001ec5b0
// Address: 0x1ec5b0 - 0x1ec5c4
void FUN_001ec5b0_0x1ec5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec5b0_0x1ec5b0");
#endif

    ctx->pc = 0x1ec5b0u;

    // 0x1ec5b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec5b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec5bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec5c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec5c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->pc = 0x1ec5c4u;
}
