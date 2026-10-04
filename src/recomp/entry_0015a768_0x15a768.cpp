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

// Function: entry_0015a768
// Address: 0x15a768 - 0x15a810
void entry_0015a768_0x15a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a768_0x15a768");
#endif

    switch (ctx->pc) {
        case 0x15a7d4u: goto label_15a7d4;
        default: break;
    }

    ctx->pc = 0x15a768u;

    // 0x15a768: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a76c: 0x80244af2  lb          $a0, 0x4AF2($at)
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x334AF2u));
    // 0x15a770: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x15a774: 0x8023c994  lb          $v1, -0x366C($at)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x29C994u));
    // 0x15a778: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15a778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15a77c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a780: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a784: 0xa0234af2  sb          $v1, 0x4AF2($at)
    ctx->pc = 0x15a784u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF2u, _value); } while (0);
    // 0x15a788: 0x3e00008  jr          $ra
    ctx->pc = 0x15A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A790u;
    // 0x15a790: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x15a794: 0x8c23e290  lw          $v1, -0x1D70($at)
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x29E290u));
    // 0x15a798: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A798u;
    {
        const bool branch_taken_0x15a798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A798u;
        // 0x15a79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a798) {
            ctx->pc = 0x15A7B4u;
            goto label_15a7b4;
        }
    }
    ctx->pc = 0x15A7A0u;
    // 0x15a7a0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x15a7a4: 0x8c23e294  lw          $v1, -0x1D6C($at)
    ctx->pc = 0x15a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x29E294u));
    // 0x15a7a8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A7A8u;
    {
        const bool branch_taken_0x15a7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15a7a8) {
            ctx->pc = 0x15A7B4u;
            goto label_15a7b4;
        }
    }
    ctx->pc = 0x15A7B0u;
    // 0x15a7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a7b4:
    // 0x15a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x15A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A7BCu;
    // 0x15a7bc: 0x0  nop
    ctx->pc = 0x15a7bcu;
    // NOP
    // 0x15a7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7cc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x15a7d0: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_15a7d4:
    // 0x15a7d4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15a7d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x15a7dc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x15a7e0: 0x902330f1  lbu         $v1, 0x30F1($at)
    ctx->pc = 0x15a7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12529)));
    // 0x15a7e4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A7E4u;
    {
        const bool branch_taken_0x15a7e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15a7e4) {
            ctx->pc = 0x15A7F4u;
            goto label_15a7f4;
        }
    }
    ctx->pc = 0x15A7ECu;
    // 0x15a7ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15A7ECu;
    {
        const bool branch_taken_0x15a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7ECu;
        // 0x15a7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7ec) {
            ctx->pc = 0x15A804u;
            goto label_15a804;
        }
    }
    ctx->pc = 0x15A7F4u;
label_15a7f4:
    // 0x15a7f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a7f8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x15a7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15a7fc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15A7FCu;
    {
        const bool branch_taken_0x15a7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7FCu;
        // 0x15a800: 0x24c601a8  addiu       $a2, $a2, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7fc) {
            ctx->pc = 0x15A7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a7d4;
        }
    }
    ctx->pc = 0x15A804u;
label_15a804:
    // 0x15a804: 0x0  nop
    ctx->pc = 0x15a804u;
    // NOP
    // 0x15a808: 0x3e00008  jr          $ra
    ctx->pc = 0x15A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A810u;
}
