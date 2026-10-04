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

// Function: entry_00154ae8
// Address: 0x154ae8 - 0x154b14
void entry_00154ae8_0x154ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154ae8_0x154ae8");
#endif

    switch (ctx->pc) {
        case 0x154b0cu: goto label_154b0c;
        default: break;
    }

    ctx->pc = 0x154ae8u;

    // 0x154ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154aec: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154AECu;
    {
        const bool branch_taken_0x154aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x154AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AECu;
        // 0x154af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154aec) {
            ctx->pc = 0x154B14u;
            return;
        }
    }
    ctx->pc = 0x154AF4u;
    // 0x154af4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154af8: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154afc: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154b04: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B04u;
    SET_GPR_U32(ctx, 31, 0x154B0Cu);
    ctx->pc = 0x154B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B04u;
    // 0x154b08: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B04u, 0x154B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B0Cu;
label_154b0c:
    // 0x154b0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x154B0Cu;
    {
        const bool branch_taken_0x154b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b0c) {
            ctx->pc = 0x154B54u;
            return;
        }
    }
    ctx->pc = 0x154B14u;
}
