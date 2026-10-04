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

// Function: FUN_001c1b00
// Address: 0x1c1b00 - 0x1c1ba8
void FUN_001c1b00_0x1c1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1b00_0x1c1b00");
#endif

    switch (ctx->pc) {
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b8cu: goto label_1c1b8c;
        default: break;
    }

    ctx->pc = 0x1c1b00u;

    // 0x1c1b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1b04: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x1c1b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1b0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1b14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1b18: 0xc0550d0  jal         func_154340
    ctx->pc = 0x1C1B18u;
    SET_GPR_U32(ctx, 31, 0x1C1B20u);
    ctx->pc = 0x1C1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B18u;
    // 0x1c1b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1C1B18u, 0x1C1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c1b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b28: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x1c1b2c: 0xc055148  jal         func_154520
    ctx->pc = 0x1C1B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B34u);
    ctx->pc = 0x1C1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B2Cu;
    // 0x1c1b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1C1B2Cu, 0x1C1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B34u;
label_1c1b34:
    // 0x1c1b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1B34u;
    {
        const bool branch_taken_0x1c1b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B34u;
        // 0x1c1b38: 0x2409018e  addiu       $t1, $zero, 0x18E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b34) {
            ctx->pc = 0x1C1B44u;
            goto label_1c1b44;
        }
    }
    ctx->pc = 0x1C1B3Cu;
    // 0x1c1b3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1B3Cu;
    {
        const bool branch_taken_0x1c1b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b3c) {
            ctx->pc = 0x1C1B58u;
            goto label_1c1b58;
        }
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1c1b48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1B48u;
    {
        const bool branch_taken_0x1c1b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x2409018a  addiu       $t1, $zero, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b48) {
            ctx->pc = 0x1C1B54u;
            goto label_1c1b54;
        }
    }
    ctx->pc = 0x1C1B50u;
    // 0x1c1b50: 0x24090182  addiu       $t1, $zero, 0x182
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
label_1c1b54:
    // 0x1c1b54: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1b58:
    // 0x1c1b58: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1b5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B5Cu;
        // 0x1c1b60: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1B6Cu;
            goto label_1c1b6c;
        }
    }
    ctx->pc = 0x1C1B64u;
    // 0x1c1b64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1b68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c1b6c:
    // 0x1c1b6c: 0xaf828938  sw          $v0, -0x76C8($gp)
    ctx->pc = 0x1c1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 2));
    // 0x1c1b70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1b74: 0x8f888938  lw          $t0, -0x76C8($gp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
    // 0x1c1b78: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c1b7c: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x1c1b80: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1c1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c1b84: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1C1B84u;
    SET_GPR_U32(ctx, 31, 0x1C1B8Cu);
    ctx->pc = 0x1C1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B84u;
    // 0x1c1b88: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1B84u, 0x1C1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B8Cu;
label_1c1b8c:
    // 0x1c1b8c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1c1b90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b94: 0x24848ec0  addiu       $a0, $a0, -0x7140
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938304));
    // 0x1c1b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b9c: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1c1ba0: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1C1BA0u;
    SET_GPR_U32(ctx, 31, 0x1C1BA8u);
    ctx->pc = 0x1C1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BA0u;
    // 0x1c1ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1BA0u, 0x1C1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BA8u;
}
