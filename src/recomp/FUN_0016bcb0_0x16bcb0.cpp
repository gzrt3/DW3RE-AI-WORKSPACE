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

// Function: FUN_0016bcb0
// Address: 0x16bcb0 - 0x16bcec
void FUN_0016bcb0_0x16bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bcb0_0x16bcb0");
#endif

    ctx->pc = 0x16bcb0u;

    // 0x16bcb0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bcb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16BCB4u;
    {
        const bool branch_taken_0x16bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCB4u;
        // 0x16bcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcb4) {
            ctx->pc = 0x16BCECu;
            return;
        }
    }
    ctx->pc = 0x16BCBCu;
    // 0x16bcbc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bcc0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16bcc4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bcc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bccc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bcd0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bcd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bcd4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bcd8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bcdc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16bce0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bce4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16bcecu;
}
