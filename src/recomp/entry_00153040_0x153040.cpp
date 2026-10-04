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

// Function: entry_00153040
// Address: 0x153040 - 0x1530d0
void entry_00153040_0x153040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153040_0x153040");
#endif

    switch (ctx->pc) {
        case 0x153098u: goto label_153098;
        default: break;
    }

    ctx->pc = 0x153040u;

    // 0x153040: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x153044: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x153048: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x153048u;
    {
        const bool branch_taken_0x153048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153048u;
        // 0x15304c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153048) {
            ctx->pc = 0x152FFCu;
            return;
        }
    }
    ctx->pc = 0x153050u;
    // 0x153050: 0x8483027c  lh          $v1, 0x27C($a0)
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x153054: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x153054u;
    {
        const bool branch_taken_0x153054 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x153054) {
            ctx->pc = 0x153084u;
            goto label_153084;
        }
    }
    ctx->pc = 0x15305Cu;
    // 0x15305c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x153060: 0xa483027c  sh          $v1, 0x27C($a0)
    ctx->pc = 0x153060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 636), (uint16_t)GPR_U32(ctx, 3));
    // 0x153064: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x153068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x153068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15306c: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15306Cu;
    {
        const bool branch_taken_0x15306c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x15306c) {
            ctx->pc = 0x153084u;
            goto label_153084;
        }
    }
    ctx->pc = 0x153074u;
    // 0x153074: 0x8c850198  lw          $a1, 0x198($a0)
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x153078: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15307c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15307cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153080: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
label_153084:
    // 0x153084: 0x3e00008  jr          $ra
    ctx->pc = 0x153084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15308Cu;
    // 0x15308c: 0x0  nop
    ctx->pc = 0x15308cu;
    // NOP
    // 0x153090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153098:
    // 0x153098: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x153098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15309c: 0xa4600200  sh          $zero, 0x200($v1)
    ctx->pc = 0x15309cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x1530a0: 0xa4600202  sh          $zero, 0x202($v1)
    ctx->pc = 0x1530a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x1530a4: 0x0  nop
    ctx->pc = 0x1530a4u;
    // NOP
    // 0x1530a8: 0x0  nop
    ctx->pc = 0x1530a8u;
    // NOP
    // 0x1530ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1530acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1530b0: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1530b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1530b4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1530B4u;
    {
        const bool branch_taken_0x1530b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1530B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B4u;
        // 0x1530b8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530b4) {
            ctx->pc = 0x153098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153098;
        }
    }
    ctx->pc = 0x1530BCu;
    // 0x1530bc: 0xa480027c  sh          $zero, 0x27C($a0)
    ctx->pc = 0x1530bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 636), (uint16_t)GPR_U32(ctx, 0));
    // 0x1530c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1530C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C0u;
        // 0x1530c4: 0xa480027e  sh          $zero, 0x27E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 638), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530C8u;
    // 0x1530c8: 0x0  nop
    ctx->pc = 0x1530c8u;
    // NOP
    // 0x1530cc: 0x0  nop
    ctx->pc = 0x1530ccu;
    // NOP
    ctx->pc = 0x1530d0u;
}
