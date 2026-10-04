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

// Function: entry_00150c38
// Address: 0x150c38 - 0x150c48
void entry_00150c38_0x150c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c38_0x150c38");
#endif

    ctx->pc = 0x150c38u;

    // 0x150c38: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c3c: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x150c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c40: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x150c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150c44: 0x0  nop
    ctx->pc = 0x150c44u;
    // NOP
    ctx->pc = 0x150c48u;
}
