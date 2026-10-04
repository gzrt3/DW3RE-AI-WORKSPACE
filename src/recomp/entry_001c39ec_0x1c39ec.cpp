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

// Function: entry_001c39ec
// Address: 0x1c39ec - 0x1c3a18
void entry_001c39ec_0x1c39ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c39ec_0x1c39ec");
#endif

    switch (ctx->pc) {
        case 0x1c3a10u: goto label_1c3a10;
        default: break;
    }

    ctx->pc = 0x1c39ecu;

    // 0x1c39ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c39f0: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c39f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c39f4: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1c39f8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C39F8u;
    {
        const bool branch_taken_0x1c39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F8u;
        // 0x1c39fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f8) {
            ctx->pc = 0x1C3A84u;
            return;
        }
    }
    ctx->pc = 0x1C3A00u;
    // 0x1c3a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a04: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c3a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c3a08: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C3A08u;
    SET_GPR_U32(ctx, 31, 0x1C3A10u);
    ctx->pc = 0x1C3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A08u;
    // 0x1c3a0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C3A08u, 0x1C3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A10u;
label_1c3a10:
    // 0x1c3a10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C3A10u;
    {
        const bool branch_taken_0x1c3a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a10) {
            ctx->pc = 0x1C3A80u;
            return;
        }
    }
    ctx->pc = 0x1C3A18u;
}
