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

// Function: FUN_00191b50
// Address: 0x191b50 - 0x191bc0
void FUN_00191b50_0x191b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191b50_0x191b50");
#endif

    switch (ctx->pc) {
        case 0x191b9cu: goto label_191b9c;
        case 0x191bacu: goto label_191bac;
        default: break;
    }

    ctx->pc = 0x191b50u;

    // 0x191b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191b54: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191b58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191b5c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x191b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x191b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191b64: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x191b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191b6c: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
    // 0x191b70: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x191b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x191b74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x191b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191b78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x191b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x191b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x191b80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x191B80u;
    {
        const bool branch_taken_0x191b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B80u;
        // 0x191b84: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b80) {
            ctx->pc = 0x191BB4u;
            goto label_191bb4;
        }
    }
    ctx->pc = 0x191B88u;
    // 0x191b88: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x191b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x191b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191b94: 0xc066e14  jal         func_19B850
    ctx->pc = 0x191B94u;
    SET_GPR_U32(ctx, 31, 0x191B9Cu);
    ctx->pc = 0x191B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B94u;
    // 0x191b98: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x191B94u, 0x191B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B9Cu;
label_191b9c:
    // 0x191b9c: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x191ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ba4: 0xc066e02  jal         func_19B808
    ctx->pc = 0x191BA4u;
    SET_GPR_U32(ctx, 31, 0x191BACu);
    ctx->pc = 0x191BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BA4u;
    // 0x191ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x191BA4u, 0x191BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BACu;
label_191bac:
    // 0x191bac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x191BACu;
    {
        const bool branch_taken_0x191bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BACu;
        // 0x191bb0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bac) {
            ctx->pc = 0x191BC4u;
            return;
        }
    }
    ctx->pc = 0x191BB4u;
label_191bb4:
    // 0x191bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bb8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191BB8u;
    SET_GPR_U32(ctx, 31, 0x191BC0u);
    ctx->pc = 0x191BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BB8u;
    // 0x191bbc: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191BB8u, 0x191BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BC0u;
}
