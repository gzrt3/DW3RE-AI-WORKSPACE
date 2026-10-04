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

// Function: FUN_001d4890
// Address: 0x1d4890 - 0x1d49a4
void FUN_001d4890_0x1d4890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4890_0x1d4890");
#endif

    switch (ctx->pc) {
        case 0x1d4978u: goto label_1d4978;
        case 0x1d4980u: goto label_1d4980;
        default: break;
    }

    ctx->pc = 0x1d4890u;

    // 0x1d4890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4894: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1d4898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d489c: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1d48a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d48a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d48a4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1d48a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x1d48a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48A8u;
    {
        const bool branch_taken_0x1d48a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A8u;
        // 0x1d48ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a8) {
            ctx->pc = 0x1D48B8u;
            goto label_1d48b8;
        }
    }
    ctx->pc = 0x1D48B0u;
    // 0x1d48b0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1D48B0u;
    {
        const bool branch_taken_0x1d48b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48B0u;
        // 0x1d48b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48b0) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D48B8u;
label_1d48b8:
    // 0x1d48b8: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1d48b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1d48bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48BCu;
    {
        const bool branch_taken_0x1d48bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48BCu;
        // 0x1d48c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48bc) {
            ctx->pc = 0x1D48CCu;
            goto label_1d48cc;
        }
    }
    ctx->pc = 0x1D48C4u;
    // 0x1d48c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1D48C4u;
    {
        const bool branch_taken_0x1d48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d48c4) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D48CCu;
label_1d48cc:
    // 0x1d48cc: 0x8205021f  lb          $a1, 0x21F($s0)
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 543)));
    // 0x1d48d0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D48D0u;
    {
        const bool branch_taken_0x1d48d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d48d0) {
            ctx->pc = 0x1D48F0u;
            goto label_1d48f0;
        }
    }
    ctx->pc = 0x1D48D8u;
    // 0x1d48d8: 0xdc820270  ld          $v0, 0x270($a0)
    ctx->pc = 0x1d48d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1d48dc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1d48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1d48e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48E0u;
    {
        const bool branch_taken_0x1d48e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48E0u;
        // 0x1d48e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48e0) {
            ctx->pc = 0x1D48F0u;
            goto label_1d48f0;
        }
    }
    ctx->pc = 0x1D48E8u;
    // 0x1d48e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D48E8u;
    {
        const bool branch_taken_0x1d48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d48e8) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D48F0u;
label_1d48f0:
    // 0x1d48f0: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x1d48f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x1d48f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d48f8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D48F8u;
    {
        const bool branch_taken_0x1d48f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48F8u;
        // 0x1d48fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48f8) {
            ctx->pc = 0x1D491Cu;
            goto label_1d491c;
        }
    }
    ctx->pc = 0x1D4900u;
    // 0x1d4900: 0xdc820270  ld          $v0, 0x270($a0)
    ctx->pc = 0x1d4900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1d4904: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1d4904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1d4908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4908u;
    {
        const bool branch_taken_0x1d4908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4908u;
        // 0x1d490c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4908) {
            ctx->pc = 0x1D4918u;
            goto label_1d4918;
        }
    }
    ctx->pc = 0x1D4910u;
    // 0x1d4910: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D4910u;
    {
        const bool branch_taken_0x1d4910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4910) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D4918u;
label_1d4918:
    // 0x1d4918: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d491c:
    // 0x1d491c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D491Cu;
    {
        const bool branch_taken_0x1d491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D491Cu;
        // 0x1d4920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d491c) {
            ctx->pc = 0x1D4940u;
            goto label_1d4940;
        }
    }
    ctx->pc = 0x1D4924u;
    // 0x1d4924: 0xdc820270  ld          $v0, 0x270($a0)
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1d4928: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1d492c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D492Cu;
    {
        const bool branch_taken_0x1d492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D492Cu;
        // 0x1d4930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d492c) {
            ctx->pc = 0x1D493Cu;
            goto label_1d493c;
        }
    }
    ctx->pc = 0x1D4934u;
    // 0x1d4934: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D4934u;
    {
        const bool branch_taken_0x1d4934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4934) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D493Cu;
label_1d493c:
    // 0x1d493c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4940:
    // 0x1d4940: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4940u;
    {
        const bool branch_taken_0x1d4940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4940) {
            ctx->pc = 0x1D4970u;
            goto label_1d4970;
        }
    }
    ctx->pc = 0x1D4948u;
    // 0x1d4948: 0x90830242  lbu         $v1, 0x242($a0)
    ctx->pc = 0x1d4948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x1d494c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1d494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d4950: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4950u;
    {
        const bool branch_taken_0x1d4950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4950u;
        // 0x1d4954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4950) {
            ctx->pc = 0x1D4968u;
            goto label_1d4968;
        }
    }
    ctx->pc = 0x1D4958u;
    // 0x1d4958: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d495c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D495Cu;
    {
        const bool branch_taken_0x1d495c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d495c) {
            ctx->pc = 0x1D4970u;
            goto label_1d4970;
        }
    }
    ctx->pc = 0x1D4964u;
    // 0x1d4964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4968:
    // 0x1d4968: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D4968u;
    {
        const bool branch_taken_0x1d4968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4968) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D4970u;
label_1d4970:
    // 0x1d4970: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4970u, 0x1D4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0xc056fbc  jal         func_15BEF0
    ctx->pc = 0x1D4978u;
    SET_GPR_U32(ctx, 31, 0x1D4980u);
    ctx->pc = 0x1D497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4978u;
    // 0x1d497c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BEF0u, 0x1D4978u, 0x1D4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4980u;
label_1d4980:
    // 0x1d4980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d4980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d4984: 0x8202021e  lb          $v0, 0x21E($s0)
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x1d4988: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d498c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D498Cu;
    {
        const bool branch_taken_0x1d498c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d498c) {
            ctx->pc = 0x1D499Cu;
            goto label_1d499c;
        }
    }
    ctx->pc = 0x1D4994u;
    // 0x1d4994: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4994u;
    {
        const bool branch_taken_0x1d4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4994u;
        // 0x1d4998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4994) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D499Cu;
label_1d499c:
    // 0x1d499c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d499cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d49a0:
    // 0x1d49a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d49a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1d49a4u;
}
