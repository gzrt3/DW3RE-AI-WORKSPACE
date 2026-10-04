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

// Function: entry_0012b268
// Address: 0x12b268 - 0x12b290
void entry_0012b268_0x12b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b268_0x12b268");
#endif

    ctx->pc = 0x12b268u;

    // 0x12b268: 0x920402e3  lbu         $a0, 0x2E3($s0)
    ctx->pc = 0x12b268u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b26c: 0x960302fa  lhu         $v1, 0x2FA($s0)
    ctx->pc = 0x12b26cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12b270: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12b270u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12b274: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12b274u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12b278: 0x0  nop
    ctx->pc = 0x12b278u;
    // NOP
    // 0x12b27c: 0x0  nop
    ctx->pc = 0x12b27cu;
    // NOP
    // 0x12b280: 0x1012  mflo        $v0
    ctx->pc = 0x12b280u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12b284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b288: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12b28c: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x12b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b290u;
}
