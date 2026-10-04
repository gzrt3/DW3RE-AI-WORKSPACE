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

// Function: entry_002397b0
// Address: 0x2397b0 - 0x2397d8
void entry_002397b0_0x2397b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002397b0_0x2397b0");
#endif

    ctx->pc = 0x2397b0u;

    // 0x2397b0: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x2397b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x2397b4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2397b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2397b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2397bc: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x2397bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x2397c0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2397C0u;
    {
        const bool branch_taken_0x2397c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2397C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397C0u;
        // 0x2397c4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397c0) {
            ctx->pc = 0x2397D8u;
            return;
        }
    }
    ctx->pc = 0x2397C8u;
    // 0x2397c8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2397cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2397CCu;
    {
        const bool branch_taken_0x2397cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397CCu;
        // 0x2397d0: 0xa29824  and         $s3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397cc) {
            ctx->pc = 0x2397DCu;
            return;
        }
    }
    ctx->pc = 0x2397D4u;
    // 0x2397d4: 0x0  nop
    ctx->pc = 0x2397d4u;
    // NOP
    ctx->pc = 0x2397d8u;
}
