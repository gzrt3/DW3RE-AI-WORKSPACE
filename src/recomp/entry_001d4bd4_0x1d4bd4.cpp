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

// Function: entry_001d4bd4
// Address: 0x1d4bd4 - 0x1d4c1c
void entry_001d4bd4_0x1d4bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4bd4_0x1d4bd4");
#endif

    switch (ctx->pc) {
        case 0x1d4bf4u: goto label_1d4bf4;
        default: break;
    }

    ctx->pc = 0x1d4bd4u;

    // 0x1d4bd4: 0x0  nop
    ctx->pc = 0x1d4bd4u;
    // NOP
    // 0x1d4bd8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1d4bdc: 0x8c240430  lw          $a0, 0x430($at)
    ctx->pc = 0x1d4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4B0430u));
    // 0x1d4be0: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1d4be4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4BE4u;
    {
        const bool branch_taken_0x1d4be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4be4) {
            ctx->pc = 0x1D4C3Cu;
            return;
        }
    }
    ctx->pc = 0x1D4BECu;
    // 0x1d4bec: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x1D4BECu;
    SET_GPR_U32(ctx, 31, 0x1D4BF4u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4BECu, 0x1D4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BF4u;
label_1d4bf4:
    // 0x1d4bf4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4bf8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1d4bfc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d4c00: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1d4c04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4c10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4c14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4C14u;
    {
        const bool branch_taken_0x1d4c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c14) {
            ctx->pc = 0x1D4C2Cu;
            return;
        }
    }
    ctx->pc = 0x1D4C1Cu;
}
