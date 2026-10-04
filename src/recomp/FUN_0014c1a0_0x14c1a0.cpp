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

// Function: FUN_0014c1a0
// Address: 0x14c1a0 - 0x14c278
void FUN_0014c1a0_0x14c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c1a0_0x14c1a0");
#endif

    switch (ctx->pc) {
        case 0x14c220u: goto label_14c220;
        default: break;
    }

    ctx->pc = 0x14c1a0u;

    // 0x14c1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c1a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c1b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c1b4: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x14c1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x14c1b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C1B8u;
    {
        const bool branch_taken_0x14c1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B8u;
        // 0x14c1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1b8) {
            ctx->pc = 0x14C1CCu;
            goto label_14c1cc;
        }
    }
    ctx->pc = 0x14C1C0u;
    // 0x14c1c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c1c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C1C4u;
    {
        const bool branch_taken_0x14c1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c1c4) {
            ctx->pc = 0x14C1D4u;
            goto label_14c1d4;
        }
    }
    ctx->pc = 0x14C1CCu;
label_14c1cc:
    // 0x14c1cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14C1CCu;
    {
        const bool branch_taken_0x14c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1CCu;
        // 0x14c1d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1cc) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C1D4u;
label_14c1d4:
    // 0x14c1d4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C1D4u;
    {
        const bool branch_taken_0x14c1d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D4u;
        // 0x14c1d8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1d4) {
            ctx->pc = 0x14C230u;
            goto label_14c230;
        }
    }
    ctx->pc = 0x14C1DCu;
    // 0x14c1dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x14c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c1e0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x14C1E0u;
    {
        const bool branch_taken_0x14c1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1E0u;
        // 0x14c1e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1e0) {
            ctx->pc = 0x14C274u;
            goto label_14c274;
        }
    }
    ctx->pc = 0x14C1E8u;
    // 0x14c1e8: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x14c1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x14c1ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C1F0u;
    {
        const bool branch_taken_0x14c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1f0) {
            ctx->pc = 0x14C200u;
            goto label_14c200;
        }
    }
    ctx->pc = 0x14C1F8u;
    // 0x14c1f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14C1F8u;
    {
        const bool branch_taken_0x14c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1F8u;
        // 0x14c1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1f8) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C200u;
label_14c200:
    // 0x14c200: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x14c200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x14c204: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x14c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c208: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x14c208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x14c20c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14c210: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14c214: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c218: 0xc04494c  jal         func_112530
    ctx->pc = 0x14C218u;
    SET_GPR_U32(ctx, 31, 0x14C220u);
    ctx->pc = 0x14C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C218u;
    // 0x14c21c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x14C218u, 0x14C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C220u;
label_14c220:
    // 0x14c220: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C220u;
    {
        const bool branch_taken_0x14c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c220) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C228u;
    // 0x14c228: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14C228u;
    {
        const bool branch_taken_0x14c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C228u;
        // 0x14c22c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c228) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C230u;
label_14c230:
    // 0x14c230: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C230u;
    {
        const bool branch_taken_0x14c230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c230) {
            ctx->pc = 0x14C240u;
            goto label_14c240;
        }
    }
    ctx->pc = 0x14C238u;
    // 0x14c238: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14C238u;
    {
        const bool branch_taken_0x14c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C238u;
        // 0x14c23c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c238) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C240u;
label_14c240:
    // 0x14c240: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x14c240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x14c244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C248u;
    {
        const bool branch_taken_0x14c248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C248u;
        // 0x14c24c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c248) {
            ctx->pc = 0x14C264u;
            goto label_14c264;
        }
    }
    ctx->pc = 0x14C250u;
    // 0x14c250: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x14c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14c254: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C254u;
    {
        const bool branch_taken_0x14c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c254) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C25Cu;
    // 0x14c25c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14C25Cu;
    {
        const bool branch_taken_0x14c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C25Cu;
        // 0x14c260: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c25c) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C264u;
label_14c264:
    // 0x14c264: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C264u;
    {
        const bool branch_taken_0x14c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c264) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C26Cu;
    // 0x14c26c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c270:
    // 0x14c270: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14c270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c274:
    // 0x14c274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14c278u;
}
