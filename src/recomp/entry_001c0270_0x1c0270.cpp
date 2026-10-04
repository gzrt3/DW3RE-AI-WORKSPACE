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

// Function: entry_001c0270
// Address: 0x1c0270 - 0x1c02b4
void entry_001c0270_0x1c0270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0270_0x1c0270");
#endif

    ctx->pc = 0x1c0270u;

    // 0x1c0270: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c0274: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
    // 0x1c0278: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c027c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c027cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0280: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x464AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AACu, _value); } while (0);
    // 0x1c0284: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c0284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0288: 0x90001b  divu        $zero, $a0, $s0
    ctx->pc = 0x1c0288u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c028c: 0x0  nop
    ctx->pc = 0x1c028cu;
    // NOP
    // 0x1c0290: 0x0  nop
    ctx->pc = 0x1c0290u;
    // NOP
    // 0x1c0294: 0x1810  mfhi        $v1
    ctx->pc = 0x1c0294u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c0298: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0298u;
    {
        const bool branch_taken_0x1c0298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0298) {
            ctx->pc = 0x1C02A4u;
            goto label_1c02a4;
        }
    }
    ctx->pc = 0x1C02A0u;
    // 0x1c02a0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1c02a4:
    // 0x1c02a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c02a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c02ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c02b0: 0x0  nop
    ctx->pc = 0x1c02b0u;
    // NOP
    ctx->pc = 0x1c02b4u;
}
