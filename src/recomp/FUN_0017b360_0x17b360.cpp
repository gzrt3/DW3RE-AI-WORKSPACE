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

// Function: FUN_0017b360
// Address: 0x17b360 - 0x17b370
void FUN_0017b360_0x17b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b360_0x17b360");
#endif

    ctx->pc = 0x17b360u;

    // 0x17b360: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17b364: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17b364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17b368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b36c: 0x0  nop
    ctx->pc = 0x17b36cu;
    // NOP
    ctx->pc = 0x17b370u;
}
