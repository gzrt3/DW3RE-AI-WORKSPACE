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

// Function: FUN_00167a10
// Address: 0x167a10 - 0x167acc
void FUN_00167a10_0x167a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167a10_0x167a10");
#endif

    switch (ctx->pc) {
        case 0x167a2cu: goto label_167a2c;
        case 0x167a7cu: goto label_167a7c;
        case 0x167aa4u: goto label_167aa4;
        case 0x167ac0u: goto label_167ac0;
        case 0x167ac8u: goto label_167ac8;
        default: break;
    }

    ctx->pc = 0x167a10u;

    // 0x167a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167a20: 0x8f9086e0  lw          $s0, -0x7920($gp)
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x167a24: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x167A24u;
    {
        const bool branch_taken_0x167a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A24u;
        // 0x167a28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a24) {
            ctx->pc = 0x167AB4u;
            goto label_167ab4;
        }
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x167a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x167a30: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x167a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x167a34: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x167A34u;
    {
        const bool branch_taken_0x167a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167a34) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A3Cu;
    // 0x167a3c: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x167a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x167a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a44: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x167A44u;
    {
        const bool branch_taken_0x167a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x167a44) {
            ctx->pc = 0x167A84u;
            goto label_167a84;
        }
    }
    ctx->pc = 0x167A4Cu;
    // 0x167a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167A4Cu;
    {
        const bool branch_taken_0x167a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a4c) {
            ctx->pc = 0x167A5Cu;
            goto label_167a5c;
        }
    }
    ctx->pc = 0x167A54u;
    // 0x167a54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x167A54u;
    {
        const bool branch_taken_0x167a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a54) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A5Cu;
label_167a5c:
    // 0x167a5c: 0x0  nop
    ctx->pc = 0x167a5cu;
    // NOP
    // 0x167a60: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x167a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x167a64: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a70: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x167a74: 0xc059b50  jal         func_166D40
    ctx->pc = 0x167A74u;
    SET_GPR_U32(ctx, 31, 0x167A7Cu);
    ctx->pc = 0x167A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A74u;
    // 0x167a78: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x167A74u, 0x167A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A7Cu;
label_167a7c:
    // 0x167a7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167A7Cu;
    {
        const bool branch_taken_0x167a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a7c) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A84u;
label_167a84:
    // 0x167a84: 0x0  nop
    ctx->pc = 0x167a84u;
    // NOP
    // 0x167a88: 0x3c02bc0e  lui         $v0, 0xBC0E
    ctx->pc = 0x167a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48142 << 16));
    // 0x167a8c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a98: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x167a9c: 0xc059b50  jal         func_166D40
    ctx->pc = 0x167A9Cu;
    SET_GPR_U32(ctx, 31, 0x167AA4u);
    ctx->pc = 0x167AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A9Cu;
    // 0x167aa0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x167A9Cu, 0x167AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AA4u;
label_167aa4:
    // 0x167aa4: 0x0  nop
    ctx->pc = 0x167aa4u;
    // NOP
    // 0x167aa8: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x167aac: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x167AACu;
    {
        const bool branch_taken_0x167aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167aac) {
            ctx->pc = 0x167A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167a2c;
        }
    }
    ctx->pc = 0x167AB4u;
label_167ab4:
    // 0x167ab4: 0x0  nop
    ctx->pc = 0x167ab4u;
    // NOP
    // 0x167ab8: 0xc0592ac  jal         func_164AB0
    ctx->pc = 0x167AB8u;
    SET_GPR_U32(ctx, 31, 0x167AC0u);
    ctx->pc = 0x167ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AB8u;
    // 0x167abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AB0u, 0x167AB8u, 0x167AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AC0u;
label_167ac0:
    // 0x167ac0: 0xc04f564  jal         func_13D590
    ctx->pc = 0x167AC0u;
    SET_GPR_U32(ctx, 31, 0x167AC8u);
    ctx->pc = 0x167AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AC0u;
    // 0x167ac4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D590u, 0x167AC0u, 0x167AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AC8u;
label_167ac8:
    // 0x167ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x167accu;
}
