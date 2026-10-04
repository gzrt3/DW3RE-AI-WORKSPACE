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

// Function: entry_001cf284
// Address: 0x1cf284 - 0x1cf2b0
void entry_001cf284_0x1cf284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf284_0x1cf284");
#endif

    ctx->pc = 0x1cf284u;

    // 0x1cf284: 0x0  nop
    ctx->pc = 0x1cf284u;
    // NOP
    // 0x1cf288: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cf28c: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x1cf28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cf290: 0x857c2  srl         $t2, $t0, 31
    ctx->pc = 0x1cf290u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1cf294: 0x28e90002  slti        $t1, $a3, 0x2
    ctx->pc = 0x1cf294u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cf298: 0x4010  mfhi        $t0
    ctx->pc = 0x1cf298u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1cf29c: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x1cf29cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x1cf2a0: 0x1520ffc0  bnez        $t1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1CF2A0u;
    {
        const bool branch_taken_0x1cf2a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2A0u;
        // 0x1cf2a4: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2a0) {
            ctx->pc = 0x1CF1A4u;
            return;
        }
    }
    ctx->pc = 0x1CF2A8u;
    // 0x1cf2a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2ac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1cf2acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cf2b0u;
}
