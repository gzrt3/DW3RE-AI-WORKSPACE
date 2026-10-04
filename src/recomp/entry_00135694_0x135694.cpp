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

// Function: entry_00135694
// Address: 0x135694 - 0x1356c8
void entry_00135694_0x135694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135694_0x135694");
#endif

    ctx->pc = 0x135694u;

    // 0x135694: 0x0  nop
    ctx->pc = 0x135694u;
    // NOP
    // 0x135698: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x135698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13569c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x13569cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1356a0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1356A0u;
    {
        const bool branch_taken_0x1356a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1356A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356A0u;
        // 0x1356a4: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356a0) {
            ctx->pc = 0x135680u;
            return;
        }
    }
    ctx->pc = 0x1356A8u;
    // 0x1356a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1356a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1356ac: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1356acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1356b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1356b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356b4: 0xac23a418  sw          $v1, -0x5BE8($at)
    ctx->pc = 0x1356b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A418u, _value); } while (0);
    // 0x1356b8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1356b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1356bc: 0x8c26a418  lw          $a2, -0x5BE8($at)
    ctx->pc = 0x1356bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x30A418u));
    // 0x1356c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1356C0u;
    {
        const bool branch_taken_0x1356c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1356C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356C0u;
        // 0x1356c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356c0) {
            ctx->pc = 0x1356DCu;
            return;
        }
    }
    ctx->pc = 0x1356C8u;
}
