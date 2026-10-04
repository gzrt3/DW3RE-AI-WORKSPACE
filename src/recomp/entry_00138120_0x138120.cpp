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

// Function: entry_00138120
// Address: 0x138120 - 0x138134
void entry_00138120_0x138120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138120_0x138120");
#endif

    ctx->pc = 0x138120u;

    // 0x138120: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x138124: 0x24630cf4  addiu       $v1, $v1, 0xCF4
    ctx->pc = 0x138124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3316));
    // 0x138128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13812c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138130: 0x0  nop
    ctx->pc = 0x138130u;
    // NOP
    ctx->pc = 0x138134u;
}
