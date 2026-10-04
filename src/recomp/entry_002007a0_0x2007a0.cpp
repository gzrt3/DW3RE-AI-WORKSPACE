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

// Function: entry_002007a0
// Address: 0x2007a0 - 0x2007f0
void entry_002007a0_0x2007a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002007a0_0x2007a0");
#endif

    ctx->pc = 0x2007a0u;

    // 0x2007a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2007a4: 0x28650005  slti        $a1, $v1, 0x5
    ctx->pc = 0x2007a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2007a8: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2007A8u;
    {
        const bool branch_taken_0x2007a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a8) {
            ctx->pc = 0x200768u;
            return;
        }
    }
    ctx->pc = 0x2007B0u;
    // 0x2007b0: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x2007b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x2007b4: 0xaf8390c8  sw          $v1, -0x6F38($gp)
    ctx->pc = 0x2007b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 3));
    // 0x2007b8: 0x92030069  lbu         $v1, 0x69($s0)
    ctx->pc = 0x2007b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x2007bc: 0xaf8390c4  sw          $v1, -0x6F3C($gp)
    ctx->pc = 0x2007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 3));
    // 0x2007c0: 0x9203006b  lbu         $v1, 0x6B($s0)
    ctx->pc = 0x2007c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x2007c4: 0xaf8390c0  sw          $v1, -0x6F40($gp)
    ctx->pc = 0x2007c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938816), GPR_U32(ctx, 3));
    // 0x2007c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2007c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2007cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2007ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2007d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2007D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007D8u;
    // 0x2007d8: 0x0  nop
    ctx->pc = 0x2007d8u;
    // NOP
    // 0x2007dc: 0x0  nop
    ctx->pc = 0x2007dcu;
    // NOP
    // 0x2007e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2007E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E0u;
        // 0x2007e4: 0xaf8490bc  sw          $a0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007E8u;
    // 0x2007e8: 0x0  nop
    ctx->pc = 0x2007e8u;
    // NOP
    // 0x2007ec: 0x0  nop
    ctx->pc = 0x2007ecu;
    // NOP
    ctx->pc = 0x2007f0u;
}
