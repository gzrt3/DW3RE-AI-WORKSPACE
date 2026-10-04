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

// Function: entry_001d4b64
// Address: 0x1d4b64 - 0x1d4bb4
void entry_001d4b64_0x1d4b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b64_0x1d4b64");
#endif

    switch (ctx->pc) {
        case 0x1d4b8cu: goto label_1d4b8c;
        default: break;
    }

    ctx->pc = 0x1d4b64u;

    // 0x1d4b64: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4b68: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1d4b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1d4b6c: 0x107000db  beq         $v1, $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x1D4B6Cu;
    {
        const bool branch_taken_0x1d4b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B6Cu;
        // 0x1d4b70: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b6c) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4B74u;
    // 0x1d4b74: 0x8c2403c0  lw          $a0, 0x3C0($at)
    ctx->pc = 0x1d4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
    // 0x1d4b78: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1d4b7c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4B7Cu;
    {
        const bool branch_taken_0x1d4b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b7c) {
            ctx->pc = 0x1D4BD4u;
            return;
        }
    }
    ctx->pc = 0x1D4B84u;
    // 0x1d4b84: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x1D4B84u;
    SET_GPR_U32(ctx, 31, 0x1D4B8Cu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4B84u, 0x1D4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B8Cu;
label_1d4b8c:
    // 0x1d4b8c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4b90: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1d4b94: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d4b98: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1d4b9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ba4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4ba8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4bac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4BACu;
    {
        const bool branch_taken_0x1d4bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BACu;
        // 0x1d4bb0: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bac) {
            ctx->pc = 0x1D4BC4u;
            return;
        }
    }
    ctx->pc = 0x1D4BB4u;
}
