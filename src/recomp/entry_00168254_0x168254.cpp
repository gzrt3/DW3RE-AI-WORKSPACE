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

// Function: entry_00168254
// Address: 0x168254 - 0x168260
void entry_00168254_0x168254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168254_0x168254");
#endif

    ctx->pc = 0x168254u;

    // 0x168254: 0x0  nop
    ctx->pc = 0x168254u;
    // NOP
    // 0x168258: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x168258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x16825c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x16825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->pc = 0x168260u;
}
