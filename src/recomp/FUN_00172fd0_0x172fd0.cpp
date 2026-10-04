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

// Function: FUN_00172fd0
// Address: 0x172fd0 - 0x172fe4
void FUN_00172fd0_0x172fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172fd0_0x172fd0");
#endif

    ctx->pc = 0x172fd0u;

    // 0x172fd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x172fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x172fd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x172fd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x172fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x172fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172fe0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x172fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x172fe4u;
}
