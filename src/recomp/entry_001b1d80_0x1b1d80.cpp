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

// Function: entry_001b1d80
// Address: 0x1b1d80 - 0x1b1dbc
void entry_001b1d80_0x1b1d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d80_0x1b1d80");
#endif

    switch (ctx->pc) {
        case 0x1b1da8u: goto label_1b1da8;
        default: break;
    }

    ctx->pc = 0x1b1d80u;

    // 0x1b1d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d84: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b1d88: 0xac5662b0  sw          $s6, 0x62B0($v0)
    ctx->pc = 0x1b1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 22));
    // 0x1b1d8c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1b1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x1b1d90: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b1d94: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1b1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1b1d98: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b1d9c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1b1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1b1da0: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B1DA0u;
    SET_GPR_U32(ctx, 31, 0x1B1DA8u);
    ctx->pc = 0x1B1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DA0u;
    // 0x1b1da4: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B1DA0u, 0x1B1DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DA8u;
label_1b1da8:
    // 0x1b1da8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1DA8u;
    {
        const bool branch_taken_0x1b1da8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA8u;
        // 0x1b1dac: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1da8) {
            ctx->pc = 0x1B1DBCu;
            return;
        }
    }
    ctx->pc = 0x1B1DB0u;
    // 0x1b1db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1db4: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1DB4u;
    SET_GPR_U32(ctx, 31, 0x1B1DBCu);
    ctx->pc = 0x1B1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DB4u;
    // 0x1b1db8: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1DB4u, 0x1B1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DBCu;
}
