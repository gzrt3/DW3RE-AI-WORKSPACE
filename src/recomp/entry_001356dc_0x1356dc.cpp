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

// Function: entry_001356dc
// Address: 0x1356dc - 0x135710
void entry_001356dc_0x1356dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001356dc_0x1356dc");
#endif

    ctx->pc = 0x1356dcu;

    // 0x1356dc: 0x0  nop
    ctx->pc = 0x1356dcu;
    // NOP
    // 0x1356e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1356e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1356e4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1356e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1356e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1356E8u;
    {
        const bool branch_taken_0x1356e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1356ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356E8u;
        // 0x1356ec: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356e8) {
            ctx->pc = 0x1356C8u;
            return;
        }
    }
    ctx->pc = 0x1356F0u;
    // 0x1356f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1356f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1356f4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1356f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1356f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1356f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356fc: 0xac23a41c  sw          $v1, -0x5BE4($at)
    ctx->pc = 0x1356fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A41Cu, _value); } while (0);
    // 0x135700: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135704: 0x8c26a41c  lw          $a2, -0x5BE4($at)
    ctx->pc = 0x135704u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x30A41Cu));
    // 0x135708: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x135708u;
    {
        const bool branch_taken_0x135708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135708u;
        // 0x13570c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135708) {
            ctx->pc = 0x135724u;
            return;
        }
    }
    ctx->pc = 0x135710u;
}
