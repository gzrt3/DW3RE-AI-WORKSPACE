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

// Function: entry_001a3c1c
// Address: 0x1a3c1c - 0x1a3c64
void entry_001a3c1c_0x1a3c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c1c_0x1a3c1c");
#endif

    switch (ctx->pc) {
        case 0x1a3c38u: goto label_1a3c38;
        default: break;
    }

    ctx->pc = 0x1a3c1cu;

    // 0x1a3c1c: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x1a3c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a3c28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a3c2c: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x1a3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x1a3c30: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3C30u;
    SET_GPR_U32(ctx, 31, 0x1A3C38u);
    ctx->pc = 0x1A3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C30u;
    // 0x1a3c34: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3C30u, 0x1A3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C38u;
label_1a3c38:
    // 0x1a3c38: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x1a3c38u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a3c3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1a3c40: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C40u;
    {
        const bool branch_taken_0x1a3c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C40u;
        // 0x1a3c44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c40) {
            ctx->pc = 0x1A3C64u;
            return;
        }
    }
    ctx->pc = 0x1A3C48u;
    // 0x1a3c48: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3C48u;
    {
        const bool branch_taken_0x1a3c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c48) {
            ctx->pc = 0x1A3C64u;
            return;
        }
    }
    ctx->pc = 0x1A3C50u;
    // 0x1a3c50: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3C50u;
    {
        const bool branch_taken_0x1a3c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c50) {
            ctx->pc = 0x1A3C64u;
            return;
        }
    }
    ctx->pc = 0x1A3C58u;
    // 0x1a3c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c5c: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C64u);
    ctx->pc = 0x1A3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C5Cu;
    // 0x1a3c60: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A3C5Cu, 0x1A3C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C64u;
}
