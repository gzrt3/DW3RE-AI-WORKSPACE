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

// Function: entry_00198784
// Address: 0x198784 - 0x1987e0
void entry_00198784_0x198784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198784_0x198784");
#endif

    ctx->pc = 0x198784u;

    // 0x198784: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x198788: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x198788u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19878c: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x19878cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x198790: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x198794: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198794u;
    {
        const bool branch_taken_0x198794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198794) {
            ctx->pc = 0x198798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198794u;
            // 0x198798: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19879Cu;
            goto label_19879c;
        }
    }
    ctx->pc = 0x19879Cu;
label_19879c:
    // 0x19879c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x19879cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1987a0: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x1987a4: 0x1012  mflo        $v0
    ctx->pc = 0x1987a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1987a8: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1987a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1987ac: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1987acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1987b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1987b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1987b4: 0x64e30290  daddiu      $v1, $a3, 0x290
    ctx->pc = 0x1987b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)656);
    // 0x1987b8: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1987b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1987bc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1987c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1987c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1987c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1987c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1987c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1987c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1987cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1987ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1987d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1987d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1987d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1987d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1987d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1987D8u;
    {
        const bool branch_taken_0x1987d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987D8u;
        // 0x1987dc: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987d8) {
            ctx->pc = 0x1987E8u;
            return;
        }
    }
    ctx->pc = 0x1987E0u;
}
