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

// Function: entry_001d4dc4
// Address: 0x1d4dc4 - 0x1d4e14
void entry_001d4dc4_0x1d4dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4dc4_0x1d4dc4");
#endif

    switch (ctx->pc) {
        case 0x1d4decu: goto label_1d4dec;
        default: break;
    }

    ctx->pc = 0x1d4dc4u;

    // 0x1d4dc4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4dc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1d4dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1d4dcc: 0x10700043  beq         $v1, $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4DD4u;
    // 0x1d4dd4: 0x8c2403c0  lw          $a0, 0x3C0($at)
    ctx->pc = 0x1d4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
    // 0x1d4dd8: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1d4ddc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4DDCu;
    {
        const bool branch_taken_0x1d4ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ddc) {
            ctx->pc = 0x1D4E34u;
            return;
        }
    }
    ctx->pc = 0x1D4DE4u;
    // 0x1d4de4: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x1D4DE4u;
    SET_GPR_U32(ctx, 31, 0x1D4DECu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4DE4u, 0x1D4DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DECu;
label_1d4dec:
    // 0x1d4dec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4df0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1d4df4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d4df8: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1d4dfc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4e08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4e0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4E0Cu;
    {
        const bool branch_taken_0x1d4e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E0Cu;
        // 0x1d4e10: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e0c) {
            ctx->pc = 0x1D4E24u;
            return;
        }
    }
    ctx->pc = 0x1D4E14u;
}
