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

// Function: FUN_0016bc60
// Address: 0x16bc60 - 0x16bc9c
void FUN_0016bc60_0x16bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bc60_0x16bc60");
#endif

    ctx->pc = 0x16bc60u;

    // 0x16bc60: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bc64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16BC64u;
    {
        const bool branch_taken_0x16bc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC64u;
        // 0x16bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc64) {
            ctx->pc = 0x16BC9Cu;
            return;
        }
    }
    ctx->pc = 0x16BC6Cu;
    // 0x16bc6c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bc70: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16bc74: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bc78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bc7c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bc80: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bc80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bc84: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bc88: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bc8c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16bc90: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bc94: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bc94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bc98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16bc9cu;
}
