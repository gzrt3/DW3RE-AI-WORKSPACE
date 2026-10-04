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

// Function: FUN_0024a9d0
// Address: 0x24a9d0 - 0x24aae0
void FUN_0024a9d0_0x24a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a9d0_0x24a9d0");
#endif

    switch (ctx->pc) {
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa20u: goto label_24aa20;
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aad8u: goto label_24aad8;
        default: break;
    }

    ctx->pc = 0x24a9d0u;

    // 0x24a9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a9d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24a9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24a9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a9e0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a9e4: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x24A9E4u;
    {
        const bool branch_taken_0x24a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a9e4) {
            ctx->pc = 0x24AADCu;
            goto label_24aadc;
        }
    }
    ctx->pc = 0x24A9ECu;
    // 0x24a9ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24a9f0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24A9F0u;
    {
        const bool branch_taken_0x24a9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9F0u;
        // 0x24a9f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9f0) {
            ctx->pc = 0x24AA90u;
            goto label_24aa90;
        }
    }
    ctx->pc = 0x24A9F8u;
    // 0x24a9f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24a9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24A9FCu;
    {
        const bool branch_taken_0x24a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9FCu;
        // 0x24aa00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9fc) {
            ctx->pc = 0x24AA68u;
            goto label_24aa68;
        }
    }
    ctx->pc = 0x24AA04u;
label_24aa04:
    // 0x24aa04: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24aa08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24aa10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AA10u;
    {
        const bool branch_taken_0x24aa10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa10) {
            ctx->pc = 0x24AA30u;
            goto label_24aa30;
        }
    }
    ctx->pc = 0x24AA18u;
    // 0x24aa18: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AA18u;
    SET_GPR_U32(ctx, 31, 0x24AA20u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AA18u, 0x24AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA20u;
label_24aa20:
    // 0x24aa20: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24aa28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24aa30:
    // 0x24aa30: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24aa38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa3c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x24aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24aa40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AA40u;
    {
        const bool branch_taken_0x24aa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa40) {
            ctx->pc = 0x24AA60u;
            goto label_24aa60;
        }
    }
    ctx->pc = 0x24AA48u;
    // 0x24aa48: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AA48u;
    SET_GPR_U32(ctx, 31, 0x24AA50u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AA48u, 0x24AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA50u;
label_24aa50:
    // 0x24aa50: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa54: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24aa58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa5c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_24aa60:
    // 0x24aa60: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x24aa60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x24aa64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24aa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24aa68:
    // 0x24aa68: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24aa70: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x24aa70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24aa74: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x24AA74u;
    {
        const bool branch_taken_0x24aa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa74) {
            ctx->pc = 0x24AA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24aa04;
        }
    }
    ctx->pc = 0x24AA7Cu;
    // 0x24aa7c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AA7Cu;
    SET_GPR_U32(ctx, 31, 0x24AA84u);
    ctx->pc = 0x24AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA7Cu;
    // 0x24aa80: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AA7Cu, 0x24AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA84u;
label_24aa84:
    // 0x24aa84: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x24aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x24aa8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24aa8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aa90:
    // 0x24aa90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24aa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aa94:
    // 0x24aa94: 0x0  nop
    ctx->pc = 0x24aa94u;
    // NOP
    // 0x24aa98: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24aaa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24aaa4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AAA4u;
    {
        const bool branch_taken_0x24aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aaa4) {
            ctx->pc = 0x24AAC0u;
            goto label_24aac0;
        }
    }
    ctx->pc = 0x24AAACu;
    // 0x24aaac: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AAACu;
    SET_GPR_U32(ctx, 31, 0x24AAB4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AAACu, 0x24AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAB4u;
label_24aab4:
    // 0x24aab4: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aab8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24aabc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24aac0:
    // 0x24aac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24aac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24aac4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24aac8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24AAC8u;
    {
        const bool branch_taken_0x24aac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAC8u;
        // 0x24aacc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aac8) {
            ctx->pc = 0x24AA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24aa94;
        }
    }
    ctx->pc = 0x24AAD0u;
    // 0x24aad0: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AAD0u;
    SET_GPR_U32(ctx, 31, 0x24AAD8u);
    ctx->pc = 0x24AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAD0u;
    // 0x24aad4: 0x8f8492fc  lw          $a0, -0x6D04($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AAD0u, 0x24AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAD8u;
label_24aad8:
    // 0x24aad8: 0xaf8092fc  sw          $zero, -0x6D04($gp)
    ctx->pc = 0x24aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 0));
label_24aadc:
    // 0x24aadc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24aadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x24aae0u;
}
