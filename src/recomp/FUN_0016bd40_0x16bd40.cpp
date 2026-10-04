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

// Function: FUN_0016bd40
// Address: 0x16bd40 - 0x16bd7c
void FUN_0016bd40_0x16bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bd40_0x16bd40");
#endif

    ctx->pc = 0x16bd40u;

    // 0x16bd40: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bd44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16BD44u;
    {
        const bool branch_taken_0x16bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD44u;
        // 0x16bd48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd44) {
            ctx->pc = 0x16BD7Cu;
            return;
        }
    }
    ctx->pc = 0x16BD4Cu;
    // 0x16bd4c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd50: 0x2402ffca  addiu       $v0, $zero, -0x36
    ctx->pc = 0x16bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x16bd54: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bd58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bd5c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd60: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bd64: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd68: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bd6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x16bd70: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd74: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bd78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16bd7cu;
}
