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

// Function: FUN_001b7c28
// Address: 0x1b7c28 - 0x1b7cd4
void FUN_001b7c28_0x1b7c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7c28_0x1b7c28");
#endif

    switch (ctx->pc) {
        case 0x1b7ca8u: goto label_1b7ca8;
        default: break;
    }

    ctx->pc = 0x1b7c28u;

    // 0x1b7c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7c2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7c30: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1b7c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7c38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b7c3c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7C3Cu;
    {
        const bool branch_taken_0x1b7c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C3Cu;
        // 0x1b7c40: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c3c) {
            ctx->pc = 0x1B7C50u;
            goto label_1b7c50;
        }
    }
    ctx->pc = 0x1B7C44u;
    // 0x1b7c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7c48: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B7C48u;
    {
        const bool branch_taken_0x1b7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C48u;
        // 0x1b7c4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c48) {
            ctx->pc = 0x1B7CCCu;
            goto label_1b7ccc;
        }
    }
    ctx->pc = 0x1B7C50u;
label_1b7c50:
    // 0x1b7c50: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b7c54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7C54u;
    {
        const bool branch_taken_0x1b7c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C54u;
        // 0x1b7c58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c54) {
            ctx->pc = 0x1B7C80u;
            goto label_1b7c80;
        }
    }
    ctx->pc = 0x1B7C5Cu;
    // 0x1b7c5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7c60: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1b7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x1b7c64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b7c68: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7C68u;
    {
        const bool branch_taken_0x1b7c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C68u;
        // 0x1b7c6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c68) {
            ctx->pc = 0x1B7CD8u;
            return;
        }
    }
    ctx->pc = 0x1B7C70u;
    // 0x1b7c70: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1b7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b7c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7C74u;
    {
        const bool branch_taken_0x1b7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C74u;
        // 0x1b7c78: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c74) {
            ctx->pc = 0x1B7C84u;
            goto label_1b7c84;
        }
    }
    ctx->pc = 0x1B7C7Cu;
    // 0x1b7c7c: 0x0  nop
    ctx->pc = 0x1b7c7cu;
    // NOP
label_1b7c80:
    // 0x1b7c80: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1b7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1b7c84:
    // 0x1b7c84: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1b7c84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7c8c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1b7c90: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1b7c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b7c94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7C94u;
    {
        const bool branch_taken_0x1b7c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C94u;
        // 0x1b7c98: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c94) {
            ctx->pc = 0x1B7CCCu;
            goto label_1b7ccc;
        }
    }
    ctx->pc = 0x1B7C9Cu;
    // 0x1b7c9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7ca0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1b7ca4: 0x0  nop
    ctx->pc = 0x1b7ca4u;
    // NOP
label_1b7ca8:
    // 0x1b7ca8: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x1b7ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x1b7cac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b7cb0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1b7cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7cb4: 0x0  nop
    ctx->pc = 0x1b7cb4u;
    // NOP
    // 0x1b7cb8: 0x0  nop
    ctx->pc = 0x1b7cb8u;
    // NOP
    // 0x1b7cbc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7CBCu;
    {
        const bool branch_taken_0x1b7cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CBCu;
        // 0x1b7cc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cbc) {
            ctx->pc = 0x1B7CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ca8;
        }
    }
    ctx->pc = 0x1B7CC4u;
    // 0x1b7cc4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1b7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1b7cc8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1b7ccc:
    // 0x1b7ccc: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B7CCCu;
    SET_GPR_U32(ctx, 31, 0x1B7CD4u);
    ctx->pc = 0x1B7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CCCu;
    // 0x1b7cd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B7CCCu, 0x1B7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CD4u;
}
