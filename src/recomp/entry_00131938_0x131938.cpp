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

// Function: entry_00131938
// Address: 0x131938 - 0x131948
void entry_00131938_0x131938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131938_0x131938");
#endif

    ctx->pc = 0x131938u;

    // 0x131938: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x131938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13193c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13193cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x131940: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x131944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131948u;
}
