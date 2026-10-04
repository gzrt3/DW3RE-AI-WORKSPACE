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

// Function: entry_0021ef08
// Address: 0x21ef08 - 0x21ef40
void entry_0021ef08_0x21ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ef08_0x21ef08");
#endif

    ctx->pc = 0x21ef08u;

    // 0x21ef08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ef08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ef0c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x21ef0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21ef10: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x21EF10u;
    {
        const bool branch_taken_0x21ef10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF10u;
        // 0x21ef14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef10) {
            ctx->pc = 0x21EECCu;
            return;
        }
    }
    ctx->pc = 0x21EF18u;
    // 0x21ef18: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x21ef18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21ef1c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x21EF1Cu;
    {
        const bool branch_taken_0x21ef1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF1Cu;
        // 0x21ef20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef1c) {
            ctx->pc = 0x21EF74u;
            return;
        }
    }
    ctx->pc = 0x21EF24u;
    // 0x21ef24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21ef24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef28: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x21ef28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef2c: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x21ef2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x21ef30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ef34: 0x2508b4e0  addiu       $t0, $t0, -0x4B20
    ctx->pc = 0x21ef34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948064));
    // 0x21ef38: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x21ef38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21ef3c: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x21ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->pc = 0x21ef40u;
}
