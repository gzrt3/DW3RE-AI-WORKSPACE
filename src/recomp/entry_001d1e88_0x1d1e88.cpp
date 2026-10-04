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

// Function: entry_001d1e88
// Address: 0x1d1e88 - 0x1d1ec0
void entry_001d1e88_0x1d1e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e88_0x1d1e88");
#endif

    ctx->pc = 0x1d1e88u;

    // 0x1d1e88: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d1e8c: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1d1e90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1e94: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1e98: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1d1e9c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1d1e9cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d1ea0: 0x0  nop
    ctx->pc = 0x1d1ea0u;
    // NOP
    // 0x1d1ea4: 0x0  nop
    ctx->pc = 0x1d1ea4u;
    // NOP
    // 0x1d1ea8: 0x1812  mflo        $v1
    ctx->pc = 0x1d1ea8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d1eac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1d1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1d1eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1EB8u;
    // 0x1d1eb8: 0x0  nop
    ctx->pc = 0x1d1eb8u;
    // NOP
    // 0x1d1ebc: 0x0  nop
    ctx->pc = 0x1d1ebcu;
    // NOP
    ctx->pc = 0x1d1ec0u;
}
