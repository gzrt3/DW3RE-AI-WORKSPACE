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

// Function: FUN_00164a40
// Address: 0x164a40 - 0x164a9c
void FUN_00164a40_0x164a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164a40_0x164a40");
#endif

    switch (ctx->pc) {
        case 0x164a58u: goto label_164a58;
        case 0x164a78u: goto label_164a78;
        case 0x164a80u: goto label_164a80;
        default: break;
    }

    ctx->pc = 0x164a40u;

    // 0x164a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164a50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x164A50u;
    {
        const bool branch_taken_0x164a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A50u;
        // 0x164a54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a50) {
            ctx->pc = 0x164A88u;
            goto label_164a88;
        }
    }
    ctx->pc = 0x164A58u;
label_164a58:
    // 0x164a58: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x164a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x164a5c: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x164a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x164a60: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x164a64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x164a68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164A68u;
    {
        const bool branch_taken_0x164a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A68u;
        // 0x164a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a68) {
            ctx->pc = 0x164A80u;
            goto label_164a80;
        }
    }
    ctx->pc = 0x164A70u;
    // 0x164a70: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x164A70u;
    SET_GPR_U32(ctx, 31, 0x164A78u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x164A70u, 0x164A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A78u;
label_164a78:
    // 0x164a78: 0xc04f5bc  jal         func_13D6F0
    ctx->pc = 0x164A78u;
    SET_GPR_U32(ctx, 31, 0x164A80u);
    ctx->pc = 0x164A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A78u;
    // 0x164a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x164A78u, 0x164A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A80u;
label_164a80:
    // 0x164a80: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x164a84: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x164a84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_164a88:
    // 0x164a88: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x164a88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x164a8c: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x164a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x164a90: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x164A90u;
    {
        const bool branch_taken_0x164a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a90) {
            ctx->pc = 0x164A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164a58;
        }
    }
    ctx->pc = 0x164A98u;
    // 0x164a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x164a9cu;
}
