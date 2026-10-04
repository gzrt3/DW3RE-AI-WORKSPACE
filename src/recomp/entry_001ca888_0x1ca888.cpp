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

// Function: entry_001ca888
// Address: 0x1ca888 - 0x1ca8a8
void entry_001ca888_0x1ca888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca888_0x1ca888");
#endif

    ctx->pc = 0x1ca888u;

    // 0x1ca888: 0x86240226  lh          $a0, 0x226($s1)
    ctx->pc = 0x1ca888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1ca88c: 0x24030e10  addiu       $v1, $zero, 0xE10
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x1ca890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ca890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ca894: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ca894u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ca898: 0x0  nop
    ctx->pc = 0x1ca898u;
    // NOP
    // 0x1ca89c: 0x0  nop
    ctx->pc = 0x1ca89cu;
    // NOP
    // 0x1ca8a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca8a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ca8a4: 0xa6230226  sh          $v1, 0x226($s1)
    ctx->pc = 0x1ca8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 550), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ca8a8u;
}
