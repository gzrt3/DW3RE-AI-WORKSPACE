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

// Function: FUN_001acac0
// Address: 0x1acac0 - 0x1acbc8
void FUN_001acac0_0x1acac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acac0_0x1acac0");
#endif

    switch (ctx->pc) {
        case 0x1acae8u: goto label_1acae8;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acbbcu: goto label_1acbbc;
        default: break;
    }

    ctx->pc = 0x1acac0u;

    // 0x1acac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1acac4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1acac8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1acac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1acacc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1acaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1acad0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1acad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1acad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acad8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acadc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACADCu;
    {
        const bool branch_taken_0x1acadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACADCu;
        // 0x1acae0: 0x2451a740  addiu       $s1, $v0, -0x58C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acadc) {
            ctx->pc = 0x1ACB0Cu;
            goto label_1acb0c;
        }
    }
    ctx->pc = 0x1ACAE4u;
    // 0x1acae4: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1acae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_1acae8:
    // 0x1acae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1acaec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1acaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1acaf0: 0x0  nop
    ctx->pc = 0x1acaf0u;
    // NOP
    // 0x1acaf4: 0x0  nop
    ctx->pc = 0x1acaf4u;
    // NOP
    // 0x1acaf8: 0x0  nop
    ctx->pc = 0x1acaf8u;
    // NOP
    // 0x1acafc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACAFCu;
    {
        const bool branch_taken_0x1acafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acafc) {
            ctx->pc = 0x1ACAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acae8;
        }
    }
    ctx->pc = 0x1ACB04u;
    // 0x1acb04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACB04u;
    {
        const bool branch_taken_0x1acb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB04u;
        // 0x1acb08: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb04) {
            ctx->pc = 0x1ACB14u;
            goto label_1acb14;
        }
    }
    ctx->pc = 0x1ACB0Cu;
label_1acb0c:
    // 0x1acb0c: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1acb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x1acb10: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1acb14:
    // 0x1acb14: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x1acb18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACB18u;
    {
        const bool branch_taken_0x1acb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb18) {
            ctx->pc = 0x1ACB34u;
            goto label_1acb34;
        }
    }
    ctx->pc = 0x1ACB20u;
    // 0x1acb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb24: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1ACB24u;
    SET_GPR_U32(ctx, 31, 0x1ACB2Cu);
    ctx->pc = 0x1ACB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB24u;
    // 0x1acb28: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1ACB24u, 0x1ACB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB2Cu;
label_1acb2c:
    // 0x1acb2c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1ACB2Cu;
    {
        const bool branch_taken_0x1acb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb2c) {
            ctx->pc = 0x1ACBBCu;
            goto label_1acbbc;
        }
    }
    ctx->pc = 0x1ACB34u;
label_1acb34:
    // 0x1acb34: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1ACB34u;
    SET_GPR_U32(ctx, 31, 0x1ACB3Cu);
    ctx->pc = 0x1ACB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB34u;
    // 0x1acb38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1ACB34u, 0x1ACB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB3Cu;
label_1acb3c:
    // 0x1acb3c: 0xc069c82  jal         func_1A7208
    ctx->pc = 0x1ACB3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB44u);
    ctx->pc = 0x1A7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7208u, 0x1ACB3Cu, 0x1ACB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB44u;
label_1acb44:
    // 0x1acb44: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acb48: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACB4Cu;
    {
        const bool branch_taken_0x1acb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb4c) {
            ctx->pc = 0x1ACB7Cu;
            goto label_1acb7c;
        }
    }
    ctx->pc = 0x1ACB54u;
    // 0x1acb54: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acb58:
    // 0x1acb58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1acb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1acb60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1acb64: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1acb64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acb68: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acb6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACB6Cu;
    {
        const bool branch_taken_0x1acb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acb6c) {
            ctx->pc = 0x1ACB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb58;
        }
    }
    ctx->pc = 0x1ACB74u;
    // 0x1acb74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACB74u;
    {
        const bool branch_taken_0x1acb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB74u;
        // 0x1acb78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb74) {
            ctx->pc = 0x1ACB84u;
            goto label_1acb84;
        }
    }
    ctx->pc = 0x1ACB7Cu;
label_1acb7c:
    // 0x1acb7c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acb80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1acb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acb84:
    // 0x1acb84: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACB84u;
    {
        const bool branch_taken_0x1acb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb84) {
            ctx->pc = 0x1ACB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACB84u;
            // 0x1acb88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBB0u;
            goto label_1acbb0;
        }
    }
    ctx->pc = 0x1ACB8Cu;
    // 0x1acb8c: 0x0  nop
    ctx->pc = 0x1acb8cu;
    // NOP
label_1acb90:
    // 0x1acb90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acb94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1acb94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1acb98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1acb9c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACBA4u;
    {
        const bool branch_taken_0x1acba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acba4) {
            ctx->pc = 0x1ACB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb90;
        }
    }
    ctx->pc = 0x1ACBACu;
    // 0x1acbac: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1acbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1acbb0:
    // 0x1acbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1acbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbb4: 0xc06b248  jal         func_1AC920
    ctx->pc = 0x1ACBB4u;
    SET_GPR_U32(ctx, 31, 0x1ACBBCu);
    ctx->pc = 0x1ACBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBB4u;
    // 0x1acbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC920u, 0x1ACBB4u, 0x1ACBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBBCu;
label_1acbbc:
    // 0x1acbbc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1acbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1acbc0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1acbc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1acbc8u;
}
