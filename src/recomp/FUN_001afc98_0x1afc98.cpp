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

// Function: FUN_001afc98
// Address: 0x1afc98 - 0x1afe00
void FUN_001afc98_0x1afc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afc98_0x1afc98");
#endif

    switch (ctx->pc) {
        case 0x1afcb8u: goto label_1afcb8;
        case 0x1afcc4u: goto label_1afcc4;
        case 0x1afcf0u: goto label_1afcf0;
        case 0x1afd14u: goto label_1afd14;
        case 0x1afd1cu: goto label_1afd1c;
        case 0x1afd30u: goto label_1afd30;
        case 0x1afd40u: goto label_1afd40;
        case 0x1afd58u: goto label_1afd58;
        case 0x1afd60u: goto label_1afd60;
        case 0x1afd80u: goto label_1afd80;
        case 0x1afd94u: goto label_1afd94;
        case 0x1afdb8u: goto label_1afdb8;
        case 0x1afdc0u: goto label_1afdc0;
        default: break;
    }

    ctx->pc = 0x1afc98u;

    // 0x1afc98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1afc9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1afca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afcac: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1afcacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1afcb0: 0xc06bcfa  jal         func_1AF3E8
    ctx->pc = 0x1AFCB0u;
    SET_GPR_U32(ctx, 31, 0x1AFCB8u);
    ctx->pc = 0x1AFCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCB0u;
    // 0x1afcb4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3E8u, 0x1AFCB0u, 0x1AFCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCB8u;
label_1afcb8:
    // 0x1afcb8: 0x8e0472ac  lw          $a0, 0x72AC($s0)
    ctx->pc = 0x1afcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
    // 0x1afcbc: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1AFCBCu;
    SET_GPR_U32(ctx, 31, 0x1AFCC4u);
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1AFCBCu, 0x1AFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCC4u;
label_1afcc4:
    // 0x1afcc4: 0x8e0372ac  lw          $v1, 0x72AC($s0)
    ctx->pc = 0x1afcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
    // 0x1afcc8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AFCC8u;
    {
        const bool branch_taken_0x1afcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC8u;
        // 0x1afccc: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcc8) {
            ctx->pc = 0x1AFCF8u;
            goto label_1afcf8;
        }
    }
    ctx->pc = 0x1AFCD0u;
    // 0x1afcd0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
    // 0x1afcd4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AFCD4u;
    {
        const bool branch_taken_0x1afcd4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCD4u;
        // 0x1afcd8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcd4) {
            ctx->pc = 0x1AFD30u;
            goto label_1afd30;
        }
    }
    ctx->pc = 0x1AFCDCu;
    // 0x1afcdc: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1afce0: 0x8c467298  lw          $a2, 0x7298($v0)
    ctx->pc = 0x1afce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29336)));
    // 0x1afce4: 0x2484aa48  addiu       $a0, $a0, -0x55B8
    ctx->pc = 0x1afce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945352));
    // 0x1afce8: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFCE8u;
    SET_GPR_U32(ctx, 31, 0x1AFCF0u);
    ctx->pc = 0x1AFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCE8u;
    // 0x1afcec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFCE8u, 0x1AFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCF0u;
label_1afcf0:
    // 0x1afcf0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1AFCF0u;
    {
        const bool branch_taken_0x1afcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCF0u;
        // 0x1afcf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcf0) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFCF8u;
label_1afcf8:
    // 0x1afcf8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1afcfc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1afcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1afd00: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x375F50u));
    // 0x1afd04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1afd08: 0xac717298  sw          $s1, 0x7298($v1)
    ctx->pc = 0x1afd08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x287298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x287298u, _value); } while (0);
    // 0x1afd0c: 0xc0691c8  jal         func_1A4720
    ctx->pc = 0x1AFD0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD14u);
    ctx->pc = 0x1AFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD0Cu;
    // 0x1afd10: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4720u, 0x1AFD0Cu, 0x1AFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD14u;
label_1afd14:
    // 0x1afd14: 0xc06bf0a  jal         func_1AFC28
    ctx->pc = 0x1AFD14u;
    SET_GPR_U32(ctx, 31, 0x1AFD1Cu);
    ctx->pc = 0x1AFD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD14u;
    // 0x1afd18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC28u, 0x1AFD14u, 0x1AFD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD1Cu;
label_1afd1c:
    // 0x1afd1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFD1Cu;
    {
        const bool branch_taken_0x1afd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD1Cu;
        // 0x1afd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd1c) {
            ctx->pc = 0x1AFD38u;
            goto label_1afd38;
        }
    }
    ctx->pc = 0x1AFD24u;
    // 0x1afd24: 0x8e0472ac  lw          $a0, 0x72AC($s0)
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
    // 0x1afd28: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AFD28u;
    SET_GPR_U32(ctx, 31, 0x1AFD30u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AFD28u, 0x1AFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD30u;
label_1afd30:
    // 0x1afd30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AFD30u;
    {
        const bool branch_taken_0x1afd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD30u;
        // 0x1afd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd30) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFD38u;
label_1afd38:
    // 0x1afd38: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1AFD38u;
    SET_GPR_U32(ctx, 31, 0x1AFD40u);
    ctx->pc = 0x1AFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD38u;
    // 0x1afd3c: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1AFD38u, 0x1AFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD40u;
label_1afd40:
    // 0x1afd40: 0x8e4272c8  lw          $v0, 0x72C8($s2)
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29384)));
    // 0x1afd44: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AFD44u;
    {
        const bool branch_taken_0x1afd44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD44u;
        // 0x1afd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd44) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFD4Cu;
    // 0x1afd4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AFD4Cu;
    {
        const bool branch_taken_0x1afd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd4c) {
            ctx->pc = 0x1AFD7Cu;
            goto label_1afd7c;
        }
    }
    ctx->pc = 0x1AFD54u;
    // 0x1afd54: 0x0  nop
    ctx->pc = 0x1afd54u;
    // NOP
label_1afd58:
    // 0x1afd58: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1afd5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afd60:
    // 0x1afd60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afd64: 0x0  nop
    ctx->pc = 0x1afd64u;
    // NOP
    // 0x1afd68: 0x0  nop
    ctx->pc = 0x1afd68u;
    // NOP
    // 0x1afd6c: 0x0  nop
    ctx->pc = 0x1afd6cu;
    // NOP
    // 0x1afd70: 0x0  nop
    ctx->pc = 0x1afd70u;
    // NOP
    // 0x1afd74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFD74u;
    {
        const bool branch_taken_0x1afd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afd74) {
            ctx->pc = 0x1AFD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd60;
        }
    }
    ctx->pc = 0x1AFD7Cu;
label_1afd7c:
    // 0x1afd7c: 0x26308cc8  addiu       $s0, $s1, -0x7338
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
label_1afd80:
    // 0x1afd80: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1afd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd88: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1afd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x1afd8c: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD94u);
    ctx->pc = 0x1AFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD8Cu;
    // 0x1afd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AFD8Cu, 0x1AFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD94u;
label_1afd94:
    // 0x1afd94: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFD94u;
    {
        const bool branch_taken_0x1afd94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afd94) {
            ctx->pc = 0x1AFD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFD94u;
            // 0x1afd98: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFDE4u;
            goto label_1afde4;
        }
    }
    ctx->pc = 0x1AFD9Cu;
    // 0x1afd9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afda0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287290u));
    // 0x1afda4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1afdb0: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFDB0u;
    SET_GPR_U32(ctx, 31, 0x1AFDB8u);
    ctx->pc = 0x1AFDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDB0u;
    // 0x1afdb4: 0x2484aa70  addiu       $a0, $a0, -0x5590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFDB0u, 0x1AFDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDB8u;
label_1afdb8:
    // 0x1afdb8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afdbc:
    // 0x1afdbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afdc0:
    // 0x1afdc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afdc4: 0x0  nop
    ctx->pc = 0x1afdc4u;
    // NOP
    // 0x1afdc8: 0x0  nop
    ctx->pc = 0x1afdc8u;
    // NOP
    // 0x1afdcc: 0x0  nop
    ctx->pc = 0x1afdccu;
    // NOP
    // 0x1afdd0: 0x0  nop
    ctx->pc = 0x1afdd0u;
    // NOP
    // 0x1afdd4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFDD4u;
    {
        const bool branch_taken_0x1afdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afdd4) {
            ctx->pc = 0x1AFDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afdc0;
        }
    }
    ctx->pc = 0x1AFDDCu;
    // 0x1afddc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AFDDCu;
    {
        const bool branch_taken_0x1afddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDDCu;
        // 0x1afde0: 0x26308cc8  addiu       $s0, $s1, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afddc) {
            ctx->pc = 0x1AFD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd80;
        }
    }
    ctx->pc = 0x1AFDE4u;
label_1afde4:
    // 0x1afde4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AFDE4u;
    {
        const bool branch_taken_0x1afde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDE4u;
        // 0x1afde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afde4) {
            ctx->pc = 0x1AFD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd58;
        }
    }
    ctx->pc = 0x1AFDECu;
    // 0x1afdec: 0xae4072c8  sw          $zero, 0x72C8($s2)
    ctx->pc = 0x1afdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29384), GPR_U32(ctx, 0));
label_1afdf0:
    // 0x1afdf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1afdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afdf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afdf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afdf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1afe00u;
}
