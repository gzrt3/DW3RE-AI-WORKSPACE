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

// Function: entry_00174b00
// Address: 0x174b00 - 0x174b1c
void entry_00174b00_0x174b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b00_0x174b00");
#endif

    switch (ctx->pc) {
        case 0x174b14u: goto label_174b14;
        default: break;
    }

    ctx->pc = 0x174b00u;

    // 0x174b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174b08: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174b08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x174b0c: 0xc05b64c  jal         func_16D930
    ctx->pc = 0x174B0Cu;
    SET_GPR_U32(ctx, 31, 0x174B14u);
    ctx->pc = 0x174B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B0Cu;
    // 0x174b10: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D930u, 0x174B0Cu, 0x174B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B14u;
label_174b14:
    // 0x174b14: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x174B14u;
    {
        const bool branch_taken_0x174b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B14u;
        // 0x174b18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b14) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174B1Cu;
}
