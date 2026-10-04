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

// Function: FUN_0013f8b0
// Address: 0x13f8b0 - 0x13f8bc
void FUN_0013f8b0_0x13f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f8b0_0x13f8b0");
#endif

    ctx->pc = 0x13f8b0u;

    // 0x13f8b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13f8b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13f8b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13f8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x13f8bcu;
}
