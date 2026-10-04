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

// Function: entry_001cf1a4
// Address: 0x1cf1a4 - 0x1cf1e8
void entry_001cf1a4_0x1cf1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf1a4_0x1cf1a4");
#endif

    ctx->pc = 0x1cf1a4u;

    // 0x1cf1a4: 0x8e2e001c  lw          $t6, 0x1C($s1)
    ctx->pc = 0x1cf1a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cf1a8: 0x24ed000a  addiu       $t5, $a3, 0xA
    ctx->pc = 0x1cf1a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x1cf1ac: 0xd5080  sll         $t2, $t5, 2
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cf1b0: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1cf1b4: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x1cf1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x1cf1b8: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1cf1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1cf1bc: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x1cf1c0: 0x12e082a  slt         $at, $t1, $t6
    ctx->pc = 0x1cf1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1cf1c4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF1C4u;
    {
        const bool branch_taken_0x1cf1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C4u;
        // 0x1cf1c8: 0x254a0690  addiu       $t2, $t2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c4) {
            ctx->pc = 0x1CF1F4u;
            return;
        }
    }
    ctx->pc = 0x1CF1CCu;
    // 0x1cf1cc: 0x1c8001a  div         $zero, $t6, $t0
    ctx->pc = 0x1cf1ccu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cf1d0: 0x0  nop
    ctx->pc = 0x1cf1d0u;
    // NOP
    // 0x1cf1d4: 0x0  nop
    ctx->pc = 0x1cf1d4u;
    // NOP
    // 0x1cf1d8: 0x4812  mflo        $t1
    ctx->pc = 0x1cf1d8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x1cf1dc: 0x126001a  div         $zero, $t1, $a2
    ctx->pc = 0x1cf1dcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cf1e0: 0x0  nop
    ctx->pc = 0x1cf1e0u;
    // NOP
    // 0x1cf1e4: 0x0  nop
    ctx->pc = 0x1cf1e4u;
    // NOP
    ctx->pc = 0x1cf1e8u;
}
