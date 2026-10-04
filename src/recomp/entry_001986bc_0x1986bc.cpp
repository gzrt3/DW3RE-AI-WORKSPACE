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

// Function: entry_001986bc
// Address: 0x1986bc - 0x1986f4
void entry_001986bc_0x1986bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001986bc_0x1986bc");
#endif

    ctx->pc = 0x1986bcu;

    // 0x1986bc: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1986c0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1986c0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1986c4: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x1986c8: 0x26450019  addiu       $a1, $s2, 0x19
    ctx->pc = 0x1986c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x1986cc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1986CCu;
    {
        const bool branch_taken_0x1986cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1986cc) {
            ctx->pc = 0x1986D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1986CCu;
            // 0x1986d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1986D4u;
            goto label_1986d4;
        }
    }
    ctx->pc = 0x1986D4u;
label_1986d4:
    // 0x1986d4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1986d8: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x1986dc: 0x1012  mflo        $v0
    ctx->pc = 0x1986dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1986e0: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1986e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1986e4: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1986e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1986e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1986ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1986ECu;
    {
        const bool branch_taken_0x1986ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986ECu;
        // 0x1986f0: 0x64e3027c  daddiu      $v1, $a3, 0x27C (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)636);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986ec) {
            ctx->pc = 0x1987B8u;
            return;
        }
    }
    ctx->pc = 0x1986F4u;
}
