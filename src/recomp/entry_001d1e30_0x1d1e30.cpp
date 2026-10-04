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

// Function: entry_001d1e30
// Address: 0x1d1e30 - 0x1d1e88
void entry_001d1e30_0x1d1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e30_0x1d1e30");
#endif

    ctx->pc = 0x1d1e30u;

    // 0x1d1e30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1d1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1d1e34: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1e38: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
    // 0x1d1e3c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d1e40: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1e44: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1e48: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d1e4c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1E4Cu;
    {
        const bool branch_taken_0x1d1e4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E4Cu;
        // 0x1d1e50: 0x248604a0  addiu       $a2, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e4c) {
            ctx->pc = 0x1D1E88u;
            return;
        }
    }
    ctx->pc = 0x1D1E54u;
    // 0x1d1e54: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d1e58: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1d1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1d1e5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1e60: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1e64: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d1e68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1e6c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1d1e70: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1d1e70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d1e74: 0x0  nop
    ctx->pc = 0x1d1e74u;
    // NOP
    // 0x1d1e78: 0x0  nop
    ctx->pc = 0x1d1e78u;
    // NOP
    // 0x1d1e7c: 0x1812  mflo        $v1
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d1e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1E80u;
    {
        const bool branch_taken_0x1d1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e80) {
            ctx->pc = 0x1D1EB0u;
            return;
        }
    }
    ctx->pc = 0x1D1E88u;
}
