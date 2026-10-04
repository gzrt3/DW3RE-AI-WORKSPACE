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

// Function: entry_001d4ecc
// Address: 0x1d4ecc - 0x1d4edc
void entry_001d4ecc_0x1d4ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ecc_0x1d4ecc");
#endif

    ctx->pc = 0x1d4eccu;

    // 0x1d4ecc: 0x0  nop
    ctx->pc = 0x1d4eccu;
    // NOP
    // 0x1d4ed0: 0x8f838588  lw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x1d4ed4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d4ed8: 0xaf838588  sw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
    ctx->pc = 0x1d4edcu;
}
