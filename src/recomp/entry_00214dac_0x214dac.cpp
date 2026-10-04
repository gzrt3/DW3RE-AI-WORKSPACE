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

// Function: entry_00214dac
// Address: 0x214dac - 0x214dc4
void entry_00214dac_0x214dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214dac_0x214dac");
#endif

    ctx->pc = 0x214dacu;

    // 0x214dac: 0x0  nop
    ctx->pc = 0x214dacu;
    // NOP
    // 0x214db0: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x214db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x214db4: 0x8c643670  lw          $a0, 0x3670($v1)
    ctx->pc = 0x214db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
    // 0x214db8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x214db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x214dbc: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x214dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x214dc0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x214dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x214dc4u;
}
