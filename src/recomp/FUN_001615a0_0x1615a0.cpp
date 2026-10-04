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

// Function: FUN_001615a0
// Address: 0x1615a0 - 0x1615b0
void FUN_001615a0_0x1615a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001615a0_0x1615a0");
#endif

    ctx->pc = 0x1615a0u;

    // 0x1615a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1615a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1615a4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1615a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1615a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1615ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1615acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x1615b0u;
}
