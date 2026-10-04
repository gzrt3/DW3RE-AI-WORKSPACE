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

// Function: FUN_001699f0
// Address: 0x1699f0 - 0x169af8
void FUN_001699f0_0x1699f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001699f0_0x1699f0");
#endif

    switch (ctx->pc) {
        case 0x169a98u: goto label_169a98;
        case 0x169aacu: goto label_169aac;
        default: break;
    }

    ctx->pc = 0x1699f0u;

    // 0x1699f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1699f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1699f4: 0x278381c8  addiu       $v1, $gp, -0x7E38
    ctx->pc = 0x1699f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
    // 0x1699f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1699f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1699fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1699fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169a00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169a04: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169a08: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x169a08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169a0c: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x169a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x169a10: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x169A10u;
    {
        const bool branch_taken_0x169a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A10u;
        // 0x169a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a10) {
            ctx->pc = 0x169A40u;
            goto label_169a40;
        }
    }
    ctx->pc = 0x169A18u;
    // 0x169a18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x169a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a20: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x169a20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281ED8u));
    // 0x169a24: 0xc52004  sllv        $a0, $a1, $a2
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x169a28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x169a2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x169A2Cu;
    {
        const bool branch_taken_0x169a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a2c) {
            ctx->pc = 0x169A3Cu;
            goto label_169a3c;
        }
    }
    ctx->pc = 0x169A34u;
    // 0x169a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169A34u;
    {
        const bool branch_taken_0x169a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a34) {
            ctx->pc = 0x169A40u;
            goto label_169a40;
        }
    }
    ctx->pc = 0x169A3Cu;
label_169a3c:
    // 0x169a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169a40:
    // 0x169a40: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x169A40u;
    {
        const bool branch_taken_0x169a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A40u;
        // 0x169a44: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a40) {
            ctx->pc = 0x169AF4u;
            goto label_169af4;
        }
    }
    ctx->pc = 0x169A48u;
    // 0x169a48: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x169a48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x169a4c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A4Cu;
        // 0x169a50: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x169AF0u;
            goto label_169af0;
        }
    }
    ctx->pc = 0x169A54u;
    // 0x169a54: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x169a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a5c: 0x8c251ed8  lw          $a1, 0x1ED8($at)
    ctx->pc = 0x169a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281ED8u));
    // 0x169a60: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x169a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x169a64: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x169a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x169a68: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x169A68u;
    {
        const bool branch_taken_0x169a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a68) {
            ctx->pc = 0x169AECu;
            goto label_169aec;
        }
    }
    ctx->pc = 0x169A70u;
    // 0x169a70: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x169a74: 0x802027  not         $a0, $a0
    ctx->pc = 0x169a74u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x169a78: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x169a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x169a7c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x169a80: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x169A80u;
    {
        const bool branch_taken_0x169a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A80u;
        // 0x169a84: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a80) {
            ctx->pc = 0x169AECu;
            goto label_169aec;
        }
    }
    ctx->pc = 0x169A88u;
    // 0x169a88: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169a8c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169a8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x169a90: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x169A90u;
    {
        const bool branch_taken_0x169a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A90u;
        // 0x169a94: 0x1021c0  sll         $a0, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a90) {
            ctx->pc = 0x169AC0u;
            goto label_169ac0;
        }
    }
    ctx->pc = 0x169A98u;
label_169a98:
    // 0x169a98: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169a9c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x169aa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169aa4: 0xc08d61c  jal         func_235870
    ctx->pc = 0x169AA4u;
    SET_GPR_U32(ctx, 31, 0x169AACu);
    ctx->pc = 0x169AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AA4u;
    // 0x169aa8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x169AA4u, 0x169AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AACu;
label_169aac:
    // 0x169aac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169ab0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x169AB0u;
    {
        const bool branch_taken_0x169ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169ab0) {
            ctx->pc = 0x169A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169a98;
        }
    }
    ctx->pc = 0x169AB8u;
    // 0x169ab8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x169abc: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x169abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_169ac0:
    // 0x169ac0: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
    // 0x169ac4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x169ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x169ac8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169acc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x169ad0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x169ad4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169adc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x169ae0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169ae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x169ae8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169aec:
    // 0x169aec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_169af0:
    // 0x169af0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x169af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_169af4:
    // 0x169af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x169af8u;
}
