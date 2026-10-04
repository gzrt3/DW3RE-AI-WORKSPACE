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

// Function: entry_00135648
// Address: 0x135648 - 0x135680
void entry_00135648_0x135648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135648_0x135648");
#endif

    ctx->pc = 0x135648u;

    // 0x135648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x135648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13564c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x13564cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x135650: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x135650u;
    {
        const bool branch_taken_0x135650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135650u;
        // 0x135654: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135650) {
            ctx->pc = 0x135634u;
            return;
        }
    }
    ctx->pc = 0x135658u;
    // 0x135658: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13565c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13565cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135660: 0xac30a410  sw          $s0, -0x5BF0($at)
    ctx->pc = 0x135660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x30A410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A410u, _value); } while (0);
    // 0x135664: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x135664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x135668: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13566c: 0xac23a414  sw          $v1, -0x5BEC($at)
    ctx->pc = 0x13566cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A414u, _value); } while (0);
    // 0x135670: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135674: 0x8c26a414  lw          $a2, -0x5BEC($at)
    ctx->pc = 0x135674u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x30A414u));
    // 0x135678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x135678u;
    {
        const bool branch_taken_0x135678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135678u;
        // 0x13567c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135678) {
            ctx->pc = 0x135694u;
            return;
        }
    }
    ctx->pc = 0x135680u;
}
