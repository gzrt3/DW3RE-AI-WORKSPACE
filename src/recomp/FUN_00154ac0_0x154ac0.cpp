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

// Function: FUN_00154ac0
// Address: 0x154ac0 - 0x154b54
void FUN_00154ac0_0x154ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154ac0_0x154ac0");
#endif

    switch (ctx->pc) {
        case 0x154ae0u: goto label_154ae0;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b34u: goto label_154b34;
        default: break;
    }

    ctx->pc = 0x154ac0u;

    // 0x154ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154ac4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x154AC4u;
    {
        const bool branch_taken_0x154ac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AC4u;
        // 0x154ac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ac4) {
            ctx->pc = 0x154AE8u;
            goto label_154ae8;
        }
    }
    ctx->pc = 0x154ACCu;
    // 0x154acc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154ad0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154ad4: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154ad8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154AD8u;
    SET_GPR_U32(ctx, 31, 0x154AE0u);
    ctx->pc = 0x154ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AD8u;
    // 0x154adc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154AD8u, 0x154AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x154AE0u;
    {
        const bool branch_taken_0x154ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AE0u;
        // 0x154ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ae0) {
            ctx->pc = 0x154B58u;
            return;
        }
    }
    ctx->pc = 0x154AE8u;
label_154ae8:
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
            goto label_154b14;
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
label_154b14:
    // 0x154b14: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154B14u;
    {
        const bool branch_taken_0x154b14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b14) {
            ctx->pc = 0x154B3Cu;
            goto label_154b3c;
        }
    }
    ctx->pc = 0x154B1Cu;
    // 0x154b1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154b20: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154b24: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154b2c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B2Cu;
    // 0x154b30: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B2Cu, 0x154B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154B34u;
    {
        const bool branch_taken_0x154b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b34) {
            ctx->pc = 0x154B54u;
            return;
        }
    }
    ctx->pc = 0x154B3Cu;
label_154b3c:
    // 0x154b3c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154b40: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154b44: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154b4c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B4Cu;
    SET_GPR_U32(ctx, 31, 0x154B54u);
    ctx->pc = 0x154B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B4Cu;
    // 0x154b50: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B4Cu, 0x154B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B54u;
}
