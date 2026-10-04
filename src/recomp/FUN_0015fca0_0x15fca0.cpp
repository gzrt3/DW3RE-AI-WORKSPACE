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

// Function: FUN_0015fca0
// Address: 0x15fca0 - 0x15fcb8
void FUN_0015fca0_0x15fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fca0_0x15fca0");
#endif

    ctx->pc = 0x15fca0u;

    // 0x15fca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15fca4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x15fca8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15fcac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15fcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fcb0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x15fcb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x15fcb8u;
}
