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

// Function: FUN_001ae9a0
// Address: 0x1ae9a0 - 0x1aea58
void FUN_001ae9a0_0x1ae9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae9a0_0x1ae9a0");
#endif

    switch (ctx->pc) {
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea3cu: goto label_1aea3c;
        default: break;
    }

    ctx->pc = 0x1ae9a0u;

    // 0x1ae9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae9a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ae9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ae9a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ae9ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae9b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ae9bc: 0xc06b8a8  jal         func_1AE2A0
    ctx->pc = 0x1AE9BCu;
    SET_GPR_U32(ctx, 31, 0x1AE9C4u);
    ctx->pc = 0x1AE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9BCu;
    // 0x1ae9c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE2A0u, 0x1AE9BCu, 0x1AE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9C4u;
label_1ae9c4:
    // 0x1ae9c4: 0x90430072  lbu         $v1, 0x72($v0)
    ctx->pc = 0x1ae9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x1ae9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae9cc: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE9CCu;
    {
        const bool branch_taken_0x1ae9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9CCu;
        // 0x1ae9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9cc) {
            ctx->pc = 0x1AEA48u;
            goto label_1aea48;
        }
    }
    ctx->pc = 0x1AE9D4u;
    // 0x1ae9d4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ae9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae9d8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1ae9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ae9dc: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae9e0: 0x72242018  mult1       $a0, $s1, $a0
    ctx->pc = 0x1ae9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae9e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9ec: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
    // 0x1ae9f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae9f8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1ae9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ae9fc: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x1ae9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1aea00:
    // 0x1aea00: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1aea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1aea04: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1aea08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aea08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aea0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aea10: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1aea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1aea14: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aea14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aea18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AEA18u;
    {
        const bool branch_taken_0x1aea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea18) {
            ctx->pc = 0x1AEA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea00;
        }
    }
    ctx->pc = 0x1AEA20u;
    // 0x1aea20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aea24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aea28: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1aea28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1aea2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea30: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1aea34: 0xc06b722  jal         func_1ADC88
    ctx->pc = 0x1AEA34u;
    SET_GPR_U32(ctx, 31, 0x1AEA3Cu);
    ctx->pc = 0x1AEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA34u;
    // 0x1aea38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC88u, 0x1AEA34u, 0x1AEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA3Cu;
label_1aea3c:
    // 0x1aea3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1aea40: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1aea40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1aea44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aea44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aea48:
    // 0x1aea48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aea48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aea4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aea4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aea50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aea50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aea54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aea54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1aea58u;
}
