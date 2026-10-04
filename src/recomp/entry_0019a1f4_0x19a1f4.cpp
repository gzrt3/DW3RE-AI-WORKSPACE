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

// Function: entry_0019a1f4
// Address: 0x19a1f4 - 0x19a200
void entry_0019a1f4_0x19a1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a1f4_0x19a1f4");
#endif

    ctx->pc = 0x19a1f4u;

    // 0x19a1f4: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19a1f8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19a1fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x19a200u;
}
